/*
 * XREFs of _tlgCreate1Sz_char @ 0x140035A2C
 * Callers:
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x140034D34 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetryMiniportEventWStr @ 0x140035200 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x140039EC4 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x14003A1D4 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetryMiniportLogError @ 0x14003F158 (StorpTelemetryMiniportLogError.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x140054BD0 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x14005505C (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1400B15A4 (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1400B18B8 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataCriticalData @ 0x1400B3B60 (StorpTelemetryLogNvmeNamespaceErrorDataCriticalData.c)
 *     StorpTelemetryLogNvmeNamespaceErrorDataMeasures @ 0x1400B3DE4 (StorpTelemetryLogNvmeNamespaceErrorDataMeasures.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1400B4068 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1400B4554 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1400B4A48 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1400B4D58 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1400B50B4 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1400B55D0 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1400B5A10 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryNvmeControllerHealthCriticalInfo @ 0x1400B6704 (StorpTelemetryNvmeControllerHealthCriticalInfo.c)
 *     StorpTelemetryNvmeControllerHealthInfo @ 0x1400B69B4 (StorpTelemetryNvmeControllerHealthInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1400B6C64 (StorpTelemetryNvmeHealthInfo.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataCriticalData @ 0x1400B7118 (StorpTelemetryNvmeLogNamespacePerfDataCriticalData.c)
 *     StorpTelemetryNvmeLogNamespacePerfDataMeasures @ 0x1400B745C (StorpTelemetryNvmeLogNamespacePerfDataMeasures.c)
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &unk_140151064;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
