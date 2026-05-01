/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DEB2C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1802951C0 (-serialize@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18021E898 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEAJ@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1805C2E4C (--$-RV-$nvp@AEA_N@tson@@V01@V01@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEAJ@1@V21@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAJ@1@11@Z @ 0x1805C2EC8 (--$-RV-$nvp@AEA_N@tson@@V01@V01@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-_ea_1805C2EC8.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAA_NXZ @ 0x1805DB3E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@QEAA_NXZ @ 0x1805DB464 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall _tip_CallDashboardExtensionTIP::serialize<tson::output_archive>(__int64 a1, int a2)
{
  const char *v5; // [rsp+48h] [rbp-79h] BYREF
  char v6; // [rsp+50h] [rbp-71h]
  __int64 v7; // [rsp+58h] [rbp-69h]
  const char *v8; // [rsp+60h] [rbp-61h] BYREF
  char v9; // [rsp+68h] [rbp-59h]
  __int64 v10; // [rsp+70h] [rbp-51h]
  const char *v11; // [rsp+78h] [rbp-49h] BYREF
  char v12; // [rsp+80h] [rbp-41h]
  __int64 v13; // [rsp+88h] [rbp-39h]
  const char *v14; // [rsp+90h] [rbp-31h] BYREF
  char v15; // [rsp+98h] [rbp-29h]
  __int64 v16; // [rsp+A0h] [rbp-21h]
  const char *v17; // [rsp+A8h] [rbp-19h] BYREF
  char v18; // [rsp+B0h] [rbp-11h]
  __int64 v19; // [rsp+B8h] [rbp-9h]
  const char *v20; // [rsp+C0h] [rbp-1h] BYREF
  char v21; // [rsp+C8h] [rbp+7h]
  __int64 v22; // [rsp+D0h] [rbp+Fh]
  const char *v23; // [rsp+D8h] [rbp+17h] BYREF
  char v24; // [rsp+E0h] [rbp+1Fh]
  __int64 v25; // [rsp+E8h] [rbp+27h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59874629>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59874629>::GetImpl'::`2'::impl) )
  {
    v9 = 16;
    v10 = a1 + 18;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60880818>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60880818>::GetImpl'::`2'::impl) )
    {
      v21 = 11;
      v20 = "extensionId";
      v24 = 12;
      v22 = a1 + 88;
      v18 = 2;
      v23 = "scenarioName";
      v19 = a1 + 20;
      v25 = a1 + 56;
      v6 = 15;
      v17 = "hr";
      v5 = "packageFullName";
      v8 = "isCallSuccessful";
      v11 = "isDashboardExtensionPresent";
      v14 = "isDashboardExtensionNull";
      v7 = a1 + 24;
      v12 = 27;
      v13 = a1 + 17;
      v15 = 24;
      v16 = a1 + 16;
      return tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(
               a2,
               (unsigned int)&v14,
               (unsigned int)&v11,
               (unsigned int)&v8,
               (__int64)&v5,
               (__int64)&v17,
               (__int64)&v23,
               (__int64)&v20);
    }
    else
    {
      v15 = 2;
      v14 = "hr";
      v16 = a1 + 20;
      v11 = "packageFullName";
      v12 = 15;
      v8 = "isCallSuccessful";
      v13 = a1 + 24;
      v5 = "isDashboardExtensionPresent";
      v6 = 27;
      v17 = "isDashboardExtensionNull";
      v7 = a1 + 17;
      v18 = 24;
      v19 = a1 + 16;
      return tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<long &>>(
               a2,
               (unsigned int)&v17,
               (unsigned int)&v5,
               (unsigned int)&v8,
               (__int64)&v11,
               (__int64)&v14);
    }
  }
  else
  {
    v15 = 15;
    v14 = "packageFullName";
    v12 = 16;
    v16 = a1 + 24;
    v9 = 27;
    v11 = "isCallSuccessful";
    v6 = 24;
    v13 = a1 + 18;
    v8 = "isDashboardExtensionPresent";
    v10 = a1 + 17;
    v5 = "isDashboardExtensionNull";
    v7 = a1 + 16;
    return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
             a2,
             (unsigned int)&v5,
             (unsigned int)&v8,
             (unsigned int)&v11,
             (__int64)&v14);
  }
}
