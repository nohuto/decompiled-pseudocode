/*
 * XREFs of PiDevCfgGetMigrationDeviceIdScore @ 0x140496D24
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetMigrationDeviceIdScore(wchar_t *Str1, wchar_t *Str2)
{
  const wchar_t *v2; // rbx
  const wchar_t *v3; // rdi
  unsigned __int16 v4; // r12
  char v5; // r14
  unsigned __int16 v6; // r15
  const wchar_t *v7; // rbp
  const wchar_t *i; // rsi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  const wchar_t *v12; // rbp
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // cx
  unsigned __int16 v16; // si
  __int64 v17; // rax
  __int64 v18; // rax
  const wchar_t *v19; // rdi
  bool v20; // zf
  __int64 v21; // rax
  const wchar_t *v22; // rbx
  int v23; // eax

  v2 = Str2;
  v3 = Str1;
  v4 = 0;
  v5 = 0;
  if ( !Str1 )
    return (unsigned __int16)-1;
  if ( !Str2 )
    return (unsigned __int16)-1;
  v6 = 0x4000;
  v7 = Str2;
  if ( !*Str2 )
    return (unsigned __int16)-1;
  do
  {
    for ( i = v3; *i; i += v9 + 1 )
    {
      if ( !wcsicmp(i, v7) )
      {
        v5 = 1;
        break;
      }
      v9 = -1LL;
      do
        ++v9;
      while ( i[v9] );
    }
    v10 = v4 | v6;
    if ( *i )
      v10 = v4;
    v11 = -1LL;
    v4 = v10;
    do
      ++v11;
    while ( v7[v11] );
    v12 = &v7[v11];
    v13 = v6 >> 1;
    v7 = v12 + 1;
    if ( v6 <= 2u )
      v13 = v6;
    v6 = v13;
  }
  while ( *v7 );
  if ( v5 )
  {
    v16 = v10 | 0x8000;
    if ( !wcsicmp(v3, v2) )
      v16 = v4;
    v17 = -1LL;
    do
      ++v17;
    while ( v3[v17] );
    while ( 1 )
    {
      v20 = v3[v17 + 1] == 0;
      v18 = -1LL;
      if ( v20 )
        break;
      do
        ++v18;
      while ( v3[v18] );
      v19 = &v3[v18];
      v17 = -1LL;
      v3 = v19 + 1;
      do
        ++v17;
      while ( v3[v17] );
    }
    do
      ++v18;
    while ( v2[v18] );
    while ( v2[v18 + 1] )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v2[v21] );
      v22 = &v2[v21];
      v18 = -1LL;
      v2 = v22 + 1;
      do
        ++v18;
      while ( v2[v18] );
    }
    v23 = wcsicmp(v3, v2);
    v14 = v16 | 1;
    if ( !v23 )
      return v16;
  }
  else
  {
    return (unsigned __int16)-1;
  }
  return v14;
}
