/*
 * XREFs of PspProcessRundownWorker @ 0x140AA6080
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 */

__int64 PspProcessRundownWorker()
{
  __int64 *v0; // rcx
  __int64 *NextProcess; // rax
  __int64 *v2; // rbx
  char *v3; // rbx
  __int64 result; // rax

  do
  {
    v0 = 0LL;
    _InterlockedExchange(&PspRundownNeededCount, 1);
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v0);
      v2 = NextProcess;
      if ( !NextProcess )
        break;
      if ( _interlockedbittestandreset((volatile signed __int32 *)NextProcess + 124, 8u) )
      {
        PspRundownSingleProcess((char *)NextProcess, 0);
        ObfDereferenceObjectWithTag(v2, 0x77537350u);
      }
      v0 = v2;
    }
    while ( PspRundownProcessCache )
    {
      v3 = (char *)_InterlockedExchange64(&PspRundownProcessCache, 0LL);
      if ( !v3 )
        break;
      PspRundownSingleProcess(v3, 0);
      ObfDereferenceObjectWithTag(v3, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&PspRundownNeededCount, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
