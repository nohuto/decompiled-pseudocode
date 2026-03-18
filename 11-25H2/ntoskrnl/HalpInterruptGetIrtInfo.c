/*
 * XREFs of HalpInterruptGetIrtInfo @ 0x1406F1FB4
 * Callers:
 *     HalpQueryAcpiResourceRequirements @ 0x1406F68B8 (HalpQueryAcpiResourceRequirements.c)
 *     HaliQuerySystemInformation @ 0x140B5BC60 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x1404477E0 (HalQueryMaximumProcessorCount.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14049BFDC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpHvCpuid @ 0x140547FF0 (HalpHvCpuid.c)
 */

__int64 __fastcall HalpInterruptGetIrtInfo(int *a1)
{
  int v1; // eax
  int MaximumProcessorCount; // eax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = HalpPciMcfgTableSegments;
  if ( !HalpPciMcfgTableSegments )
    v1 = 1;
  *a1 = v1;
  v5 = 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  a1[2] = 0;
  a1[1] = 150 * MaximumProcessorCount;
  if ( HalpIsMicrosoftCompatibleHvLoaded() )
  {
    HalpHvCpuid(0x40000000u, &v5);
    if ( (unsigned int)v5 >= 0x40000006 )
    {
      HalpHvCpuid(0x40000006u, &v5);
      if ( (v5 & 0x20) != 0 )
      {
        HalpHvCpuid(0x40000005u, &v5);
        if ( DWORD2(v5) < a1[1] / (unsigned int)HalQueryMaximumProcessorCount() * HalpInterruptProcessorsStarted )
          a1[1] = DWORD2(v5) / HalpInterruptProcessorsStarted * HalQueryMaximumProcessorCount();
        a1[2] = DWORD2(v5) - a1[1] / (unsigned int)HalQueryMaximumProcessorCount() * HalpInterruptProcessorsStarted;
      }
    }
  }
  return 0LL;
}
