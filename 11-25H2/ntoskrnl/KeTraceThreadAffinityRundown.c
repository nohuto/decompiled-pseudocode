/*
 * XREFs of KeTraceThreadAffinityRundown @ 0x1405BE21C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A11A68 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceThreadAffinity @ 0x14026B7D8 (EtwTraceThreadAffinity.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 */

void __fastcall KeTraceThreadAffinityRundown(char a1)
{
  void *i; // rcx
  __int64 j; // rdx
  __int64 NextProcessThread; // rax
  __int64 v4; // rdi
  __int64 NextProcess; // rbx

  if ( a1 )
  {
    for ( i = 0LL; ; i = (void *)NextProcess )
    {
      NextProcess = PsGetNextProcess(i);
      if ( !NextProcess )
        break;
      for ( j = 0LL; ; j = v4 )
      {
        NextProcessThread = PsGetNextProcessThread(NextProcess, j);
        v4 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        EtwTraceThreadAffinity(
          NextProcessThread,
          *(_WORD *)(NextProcessThread + 584),
          (*(_DWORD *)(NextProcessThread + 116) & 8) != 0,
          1,
          *(unsigned __int16 **)(NextProcessThread + 576),
          1334);
      }
    }
  }
}
