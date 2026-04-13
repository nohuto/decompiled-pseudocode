/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800712D0
 * Callers:
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x180070B58 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 *     ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x18007118C (-SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z.c)
 *     ??0MRTHelperForPackage@ShellMRTHelper@@QEAA@PEBG@Z @ 0x1800A97F4 (--0MRTHelperForPackage@ShellMRTHelper@@QEAA@PEBG@Z.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800A9E2C (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1800AA280 (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRIN.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003D368 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D630 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180071254 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v6; // esi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax

  v3 = a3;
  v6 = 0;
  if ( a2 )
  {
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)&a2[2 * v8] );
    if ( a3 == -1LL )
    {
      v3 = v8;
      v7 = v8;
    }
    else if ( a3 >= v8 )
    {
      do
        ++v7;
      while ( *(_WORD *)&a2[2 * v7] );
    }
    else
    {
      v7 = a3;
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v3);
    if ( v6 >= 0 )
    {
      StringCchCopyNW(*(char **)a1, v3 + 1, a2, v7);
      *(_QWORD *)(a1 + 8) = v7;
    }
  }
  else
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
  }
  return (unsigned int)v6;
}
