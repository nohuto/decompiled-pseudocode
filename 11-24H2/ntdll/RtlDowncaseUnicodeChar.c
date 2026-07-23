/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800F2700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(qword_1801CC040, SourceCharacter);
}
