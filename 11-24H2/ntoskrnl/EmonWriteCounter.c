/*
 * XREFs of EmonWriteCounter @ 0x14055EA24
 * Callers:
 *     EmonRestartProfilingInternalEnhanced @ 0x14055E0E0 (EmonRestartProfilingInternalEnhanced.c)
 *     EmonRestartProfilingInternalOriginal @ 0x14055E1FC (EmonRestartProfilingInternalOriginal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EmonWriteCounter(int a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
      return __readmsr(0x38Du);
  }
  else
  {
    __writemsr(a1 + 193, a3);
    result = a4;
    __writemsr(a1 + 390, a4);
  }
  return result;
}
