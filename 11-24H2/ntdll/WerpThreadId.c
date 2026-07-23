/*
 * XREFs of WerpThreadId @ 0x1800AC704
 * Callers:
 *     RtlReportExceptionHelper @ 0x1800ABF6C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x180132500 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall WerpThreadId(void *a1)
{
  NTSTATUS v1; // eax
  unsigned int v2; // ecx
  __int128 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int64 v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+58h] [rbp-10h]

  v6 = 0LL;
  v7 = 0;
  ThreadInformation = 0LL;
  v5 = 0LL;
  v1 = ZwQueryInformationThread(a1, ThreadBasicInformation, &ThreadInformation, 0x30u, 0LL);
  v2 = DWORD2(v5);
  if ( v1 < 0 )
    return 0;
  return v2;
}
