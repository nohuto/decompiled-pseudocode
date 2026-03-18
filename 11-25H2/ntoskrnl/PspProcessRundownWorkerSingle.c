/*
 * XREFs of PspProcessRundownWorkerSingle @ 0x140A9F220
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 */

__int64 PspProcessRundownWorkerSingle()
{
  char *v0; // rbx
  __int64 result; // rax

  do
  {
    _InterlockedExchange(&PspRundownNeededCountCache, 1);
    while ( PspRundownProcessCache )
    {
      v0 = (char *)_InterlockedExchange64(&PspRundownProcessCache, 0LL);
      if ( !v0 )
        break;
      PspRundownSingleProcess(v0, 0);
      ObfDereferenceObjectWithTag(v0, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&PspRundownNeededCountCache, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
