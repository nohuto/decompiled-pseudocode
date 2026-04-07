/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1800E004C
 * Callers:
 *     ??$process@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@input_archive@tson@@AEAAXAEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@Z @ 0x1800DF99C (--$process@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@input_a.c)
 * Callees:
 *     ??$process@V?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@tson@@V?$nvp@AEA_N@2@V32@V?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@1@$$QEAV?$nvp@AEA_N@1@1$$QEAV?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@1@@Z @ 0x1800DFCA4 (--$process@V-$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@tson@@V-$nvp@AEA_N@2@V32@V-$.c)
 */

char __fastcall Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+30h] [rbp-9h] BYREF
  char v4; // [rsp+38h] [rbp-1h]
  __int64 v5; // [rsp+40h] [rbp+7h]
  const char *v6; // [rsp+48h] [rbp+Fh] BYREF
  char v7; // [rsp+50h] [rbp+17h]
  __int64 v8; // [rsp+58h] [rbp+1Fh]
  const char *v9; // [rsp+60h] [rbp+27h] BYREF
  char v10; // [rsp+68h] [rbp+2Fh]
  __int64 v11; // [rsp+70h] [rbp+37h]
  const char *v12; // [rsp+78h] [rbp+3Fh] BYREF
  char v13; // [rsp+80h] [rbp+47h]
  __int64 v14; // [rsp+88h] [rbp+4Fh]

  v4 = 12;
  v7 = 14;
  v3 = (__int64)"currentState";
  v10 = 14;
  v5 = a1 + 24;
  v13 = 14;
  v6 = "stateCompleted";
  v8 = a1 + 21;
  v9 = "visualsDeleted";
  v11 = a1 + 20;
  v12 = "transitionType";
  v14 = a1 + 16;
  return tson::input_archive::process<tson::nvp<enum winrt::Udwm::Transitions::ShellTransitionType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Udwm::Transitions::Private::Rotation::RotationState &>>(
           a2,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           &v3);
}
