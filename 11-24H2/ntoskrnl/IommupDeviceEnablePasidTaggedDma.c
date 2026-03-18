/*
 * XREFs of IommupDeviceEnablePasidTaggedDma @ 0x1406FF3F4
 * Callers:
 *     HalpIommuCreateDevice @ 0x14054D63C (HalpIommuCreateDevice.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x14048CB70 (HalpGetCpuInfo.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaGetIommuInterface @ 0x14053C6E8 (HalpDmaGetIommuInterface.c)
 *     IommupDeviceGetPasidSettings @ 0x14054E0B0 (IommupDeviceGetPasidSettings.c)
 *     HalpIommuIsDmarStageCompatible @ 0x140554080 (HalpIommuIsDmarStageCompatible.c)
 *     IommupHvIsStage1DmarCompatible @ 0x140566040 (IommupHvIsStage1DmarCompatible.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceEnableSvm @ 0x1406FF544 (IommupDeviceEnableSvm.c)
 */

__int64 __fastcall IommupDeviceEnablePasidTaggedDma(__int64 a1, __int64 *a2)
{
  int PasidSettings; // ebx
  char v4; // r14
  unsigned __int8 v5; // si
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  bool IsStage1DmarCompatible; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v15; // [rsp+50h] [rbp+30h] BYREF
  char v16; // [rsp+60h] [rbp+40h] BYREF
  char v17; // [rsp+68h] [rbp+48h] BYREF

  *(_WORD *)(a1 + 273) = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  PasidSettings = IommupDeviceGetPasidSettings(a2, &v16, (char *)&v15, &v17);
  if ( PasidSettings < 0 )
    goto LABEL_19;
  v4 = v16;
  v5 = v15;
  if ( v16 )
  {
    if ( v15 )
    {
      PasidSettings = -1073741776;
      goto LABEL_19;
    }
  }
  else if ( !v15 )
  {
    return (unsigned int)PasidSettings;
  }
  v15 = 0;
  if ( !(unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline()
    && HalpGetCpuInfo(0LL, 0LL, 0LL, &v15)
    && v15 == 2
    || (v6 = *(_QWORD *)(a1 + 8),
        v7 = v17,
        *(_BYTE *)(a1 + 273) = v4,
        *(_BYTE *)(a1 + 274) = 1,
        *(_BYTE *)(a1 + 272) = v7,
        !v6) )
  {
    PasidSettings = -1073741637;
LABEL_19:
    *(_WORD *)(a1 + 273) = 0;
    *(_BYTE *)(a1 + 272) = 0;
    return (unsigned int)PasidSettings;
  }
  PasidSettings = HalpDmaGetIommuInterface(v6, (_QWORD *)(a1 + 280));
  if ( PasidSettings < 0 )
    goto LABEL_19;
  if ( HalpHvIommu )
    IsStage1DmarCompatible = IommupHvIsStage1DmarCompatible(*(_DWORD **)a1, v4, v8, v9);
  else
    IsStage1DmarCompatible = HalpIommuIsDmarStageCompatible(*(_QWORD *)(a1 + 32), 1);
  if ( !IsStage1DmarCompatible )
  {
    PasidSettings = -1073741637;
LABEL_18:
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288), v11, v12, v13);
    goto LABEL_19;
  }
  LOBYTE(v11) = v5;
  PasidSettings = IommupDeviceEnableSvm(a1, v11);
  if ( PasidSettings < 0 )
    goto LABEL_18;
  return (unsigned int)PasidSettings;
}
