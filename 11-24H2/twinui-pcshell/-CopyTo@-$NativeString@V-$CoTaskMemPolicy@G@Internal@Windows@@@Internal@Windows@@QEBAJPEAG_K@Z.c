/*
 * XREFs of ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAG_K@Z @ 0x18068460C
 * Callers:
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x18068DDE8 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
        char **a1,
        char *a2)
{
  if ( *a1 )
    return StringCchCopyW(a2, 260LL, *a1);
  *(_WORD *)a2 = 0;
  return 2147943568LL;
}
