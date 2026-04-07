/*
 * XREFs of ??$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@0@@Z @ 0x1800DFE14
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800E37D0 (-serialize@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udw.c)
 * Callees:
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DF464 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800E3124 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E38FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::save_nothrow<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest &>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  *((_BYTE *)this + 8) = 14;
  *(_QWORD *)this = "transitionType";
  tson::output_archive::saveValue(this, *(_DWORD *)(v4 + 16));
  *((_BYTE *)this + 8) = 14;
  *(_QWORD *)this = "visualsDeleted";
  tson::output_archive::operator()<bool &>((__int64)this, (char *)(v4 + 20), v5);
  *((_BYTE *)this + 8) = 14;
  *(_QWORD *)this = "stateCompleted";
  tson::output_archive::operator()<bool &>((__int64)this, (char *)(v4 + 21), v6);
  *((_BYTE *)this + 8) = 12;
  *(_QWORD *)this = "currentState";
  tson::output_archive::saveValue(this, *(_DWORD *)(v4 + 24));
  tson::output_archive::finishNode(this);
}
