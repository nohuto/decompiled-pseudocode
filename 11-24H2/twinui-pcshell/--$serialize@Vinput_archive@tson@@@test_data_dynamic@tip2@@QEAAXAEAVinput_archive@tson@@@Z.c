/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1803B4320
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1803C25F0 (-deserialize@-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180329C38 (--$-RV-$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1803B4294 (--$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive.c)
 *     ?serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVinput_archive@tson@@@Z @ 0x1803C475C (-serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVinput_archive@tson@@@Z.c)
 */

void __fastcall tip2::test_data_dynamic::serialize<tson::input_archive>(
        tip2::test_data_dynamic *this,
        struct tson::input_archive *a2)
{
  int v4; // esi
  int v5; // ebp
  const char *v6; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+28h] [rbp-20h]
  char *v8; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x60000;
  v5 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000;
  if ( (v5 || v4 == 393216) && (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x40000) != 0 )
    tip2::details::stored_flag_requirements::serialize<tson::input_archive>((__int64)this + 8, a2);
  if ( v5 )
  {
    v7 = 6;
    v6 = "req_cb";
    v8 = (char *)this + 184;
    tson::input_archive::operator()<tson::nvp<bool &>>((__int64 *)a2, (__int64)&v6);
  }
  else if ( v4 != 393216 )
  {
    tip2::test_data_dynamic::serialize_properties(this, a2);
  }
}
