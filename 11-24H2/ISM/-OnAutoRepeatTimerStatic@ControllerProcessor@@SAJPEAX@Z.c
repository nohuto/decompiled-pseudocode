/*
 * XREFs of ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x18006EB70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006EBC8 (-OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ControllerProcessor::OnAutoRepeatTimerStatic(ControllerProcessor *a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)0x8000FFFFLL,
      v3);
  v1 = ControllerProcessor::OnAutoRepeatTimer(a1);
  if ( v1 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1CB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
