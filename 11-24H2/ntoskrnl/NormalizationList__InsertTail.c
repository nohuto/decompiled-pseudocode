/*
 * XREFs of NormalizationList__InsertTail @ 0x1405F11BC
 * Callers:
 *     RtlpGetNormalization @ 0x14078D4E0 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NormalizationList__InsertTail(__int64 a1)
{
  _QWORD *result; // rax

  result = off_140E08850;
  if ( *off_140E08850 != (_UNKNOWN *)&NormalizationListHead )
    __fastfail(3u);
  *(_QWORD *)a1 = &NormalizationListHead;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  off_140E08850 = (_UNKNOWN **)a1;
  return result;
}
