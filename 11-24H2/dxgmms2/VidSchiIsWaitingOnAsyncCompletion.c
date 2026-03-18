/*
 * XREFs of VidSchiIsWaitingOnAsyncCompletion @ 0x140034FC0
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x14002A240 (VidSchUnwaitFlipQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiIsWaitingOnAsyncCompletion(int a1)
{
  return a1 == 15 || a1 == 5;
}
