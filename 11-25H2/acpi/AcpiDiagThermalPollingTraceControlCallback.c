/*
 * XREFs of AcpiDiagThermalPollingTraceControlCallback @ 0x1400569E0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x140036FCC (AcpiDiagRequeueThermalPollingTimer.c)
 */

void __fastcall AcpiDiagThermalPollingTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  _LIST_ENTRY *v4; // rcx

  v4 = 0LL;
  if ( ControlCode )
  {
    if ( ControlCode == 1 )
    {
      while ( (unsigned int)v4 < 5 )
      {
        if ( (MatchAnyKeyword & AcpiDiagThermalPollingIntervals[2 * (unsigned int)v4]) != 0 )
        {
          v4 = (_LIST_ENTRY *)AcpiDiagThermalPollingIntervals[2 * (unsigned int)v4 + 1];
          if ( WPP_MAIN_CB.Queue.ListEntry.Blink == v4 )
            return;
          goto LABEL_7;
        }
        LODWORD(v4) = (_DWORD)v4 + 1;
      }
    }
  }
  else
  {
LABEL_7:
    WPP_MAIN_CB.Queue.ListEntry.Blink = v4;
    AcpiDiagRequeueThermalPollingTimer();
  }
}
