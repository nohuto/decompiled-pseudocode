/*
 * XREFs of ?c_str@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAPEB_WXZ @ 0x18007FB20
 * Callers:
 *     ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800A23BC (-DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::c_str(_QWORD *a1)
{
  if ( a1[3] >= 8uLL )
    return (_QWORD *)*a1;
  return a1;
}
