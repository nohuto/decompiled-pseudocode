/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x1408F8494
 * Callers:
 *     ExpWorkQueueManagerStart @ 0x1407C0748 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x1408F8B1C (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(__int64 a1, int a2, int a3)
{
  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 128LL));
}
