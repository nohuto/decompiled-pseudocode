/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0
 * Callers:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiDeleteCloneDescriptor @ 0x1404F6498 (MiDeleteCloneDescriptor.c)
 *     MiDeleteAweBitMap @ 0x1407F9DB8 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x1408DC630 (MiCreatePlaceholderStorage.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     MiReturnVadCharges @ 0x140919B48 (MiReturnVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmapCharges @ 0x14099A3EC (MiFreeVadEventBitmapCharges.c)
 *     MiFreePlaceholderVadEvent @ 0x14099A43C (MiFreePlaceholderVadEvent.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A00380 (ExDereferenceHandleDebugInfo.c)
 *     MiReturnVadQuota @ 0x140A0B2E4 (MiReturnVadQuota.c)
 *     MiBuildNewCloneDescriptor @ 0x140A4C34C (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140A6D78C (MiFreeCloneDescriptor.c)
 *     MiFreeRotateVadEvent @ 0x140A77D28 (MiFreeRotateVadEvent.c)
 *     ExEnableHandleTracing @ 0x140AB4D44 (ExEnableHandleTracing.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 *     ViIrpAllocateLockedPacket @ 0x140B900BC (ViIrpAllocateLockedPacket.c)
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall PsReturnProcessNonPagedPoolQuota(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 *v4; // r14
  char v5; // bp
  volatile signed __int64 *v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  ULONG_PTR BugCheckParameter4; // r8
  unsigned __int64 v11; // r9
  signed __int64 v12; // rdx
  bool v13; // zf
  unsigned __int64 result; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // r8

  if ( (PEPROCESS)BugCheckParameter1 != PsInitialSystemProcess )
  {
    v4 = *(unsigned __int64 **)(BugCheckParameter1 + 760);
    v5 = PspResourceFlags[0];
    v6 = (volatile signed __int64 *)v4;
    _m_prefetchw(v4);
    v7 = *v4;
    v8 = v4[8];
    if ( v4[10] )
    {
      if ( v8 > v7 )
      {
        v9 = qword_140F05B28[0];
        if ( v8 - v7 > qword_140F05B28[0] )
        {
          if ( qword_140F05B28[0] > BugCheckParameter3 )
            v9 = BugCheckParameter3;
          if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 8, v8 - v9, v8) )
          {
            v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 9, v9) + v9;
            if ( v15 > qword_140F05B28[0] )
            {
              v16 = _InterlockedExchange64((volatile __int64 *)v4 + 9, 0LL);
              if ( v16 )
                PspReturnResourceQuota(0, (__int64)v4, v16, 0);
            }
          }
        }
      }
    }
    BugCheckParameter4 = BugCheckParameter3;
    while ( 1 )
    {
      do
      {
        v11 = v7;
        if ( BugCheckParameter4 < v7 )
          v11 = BugCheckParameter4;
        v12 = 0LL;
        if ( BugCheckParameter4 < v7 )
          v12 = v7 - BugCheckParameter4;
        result = _InterlockedCompareExchange64(v6, v12, v7);
        v13 = v7 == result;
        v7 = result;
      }
      while ( !v13 );
      BugCheckParameter4 -= v11;
      if ( !BugCheckParameter4 )
        break;
      if ( v4 == (unsigned __int64 *)&PspSystemQuotaBlock )
        KeBugCheckEx(0x21u, BugCheckParameter1, 0LL, BugCheckParameter3, BugCheckParameter4);
      v4 = (unsigned __int64 *)&PspSystemQuotaBlock;
      v6 = &PspSystemQuotaBlock;
      _m_prefetchw(&PspSystemQuotaBlock);
      v7 = PspSystemQuotaBlock;
    }
    if ( BugCheckParameter1 )
    {
      if ( (v5 & 4) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter1 + 512), -(__int64)BugCheckParameter3);
    }
  }
  return result;
}
