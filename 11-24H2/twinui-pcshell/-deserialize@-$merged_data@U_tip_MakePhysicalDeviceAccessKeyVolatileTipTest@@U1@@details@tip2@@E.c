/*
 * XREFs of ?deserialize@?$merged_data@U_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180642780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

tson::input_archive *__fastcall tip2::details::merged_data<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest,_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  return tson::input_archive::operator()<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest &>(
           (tson::input_archive *)a2,
           (a1 + 256) & -(__int64)(a1 != 0));
}
