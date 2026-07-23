/*
 * XREFs of _mbstrlen @ 0x1404FF9BC
 * Callers:
 *     mbstowcs @ 0x1404FC410 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x140905970 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)Str;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)Str - 1;
}
