/*
 * XREFs of ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x1800509F8
 * Callers:
 *     ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x1800503AC (-CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics.c)
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x180132AD4 (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005009C (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Construct_in_place@VEffectPack@@AEAPEBU_tlgProvider_t@@AEAPEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@YAXAEAVEffectPack@@AEAPEBU_tlgProvider_t@@AEAPEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@0@@Z @ 0x1800A2568 (--$_Construct_in_place@VEffectPack@@AEAPEBU_tlgProvider_t@@AEAPEAVCEndpointCharacteristics@@AEAV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::CreateInstanceFromConfiguration(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  std::_Ref_count_base *v6; // rax
  std::_Ref_count_base *v7; // rbx
  const char *v8; // r9
  __int64 result; // rax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v6 = (std::_Ref_count_base *)operator new(0x868uLL);
  try
  {
    v7 = v6;
    *(_QWORD *)v10 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *((_DWORD *)v6 + 2) = 1;
      *((_DWORD *)v6 + 3) = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<EffectPack>::`vftable';
      std::_Construct_in_place<EffectPack,_tlgProvider_t const * &,CEndpointCharacteristics * &,std::shared_ptr<EffectPackConfiguration const> &>(
        (char *)v6 + 16,
        &v14,
        &v13,
        a1,
        *(_QWORD *)v10);
    }
    else
    {
      v7 = 0LL;
    }
    *(_QWORD *)v10 = (char *)v7 + 16;
    v11 = v7;
    std::shared_ptr<std::function<void (void)>>::operator=(a4, (__int64 *)v10);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    if ( *a4 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFE,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x101,
                           (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                           v8);
  }
  return result;
}
