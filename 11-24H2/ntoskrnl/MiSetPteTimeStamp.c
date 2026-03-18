/*
 * XREFs of MiSetPteTimeStamp @ 0x14044F8E8
 * Callers:
 *     MiDecrementAweMapCount @ 0x14068190C (MiDecrementAweMapCount.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406832CC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetPteTimeStamp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140E2DB80 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140E2DB80 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140E2DB80 )
  {
    if ( (qword_140E2DB80 & result) != 0 )
      return result | 0x10;
    else
      return qword_140E2DB80 | result;
  }
  return result;
}
