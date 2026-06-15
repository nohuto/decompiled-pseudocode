/*
 * XREFs of ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x18005E93C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180078A24 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18005E9F8 (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x18005EF88 (-CreateInstanceFromConfiguration@EffectPack@@SAJAEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::CreateDriverEffectPackInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = 0LL;
  v7 = EffectPackConfiguration::CreateDriverEffectPackConfiguration(a1, a2, &v10);
  if ( v7 < 0 )
  {
    v8 = 263LL;
    goto LABEL_4;
  }
  v7 = EffectPack::CreateInstanceFromConfiguration(&v10, a3, a4, a5);
  if ( v7 < 0 )
  {
    v8 = 266LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
      (const char *)(unsigned int)v7);
    if ( *((_QWORD *)&v10 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v10 + 1));
    return (unsigned int)v7;
  }
  *(_BYTE *)(*(_QWORD *)a5 + 2129LL) = 1;
  if ( *((_QWORD *)&v10 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v10 + 1));
  return 0LL;
}
