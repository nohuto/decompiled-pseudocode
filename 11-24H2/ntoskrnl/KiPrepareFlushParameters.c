/*
 * XREFs of KiPrepareFlushParameters @ 0x1404356E0
 * Callers:
 *     KeFlushSingleCurrentTb @ 0x1405B9F1C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiPrepareFlushParameters(int a1, unsigned __int64 *a2, _BYTE *a3)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  if ( KiKvaShadow )
  {
    result = 0LL;
    *a2 = 0LL;
    if ( a1 )
      *a3 = 1;
    else
      *a3 = 0;
  }
  else if ( a1 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a3 = 0;
    result = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
    *a2 = result;
  }
  else
  {
    result = 0LL;
    *a3 = 1;
    *a2 = 0LL;
  }
  return result;
}
