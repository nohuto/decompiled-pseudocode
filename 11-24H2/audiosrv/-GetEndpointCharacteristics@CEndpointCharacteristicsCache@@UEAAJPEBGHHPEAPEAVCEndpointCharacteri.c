/*
 * XREFs of ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18008C890
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18009C798 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId@@@details@wil@@QEAA_NXZ @ 0x1800EFBDC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndp.c)
 *     ?GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@HHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18013466C (-GetEndpointCharacteristics_sanitizedId@CEndpointCharacteristicsCache@@AEAAJAEAV-$basic_string@G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristicsCache::GetEndpointCharacteristics(
        CEndpointCharacteristicsCache *this,
        const unsigned __int16 *a2,
        int a3,
        int a4,
        struct CEndpointCharacteristics **a5)
{
  int v7; // r13d
  __int64 v8; // r8
  __int128 *v9; // rdi
  __int128 *v10; // rcx
  unsigned __int16 *v11; // rsi
  unsigned __int16 *v12; // rbx
  unsigned int EndpointCharacteristics_sanitizedId; // ebx
  const char *v14; // r9
  const struct std::nothrow_t *v15; // rdx
  void *v16; // rcx
  __int64 result; // rax
  __int128 v18; // [rsp+38h] [rbp-50h] BYREF
  __int128 v19; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v7 = (int)this;
  v18 = 0LL;
  v19 = 0LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  try
  {
    std::wstring::_Construct<1,unsigned short const *>(&v18, a2);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ForceSanitizationOfEndpointId>::GetImpl'::`2'::impl) )
    {
      v9 = &v18;
      if ( *((_QWORD *)&v19 + 1) > 7uLL )
        v9 = (__int128 *)v18;
      v10 = &v18;
      if ( *((_QWORD *)&v19 + 1) > 7uLL )
        v10 = (__int128 *)v18;
      v11 = (unsigned __int16 *)v10 + v19;
      v12 = (unsigned __int16 *)&v18;
      if ( *((_QWORD *)&v19 + 1) > 7uLL )
        v12 = (unsigned __int16 *)v18;
      while ( v12 != v11 )
      {
        *(_WORD *)v9 = ((__int64 (__fastcall *)(_QWORD))_o_towlower)(*v12++);
        v9 = (__int128 *)((char *)v9 + 2);
      }
    }
    EndpointCharacteristics_sanitizedId = CEndpointCharacteristicsCache::GetEndpointCharacteristics_sanitizedId(
                                            v7,
                                            (unsigned int)&v18,
                                            a3,
                                            a4,
                                            (__int64)a5);
    if ( *((_QWORD *)&v19 + 1) > 7uLL )
    {
      v15 = (const struct std::nothrow_t *)(2LL * *((_QWORD *)&v19 + 1) + 2);
      v16 = (void *)v18;
      if ( (unsigned __int64)v15 >= 0x1000 )
      {
        v15 = (const struct std::nothrow_t *)(2LL * *((_QWORD *)&v19 + 1) + 41);
        v16 = *(void **)(v18 - 8);
        if ( (unsigned __int64)(v18 - (_QWORD)v16 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v16, v15);
          __debugbreak();
        }
      }
      operator delete(v16, v15);
    }
    result = EndpointCharacteristics_sanitizedId;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14C9,
                           (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v14);
  }
  return result;
}
