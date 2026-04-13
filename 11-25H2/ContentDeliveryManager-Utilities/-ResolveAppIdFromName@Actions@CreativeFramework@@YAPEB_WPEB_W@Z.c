/*
 * XREFs of ?ResolveAppIdFromName@Actions@CreativeFramework@@YAPEB_WPEB_W@Z @ 0x18009DFE0
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18009D5D4 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall CreativeFramework::Actions::ResolveAppIdFromName(LPCWCH lpString2, const wchar_t *a2)
{
  wchar_t **i; // rbx

  for ( i = off_1800DC090; i != off_1800DC0B0; i += 2 )
  {
    if ( CompareStringOrdinal(*i, -1, lpString2, -1, 1) == 2 )
      return i[1];
  }
  return L"Windows.SystemToast.Suggested";
}
