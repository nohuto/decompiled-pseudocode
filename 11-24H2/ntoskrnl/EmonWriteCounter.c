/*
 * XREFs of EmonWriteCounter @ 0x14055C654
 * Callers:
 *     EmonRestartProfilingInternalEnhanced @ 0x14055BD10 (EmonRestartProfilingInternalEnhanced.c)
 *     EmonRestartProfilingInternalOriginal @ 0x14055BE2C (EmonRestartProfilingInternalOriginal.c)
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
