/*
 * XREFs of StorpNvmeAreTelemetryErrorsEqual @ 0x1400B1E28
 * Callers:
 *     StorpTelemetryCollectNvmeErrorData @ 0x1400B27E4 (StorpTelemetryCollectNvmeErrorData.c)
 *     StorpTelemetryNvmeSendNamespaceErrorDataSummary @ 0x1400B77DC (StorpTelemetryNvmeSendNamespaceErrorDataSummary.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorpNvmeAreTelemetryErrorsEqual(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // r9

  v2 = *(_WORD *)(a2 + 78);
  v3 = *(_WORD *)(a1 + 78);
  return ((v3 ^ v2) & 0x1FE) == 0 && ((v3 ^ v2) & 0xE00) == 0 && *(_BYTE *)a2 == *(_BYTE *)a1;
}
