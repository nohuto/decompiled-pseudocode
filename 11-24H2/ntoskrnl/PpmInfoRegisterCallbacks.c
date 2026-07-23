/*
 * XREFs of PpmInfoRegisterCallbacks @ 0x140C32364
 * Callers:
 *     PopInitializePowerSettingCallbacks @ 0x140C303E8 (PopInitializePowerSettingCallbacks.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 */

__int64 PpmInfoRegisterCallbacks()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  GUID SettingGuid; // [rsp+30h] [rbp-38h] BYREF
  GUID i; // [rsp+40h] [rbp-28h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  v1 = 0;
  SettingGuid = GUID_PROC_CAP_BASE;
  for ( i = GUID_PROC_FLOOR_BASE; v1 < (unsigned int)KeNumberProcessors_0; ++v1 )
  {
    SettingGuid.Data4[7] = v1;
    i.Data4[7] = v1;
    PoRegisterPowerSettingCallback(
      0LL,
      &SettingGuid,
      (PPOWER_SETTING_CALLBACK)PpmPerfProcCapFloorSettingCallback,
      0LL,
      0LL);
    PoRegisterPowerSettingCallback(0LL, &i, (PPOWER_SETTING_CALLBACK)PpmPerfProcCapFloorSettingCallback, 0LL, 0LL);
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
