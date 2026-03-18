/*
 * XREFs of CarReportUnusualShutdown @ 0x14060B54C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     VfUtilCrashEvent @ 0x14060423C (VfUtilCrashEvent.c)
 *     CarEtwCrashEvent @ 0x140609830 (CarEtwCrashEvent.c)
 *     CarInitLogging @ 0x14060A0E0 (CarInitLogging.c)
 *     CarCleanup @ 0x14060A53C (CarCleanup.c)
 *     CarInit @ 0x14060AA2C (CarInit.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall CarReportUnusualShutdown(char a1)
{
  char result; // al
  _BYTE v3[40]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v4; // [rsp+48h] [rbp-20h]
  __int64 v5; // [rsp+78h] [rbp+10h] BYREF

  CarInit();
  CarInitLogging();
  memset_0(v3, 0, 0x40uLL);
  v5 = 0LL;
  v4 = &v5;
  result = VfUtilCrashEvent((__int64)v3);
  if ( result )
    result = CarEtwCrashEvent();
  if ( a1 )
    return CarCleanup();
  return result;
}
