/*
 * XREFs of ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401A5B30
 * Callers:
 *     NtSetShellCursorState @ 0x14014E690 (NtSetShellCursorState.c)
 *     NtSetCursorInputSpace @ 0x1401B91E0 (NtSetCursorInputSpace.c)
 *     NtUserSetDesktopVisualInputSink @ 0x1401BCDC0 (NtUserSetDesktopVisualInputSink.c)
 *     NtUserSetSystemContentRects @ 0x1401BDBD0 (NtUserSetSystemContentRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UIPrivilegeIsolation::CheckCapability(PCWSTR SourceString, const unsigned __int16 *a2)
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = RtlCapabilityCheck(0LL, &DestinationString, &v4);
  if ( (int)result >= 0 && !v4 )
    return 3221225506LL;
  return result;
}
