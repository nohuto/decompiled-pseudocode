/*
 * XREFs of MiChargePartitionResidentAvailable @ 0x14033ECD0
 * Callers:
 *     MiLockPageTablePage @ 0x140205E40 (MiLockPageTablePage.c)
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiChargeForWriteInProgressPage @ 0x14033A660 (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x14033AE90 (MiChargeForLockedPage.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14033E98C (MmStoreChargeResidentAvailableForRead.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14033E9F0 (SmAcquireReleaseResAvailForRead.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiObtainPoolCharges @ 0x14044DFCC (MiObtainPoolCharges.c)
 * Callees:
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 */

__int64 __fastcall MiChargePartitionResidentAvailable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed __int64 v5; // rdi
  volatile unsigned int v6; // r10d
  unsigned __int64 v7; // r8
  signed __int64 v8; // rbx
  bool v9; // zf
  signed __int64 v10; // rax
  BOOL v11; // r11d
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int CachedResidentAvailable; // ecx
  unsigned __int64 v14; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int32 v19; // eax

  if ( a2 + a3 < a2 && a3 != 0xFFFFFFFFLL )
  {
    ++dword_140E302F8;
    return 0LL;
  }
  v5 = *(_QWORD *)(a1 + 18752);
  v6 = 0;
  v7 = 0LL;
  if ( v5 < 1024 && (ULONG *)a1 == &MiSystemPartition )
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v16 = KiProcessorBlock;
      v17 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *(_DWORD *)(*v16 + 35740) != -1 )
        {
          v19 = _InterlockedExchange((volatile __int32 *)(*v16 + 35740), -1);
          if ( v19 != -1 )
            v7 += v19;
        }
        ++v16;
        --v17;
      }
      while ( v17 );
    }
    if ( v7 < a2 )
    {
      a2 -= v7;
      goto LABEL_3;
    }
    v18 = v7 - a2;
    if ( v18 )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), v18);
  }
  else
  {
LABEL_3:
    while ( v5 > 0 )
    {
      if ( a2 + a3 > v5 && a3 != 0xFFFFFFFFLL )
        goto LABEL_31;
      v8 = v5 - a2;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 18752), v5 - a2, v5);
      v9 = v5 == v10;
      v5 = v10;
      if ( v9 )
      {
        v11 = v8 < 1024;
        if ( (ULONG *)a1 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          if ( CachedResidentAvailable == -1 )
          {
            if ( v8 >= 2048 )
            {
              _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable, 0, -1);
              goto LABEL_10;
            }
          }
          else if ( CachedResidentAvailable < 0x40 )
          {
            v6 = CurrentPrcb->CachedResidentAvailable;
            if ( v8 > 1024 )
            {
LABEL_10:
              v14 = 128 - v6;
              if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 18752), v8 - v14, v8) )
                MiReturnResident(a1, v14);
            }
          }
        }
        return (unsigned int)(v11 + 2);
      }
    }
    if ( a3 != 0xFFFFFFFFLL )
    {
LABEL_31:
      ++dword_140E302FC;
      if ( v7 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), v7);
      return 0LL;
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), -(__int64)a2);
  }
  return 3LL;
}
