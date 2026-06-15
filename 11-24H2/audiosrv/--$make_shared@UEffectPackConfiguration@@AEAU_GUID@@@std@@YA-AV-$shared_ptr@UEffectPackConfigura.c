/*
 * XREFs of ??$make_shared@UEffectPackConfiguration@@AEAU_GUID@@@std@@YA?AV?$shared_ptr@UEffectPackConfiguration@@@0@AEAU_GUID@@@Z @ 0x180143804
 * Callers:
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180144864 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@UEffectPackConfiguration@@AEAU_GUID@@@std@@YAXAEAUEffectPackConfiguration@@AEAU_GUID@@@Z @ 0x180050AD4 (--$_Construct_in_place@UEffectPackConfiguration@@AEAU_GUID@@@std@@YAXAEAUEffectPackConfiguration.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<EffectPackConfiguration,_GUID &>(_QWORD *a1, struct _GUID *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x818uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<EffectPackConfiguration>::`vftable';
    std::_Construct_in_place<EffectPackConfiguration,_GUID &>((EffectPackConfiguration *)(v4 + 4), a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
