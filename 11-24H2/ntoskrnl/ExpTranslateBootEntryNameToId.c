/*
 * XREFs of ExpTranslateBootEntryNameToId @ 0x14094E3A8
 * Callers:
 *     NtEnumerateBootEntries @ 0x14094DCD0 (NtEnumerateBootEntries.c)
 *     ExpIsBootEntry @ 0x14094E360 (ExpIsBootEntry.c)
 * Callees:
 *     towlower @ 0x1404FD4D0 (towlower.c)
 */

__int64 __fastcall ExpTranslateBootEntryNameToId(wint_t *a1, int *a2)
{
  int v5; // ebx
  unsigned int i; // esi
  wint_t v7; // ax
  int v8; // ebx

  if ( towlower(*a1) != 98 || towlower(a1[1]) != 111 || towlower(a1[2]) != 111 || towlower(a1[3]) != 116 )
    return 0LL;
  v5 = 0;
  for ( i = 4; i < 8; ++i )
  {
    v7 = towlower(a1[i]);
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 97) > 5u )
        return 0LL;
      v8 = 16 * v5 - 87;
    }
    else
    {
      v8 = 16 * v5 - 48;
    }
    v5 = v7 + v8;
  }
  if ( a1[8] )
    return 0LL;
  *a2 = v5;
  return 1LL;
}
