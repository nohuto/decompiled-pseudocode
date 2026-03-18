/*
 * XREFs of EtwpCpuStarvationProvEnableCallback @ 0x1406407D0
 * Callers:
 *     <none>
 * Callees:
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B0CBC (KeEtwInitializeCpuStarvationProvider.c)
 */

void __fastcall EtwpCpuStarvationProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 1 )
    KeEtwInitializeCpuStarvationProvider();
}
