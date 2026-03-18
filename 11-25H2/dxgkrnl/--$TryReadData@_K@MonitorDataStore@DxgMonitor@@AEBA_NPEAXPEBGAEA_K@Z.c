/*
 * XREFs of ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEA_K@Z @ 0x1402768CC
 * Callers:
 *     ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z @ 0x1402769C8 (--$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z.c)
 *     ?TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEA_K@Z @ 0x140277330 (-TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        _QWORD *a4)
{
  NTSTATUS v6; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v11; // [rsp+4Ch] [rbp-2Ch]
  int v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+54h] [rbp-24h]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  ResultLength = 0;
  v6 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x17u, &ResultLength);
  if ( v6 != -1073741772 )
  {
    if ( v6 >= 0 )
    {
      if ( v11 == 11 && v12 == 8 )
      {
        *a4 = v13;
        return 1;
      }
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 433;
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 426;
    }
  }
  return 0;
}
