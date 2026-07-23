/*
 * XREFs of KiClearPriorityFloor @ 0x140440D50
 * Callers:
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall KiClearPriorityFloor(__int64 BugCheckParameter1, __int64 a2, int a3, char a4)
{
  ULONG_PTR v4; // rbp
  unsigned int v8; // edi
  char v9; // al
  unsigned int v10; // eax
  __int64 v11; // r9

  v4 = a3;
  if ( !a4 )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
  }
  v9 = *(_BYTE *)(v4 + BugCheckParameter1 + 824);
  if ( !v9 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v4, 2uLL, 0LL);
  LOBYTE(v10) = v9 - 1;
  *(_BYTE *)(v4 + BugCheckParameter1 + 824) = v10;
  if ( !(_BYTE)v10 )
  {
    v10 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v4);
    *(_DWORD *)(BugCheckParameter1 + 856) = v10;
    if ( v10 < 1 << v4 && *(char *)(BugCheckParameter1 + 195) <= 31 )
    {
      v10 = KiComputeThreadPriority(BugCheckParameter1, 0, 0);
      if ( (int)v10 < *(char *)(BugCheckParameter1 + 195) )
        LOBYTE(v10) = KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, a2, v10, v11);
    }
  }
  if ( !a4 )
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return v10;
}
