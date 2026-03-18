/*
 * XREFs of KiPerformWaitDeferredWork @ 0x14024F1A0
 * Callers:
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x14020765C (KeWaitForAlertByThreadId.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall KiPerformWaitDeferredWork(ULONG_PTR BugCheckParameter1, char a2, char a3, __int64 a4)
{
  unsigned int v9; // r14d
  ULONG_PTR v10; // r9
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
        v14 = KiComputeThreadPriority(BugCheckParameter1, 0LL, 0LL);
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
