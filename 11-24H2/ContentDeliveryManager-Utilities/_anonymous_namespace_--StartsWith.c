/*
 * XREFs of _anonymous_namespace_::StartsWith @ 0x1800583F8
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x1800465F4 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x1800467C8 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x18004697C (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K1@Z @ 0x18005DA24 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K1@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18005DE84 (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

bool anonymous_namespace_::StartsWith()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF

  v0 = std::wstring::wstring((__int64)v7);
  v1 = std::char_traits<wchar_t>::length(L"SubscribedContent");
  v3 = std::wstring::find(v0, L"SubscribedContent", v2, v1);
  LOBYTE(v4) = 1;
  v5 = v3;
  std::wstring::_Tidy(v7, v4, 0LL);
  return v5 == 0;
}
