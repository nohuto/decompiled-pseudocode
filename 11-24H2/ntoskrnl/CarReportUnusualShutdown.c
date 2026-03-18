/*
 * XREFs of CarReportUnusualShutdown @ 0x14061750C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     VfUtilCrashEvent @ 0x1406101FC (VfUtilCrashEvent.c)
 *     CarEtwCrashEvent @ 0x1406157F0 (CarEtwCrashEvent.c)
 *     CarInitLogging @ 0x1406160A0 (CarInitLogging.c)
 *     CarCleanup @ 0x1406164FC (CarCleanup.c)
 *     CarInit @ 0x1406169EC (CarInit.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
