/*
 * XREFs of MiNotifyMemoryChange @ 0x1407D9E3C
 * Callers:
 *     MiCompleteMemoryAddition @ 0x1407D915C (MiCompleteMemoryAddition.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KePulseEvent @ 0x14046B330 (KePulseEvent.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

LONG __fastcall MiNotifyMemoryChange(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 40);
  if ( (result & 2) == 0 )
  {
    if ( stru_140E2FC68.Header.SignalState )
    {
      if ( ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
        ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    return KePulseEvent(qword_140E38B08, 0, 0);
  }
  return result;
}
