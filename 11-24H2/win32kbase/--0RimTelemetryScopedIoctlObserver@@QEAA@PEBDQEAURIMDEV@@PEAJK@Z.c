/*
 * XREFs of ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x1401269E0
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1400A90C8 (RIMDeliverConfigRequest.c)
 *     RIMDeviceIoControl @ 0x14017AF70 (RIMDeviceIoControl.c)
 *     RIMSetDeviceIdleTimeout @ 0x14017C3B0 (RIMSetDeviceIdleTimeout.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017CAC0 (RIMGetMaxCountFeatureDetails.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1401D2038 (RIMLoadDeviceLegacyInfo.c)
 *     RIMConfigureDeviceFeedback @ 0x1401DB3F0 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DB850 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     RIMHidGetPreparsedData @ 0x1401DD6CC (RIMHidGetPreparsedData.c)
 * Callees:
 *     <none>
 */

RimTelemetryScopedIoctlObserver *__fastcall RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        RimTelemetryScopedIoctlObserver *this,
        const char *a2,
        struct RIMDEV *const a3,
        int *a4,
        unsigned int a5)
{
  *(_QWORD *)this = -1LL;
  *((_DWORD *)this + 6) = a5;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 4) = a4;
  *(LARGE_INTEGER *)this = KeQueryPerformanceCounter(0LL);
  return this;
}
