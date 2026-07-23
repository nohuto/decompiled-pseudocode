/*
 * XREFs of KiPerformWaitDeferredWork @ 0x14027F7B0
 * Callers:
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x14032EC3C (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KiPerformWaitDeferredWork(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  char v6; // bl
  unsigned int v9; // r14d
  ULONG_PTR v10; // r9
  char v11; // al
  char v12; // al
  unsigned int v13; // edx

  v5 = a3;
  v6 = a2;
  if ( (a2 & 2) != 0 )
  {
    if ( !(_BYTE)a3 )
    {
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1, a2, a3, a4) )
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
      if ( v13 < 1 << v10
        && *(char *)(BugCheckParameter1 + 195) <= 31
        && (int)KiComputeThreadPriority(BugCheckParameter1, 0LL, 0LL) < *(char *)(BugCheckParameter1 + 195) )
      {
        KiSetPriorityThread(BugCheckParameter1, a4);
      }
    }
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    if ( !v5 )
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  return v6 & 1;
}
