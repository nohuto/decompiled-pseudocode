/*
 * XREFs of PsGetThreadSessionId @ 0x1409F4900
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionId @ 0x1403D5E10 (PsGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return PsGetSessionId(*(_QWORD *)(a1 + 544));
}
