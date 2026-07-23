/*
 * XREFs of CarReportUnusualShutdown @ 0x140615ACC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     VfUtilCrashEvent @ 0x14060E7BC (VfUtilCrashEvent.c)
 *     CarEtwCrashEvent @ 0x140613DB0 (CarEtwCrashEvent.c)
 *     CarInitLogging @ 0x140614660 (CarInitLogging.c)
 *     CarCleanup @ 0x140614ABC (CarCleanup.c)
 *     CarInit @ 0x140614FAC (CarInit.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
