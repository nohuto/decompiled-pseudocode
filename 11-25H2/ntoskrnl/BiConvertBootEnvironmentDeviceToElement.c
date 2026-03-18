/*
 * XREFs of BiConvertBootEnvironmentDeviceToElement @ 0x140802C08
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x140A5F768 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140802C54 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140803498 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140803584 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToElement(void *a1, int a2, char a3, __int64 a4, __int64 a5)
{
  if ( (a3 & 1) != 0 )
    return BiConvertBootEnvironmentDeviceToQualifiedPartition(a1, a4, a5);
  if ( (a3 & 2) != 0 )
    return BiConvertBootEnvironmentDeviceToUnknown(a1);
  return BiConvertBootEnvironmentDeviceToNt((_DWORD)a1, a2, a3, a4, a5);
}
