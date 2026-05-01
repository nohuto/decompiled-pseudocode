/*
 * XREFs of ?RuntimeClassInitialize@VoiceAssistantPositioner@@QEAAJXZ @ 0x1800D7F68
 * Callers:
 *     ??$MakeAndInitialize@VVoiceAssistantPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800D7EA0 (--$MakeAndInitialize@VVoiceAssistantPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall VoiceAssistantPositioner::RuntimeClassInitialize(VoiceAssistantPositioner *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (VoiceAssistantPositioner *)((char *)this + 40),
         &GUID_e3900af7_62d2_42e3_a4c8_70a72baad63f);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9E,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
