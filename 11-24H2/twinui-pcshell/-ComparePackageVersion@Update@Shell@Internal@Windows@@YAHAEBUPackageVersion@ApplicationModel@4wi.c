/*
 * XREFs of ?ComparePackageVersion@Update@Shell@Internal@Windows@@YAHAEBUPackageVersion@ApplicationModel@4winrt@@0@Z @ 0x1803B7B94
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803BC17C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1803BCE7C (-IsWebSearchProviderInstalledLatest@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::Update::ComparePackageVersion(
        Windows::Internal::Shell::Update *this,
        const struct winrt::Windows::ApplicationModel::PackageVersion *a2,
        const struct winrt::Windows::ApplicationModel::PackageVersion *a3)
{
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // edx
  __int64 result; // rax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax

  v3 = *(unsigned __int16 *)this;
  v4 = *(unsigned __int16 *)a2;
  if ( (unsigned __int16)v3 > (unsigned __int16)v4 )
  {
    v5 = 1;
    if ( v3 - v4 > 0x7FFF )
      return (unsigned int)-1;
    return v5;
  }
  if ( (unsigned __int16)v3 >= (unsigned __int16)v4 )
  {
    v7 = *((_WORD *)a2 + 1);
    if ( *((_WORD *)this + 1) <= v7 )
    {
      if ( *((_WORD *)this + 1) < v7 )
        return 0xFFFFFFFFLL;
      v8 = *((_WORD *)a2 + 2);
      if ( *((_WORD *)this + 2) <= v8 )
      {
        if ( *((_WORD *)this + 2) >= v8 )
        {
          v9 = *((_WORD *)a2 + 3);
          if ( *((_WORD *)this + 3) <= v9 )
            return (unsigned int)-(*((_WORD *)this + 3) < v9);
          return 1LL;
        }
        return 0xFFFFFFFFLL;
      }
    }
    return 1LL;
  }
  result = 0xFFFFFFFFLL;
  if ( *(unsigned __int16 *)a2 - v3 > 0x7FFF )
    return 1LL;
  return result;
}
