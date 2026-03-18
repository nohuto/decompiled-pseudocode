/*
 * XREFs of MiZeroMoveToProcessor @ 0x14030AA98
 * Callers:
 *     MiZeroInParallelWorker @ 0x14030A090 (MiZeroInParallelWorker.c)
 *     MiZeroHugeRangeWorker @ 0x140686090 (MiZeroHugeRangeWorker.c)
 * Callees:
 *     MiSetIdealProcessorThread @ 0x1403B4508 (MiSetIdealProcessorThread.c)
 */

__int64 __fastcall MiZeroMoveToProcessor(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)a2 = CurrentThread;
  result = *(unsigned int *)(a1 + 44);
  *(_DWORD *)(a2 + 8) = -1;
  *(_QWORD *)(a2 + 24) = a1;
  if ( (_DWORD)result != -2 )
  {
    if ( (_DWORD)result == -1 )
    {
      result = *(_QWORD *)(a1 + 48) + 32LL;
      *(_QWORD *)(a2 + 16) = result;
    }
    else
    {
      Affinity = *(struct _GROUP_AFFINITY *)(a1 + 48);
      result = MiSetIdealProcessorThread(&Affinity);
      *(_DWORD *)(a2 + 8) = result;
    }
  }
  return result;
}
