/*
 * XREFs of PsGetThreadSessionId @ 0x1409FDD20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return PsGetSessionId(*(_QWORD *)(a1 + 544));
}
