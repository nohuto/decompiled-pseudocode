/*
 * XREFs of ??$save_nothrow@AEAU_tip_PerformLocalActionTipTest@@@tson@@YAXAEAVoutput_archive@0@AEAV?$nvp@AEAU_tip_PerformLocalActionTipTest@@@0@@Z @ 0x180647A90
 * Callers:
 *     ?serialize@?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180654B40 (-serialize@-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DD708 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::save_nothrow<_tip_PerformLocalActionTipTest &>(tson::output_archive *this, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // r8
  const char *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  const char *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v10 = 31;
  v9 = "isImmersiveRemoteSessionNotTrue";
  v7 = 29;
  v11 = v4 + 21;
  v6 = "failedToGetHostServicesObject";
  v8 = v4 + 20;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, (__int64)&v6);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, (__int64)&v9);
  *((_BYTE *)this + 8) = 20;
  *(_QWORD *)this = "localActionPerformed";
  tson::output_archive::saveValue(this, *(unsigned int *)(v4 + 16), v5);
  tson::output_archive::finishNode(this);
}
