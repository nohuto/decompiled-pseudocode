/*
 * XREFs of ??$?RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@input_archive@tson@@QEAAAEAV01@AEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@Z @ 0x18063C1CC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180642780 (-deserialize@-$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@E.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00@Z @ 0x180183140 (--$-RV-$nvp@AEA_N@tson@@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@00@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x180183750 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest &>(
        tson::input_archive *this,
        __int64 a2)
{
  const char *v5; // [rsp+20h] [rbp-50h] BYREF
  char v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h]
  const char *v8; // [rsp+38h] [rbp-38h] BYREF
  char v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  const char *v11; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h]

  tson::input_archive::startNode(this);
  v6 = 28;
  v5 = "isPhysicalDeviceAccessKeySet";
  v9 = 32;
  v7 = a2 + 18;
  v12 = 32;
  v8 = "isPhysicalDeviceAccessKeyCreated";
  v10 = a2 + 17;
  v11 = "isPhysicalDeviceAccessKeyDeleted";
  v13 = a2 + 16;
  tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
    (__int64)this,
    (__int64)&v11,
    (__int64)&v8,
    (__int64 *)&v5);
  tson::input_archive::finishNode(this);
  return this;
}
