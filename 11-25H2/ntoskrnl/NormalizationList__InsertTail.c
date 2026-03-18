/*
 * XREFs of NormalizationList__InsertTail @ 0x1405E7834
 * Callers:
 *     RtlpGetNormalization @ 0x14077E2FC (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NormalizationList__InsertTail(__int64 a1)
{
  _QWORD *result; // rax

  result = off_140E08700;
  if ( *off_140E08700 != (_UNKNOWN *)&NormalizationListHead )
    __fastfail(3u);
  *(_QWORD *)a1 = &NormalizationListHead;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  off_140E08700 = (_UNKNOWN **)a1;
  return result;
}
