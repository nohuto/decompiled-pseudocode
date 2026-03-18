/*
 * XREFs of MiChargePartitionResidentAvailable @ 0x14022BAA0
 * Callers:
 *     MmStoreChargeResidentAvailableForRead @ 0x14022B760 (MmStoreChargeResidentAvailableForRead.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14022B7C4 (SmAcquireReleaseResAvailForRead.c)
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeForLockedPage @ 0x14022E1E0 (MiChargeForLockedPage.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiChargeForWriteInProgressPage @ 0x14022E660 (MiChargeForWriteInProgressPage.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiLockPageTablePage @ 0x1402AC2E0 (MiLockPageTablePage.c)
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiObtainPoolCharges @ 0x1403790F8 (MiObtainPoolCharges.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
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
  __int64 *v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int32 v18; // eax

  if ( a2 + a3 < a2 && a3 != 0xFFFFFFFFLL )
  {
    ++dword_140E2FF70;
    return 0LL;
  }
  v5 = *(_QWORD *)(a1 + 18752);
  v6 = 0;
  v7 = 0LL;
  if ( v5 < 1024 && (ULONG *)a1 == &MiSystemPartition )
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v15 = KiProcessorBlock;
      v16 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *(_DWORD *)(*v15 + 35740) != -1 )
        {
          v18 = _InterlockedExchange((volatile __int32 *)(*v15 + 35740), -1);
          if ( v18 != -1 )
            v7 += v18;
        }
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    if ( v7 < a2 )
    {
      a2 -= v7;
      goto LABEL_3;
    }
    v17 = v7 - a2;
    if ( v17 )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), v17);
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
              if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 18752), v8 - (128 - v6), v8) )
                MiReturnResident(a1);
            }
          }
        }
        return (unsigned int)(v11 + 2);
      }
    }
    if ( a3 != 0xFFFFFFFFLL )
    {
LABEL_31:
      ++dword_140E2FF74;
      if ( v7 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), v7);
      return 0LL;
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), -(__int64)a2);
  }
  return 3LL;
}
