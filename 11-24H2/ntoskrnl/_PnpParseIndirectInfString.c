/*
 * XREFs of _PnpParseIndirectInfString @ 0x1409AD7F4
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409ACEE0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1409AE2B4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpParseIndirectInfString(_WORD *a1)
{
  _WORD *v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __int16 v6; // ax
  unsigned int v7; // r8d
  __int64 v8; // r8
  __int64 i; // r8
  __int16 v10; // r9
  int v11; // r9d
  __int64 v12; // rcx

  if ( !a1 )
    return 0;
  v2 = a1;
  v3 = 0x7FFFLL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = (0x7FFF - v3) & -(__int64)(v3 != 0);
  if ( !v3 || v4 < 5 || *a1 != 64 )
    return 0;
  v6 = a1[1];
  v7 = 1;
  while ( v6 && v6 != 44 )
    v6 = a1[++v7];
  if ( a1[v7] != 44 )
    return 0;
  v8 = v7 + 1;
  if ( a1[v8] != 37 )
    return 0;
  for ( i = (unsigned int)(v8 + 1); ; i = (unsigned int)(i + 1) )
  {
    v10 = a1[i];
    if ( !v10 || v10 == 59 )
      break;
  }
  v11 = 0;
  if ( a1[i] == 59 )
    v11 = i;
  if ( v11 )
  {
    v12 = (unsigned int)(v11 - 1);
  }
  else
  {
    if ( v4 > 0xFFFFFFFF )
      return 0;
    v12 = (unsigned int)(v4 - 1);
  }
  return a1[v12] == 37;
}
