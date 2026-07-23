/*
 * XREFs of ExpParseArcPathName @ 0x1407BC358
 * Callers:
 *     ExpTranslateArcPath @ 0x1407BD4BC (ExpTranslateArcPath.c)
 * Callees:
 *     towlower @ 0x1404FD4D0 (towlower.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall ExpParseArcPathName(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int *a4, char *a5)
{
  __int64 v8; // rbp
  char v9; // r15
  char v10; // si
  unsigned int i; // edi
  __int64 v12; // r8
  unsigned int v13; // edx
  __int16 v14; // ax
  __int16 v15; // ax
  wchar_t Dst[12]; // [rsp+30h] [rbp-68h] BYREF

  v8 = 0LL;
  v9 = 0;
  v10 = 1;
  if ( !a1 )
    return 3221225485LL;
  wcscpy_s(Dst, 0xBuLL, L"signature(");
  for ( i = 0; i < 0xA; ++i )
  {
    if ( towlower(*(_WORD *)(a1 + 2LL * i)) != Dst[i] )
    {
      v10 = 0;
      break;
    }
  }
  v12 = a1 + 20;
  v13 = 0;
  if ( v10 != 1 )
    v12 = a1;
  while ( 1 )
  {
    v14 = *(_WORD *)(v12 + 2LL * v13);
    if ( !v14 )
      break;
    if ( v14 == 92 )
    {
      v8 = v12 + 2LL * v13;
      break;
    }
    if ( v10 == 1 && v14 == 41 )
    {
      v9 = 1;
      v15 = *(_WORD *)(v12 + 2LL * (v13 + 1));
      v10 = 0;
      if ( v15 != 92 )
      {
        if ( v15 )
          return 3221225485LL;
      }
    }
    ++v13;
  }
  if ( v10 == 1 || !v13 )
    return 3221225485LL;
  *a2 = v12;
  *a3 = v8;
  *a4 = v13;
  *a5 = v9;
  return 0LL;
}
