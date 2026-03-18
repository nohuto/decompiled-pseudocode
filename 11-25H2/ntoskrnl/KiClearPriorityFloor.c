/*
 * XREFs of KiClearPriorityFloor @ 0x14044D0F8
 * Callers:
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall KiClearPriorityFloor(__int64 BugCheckParameter1, __int64 a2, int a3, char a4)
{
  ULONG_PTR v4; // rbp
  int v8; // edi
  char v9; // al
  int v10; // eax

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
          HvlNotifyLongSpinWait();
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
    if ( v10 < (unsigned int)(1 << v4) && *(char *)(BugCheckParameter1 + 195) <= 31 )
    {
      v10 = KiComputeThreadPriority(BugCheckParameter1, 0);
      if ( v10 < *(char *)(BugCheckParameter1 + 195) )
        LOBYTE(v10) = KiSetPriorityThread((_BYTE *)BugCheckParameter1, a2, v10);
    }
  }
  if ( !a4 )
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return v10;
}
