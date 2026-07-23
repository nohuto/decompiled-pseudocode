/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x14048B570
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAcquireProcessLockShared @ 0x14039FE44 (KiAcquireProcessLockShared.c)
 *     KiValidateCpuSetMasks @ 0x14048B8AC (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSets @ 0x14048B9CC (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1404F6AB8 (KiWriteCpuSetMasks.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rsi
  __int64 v10; // r14
  unsigned int v11; // ebp
  unsigned int v12; // edi
  struct _SINGLE_LIST_ENTRY v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  result = KiValidateCpuSetMasks(a3);
  if ( (int)result >= 0 )
  {
    v13.Next = 0LL;
    v9 = (_QWORD *)(a1 + 1680);
    v10 = *(_QWORD *)(a1 + 544);
    if ( (*(_DWORD *)(a1 + 1440) & 0x20000) != 0 )
    {
      v11 = (unsigned __int16)KiMaximumGroups;
      v9 = (_QWORD *)*v9;
    }
    else
    {
      v11 = 1;
    }
    KiAcquireProcessLockShared(*(_QWORD *)(a1 + 544), &v14, v7, v8);
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiWriteCpuSetMasks(v9, v11, a3, a2, v13.Next);
    KiUpdateThreadCpuSets(a1, &v13);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v10 + 64));
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v13, v14);
    return 0LL;
  }
  return result;
}
