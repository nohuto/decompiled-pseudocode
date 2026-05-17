/*
 * XREFs of WerpThreadId @ 0x180002A04
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000226C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x1801342D0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 */

__int64 __fastcall WerpThreadId(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+58h] [rbp-10h]

  v6 = 0LL;
  v7 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v1 = ZwQueryInformationThread(a1, 0LL, &v4, 48LL, 0LL);
  v2 = DWORD2(v5);
  if ( v1 < 0 )
    return 0;
  return v2;
}
