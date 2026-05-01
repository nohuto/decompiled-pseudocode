/*
 * XREFs of ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800B734C
 * Callers:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithSubtitle@@YAJPEAUIImmersiveApplication@@PEBGPEAPEAG@Z @ 0x180016530 (-IImmersiveApplication_GetNormalDisplayNameWithSubtitle@@YAJPEAUIImmersiveApplication@@PEBGPEAPE.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800B88BC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x1801F6AD4 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?BuildMonitorUIIDListString@SnapAccessibilityHelpers@@YA?AV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z @ 0x1805BD9F8 (-BuildMonitorUIIDListString@SnapAccessibilityHelpers@@YA-AV-$NativeString@V-$CoTaskMemPolicy@G@I.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x18002A9E4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800B73E4 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
        _QWORD *a1,
        const wchar_t *a2,
        ...)
{
  char v3; // al
  int v4; // ebx
  LPVOID pv[6]; // [rsp+28h] [rbp-30h] BYREF
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( !*a1 || (v3 = 0, !*(_WORD *)*a1) )
    v3 = 1;
  if ( v3 )
  {
    return (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                           a1,
                           a2,
                           va);
  }
  else
  {
    memset(pv, 0, 24);
    v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           pv,
           a2,
           va);
    if ( v4 >= 0 )
      v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(a1, pv);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  return (unsigned int)v4;
}
