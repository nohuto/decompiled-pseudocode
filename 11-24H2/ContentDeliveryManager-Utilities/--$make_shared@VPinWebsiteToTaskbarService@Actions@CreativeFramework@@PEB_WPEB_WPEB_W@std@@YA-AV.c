/*
 * XREFs of ??$make_shared@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x18009C900
 * Callers:
 *     _lambda_a111f9909dcb1fbe287f852ebd02ec50_::operator() @ 0x18009CB8C (_lambda_a111f9909dcb1fbe287f852ebd02ec50_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::PinWebsiteToTaskbarService,wchar_t const *,wchar_t const *,wchar_t const *>(
        _QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // r14

  v2 = operator new(0x78uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    *((_QWORD *)v2 + 2) = &CreativeFramework::Actions::PinWebsiteToTaskbarService::`vftable';
    std::wstring::wstring((__int64)(v2 + 6));
    std::wstring::wstring((__int64)(v3 + 14));
    std::wstring::wstring((__int64)(v3 + 22));
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
