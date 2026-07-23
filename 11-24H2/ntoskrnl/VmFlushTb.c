/*
 * XREFs of VmFlushTb @ 0x1402A1F40
 * Callers:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1405B9F1C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 * Callees:
 *     VmpFlushTb @ 0x1402A1F80 (VmpFlushTb.c)
 */

struct _KTHREAD *__fastcall VmFlushTb(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  volatile LONG *Blink; // rcx

  if ( a3 == 1 )
  {
    result = KeGetCurrentThread();
    Blink = (volatile LONG *)result->ApcState.Process[3].ProcessListEntry.Blink;
    if ( Blink )
      return (struct _KTHREAD *)VmpFlushTb(Blink);
  }
  return result;
}
