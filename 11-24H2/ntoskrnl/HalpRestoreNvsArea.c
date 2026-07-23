/*
 * XREFs of HalpRestoreNvsArea @ 0x1404F511C
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B6BE80 (HalpAcpiPostSleep.c)
 * Callees:
 *     RtlCopyDeviceMemory @ 0x14051E7EC (RtlCopyDeviceMemory.c)
 */

__int64 HalpRestoreNvsArea()
{
  int v0; // edi
  unsigned int i; // esi
  __int64 v2; // rbx
  __int64 result; // rax

  v0 = 0;
  if ( !HalpDisableNvsSaveRestore )
  {
    for ( i = 0; i < HalpNvsRegionCount; v0 += *(_DWORD *)(HalpNvsRegionData + 8 * v2 + 8) )
    {
      v2 = 3LL * i;
      RtlCopyDeviceMemory(*(void **)(HalpNvsRegionData + 24LL * i + 16));
      result = HalpNvsRegionData;
      ++i;
    }
  }
  return result;
}
