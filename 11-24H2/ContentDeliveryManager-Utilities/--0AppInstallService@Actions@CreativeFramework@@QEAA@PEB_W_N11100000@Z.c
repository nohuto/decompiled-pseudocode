/*
 * XREFs of ??0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W_N11100000@Z @ 0x1800915A8
 * Callers:
 *     ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180092550 (-MakeAppInstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x18005C1F0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=9
CreativeFramework::Actions::AppInstallService *__fastcall CreativeFramework::Actions::AppInstallService::AppInstallService(
        CreativeFramework::Actions::AppInstallService *this,
        const wchar_t *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9)
{
  *(_QWORD *)this = &CreativeFramework::Actions::AppInstallService::`vftable';
  *((_QWORD *)this + 4) = 7LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 4) = 0;
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 72) = a3;
  *((_BYTE *)this + 73) = a5;
  *((_BYTE *)this + 74) = a4;
  *((_BYTE *)this + 75) = a6;
  std::wstring::wstring((__int64)this + 80);
  std::wstring::wstring((__int64)this + 112);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  *((_QWORD *)this + 25) = 7LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_WORD *)this + 88) = 0;
  std::wstring::wstring((__int64)this + 208);
  std::wstring::wstring((__int64)this + 240);
  if ( a8 )
    std::wstring::assign((__int64)this + 144, (__int64)a8);
  if ( a9 )
    std::wstring::assign((__int64)this + 176, (__int64)a9);
  return this;
}
