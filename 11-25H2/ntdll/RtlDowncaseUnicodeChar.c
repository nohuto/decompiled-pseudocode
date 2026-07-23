/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1800F9720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  return NLS_DOWNCASE(qword_1801CF040, SourceCharacter);
}
