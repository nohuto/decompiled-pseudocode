/*
 * XREFs of wcscmp_0 @ 0x1400E7086
 * Callers:
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14009C56C (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     ndisDmaTelemetryKnobsUpdateRoutine @ 0x1400DC5A0 (ndisDmaTelemetryKnobsUpdateRoutine.c)
 *     NdisQueryDiagnosticSetting @ 0x140138690 (NdisQueryDiagnosticSetting.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *Str1, const wchar_t *Str2)
{
  return wcscmp(Str1, Str2);
}
