/*
 * XREFs of ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x180231F94
 * Callers:
 *     ??4?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAV123@@Z @ 0x1804B3EE0 (--4-$ObservableProperty@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows.c)
 *     ??0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEBUtagRECT@@@Z @ 0x18054A154 (--0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV-$NativeString@V-$CoTaskMemPolicy@G@Intern.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z @ 0x18055B2D0 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

_QWORD *__fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)a1);
  a1[1] = a2[1];
  a1[2] = a2[2];
  v4 = *a2;
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[1] = 0LL;
  *a1 = v4;
  return a1;
}
