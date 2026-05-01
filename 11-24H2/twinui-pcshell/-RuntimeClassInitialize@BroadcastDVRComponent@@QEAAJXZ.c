/*
 * XREFs of ?RuntimeClassInitialize@BroadcastDVRComponent@@QEAAJXZ @ 0x1802C8154
 * Callers:
 *     ??$MakeAndInitialize@VBroadcastDVRComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801E4058 (--$MakeAndInitialize@VBroadcastDVRComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180043C40 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::RuntimeClassInitialize(BroadcastDVRComponent *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (BroadcastDVRComponent *)((char *)this + 56),
         (__int64)&unk_18078DA40,
         2uLL);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
