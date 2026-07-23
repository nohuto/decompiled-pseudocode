/*
 * XREFs of RtlCompareAltitudes @ 0x1801443D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __cdecl RtlCompareAltitudes(PUNICODE_STRING Altitude1, PUNICODE_STRING Altitude2)
{
  unsigned __int16 Length; // r11
  unsigned __int16 v3; // r8
  wchar_t *Buffer; // rsi
  unsigned __int16 v5; // cx
  wchar_t *v6; // r14
  unsigned __int16 v7; // r11
  LONG v8; // r10d
  unsigned __int16 v9; // r9
  unsigned __int16 i; // dx
  unsigned __int16 v11; // bx
  unsigned __int16 j; // ax
  unsigned __int16 v13; // bx
  unsigned __int16 k; // ax
  bool v15; // cf
  unsigned __int16 m; // bx
  wchar_t v18; // di
  wchar_t v19; // ax
  __int16 v20; // r15
  __int16 v21; // bp
  signed __int16 v22; // di
  unsigned __int16 n; // r11
  signed __int16 v24; // r11
  unsigned __int16 ii; // r9
  wchar_t *v26; // rsi
  wchar_t *v27; // r14
  wchar_t v28; // cx
  wchar_t v29; // dx

  Length = Altitude1->Length;
  v3 = 0;
  Buffer = Altitude1->Buffer;
  v5 = 0;
  v6 = Altitude2->Buffer;
  v7 = Length >> 1;
  v8 = 1;
  v9 = Altitude2->Length >> 1;
  if ( v7 )
  {
    do
    {
      if ( Buffer[v5] == 46 )
        break;
      ++v5;
    }
    while ( v5 < v7 );
  }
  for ( i = 0; i < v9; ++i )
  {
    if ( v6[i] == 46 )
      break;
  }
  v11 = v5;
  for ( j = 0; j < v11; --v7 )
  {
    if ( *Buffer != 48 )
      break;
    ++j;
    ++Buffer;
    --v5;
  }
  v13 = i;
  for ( k = 0; k < v13; --v9 )
  {
    if ( *v6 != 48 )
      break;
    ++k;
    ++v6;
    --i;
  }
  v15 = i < v5;
  if ( i != v5 )
    return v15 ? 1 : -1;
  for ( m = 0; m < v5; ++m )
  {
    v18 = Buffer[m];
    v19 = v6[m];
    v15 = v19 < v18;
    if ( v19 != v18 )
      return v15 ? 1 : -1;
  }
  v20 = 0;
  v21 = 0;
  if ( (__int16)(v7 - v5 - 1) >= 0 )
    v20 = v7 - v5 - 1;
  v22 = v20;
  if ( (__int16)(v9 - i - 1) >= 0 )
    v21 = v9 - i - 1;
  if ( v7 )
  {
    for ( n = v7 - 1; n > v5 && Buffer[n] == 48; --n )
      --v22;
  }
  v24 = v21;
  if ( v9 )
  {
    for ( ii = v9 - 1; ii > i && v6[ii] == 48; --ii )
      --v24;
  }
  v26 = &Buffer[v5];
  v27 = &v6[i];
  while ( v3 < v22 && v3 < v24 )
  {
    v28 = v26[v3 + 1];
    v29 = v27[v3 + 1];
    if ( v29 != v28 )
      return v29 < v28 ? 1 : -1;
    ++v3;
  }
  if ( v22 == v24 )
    return 0;
  if ( v22 <= v24 )
    return -1;
  return v8;
}
