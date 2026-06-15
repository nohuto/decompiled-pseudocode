/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VIMuteControlHandler@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800D21E4
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VIMuteControlHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D2164 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VIMuteControlHandler@@@WRL@Microsoft@@.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIMuteControlHandler@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800D2134 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIMuteControlHandler@@@Details.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMuteControlHandler>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMuteControlHandler>(
        IMuteControlHandler *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IMuteControlHandler>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IMuteControlHandler>(a1);
  result = v1;
  *(_DWORD *)(v1 + 12) = 1;
  return result;
}
