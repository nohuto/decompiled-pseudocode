/*
 * XREFs of NVMeDisableThrottling @ 0x1400167B0
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeControllerRemove @ 0x140010BF0 (NVMeControllerRemove.c)
 * Callees:
 *     NVMeDeRegisterThrottling @ 0x140016830 (NVMeDeRegisterThrottling.c)
 */

__int64 __fastcall NVMeDisableThrottling(__int64 a1)
{
  NVMeDeRegisterThrottling(a1, 0LL);
  NVMeDeRegisterThrottling(a1, 1LL);
  NVMeDeRegisterThrottling(a1, 2LL);
  NVMeDeRegisterThrottling(a1, 3LL);
  NVMeDeRegisterThrottling(a1, 4LL);
  NVMeDeRegisterThrottling(a1, 5LL);
  NVMeDeRegisterThrottling(a1, 6LL);
  return NVMeDeRegisterThrottling(a1, 7LL);
}
