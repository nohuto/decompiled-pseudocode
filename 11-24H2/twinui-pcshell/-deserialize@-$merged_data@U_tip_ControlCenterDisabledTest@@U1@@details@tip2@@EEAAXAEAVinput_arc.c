/*
 * XREFs of ?deserialize@?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1803772B0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x1801F608C (--$process@V-$nvp@AEA_N@tson@@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@0@Z.c)
 */

void __fastcall tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  const char *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  const char *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v7 = 23;
  v6 = "isControlCenterDisabled";
  v10 = 31;
  v4 = a1 + 273;
  if ( !a1 )
    v4 = 17LL;
  v8 = v4;
  v9 = "isDisableControlCenterPolicySet";
  v5 = a1 + 272;
  if ( !a1 )
    v5 = 16LL;
  v11 = v5;
  tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(a2, (__int64)&v9, (__int64)&v6);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
