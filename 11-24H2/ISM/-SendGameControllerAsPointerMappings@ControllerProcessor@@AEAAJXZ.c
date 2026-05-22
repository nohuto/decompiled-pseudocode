/*
 * XREFs of ?SendGameControllerAsPointerMappings@ControllerProcessor@@AEAAJXZ @ 0x18017BCF8
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18008A190 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV?$optional@W4GameInputGamepadButtons@@@std@@0@Z @ 0x180179810 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV-$optional@W4GameInputGamepadButtons@@@st.c)
 */

__int64 __fastcall ControllerProcessor::SendGameControllerAsPointerMappings(ControllerProcessor *this)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+38h] [rbp+10h]
  __int64 v6; // [rsp+40h] [rbp+18h]

  BYTE4(v5) = 0;
  BYTE4(v6) = 0;
  v1 = ControllerProcessor::BuildAndSendMouseInputInfo(this, v6, v5);
  if ( v1 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x500,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
