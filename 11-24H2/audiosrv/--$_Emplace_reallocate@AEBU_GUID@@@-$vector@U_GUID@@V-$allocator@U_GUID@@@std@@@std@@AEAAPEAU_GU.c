/*
 * XREFs of ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1800C7FE4
 * Callers:
 *     ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x1800734E0 (-GetDiscoveredEffects@CAudioStream@@AEAAJAEAV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@@.c)
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x1800FFE04 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@@std@@YAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@0@AEAV?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@0@AEA_K@Z @ 0x18009E828 (--$_Allocate_at_least_helper@V-$allocator@V-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@std@@.c)
 *     ??$construct@U_GUID@@AEBU1@@?$_Default_allocator_traits@V?$allocator@U_GUID@@@std@@@std@@SAXAEAV?$allocator@U_GUID@@@1@QEAU_GUID@@AEBU3@@Z @ 0x1800C848C (--$construct@U_GUID@@AEBU1@@-$_Default_allocator_traits@V-$allocator@U_GUID@@@std@@@std@@SAXAEAV.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

char *__fastcall std::vector<_GUID>::_Emplace_reallocate<_GUID const &>(__int64 a1, char *a2, __int64 a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // r14
  char *v15; // r15
  void *v16; // rax
  char *v17; // r8
  _BYTE *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8
  char *result; // rax
  char *v22; // [rsp+58h] [rbp+10h] BYREF

  v6 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v8 = 0xFFFFFFFFFFFFFFFLL;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  v22 = (char *)v8;
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<std::shared_ptr<CXvmPowerReferenceManager>>>(
                  v10,
                  (unsigned __int64 *)&v22);
  v14 = v12;
  v22 = v12;
  try
  {
    v15 = &v12[v6 & 0xFFFFFFFFFFFFFFF0uLL];
    v16 = (void *)std::_Default_allocator_traits<std::allocator<_GUID>>::construct<_GUID,_GUID const &>(v13, v15, a3);
    v17 = *(char **)(a1 + 8);
    v18 = *(_BYTE **)a1;
    v19 = v16;
    if ( a2 == v17 )
    {
      v20 = v17 - v18;
    }
    else
    {
      memmove_0(v16, v18, (size_t)&a2[-*(_QWORD *)a1]);
      v19 = v15 + 16;
      v20 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v18 = a2;
    }
    memmove_0(v19, v18, v20);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = &v14[16 * v9];
    *(_QWORD *)(a1 + 16) = &v14[16 * v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(16 * v8));
    throw;
  }
  return result;
}
