/*
 * XREFs of ?CreateOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x180110FE4
 * Callers:
 *     ?InitializeOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x180111774 (-InitializeOverlapEvent@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800D1308 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall ManipulationInjector::CreateOverlapEvent(ManipulationInjector *this)
{
  HANDLE v2; // rax
  DWORD LastError; // eax
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_QWORD *)this + 98) = 0LL;
  memset(&EventAttributes, 0, sizeof(EventAttributes));
  EventAttributes.nLength = 24;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;S-1-5-90-0)(A;;GA;;;AC)(A;;GA;;;WD)(A;;GA;;;S-1-15-3-1024-1502825166-1963708345-2616377461-25628970"
           "74-4192028372-3968301570-1997628692-1435953622)",
          1u,
          &EventAttributes.lpSecurityDescriptor,
          0LL)
    || (v2 = CreateEventExA(&EventAttributes, "ManipulationInjectorEnableOverlapEvent", 0, 0x1F0003u),
        (*((_QWORD *)this + 98) = v2) == 0LL) )
  {
    LastError = GetLastError();
    if ( LastError )
      wil::details::in1diag3::_FailFast_Win32(
        retaddr,
        112LL,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)LastError,
        EventAttributes.nLength);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x73,
      (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)0x80004005LL,
      EventAttributes.nLength);
  }
}
