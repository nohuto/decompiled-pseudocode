/*
 * XREFs of ??0SetDefaultApplicationService@Actions@CreativeFramework@@QEAA@PEB_W00@Z @ 0x180097658
 * Callers:
 *     ??$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDefaultApplicationService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800975C4 (--$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
CreativeFramework::Actions::SetDefaultApplicationService *__fastcall CreativeFramework::Actions::SetDefaultApplicationService::SetDefaultApplicationService(
        CreativeFramework::Actions::SetDefaultApplicationService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  const WCHAR *v5; // rsi
  wchar_t **i; // rbx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::SetDefaultApplicationService::`vftable';
  std::wstring::wstring((__int64)this + 8);
  std::wstring::wstring((__int64)this + 40);
  v5 = (const WCHAR *)((char *)this + 72);
  std::wstring::wstring((__int64)this + 72);
  if ( *((_QWORD *)this + 12) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  for ( i = &off_1800DD1B0; ; i += 2 )
  {
    if ( i == &off_1800DD1D0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
        (const char *)0x80070057LL,
        bIgnoreCase);
    if ( CompareStringOrdinal(*i, -1, v5, -1, 1) == 2 )
      break;
  }
  *((_DWORD *)this + 26) = *((_DWORD *)i + 2);
  return this;
}
