/*
 * XREFs of CheckCapability @ 0x1C01E7BE0
 * Callers:
 *     NtSetCursorInputSpace @ 0x1C01427D0 (NtSetCursorInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0142BA0 (NtSetShellCursorState.c)
 *     NtUserSetDesktopVisualInputSink @ 0x1C014A620 (NtUserSetDesktopVisualInputSink.c)
 *     NtUserSetSystemContentRects @ 0x1C014BE10 (NtUserSetSystemContentRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckCapability(PCWSTR SourceString)
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = RtlCapabilityCheck(0LL, &DestinationString, &v3);
  if ( (int)result >= 0 && !v3 )
    return 3221225506LL;
  return result;
}
