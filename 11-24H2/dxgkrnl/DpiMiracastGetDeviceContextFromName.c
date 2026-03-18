/*
 * XREFs of DpiMiracastGetDeviceContextFromName @ 0x14024BA4C
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x140081D2C (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x14024C848 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x14007EAD4 (DpiMiracastAddRefMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastGetDeviceContextFromName(PCWSTR SourceString)
{
  __int64 i; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  AcquireMiniportListMutex();
  for ( i = qword_1401611C0; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_1401611C0 )
    {
      i = 0LL;
      goto LABEL_6;
    }
    if ( !RtlCompareUnicodeString(&DestinationString, (PCUNICODE_STRING)(i + 160), 1u) )
      break;
  }
  DpiMiracastAddRefMiracastDeviceContext(i, i);
LABEL_6:
  ReleaseMiniportListMutex();
  return i;
}
