/*
 * XREFs of HalpDmaInit @ 0x140C12654
 * Callers:
 *     HalpDmaInitSystem @ 0x140B4F910 (HalpDmaInitSystem.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x140548AFC (Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CvmMasterAdapterBounceFix__private_IsEnabledDeviceUsageNoInline @ 0x14054C6D8 (Feature_CvmMasterAdapterBounceFix__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaInitializeControllers @ 0x14054F6E8 (HalpDmaInitializeControllers.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140C1207C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140C1219C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaInitializeCvmSupport @ 0x140C12AE4 (HalpDmaInitializeCvmSupport.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C12B98 (HalpDmaInitializeMasterAdapter.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax
  int v1; // r8d
  int v2; // edx
  __int64 v3; // rcx

  HalpCoreDmaAlignment = KeLargestCacheLine;
  if ( !(unsigned int)Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_14;
  result = HalpDmaInitializeCvmSupport();
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)Feature_CvmMasterAdapterBounceFix__private_IsEnabledDeviceUsageNoInline()
    && HalpDmaCvmConfiguration )
  {
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V2, 0, 0, 0);
    if ( (int)result < 0 )
      return result;
    qword_140FC2F50 = 0xFFFFFFLL;
    dword_140FC2F5C = 2;
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V3, 0, 0, 0);
    if ( (int)result < 0 )
      return result;
    qword_140FC3150 = 0xFFFFFFLL;
    dword_140FC315C = 3;
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV2, 0, 0, 0);
    if ( (int)result < 0 )
      return result;
    v1 = 0;
    v2 = 0;
  }
  else
  {
LABEL_14:
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V2, qword_140FC2F90, dword_140FC2F88, 0);
    if ( (int)result < 0 )
      return result;
    qword_140FC2F50 = 0xFFFFFFLL;
    dword_140FC2F5C = 2;
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V3, qword_140FC3190, dword_140FC3188, 0);
    if ( (int)result < 0 )
      return result;
    qword_140FC3150 = 0xFFFFFFLL;
    dword_140FC315C = 3;
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV2, qword_140FC3090, dword_140FC3088, 0);
    if ( (int)result < 0 )
      return result;
    v1 = dword_140FC3288;
    v2 = qword_140FC3290;
  }
  dword_140FC305C = 2;
  result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV3, v2, v1, 0);
  if ( (int)result >= 0 )
  {
    dword_140FC325C = 3;
    result = HalpDmaAllocateEmergencyResources(v3);
    if ( (int)result >= 0 )
    {
      result = HalpDmaAllocateMappingResources();
      if ( (int)result >= 0 )
        return HalpDmaInitializeControllers();
    }
  }
  return result;
}
