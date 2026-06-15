/*
 * XREFs of ??$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA?AV?$shared_ptr@VSystemEffectChainDescriptor@@@0@XZ @ 0x18003A6EC
 * Callers:
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18003A494 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VSystemEffectChainDescriptor@@$$V@std@@YAXAEAVSystemEffectChainDescriptor@@@Z @ 0x180149F1C (--$_Construct_in_place@VSystemEffectChainDescriptor@@$$V@std@@YAXAEAVSystemEffectChainDescriptor.c)
 */

_QWORD *__fastcall std::make_shared<SystemEffectChainDescriptor,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x58uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<SystemEffectChainDescriptor>::`vftable';
    std::_Construct_in_place<SystemEffectChainDescriptor,>(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 4;
  return a1;
}
