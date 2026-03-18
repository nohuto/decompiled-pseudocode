/*
 * XREFs of MiNotifyMemoryChange @ 0x1407E9CFC
 * Callers:
 *     MiCompleteMemoryAddition @ 0x1407E901C (MiCompleteMemoryAddition.c)
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KePulseEvent @ 0x1404674D0 (KePulseEvent.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

LONG __fastcall MiNotifyMemoryChange(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 40);
  if ( (result & 2) == 0 )
  {
    if ( stru_140E2FEA8.Header.SignalState )
    {
      if ( ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
        ZwUpdateWnfStateData((__int64)&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL);
    }
    return KePulseEvent(qword_140E38D48, 0, 0);
  }
  return result;
}
