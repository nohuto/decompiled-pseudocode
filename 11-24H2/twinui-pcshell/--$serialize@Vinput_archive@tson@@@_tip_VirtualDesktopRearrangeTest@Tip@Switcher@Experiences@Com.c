/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18049396C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1804960E0 (-deserialize@-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composable.c)
 * Callees:
 *     ??$process@V?$nvp@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tson@@V?$nvp@AEAI@2@V?$nvp@AEA_N@2@V42@V42@V42@V?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEA_N@1@222$$QEAV?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x1804936A0 (--$process@V-$nvp@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  const char *v3; // [rsp+40h] [rbp-59h] BYREF
  char v4; // [rsp+48h] [rbp-51h]
  __int64 v5; // [rsp+50h] [rbp-49h]
  const char *v6; // [rsp+58h] [rbp-41h] BYREF
  char v7; // [rsp+60h] [rbp-39h]
  __int64 v8; // [rsp+68h] [rbp-31h]
  const char *v9; // [rsp+70h] [rbp-29h] BYREF
  char v10; // [rsp+78h] [rbp-21h]
  __int64 v11; // [rsp+80h] [rbp-19h]
  __int64 v12; // [rsp+88h] [rbp-11h] BYREF
  char v13; // [rsp+90h] [rbp-9h]
  __int64 v14; // [rsp+98h] [rbp-1h]
  __int64 v15; // [rsp+A0h] [rbp+7h] BYREF
  char v16; // [rsp+A8h] [rbp+Fh]
  __int64 v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh] BYREF
  char v19; // [rsp+C0h] [rbp+27h]
  __int64 v20; // [rsp+C8h] [rbp+2Fh]
  __int64 v21; // [rsp+D0h] [rbp+37h] BYREF
  char v22; // [rsp+D8h] [rbp+3Fh]
  __int64 v23; // [rsp+E0h] [rbp+47h]

  v4 = 12;
  v3 = "switcherType";
  v7 = 25;
  v5 = a1 + 20;
  v10 = 18;
  v6 = "areModificationsSuspended";
  v13 = 26;
  v8 = a1 + 28;
  v16 = 21;
  v9 = "isUIAlreadyUpdated";
  v11 = a1 + 31;
  v12 = (__int64)"didVirtualDesktopDisappear";
  v14 = a1 + 30;
  v15 = (__int64)"isRequestingSameIndex";
  v17 = a1 + 29;
  v18 = (__int64)"destinationIndex";
  v20 = a1 + 24;
  v21 = (__int64)"activationMethod";
  v23 = a1 + 16;
  v19 = 16;
  v22 = 16;
  return tson::input_archive::process<tson::nvp<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::ActivationMethod &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::SwitcherType &>>(
           a2,
           (__int64)&v21,
           (__int64)&v18,
           &v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
