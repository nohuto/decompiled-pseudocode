/*
 * XREFs of ?InitializeOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x180111774
 * Callers:
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1801112C4 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x180110FE4 (-CreateOverlapEvent@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::InitializeOverlapEvent(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  HANDLE v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 98) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x40,
      (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
  v5 = OpenEventA(0x1F0003u, 0, "ManipulationInjectorEnableOverlapEvent");
  *((_QWORD *)this + 98) = v5;
  if ( !v5 )
    ManipulationInjector::CreateOverlapEvent(this);
}
