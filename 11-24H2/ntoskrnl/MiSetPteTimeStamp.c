/*
 * XREFs of MiSetPteTimeStamp @ 0x140444FC4
 * Callers:
 *     MiDecrementAweMapCount @ 0x140682AFC (MiDecrementAweMapCount.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406844BC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetPteTimeStamp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140E2DCC0 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140E2DCC0 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & result) != 0 )
      return result | 0x10;
    else
      return qword_140E2DCC0 | result;
  }
  return result;
}
