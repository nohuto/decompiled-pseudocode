/*
 * XREFs of FxpBugCheckCallback @ 0x1400AB9F0
 * Callers:
 *     <none>
 * Callees:
 *     FxpBugCheckCallbackFilter @ 0x1400ABAA0 (FxpBugCheckCallbackFilter.c)
 */

void __fastcall FxpBugCheckCallback(
        _KBUGCHECK_CALLBACK_REASON Reason,
        _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _GUID *ReasonSpecificData,
        unsigned int ReasonSpecificLength)
{
  unsigned int v4; // eax
  _FX_DRIVER_GLOBALS *p_Component; // rbx
  unsigned __int64 Checksum; // rsi
  unsigned int v8; // esi

  v4 = *(_DWORD *)&ReasonSpecificData->Data4[4];
  if ( v4 >= 0x1000 )
  {
    p_Component = (_FX_DRIVER_GLOBALS *)&Record[-8].Component;
    Checksum = Record[-6].Checksum;
    if ( Checksum )
    {
      v8 = *(_DWORD *)(Checksum + 24) + 72;
      if ( v8 <= v4 )
      {
        if ( FxpBugCheckCallbackFilter((_FX_DRIVER_GLOBALS *)&Record[-8].Component) )
        {
          FxLibraryGlobals.BestDriverForDumpLog = p_Component;
LABEL_9:
          *(_QWORD *)&ReasonSpecificData[2].Data1 = p_Component->WdfLogHeader;
          *(_DWORD *)ReasonSpecificData[2].Data4 = v8;
          ReasonSpecificData[1] = WdfDumpGuid;
          return;
        }
        if ( !FxLibraryGlobals.BestDriverForDumpLog
          && p_Component->FxTrackDriverForMiniDumpLog
          && *(_FX_DRIVER_GLOBALS **)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) == p_Component )
        {
          goto LABEL_9;
        }
      }
    }
  }
}
