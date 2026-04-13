/*
 * XREFs of ??$make_shared@VAppUninstallService@Actions@CreativeFramework@@PEB_W@std@@YA?AV?$shared_ptr@VAppUninstallService@Actions@CreativeFramework@@@0@$$QEAPEB_W@Z @ 0x1800912FC
 * Callers:
 *     ?MakeAppUninstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180092AC0 (-MakeAppUninstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::AppUninstallService,wchar_t const *>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x38uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    *((_QWORD *)v2 + 2) = &CreativeFramework::Actions::AppUninstallService::`vftable';
    std::wstring::wstring((__int64)(v2 + 6));
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
