/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x14082CE38
 * Callers:
 *     _RtlpRemovePendingDeleteLanguages @ 0x1406A3960 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14082CCEC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x14082D200 (RtlpMuiRegGetOrAddString.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  char v5; // bl
  __int64 v6; // rsi
  int i; // ecx
  _WORD *v8; // rdx
  __int16 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v5 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( (int)RtlpMuiRegGetOrAddString(a1, a2, 0LL, &v10) < 0 )
    return 3221225524LL;
  for ( i = 0; i < *(unsigned __int16 *)(v6 + 6); ++i )
  {
    v8 = (_WORD *)(*(_QWORD *)(v6 + 16) + 28LL * i);
    if ( v8[3] == v10 )
    {
      if ( (*v8 & 0x1020) == 0x20 )
      {
        if ( a4 )
        {
          *a4 = i;
          return 0LL;
        }
      }
      else if ( (*v8 & 0x1000) != 0 )
      {
        v5 = 1;
      }
    }
  }
  return v5 != 0 ? -1073741637 : -1073741772;
}
