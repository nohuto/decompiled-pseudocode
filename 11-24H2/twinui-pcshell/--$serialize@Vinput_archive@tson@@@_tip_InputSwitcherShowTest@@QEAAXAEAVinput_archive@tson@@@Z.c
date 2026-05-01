/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_InputSwitcherShowTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180638E1C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18063A420 (-deserialize@-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@EEAAXAEAVinput_archive.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@1@0@Z @ 0x18059BE48 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAW4__MIDL___MIDL_itf_inputswitchexperienc.c)
 */

__int64 __fastcall _tip_InputSwitcherShowTest::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  __int64 v3; // [rsp+88h] [rbp-11h] BYREF
  char v4; // [rsp+90h] [rbp-9h]
  __int64 v5; // [rsp+98h] [rbp-1h]
  const char *v6; // [rsp+A0h] [rbp+7h] BYREF
  char v7; // [rsp+A8h] [rbp+Fh]
  __int64 v8; // [rsp+B0h] [rbp+17h]
  const char *v9; // [rsp+B8h] [rbp+1Fh] BYREF
  char v10; // [rsp+C0h] [rbp+27h]
  __int64 v11; // [rsp+C8h] [rbp+2Fh]
  const char *v12; // [rsp+D0h] [rbp+37h] BYREF
  char v13; // [rsp+D8h] [rbp+3Fh]
  __int64 v14; // [rsp+E0h] [rbp+47h]

  v4 = 11;
  v7 = 7;
  v3 = (__int64)"showSuccess";
  v5 = a1 + 19;
  v6 = "canShow";
  v8 = a1 + 18;
  v9 = "controlCenterAvailable";
  v11 = a1 + 17;
  v12 = "timedOut";
  v14 = a1 + 16;
  v10 = 22;
  v13 = 8;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum __MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001 &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
