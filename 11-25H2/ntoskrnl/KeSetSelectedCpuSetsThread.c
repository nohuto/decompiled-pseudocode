/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x140491830
 * Callers:
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x140271084 (KiAcquireProcessLockShared.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiValidateCpuSetMasks @ 0x140491B6C (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSets @ 0x140491C8C (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1404F6B14 (KiWriteCpuSetMasks.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  __int64 result; // rax
  _QWORD *v7; // rsi
  __int64 v8; // r14
  unsigned int v9; // ebp
  int v10; // edi
  _QWORD *v11[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  v5 = a2;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v11[0] = 0LL;
    v7 = (_QWORD *)(a1 + 1680);
    v8 = *(_QWORD *)(a1 + 544);
    if ( (*(_DWORD *)(a1 + 1440) & 0x20000) != 0 )
    {
      v9 = (unsigned __int16)KiMaximumGroups;
      v7 = (_QWORD *)*v7;
    }
    else
    {
      v9 = 1;
    }
    KiAcquireProcessLockShared(*(_QWORD *)(a1 + 544), &v12);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiWriteCpuSetMasks(v7, v9, a3, v5, v11[0]);
    KiUpdateThreadCpuSets(a1, v11);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v11, v12);
    return 0LL;
  }
  return result;
}
