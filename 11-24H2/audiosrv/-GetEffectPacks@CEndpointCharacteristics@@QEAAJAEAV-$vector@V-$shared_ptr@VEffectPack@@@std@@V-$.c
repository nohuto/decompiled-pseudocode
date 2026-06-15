/*
 * XREFs of ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x18003F5A0
 * Callers:
 *     ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x18003F360 (-GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18003F674 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??$copy@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@0@0V10@@Z @ 0x18012F8E0 (--$copy@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VEffectPack@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetEffectPacks(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 320);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 320));
  v6 = a2[1];
  if ( *a2 != v6 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(*a2, v6);
    a2[1] = *a2;
  }
  try
  {
    v7 = *(_QWORD *)(a1 + 360);
    if ( (*(_QWORD *)(a1 + 368) - v7) >> 4 )
      std::copy<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<EffectPack>>>>,std::back_insert_iterator<std::vector<std::shared_ptr<EffectPack>>>>(
        &v10,
        v7,
        *(_QWORD *)(a1 + 368),
        a2);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x817,
                           (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                           v5);
  }
  return result;
}
