/*
 * XREFs of SbExecuteProcedure @ 0x18015AE00
 * Callers:
 *     <none>
 * Callees:
 *     SbSelectProcedure @ 0x18000B080 (SbSelectProcedure.c)
 */

__int64 (__fastcall *__fastcall SbExecuteProcedure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = (__int64 (__fastcall *)(__int64))SbSelectProcedure(a1, a2, a3, a4);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a5);
  return result;
}
