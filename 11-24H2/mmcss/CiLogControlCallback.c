/*
 * XREFs of CiLogControlCallback @ 0x14000D200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CiLogControlCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    RegHandle = CiLoggerContext;
    byte_14000A0D0 = 1;
  }
  else
  {
    RegHandle = 0LL;
    byte_14000A0D0 = 0;
  }
}
