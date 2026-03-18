/*
 * XREFs of HalpDmaInit @ 0x140C10654
 * Callers:
 *     HalpDmaInitSystem @ 0x140B4D8C0 (HalpDmaInitSystem.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x14054B23C (Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CvmMasterAdapterBounceFix__private_IsEnabledDeviceUsageNoInline @ 0x14054ED98 (Feature_CvmMasterAdapterBounceFix__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaInitializeControllers @ 0x140551DA8 (HalpDmaInitializeControllers.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140C1007C (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140C1019C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaInitializeCvmSupport @ 0x140C10AE4 (HalpDmaInitializeCvmSupport.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C10B98 (HalpDmaInitializeMasterAdapter.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax
  int v1; // r8d
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

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
    qword_140FC2CF0 = 0xFFFFFFLL;
    dword_140FC2CFC = 2;
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V3, 0, 0, 0);
    if ( (int)result < 0 )
      return result;
    qword_140FC2EF0 = 0xFFFFFFLL;
    dword_140FC2EFC = 3;
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV2, 0, 0, 0);
    if ( (int)result < 0 )
      return result;
    v1 = 0;
    v2 = 0;
  }
  else
  {
LABEL_14:
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V2, qword_140FC2D30, dword_140FC2D28, 0);
    if ( (int)result < 0 )
      return result;
    qword_140FC2CF0 = 0xFFFFFFLL;
    dword_140FC2CFC = 2;
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapter24V3, qword_140FC2F30, dword_140FC2F28, 0);
    if ( (int)result < 0 )
      return result;
    qword_140FC2EF0 = 0xFFFFFFLL;
    dword_140FC2EFC = 3;
    result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV2, qword_140FC2E30, dword_140FC2E28, 0);
    if ( (int)result < 0 )
      return result;
    v1 = dword_140FC3028;
    v2 = qword_140FC3030;
  }
  dword_140FC2DFC = 2;
  result = HalpDmaInitializeMasterAdapter((unsigned int)&MasterAdapterV3, v2, v1, 0);
  if ( (int)result >= 0 )
  {
    dword_140FC2FFC = 3;
    result = HalpDmaAllocateEmergencyResources(v3);
    if ( (int)result >= 0 )
    {
      result = HalpDmaAllocateMappingResources();
      if ( (int)result >= 0 )
        return HalpDmaInitializeControllers(v5, v4, v6, v7);
    }
  }
  return result;
}
