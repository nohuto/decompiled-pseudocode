/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBaseMemory@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x14002289C
 * Callers:
 *     ??$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@$$QEAPEAXAEAI@Z @ 0x140022478 (--$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Micr.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCCrossProcessBaseMemory@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1400228BC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VCCrossPro.c)
 */

__int64 Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCrossProcessBaseMemory>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCrossProcessBaseMemory>()
{
  __int64 v0; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCrossProcessBaseMemory>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCrossProcessBaseMemory>>();
  result = v0;
  *(_DWORD *)(v0 + 44) = 1;
  return result;
}
