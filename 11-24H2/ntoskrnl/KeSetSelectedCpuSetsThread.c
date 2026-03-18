/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x1403C6670
 * Callers:
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiAcquireProcessLockShared @ 0x1403B1634 (KiAcquireProcessLockShared.c)
 *     KiUpdateThreadCpuSets @ 0x1403C6418 (KiUpdateThreadCpuSets.c)
 *     KiValidateCpuSetMasks @ 0x1403C8288 (KiValidateCpuSetMasks.c)
 *     KiWriteCpuSetMasks @ 0x1404F91D8 (KiWriteCpuSetMasks.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v7; // rsi
  __int64 v8; // r14
  unsigned int v9; // ebp
  unsigned int v10; // edi
  struct _SINGLE_LIST_ENTRY v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  result = KiValidateCpuSetMasks(a3);
  if ( (int)result >= 0 )
  {
    v11.Next = 0LL;
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
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiWriteCpuSetMasks(v7, v9, a3, a2, v11.Next);
    KiUpdateThreadCpuSets(a1, &v11);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v11, v12);
    return 0LL;
  }
  return result;
}
