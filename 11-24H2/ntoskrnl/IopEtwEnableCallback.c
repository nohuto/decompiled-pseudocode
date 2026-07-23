/*
 * XREFs of IopEtwEnableCallback @ 0x14070FCC0
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpExtensionControl @ 0x140593578 (IopIrpExtensionControl.c)
 */

void __fastcall IopEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( ControlCode != 1 )
      return;
  }
  else
  {
    ControlCode = 0;
  }
  IopIrpExtensionControl(1, ControlCode);
}
