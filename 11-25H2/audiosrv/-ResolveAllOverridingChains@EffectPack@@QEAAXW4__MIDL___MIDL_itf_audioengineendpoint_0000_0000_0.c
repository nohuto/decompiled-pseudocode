/*
 * XREFs of ?ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005A690
 * Callers:
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037BF8 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180036310 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 */

void __fastcall EffectPack::ResolveAllOverridingChains(EffectPack *this, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi

  v2 = (int)a2;
  if ( (unsigned __int64)(int)a2 >= *((_QWORD *)this + 180)
    || (v4 = 96LL * (int)a2,
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v4 + *((_QWORD *)this + 181))),
        v2 >= *((_QWORD *)this + 182))
    || (SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v4 + *((_QWORD *)this + 183))),
        v2 >= *((_QWORD *)this + 184)) )
  {
    _o_terminate(this, a2);
    __debugbreak();
    JUMPOUT(0x18005A711LL);
  }
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v4 + *((_QWORD *)this + 185)));
}
