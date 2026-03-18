/*
 * XREFs of ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z @ 0x1403D2594
 * Callers:
 *     ?ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBG_N@Z @ 0x14027E700 (-ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBG_N@Z.c)
 *     ?ReadDWordWithDefault@MonitorDataStore@DxgMonitor@@UEBAKPEAXPEBGK@Z @ 0x14027E740 (-ReadDWordWithDefault@MonitorDataStore@DxgMonitor@@UEBAKPEAXPEBGK@Z.c)
 *     ?TryReadBool@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEA_N@Z @ 0x14027E770 (-TryReadBool@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEA_N@Z.c)
 *     ?TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEAK@Z @ 0x14027E7F0 (-TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEAK@Z.c)
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1403D2404 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        _DWORD *a4)
{
  NTSTATUS v6; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v11; // [rsp+4Ch] [rbp-2Ch]
  int v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+54h] [rbp-24h]

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  ResultLength = 0;
  v6 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
  if ( v6 != -1073741772 )
  {
    if ( v6 >= 0 )
    {
      if ( v11 == 4 && v12 == 4 )
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
