/*
 * XREFs of ?lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z @ 0x140143350
 * Callers:
 *     EngPlgBlt @ 0x140141960 (EngPlgBlt.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1401987D8 (-bSubOverflow@@YAHJJ@Z.c)
 *     ?bAddOverflow@@YAHJJ@Z @ 0x14031D5A0 (-bAddOverflow@@YAHJJ@Z.c)
 *     ?bMulOverflow@@YAHJJ@Z @ 0x14031D5C4 (-bMulOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall rotate::lSizeDDA(rotate *this, struct rotate::_PLGDDA *a2)
{
  int *v2; // r8
  int v3; // r9d
  __int64 v4; // r10
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // r9d
  int v10; // r11d
  int v11; // r9d
  int v12; // edx
  int v13; // r9d
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // r8d
  int v18; // ecx
  unsigned int v19; // ecx
  _DWORD v21[3]; // [rsp+24h] [rbp-24h] BYREF

  v2 = v21;
  v3 = *((_DWORD *)this + 1);
  v4 = 3LL;
  v21[0] = *((_DWORD *)this + 3);
  v5 = v3;
  v21[1] = *((_DWORD *)this + 5);
  v21[2] = *((_DWORD *)this + 7);
  do
  {
    v6 = *v2;
    v7 = *v2++;
    if ( v5 <= v6 )
      v7 = v5;
    v5 = v7;
    if ( v3 >= v6 )
      v6 = v3;
    v3 = v6;
    --v4;
  }
  while ( v4 );
  if ( (unsigned int)bSubOverflow(v6, v7) )
    return 0LL;
  v11 = v9 - v8;
  if ( !v11 )
    v11 = v10;
  if ( (unsigned int)bAddOverflow(v11, v8) || (unsigned int)bMulOverflow(v13 + 4, v12) )
    return 0LL;
  v16 = bAddOverflow(8 * v15, v14);
  v19 = v18 + 4;
  if ( v16 )
    return v17;
  return v19;
}
