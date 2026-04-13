/*
 * XREFs of _anonymous_namespace_::SplitString @ 0x180057848
 * Callers:
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18004E4AC (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?GetEventNameFromToken@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18005168C (-GetEventNameFromToken@ContentManagement@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x180051B00 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?find_first_not_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18005D63C (-find_first_not_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?find_first_of@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z @ 0x18005D6C4 (-find_first_of@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K@Z.c)
 *     ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18005DCF4 (-push_back@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18005E2F8 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall anonymous_namespace_::SplitString(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 first_not_of; // r14
  __int64 first_of; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v11; // [rsp+20h] [rbp-68h]
  _QWORD *v12; // [rsp+28h] [rbp-60h]
  _BYTE v13[32]; // [rsp+30h] [rbp-58h] BYREF

  v12 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v11 = 1;
  if ( *(_QWORD *)(a2 + 16) )
  {
    first_not_of = std::wstring::find_first_not_of(a2, a3);
    do
    {
      first_of = std::wstring::find_first_of(a2, a3, first_not_of);
      v8 = std::wstring::substr(a2, v13, first_not_of, first_of - first_not_of, v11, v12);
      std::vector<std::wstring>::push_back(a1, v8);
      LOBYTE(v9) = 1;
      std::wstring::_Tidy(v13, v9, 0LL);
      first_not_of = first_of + 1;
    }
    while ( first_of != -1 );
  }
  return a1;
}
