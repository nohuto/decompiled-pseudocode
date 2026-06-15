/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x18009B988
 * Callers:
 *     ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x180019A00 (-Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z.c)
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180019DC0 (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180053E5C (--4-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectState@CProcess.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@AEAV?$allocator@U_tagpropertykey@@@0@AEA_K@Z @ 0x18009BA38 (--$_Allocate_at_least_helper@V-$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@A.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 */

__int64 __fastcall std::vector<CProcessingModeParameters::AudioEffectState>::_Clear_and_reserve_geometric(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0xCCCCCCCCCCCCCCCLL;
  if ( a2 > 0xCCCCCCCCCCCCCCCLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength(
      a1,
      a2);
  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2);
  v5 = v4 >> 1;
  if ( v4 <= 0xCCCCCCCCCCCCCCCLL - (v4 >> 1) )
  {
    v2 = v5 + v4;
    if ( v5 + v4 < a2 )
      v2 = a2;
  }
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16,0>(*(char **)a1, (const struct std::nothrow_t *)(20 * v4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v8 = v2;
  v6 = std::_Allocate_at_least_helper<std::allocator<_tagpropertykey>>(v4, &v8);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v6;
  result = v6 + 20 * v2;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
