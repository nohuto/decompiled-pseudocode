/*
 * XREFs of PsGetThreadSessionId @ 0x1409E8C60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return PsGetSessionId(*(_QWORD *)(a1 + 544));
}
