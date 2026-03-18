/*
 * XREFs of RIMSetDeviceInputMode @ 0x14017D314
 * Callers:
 *     ?RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1401E3CB8 (-RIMSetInputManagerInputMode@@YAXPEAURawInputManagerObject@@W4_WIN32K_INPUT_MODE@@@Z.c)
 *     _lambda_015c32a42809731270cc377abf7a5008_::operator() @ 0x1401F2A28 (_lambda_015c32a42809731270cc377abf7a5008_--operator().c)
 * Callees:
 *     RIMIsWakeCapableDevice @ 0x1400690A8 (RIMIsWakeCapableDevice.c)
 *     RIMUpdateDeviceForInputMode @ 0x1400B0C70 (RIMUpdateDeviceForInputMode.c)
 *     ?SetDeviceInputMode@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1400D6940 (-SetDeviceInputMode@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x140147DE0 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline @ 0x1401E3D20 (Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMSetDeviceInputMode(struct RIMDEV *a1, unsigned int a2)
{
  unsigned int v4; // esi

  InputTraceLogging::RIM::SetDeviceInputMode((__int64)a1, a2);
  if ( a2 == 1 || a2 == 2 && !(unsigned int)RIMIsWakeCapableDevice((__int64)a1) )
    rimInvalidateInputs(a1);
  v4 = RIMUpdateDeviceForInputMode(a1, a2);
  if ( (unsigned int)Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline()
    && a2 == 1
    && *((_DWORD *)a1 + 326) != 1 )
  {
    *((LARGE_INTEGER *)a1 + 164) = KeQueryPerformanceCounter(0LL);
  }
  *((_DWORD *)a1 + 326) = a2;
  return v4;
}
