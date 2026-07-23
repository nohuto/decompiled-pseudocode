/*
 * XREFs of BiTranslateBootEntryId @ 0x1409A80C0
 * Callers:
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BiTranslateBootOrder @ 0x1409A8030 (BiTranslateBootOrder.c)
 * Callees:
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 */

__int64 __fastcall BiTranslateBootEntryId(__int64 **a1, int a2, _OWORD *a3)
{
  __int64 *i; // r9
  int v4; // r10d
  __int64 result; // rax

  for ( i = *a1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)a1 )
      return 3221226021LL;
    v4 = *((_DWORD *)i + 12);
    if ( (v4 & 3) != 0 && *((_DWORD *)i + 8) == a2 )
      break;
  }
  result = 0LL;
  if ( (v4 & 4) == 0 )
    return 3221226021LL;
  if ( (v4 & 0x10) != 0 )
  {
    BiLogMessage();
    return 3221225508LL;
  }
  else
  {
    *a3 = *((_OWORD *)i + 1);
  }
  return result;
}
