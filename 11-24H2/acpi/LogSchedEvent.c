/*
 * XREFs of LogSchedEvent @ 0x14002DA00
 * Callers:
 *     RunContext @ 0x140005EA0 (RunContext.c)
 *     InsertReadyQueue @ 0x140013A60 (InsertReadyQueue.c)
 *     SyncEvalObject @ 0x1400143C8 (SyncEvalObject.c)
 *     AMLIPauseInterpreter @ 0x14002D7A4 (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x14002D894 (AMLIResumeInterpreter.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  PVOID result; // rax

  if ( a2 )
    v8 = *(_QWORD *)(a2 + 408);
  else
    v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 )
  {
    if ( qword_140089090 )
    {
      v11 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
      *(_QWORD *)((char *)qword_140089090 + v11 + 8) = MEMORY[0xFFFFF78000000008];
      *(_DWORD *)((char *)qword_140089090 + v11) = a1;
      *(_QWORD *)((char *)qword_140089090 + v11 + 16) = CurrentThread;
      *(_QWORD *)((char *)qword_140089090 + v11 + 24) = v8;
      *(_QWORD *)((char *)qword_140089090 + v11 + 32) = a2;
      *(_QWORD *)((char *)qword_140089090 + v11 + 40) = v10;
      *(_QWORD *)((char *)qword_140089090 + v11 + 48) = a3;
      *(_QWORD *)((char *)qword_140089090 + v11 + 56) = a4;
      result = qword_140089090;
      *(_QWORD *)((char *)qword_140089090 + v11 + 64) = a5;
    }
  }
  return result;
}
