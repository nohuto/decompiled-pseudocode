/*
 * XREFs of _PnpMultiSzGetLen @ 0x1409B6270
 * Callers:
 *     _CmGetDeviceSiblings @ 0x1409B3E64 (_CmGetDeviceSiblings.c)
 *     _PnpMultiSzDeleteString @ 0x1409B43BC (_PnpMultiSzDeleteString.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409B5B50 (_CmGetDeviceMappedPropertyFromRegProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMultiSzGetLen(_WORD *a1)
{
  unsigned int v1; // edx
  _WORD *i; // rax
  __int64 v3; // r8

  v1 = 0;
  if ( a1 )
  {
    for ( i = a1; *i; i += v3 + 1 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( i[v3] );
    }
    return (unsigned int)(i - a1) + 1;
  }
  return v1;
}
