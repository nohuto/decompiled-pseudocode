/*
 * XREFs of WdipSemSqmIncrementDword @ 0x1407A3738
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140A3D790 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140A7DEF4 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemSqmIncrementDword(__int64 a1, int a2)
{
  int v3; // [rsp+30h] [rbp-9h] BYREF
  int v4; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v5[8]; // [rsp+40h] [rbp+7h] BYREF
  int v6; // [rsp+A8h] [rbp+6Fh] BYREF

  v6 = a2;
  v3 = 450;
  v4 = 6;
  v5[0] = WinSqmGlobalSession;
  v5[2] = &v3;
  v5[4] = &v4;
  v5[6] = &v6;
  v5[1] = 16LL;
  v5[3] = 4LL;
  v5[5] = 4LL;
  v5[7] = 4LL;
  return WdipSemWriteEvent(a1, &WDI_SEM_EVENT_SQM_INCREMENT_DWORD, 0LL, 4LL, v5);
}
