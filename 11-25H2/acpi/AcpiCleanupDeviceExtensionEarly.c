/*
 * XREFs of AcpiCleanupDeviceExtensionEarly @ 0x140054B00
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPICleanupRemovedExtension @ 0x14005A794 (ACPICleanupRemovedExtension.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AcpiCleanupDeviceExtensionEarly(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx

  result = *(_QWORD **)(a1 + 448);
  if ( result )
  {
    result += 5;
    v3 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v4 = (_QWORD *)result[1], (_QWORD *)*v4 != result) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *(_QWORD *)(a1 + 448) = 0LL;
  }
  return result;
}
