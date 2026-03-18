/*
 * XREFs of EtwpCpuStarvationProvEnableCallback @ 0x14064C7F0
 * Callers:
 *     <none>
 * Callees:
 *     KeEtwInitializeCpuStarvationProvider @ 0x1405B4668 (KeEtwInitializeCpuStarvationProvider.c)
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
