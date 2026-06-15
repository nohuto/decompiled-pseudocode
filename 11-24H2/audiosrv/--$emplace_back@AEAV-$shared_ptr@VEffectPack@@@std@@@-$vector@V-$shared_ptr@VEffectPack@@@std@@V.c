/*
 * XREFs of ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VEffectPack@@@1@@Z @ 0x18012FB58
 * Callers:
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x180132AD4 (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180136B84 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ??$_Construct_in_place@V?$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV?$shared_ptr@VEffectPack@@@0@0@Z @ 0x1800FB688 (--$_Construct_in_place@V-$shared_ptr@VEffectPack@@@std@@AEAV12@@std@@YAXAEAV-$shared_ptr@VEffect.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEAV21@@Z @ 0x18012EAA0 (--$_Emplace_reallocate@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 */

char *__fastcall std::vector<std::shared_ptr<EffectPack>>::emplace_back<std::shared_ptr<EffectPack> &>(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rcx

  v3 = (_QWORD *)a1[1];
  if ( v3 == (_QWORD *)a1[2] )
    return std::vector<std::shared_ptr<EffectPack>>::_Emplace_reallocate<std::shared_ptr<EffectPack> &>(
             a1,
             (__int64)v3,
             a2);
  std::_Construct_in_place<std::shared_ptr<EffectPack>,std::shared_ptr<EffectPack> &>(v3, a2);
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 8) = v5 + 16;
  return (char *)v5;
}
