/*
 * XREFs of ?serialize@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800E37D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@0@@Z @ 0x1800DFE14 (--$save_nothrow@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@ts.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E29F8 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E38FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2, v6, v7, v8);
  }
  if ( (a3 & 1) != 0 )
  {
    v10 = 4;
    v9 = "test";
    v11 = (a1 + 256) & -(__int64)(a1 != 0);
    tson::save_nothrow<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest &>(a2, (__int64)&v9);
  }
}
