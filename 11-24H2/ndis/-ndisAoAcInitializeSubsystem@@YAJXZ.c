/*
 * XREFs of ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x14018B078
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS ndisAoAcInitializeSubsystem(void)
{
  NTSTATUS result; // eax
  int v1; // eax
  int v2; // edx
  NTSTATUS v3; // eax
  int v4; // edx
  int v5; // edx
  unsigned __int8 OutputBuffer[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF

  OutputBuffer[0] = 0;
  result = ZwPowerInformation(PlatformInformation, 0LL, 0, OutputBuffer, 1u);
  if ( result >= 0 )
    ndisAoAcCapable = OutputBuffer[0];
  if ( ndisAoAcCapable || ndisAoAcTest )
  {
    v7 = 0LL;
    v8 = WNF_PO_SCENARIO_CHANGE;
    v1 = ExSubscribeWnfStateChange(&v7, &v8, 1LL, 0LL, ndisWnfPdcCallback, 0LL);
    if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v2,
        13,
        11,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        v1);
    }
    v3 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           (PPOWER_SETTING_CALLBACK)ndisCsResiliencyCallback,
           0LL,
           0LL);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        13,
        12,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        v3);
    }
    result = PoRegisterPowerSettingCallback(
               0LL,
               &GUID_LOW_POWER_EPOCH,
               (PPOWER_SETTING_CALLBACK)ndisLowPowerEpochCallback,
               0LL,
               0LL);
    if ( result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v5,
          13,
          13,
          (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
          result);
      }
      result = 0;
    }
    ndisDefaultPnPCapabilities &= ~0x10u;
  }
  return result;
}
