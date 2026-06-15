/*
 * XREFs of ??$_Construct_in_place@UEffectPackConfiguration@@AEAU_GUID@@@std@@YAXAEAUEffectPackConfiguration@@AEAU_GUID@@@Z @ 0x18005F064
 * Callers:
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18005E9F8 (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18013BD94 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 * Callees:
 *     ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x180091068 (--0EffectPackConfiguration@@QEAA@U_GUID@@@Z.c)
 */

EffectPackConfiguration *__fastcall std::_Construct_in_place<EffectPackConfiguration,_GUID &>(
        EffectPackConfiguration *a1,
        struct _GUID *a2)
{
  struct _GUID v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  return EffectPackConfiguration::EffectPackConfiguration(a1, &v3);
}
