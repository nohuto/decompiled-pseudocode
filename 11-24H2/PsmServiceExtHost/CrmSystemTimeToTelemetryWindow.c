/*
 * XREFs of CrmSystemTimeToTelemetryWindow @ 0x18006E42C
 * Callers:
 *     CrmGlobalsPeriodicTelemetry @ 0x180065D10 (CrmGlobalsPeriodicTelemetry.c)
 *     CrmGlobalsStartTelemetry @ 0x18007B9C8 (CrmGlobalsStartTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

BOOL __fastcall CrmSystemTimeToTelemetryWindow(SYSTEMTIME *lpSystemTime, LPSYSTEMTIME a2)
{
  SYSTEMTIME v2; // xmm0
  BOOL result; // eax
  struct _FILETIME FileTime; // [rsp+20h] [rbp-40h] BYREF
  struct _FILETIME v7; // [rsp+28h] [rbp-38h] BYREF
  struct _FILETIME v8; // [rsp+30h] [rbp-30h]
  struct _FILETIME v9; // [rsp+38h] [rbp-28h]
  FILETIME v10; // [rsp+40h] [rbp-20h] BYREF
  SYSTEMTIME SystemTime; // [rsp+48h] [rbp-18h] BYREF

  v2 = *lpSystemTime;
  FileTime = 0LL;
  *(_QWORD *)&SystemTime.wYear = *(_QWORD *)&v2.wYear;
  *(_QWORD *)&SystemTime.wHour = 0LL;
  v7 = 0LL;
  result = SystemTimeToFileTime(&SystemTime, &FileTime);
  if ( !result
    || (v9 = FileTime, !(result = SystemTimeToFileTime(lpSystemTime, &v7)))
    || (v8 = v7,
        v10 = (FILETIME)(*(_QWORD *)&v9 + 288000000000LL * ((*(_QWORD *)&v7 - *(_QWORD *)&v9) / 0x430E234000uLL)),
        !(result = FileTimeToSystemTime(&v10, a2))) )
  {
    *a2 = *lpSystemTime;
  }
  return result;
}
