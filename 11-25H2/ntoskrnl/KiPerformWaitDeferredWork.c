/*
 * XREFs of KiPerformWaitDeferredWork @ 0x1402E6090
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall KiPerformWaitDeferredWork(ULONG_PTR BugCheckParameter1, char a2, char a3, __int64 a4)
{
  unsigned int v9; // r14d
  ULONG_PTR v10; // r8
  char v11; // al
  char v12; // al
  unsigned int v13; // edx
  unsigned int v14; // eax

  if ( (a2 & 2) != 0 )
  {
    if ( !a3 )
    {
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1) )
          {
            HvlNotifyLongSpinWait(v9);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
    }
    v10 = *(char *)(BugCheckParameter1 + 795);
    v11 = *(_BYTE *)(v10 + BugCheckParameter1 + 824);
    if ( !v11 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v10, 2uLL, 0LL);
    v12 = v11 - 1;
    *(_BYTE *)(v10 + BugCheckParameter1 + 824) = v12;
    if ( !v12 )
    {
      v13 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v10);
      *(_DWORD *)(BugCheckParameter1 + 856) = v13;
      if ( v13 < 1 << v10 && *(char *)(BugCheckParameter1 + 195) <= 31 )
      {
        v14 = KiComputeThreadPriority(BugCheckParameter1, 0LL);
        if ( (int)v14 < *(char *)(BugCheckParameter1 + 195) )
          KiSetPriorityThread(BugCheckParameter1, a4, v14);
      }
    }
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    if ( !a3 )
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  return a2 & 1;
}
