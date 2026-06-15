/*
 * XREFs of ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18012DF00
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCharacteristics___::_Do_call @ 0x1800F95F0 (std--_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCh_ea_1800F95F0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180060820 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x1800839A8 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_aa1414ab8e95a4429593081bb8a30d1f_::_lambda_aa1414ab8e95a4429593081bb8a30d1f_ @ 0x1800EE940 (_lambda_aa1414ab8e95a4429593081bb8a30d1f_--_lambda_aa1414ab8e95a4429593081bb8a30d1f_.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___ @ 0x180127E18 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--share_ea_180127E18.c)
 *     wil::scope_exit__lambda_950500107a52a887eceb6991ca1e1e73___ @ 0x180127EFC (wil--scope_exit__lambda_950500107a52a887eceb6991ca1e1e73___.c)
 *     wil::details::lambda_call__lambda_6b0a4f3e8611b350c0fb59f48f63ecca___::_lambda_call__lambda_6b0a4f3e8611b350c0fb59f48f63ecca___ @ 0x180128708 (wil--details--lambda_call__lambda_6b0a4f3e8611b350c0fb59f48f63ecca___--_lambda_call__lambda_6b0a.c)
 *     ?ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z @ 0x18012AF68 (-ClearEffectPackDeviceIdFromFxPropStore@CEndpointCharacteristics@@AEAAXPEAU_GUID@@I@Z.c)
 *     ?ClearEffectPackPropertyKeyIfApplicable@CEndpointCharacteristics@@AEAAXU_GUID@@AEBU_tagpropertykey@@@Z @ 0x18012B0CC (-ClearEffectPackPropertyKeyIfApplicable@CEndpointCharacteristics@@AEAAXU_GUID@@AEBU_tagpropertyk.c)
 *     ?DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ @ 0x18012B874 (-DisconnectStreamsOnEndpoint@CEndpointCharacteristics@@AEAAXXZ.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x18012BCE8 (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?erase@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@2@0@Z @ 0x1801319A0 (-erase@-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::RemoveEffectPack(CEndpointCharacteristics *this, struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 *v5; // rdi
  __int128 *v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  const char *v14; // r9
  __int64 result; // rax
  int v16[2]; // [rsp+20h] [rbp-98h]
  int v17; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+38h] [rbp-80h] BYREF
  std::_Ref_count_base *v19; // [rsp+40h] [rbp-78h]
  struct _GUID v20; // [rsp+50h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v22[40]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v23[4]; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v17 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 320);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 8);
  v21 = v4;
  v5 = (__int64 *)((char *)this + 384);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v18, (_QWORD *)this + 48);
  v6 = (__int128 *)lambda_aa1414ab8e95a4429593081bb8a30d1f_::_lambda_aa1414ab8e95a4429593081bb8a30d1f_(
                     v23,
                     (__int64)this,
                     (__int64)a2,
                     (__int64)&v18,
                     (__int64)&v17);
  wil::scope_exit__lambda_950500107a52a887eceb6991ca1e1e73___((__int64)v22, v6);
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_5633c08dc3eb87d401f8469e9bff1b6c___(
    (__int64 **)&v20,
    *((__int64 **)this + 45),
    *((__int64 **)this + 46),
    a2);
  std::vector<std::shared_ptr<EffectPack>>::erase(
    (char *)this + 360,
    &v20,
    *(_QWORD *)&v20.Data1,
    *((_QWORD *)this + 46),
    *(_QWORD *)v16);
  try
  {
    v7 = *v5;
    if ( *v5 )
    {
      v8 = *(__m128i *)*(_QWORD *)(v7 + 1568);
      v9 = **(_QWORD **)(v7 + 1568);
      v10 = *(_QWORD *)&a2->Data1 - v9;
      if ( *(_QWORD *)&a2->Data1 == v9 )
        v10 = *(_QWORD *)a2->Data4 - _mm_srli_si128(v8, 8).m128i_u64[0];
      if ( !v10 )
      {
        v20 = *(struct _GUID *)*(_QWORD *)(v18 + 1568);
        CEndpointCharacteristics::ClearEffectPackPropertyKeyIfApplicable(
          this,
          &v20,
          &PKEY_AudioEndpoint_UserSelectedEffectPack);
        v20 = *(struct _GUID *)*(_QWORD *)(v18 + 1568);
        CEndpointCharacteristics::ClearEffectPackPropertyKeyIfApplicable(
          this,
          &v20,
          &PKEY_AudioEndpoint_LastSetEffectPack);
        v11 = CEndpointCharacteristics::DetermineCurrentEffectPack(this);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1481LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v11);
        v12 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists(this);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5CD,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v12);
          wil::details::lambda_call__lambda_6b0a4f3e8611b350c0fb59f48f63ecca___::_lambda_call__lambda_6b0a4f3e8611b350c0fb59f48f63ecca___((__int64)v22);
          if ( v19 )
            std::_Ref_count_base::_Decref(v19);
LABEL_11:
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
          return v13;
        }
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v18 + 1568) + 1320LL),
          *(_DWORD *)(*(_QWORD *)(v18 + 1568) + 1312LL));
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v18 + 1568) + 1352LL),
          *(_DWORD *)(*(_QWORD *)(v18 + 1568) + 1344LL));
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v18 + 1568) + 1384LL),
          *(_DWORD *)(*(_QWORD *)(v18 + 1568) + 1376LL));
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v18 + 1568) + 1416LL),
          *(_DWORD *)(*(_QWORD *)(v18 + 1568) + 1408LL));
        CEndpointCharacteristics::ClearEffectPackDeviceIdFromFxPropStore(
          this,
          *(struct _GUID **)(*(_QWORD *)(v18 + 1568) + 1448LL),
          *(_DWORD *)(*(_QWORD *)(v18 + 1568) + 1440LL));
        CEndpointCharacteristics::DisconnectStreamsOnEndpoint(this);
      }
    }
    v13 = v17;
    wil::details::lambda_call__lambda_6b0a4f3e8611b350c0fb59f48f63ecca___::_lambda_call__lambda_6b0a4f3e8611b350c0fb59f48f63ecca___((__int64)v22);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    goto LABEL_11;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5E4,
                           (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v14);
  }
  return result;
}
