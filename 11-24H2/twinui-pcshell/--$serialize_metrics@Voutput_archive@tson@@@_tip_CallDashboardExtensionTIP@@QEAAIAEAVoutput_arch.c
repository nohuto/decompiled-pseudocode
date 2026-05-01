/*
 * XREFs of ??$serialize_metrics@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAIAEAVoutput_archive@tson@@@Z @ 0x1805C992C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1802951C0 (-serialize@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18010FC00 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$?RV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C27C8 (--$-RV-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@@output_arch.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@QEAA_NXZ @ 0x1805DB464 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall _tip_CallDashboardExtensionTIP::serialize_metrics<tson::output_archive>(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  const unsigned __int8 *v5; // rbx
  const unsigned __int8 *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int appended; // eax
  int v13; // r11d
  const char *v15; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+28h] [rbp-20h]
  const unsigned __int8 *v17; // [rsp+30h] [rbp-18h]

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60880818>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60880818>::GetImpl'::`2'::impl) )
    return 0LL;
  v16 = 11;
  v5 = (const unsigned __int8 *)(a1 + 88);
  v15 = "extensionId";
  v17 = (const unsigned __int8 *)(a1 + 88);
  tson::output_archive::operator()<tson::nvp<std::wstring &>>(a2, (__int64)&v15, v4);
  v16 = 12;
  v6 = (const unsigned __int8 *)(a1 + 56);
  v15 = "scenarioName";
  v17 = v6;
  tson::output_archive::operator()<tson::nvp<std::wstring &>>(a2, (__int64)&v15, v7);
  v9 = *((_QWORD *)v6 + 2);
  if ( *((_QWORD *)v6 + 3) > 7uLL )
    v6 = *(const unsigned __int8 **)v6;
  std::_Fnv1a_append_bytes(v8, v6, 2 * v9);
  v11 = *((_QWORD *)v5 + 2);
  if ( *((_QWORD *)v5 + 3) > 7uLL )
    v5 = *(const unsigned __int8 **)v5;
  appended = std::_Fnv1a_append_bytes(v10, v5, 2 * v11);
  return (v13 << 16) ^ appended;
}
