/*
 * XREFs of ?on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1803C3D88
 * Callers:
 *     ?on_result@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x1803C3D10 (-on_result@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReporting.c)
 * Callees:
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x18005332C (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$UndockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBIAEBG@UndockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEAW4FullActivationTestSource@@AEBIAEBG@Z @ 0x1803AFCA4 (--$UndockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBIAEBG@U.c)
 */

void __fastcall _tip_SearchFullActivationTest::on_result(
        _tip_SearchFullActivationTest *this,
        const struct TipReportingInfo *a2)
{
  char v4; // si
  char v5; // r8
  char v6; // r9
  char v7; // r10
  char v8; // r11
  char v9; // bl
  char v10; // di
  char v11; // dl
  char v12; // cl
  bool v13[8]; // [rsp+30h] [rbp-20h] BYREF
  const unsigned __int16 *v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  char v16; // [rsp+41h] [rbp-Fh]
  char v17; // [rsp+42h] [rbp-Eh]
  char v18; // [rsp+43h] [rbp-Dh]
  char v19; // [rsp+44h] [rbp-Ch]
  char v20; // [rsp+45h] [rbp-Bh]
  char v21; // [rsp+46h] [rbp-Ah]
  char v22; // [rsp+47h] [rbp-9h]
  struct winrt::impl::shared_hstring_header *v23; // [rsp+48h] [rbp-8h] BYREF

  v4 = *((_BYTE *)a2 + 40);
  v5 = *((_BYTE *)a2 + 28);
  v6 = *((_BYTE *)a2 + 29);
  v7 = *((_BYTE *)a2 + 30);
  v8 = *((_BYTE *)a2 + 31);
  v9 = *((_BYTE *)a2 + 32);
  v10 = *((_BYTE *)a2 + 33);
  v11 = *((_BYTE *)a2 + 34);
  v12 = *((_BYTE *)a2 + 35);
  v14 = *(const unsigned __int16 **)((char *)a2 + 20);
  v15 = v5;
  v16 = v6;
  v17 = v7;
  v18 = v8;
  v19 = v9;
  v20 = v10;
  v21 = v11;
  v22 = v12;
  winrt::to_hstring(&v23, (unsigned int *)&v14);
  v13[0] = (unsigned __int8)(v4 - 1) <= 1u;
  v14 = winrt::hstring::c_str((winrt::hstring *)&v23);
  UndockedSearchExperienceManagerTIPTelemetry::UndockedSearchExperienceManager_ShowResult<bool &,unsigned short const *,enum FullActivationTestSource &,unsigned int const &,unsigned short const &>(
    v13,
    (__int64 *)&v14,
    (int *)this + 4,
    (int *)a2 + 25,
    (unsigned __int16 *)a2 + 21);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v23);
}
