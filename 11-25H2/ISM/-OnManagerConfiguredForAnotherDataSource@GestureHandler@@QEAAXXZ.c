/*
 * XREFs of ?OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ @ 0x180144A48
 * Callers:
 *     ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x180099E08 (-OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z.c)
 * Callees:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x1800585F8 (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180144B64 (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 */

void __fastcall GestureHandler::OnManagerConfiguredForAnotherDataSource(GestureHandler *this)
{
  int v1; // eax
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 57);
  if ( !v1 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
      (const char *)0x8000FFFFLL,
      v4);
  v3 = v1 - 1;
  *((_DWORD *)this + 57) = v3;
  if ( !v3 && !*((_DWORD *)this + 58) && !*((_DWORD *)this + 59) )
  {
    GestureHandler::SendAnimationEndedIfNeeded(this);
    GestureHandler::CleanupAnimationDataIfNeeded(this);
  }
}
