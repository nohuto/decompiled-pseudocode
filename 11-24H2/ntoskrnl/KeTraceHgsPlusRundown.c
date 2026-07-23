/*
 * XREFs of KeTraceHgsPlusRundown @ 0x1405BF858
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceWorkloadClassUpdate @ 0x14064C8E8 (EtwTraceWorkloadClassUpdate.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 */

void __fastcall KeTraceHgsPlusRundown(char a1)
{
  void *i; // rcx
  __int64 j; // rdx
  __int64 NextProcessThread; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 NextProcess; // rbx

  if ( KiHgsPlusEnabled && a1 && (WORD2(xmmword_140FC6B50) & 0x100) != 0 )
  {
    for ( i = 0LL; ; i = (void *)NextProcess )
    {
      NextProcess = PsGetNextProcess(i);
      if ( !NextProcess )
        break;
      for ( j = 0LL; ; j = v5 )
      {
        NextProcessThread = PsGetNextProcessThread(NextProcess, j);
        v5 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        LOBYTE(v4) = *(_BYTE *)(NextProcessThread + 517);
        EtwTraceWorkloadClassUpdate(NextProcessThread, v4, 1LL);
      }
    }
  }
}
