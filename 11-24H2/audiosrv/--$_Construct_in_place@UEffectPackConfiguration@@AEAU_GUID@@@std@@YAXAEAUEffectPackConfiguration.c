/*
 * XREFs of ??$_Construct_in_place@UEffectPackConfiguration@@AEAU_GUID@@@std@@YAXAEAUEffectPackConfiguration@@AEAU_GUID@@@Z @ 0x180050AD4
 * Callers:
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180050468 (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ??$make_shared@UEffectPackConfiguration@@AEAU_GUID@@@std@@YA?AV?$shared_ptr@UEffectPackConfiguration@@@0@AEAU_GUID@@@Z @ 0x180143804 (--$make_shared@UEffectPackConfiguration@@AEAU_GUID@@@std@@YA-AV-$shared_ptr@UEffectPackConfigura.c)
 * Callees:
 *     ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x18008D854 (--0EffectPackConfiguration@@QEAA@U_GUID@@@Z.c)
 */

EffectPackConfiguration *__fastcall std::_Construct_in_place<EffectPackConfiguration,_GUID &>(
        EffectPackConfiguration *a1,
        struct _GUID *a2)
{
  struct _GUID v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  return EffectPackConfiguration::EffectPackConfiguration(a1, &v3);
}
