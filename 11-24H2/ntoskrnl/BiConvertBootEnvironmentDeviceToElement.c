/*
 * XREFs of BiConvertBootEnvironmentDeviceToElement @ 0x140812780
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x1409BF658 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1408127CC (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140813010 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1408130FC (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToElement(void *a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( (a3 & 1) != 0 )
    return BiConvertBootEnvironmentDeviceToQualifiedPartition(a1, a4, a5);
  if ( (a3 & 2) != 0 )
    return BiConvertBootEnvironmentDeviceToUnknown(a1);
  return BiConvertBootEnvironmentDeviceToNt((_DWORD)a1, a2, a3, a4, a5);
}
