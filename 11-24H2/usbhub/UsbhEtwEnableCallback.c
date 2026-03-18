/*
 * XREFs of UsbhEtwEnableCallback @ 0x14002DB60
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwRundown @ 0x14002DB8C (UsbhEtwRundown.c)
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    dword_14006F6D0 = 1;
    UsbhEtwRundown(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
  else
  {
    dword_14006F6D0 = 0;
  }
}
