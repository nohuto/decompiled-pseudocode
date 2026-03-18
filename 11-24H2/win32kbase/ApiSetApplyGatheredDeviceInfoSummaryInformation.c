/*
 * XREFs of ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x14006C740
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14006C4E8 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x14013E6E0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetApplyGatheredDeviceInfoSummaryInformation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6))(void)
{
  int v8; // esi
  int v9; // ebp
  __int64 (*result)(void); // rax

  v8 = a2;
  v9 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5488LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))ApplyGatheredDeviceInfoSummaryInformation(v9, v8, a3, a4, a5, a6);
  }
  return result;
}
