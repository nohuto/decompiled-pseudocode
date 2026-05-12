/*
 * XREFs of StorMFNDHealthTelemetrySupported @ 0x1400AF414
 * Callers:
 *     StorpLogPerAdapterStatistics @ 0x1400B0A00 (StorpLogPerAdapterStatistics.c)
 * Callees:
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 */

bool __fastcall StorMFNDHealthTelemetrySupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !*(_BYTE *)(a1 + 5360) && (*(_BYTE *)(a1 + 5344) & 0xC) != 0xC && *(_DWORD *)(a1 + 4276) == 17 )
    return StorIsMFNDSupported(a1);
  return v1;
}
