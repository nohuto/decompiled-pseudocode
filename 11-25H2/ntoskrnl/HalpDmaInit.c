/*
 * XREFs of HalpDmaInit @ 0x140BFF654
 * Callers:
 *     HalpDmaInitSystem @ 0x140B3D8C0 (HalpDmaInitSystem.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x14054894C (Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaInitializeControllers @ 0x14054F4A8 (HalpDmaInitializeControllers.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140BFF07C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140BFF19C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaInitializeCvmSupport @ 0x140BFFA64 (HalpDmaInitializeCvmSupport.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140BFFB18 (HalpDmaInitializeMasterAdapter.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax
  __int64 v1; // rcx

  HalpCoreDmaAlignment = KeLargestCacheLine;
  result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V2, qword_140FC2588, dword_140FC2580, 0);
  if ( (int)result >= 0 )
  {
    qword_140FC2550 = 0xFFFFFFLL;
    dword_140FC255C = 2;
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V3, qword_140FC2768, dword_140FC2760, 0);
    if ( (int)result >= 0 )
    {
      qword_140FC2730 = 0xFFFFFFLL;
      dword_140FC273C = 3;
      result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV2, qword_140FC2668, dword_140FC2660, 0);
      if ( (int)result >= 0 )
      {
        dword_140FC263C = 2;
        result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV3, qword_140FC2848, dword_140FC2840, 0);
        if ( (int)result >= 0 )
        {
          dword_140FC281C = 3;
          if ( !(unsigned int)Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline()
            || (result = HalpDmaInitializeCvmSupport(), (int)result >= 0) )
          {
            result = HalpDmaAllocateEmergencyResources(v1);
            if ( (int)result >= 0 )
            {
              result = HalpDmaAllocateMappingResources();
              if ( (int)result >= 0 )
                return HalpDmaInitializeControllers();
            }
          }
        }
      }
    }
  }
  return result;
}
