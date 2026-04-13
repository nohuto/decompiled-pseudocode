/*
 * XREFs of ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x1800933F8
 * Callers:
 *     ?MakePinToStartService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180095BA0 (-MakePinToStartService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::PinToStartService,wchar_t const *,wchar_t const *,wchar_t const *,bool>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5)
{
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  char v8; // si

  v6 = operator new(0x80uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    v8 = *a5;
    *((_QWORD *)v6 + 2) = &CreativeFramework::Actions::PinToStartService::`vftable';
    std::wstring::wstring((__int64)(v6 + 6));
    std::wstring::wstring((__int64)(v7 + 14));
    std::wstring::wstring((__int64)(v7 + 22));
    *((_BYTE *)v7 + 120) = v8;
  }
  else
  {
    v7 = 0LL;
  }
  a1[1] = v7;
  *a1 = v7 + 4;
  return a1;
}
