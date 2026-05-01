/*
 * XREFs of ?CompareOrdinalIgnoreCase@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x18014F07C
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800661EC (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
        const WCHAR **a1,
        const WCHAR *a2)
{
  const WCHAR *v2; // r10
  const WCHAR *v3; // r8
  int v4; // r9d
  bool v5; // zf
  const WCHAR *v6; // rdx

  v2 = &pvData;
  v3 = a2;
  v4 = -(a2 != 0LL);
  v5 = a2 == 0LL;
  v6 = a1[1];
  if ( v5 )
    v3 = &pvData;
  if ( v6 == (const WCHAR *)-1LL )
  {
    if ( *a1 )
    {
      do
        v6 = (const WCHAR *)((char *)v6 + 1);
      while ( (*a1)[(_QWORD)v6] );
    }
    else
    {
      LODWORD(v6) = 0;
    }
  }
  if ( *a1 )
    v2 = *a1;
  return CompareStringOrdinal(v2, (int)v6, v3, v4, 1);
}
