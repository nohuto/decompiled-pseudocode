/*
 * XREFs of IommupDeviceEnablePasidTaggedDma @ 0x1406FD034
 * Callers:
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpDmaGetIommuInterface @ 0x140539F74 (HalpDmaGetIommuInterface.c)
 *     IommupDeviceGetPasidSettings @ 0x14054B960 (IommupDeviceGetPasidSettings.c)
 *     HalpIommuIsDmarStageCompatible @ 0x1405519C0 (HalpIommuIsDmarStageCompatible.c)
 *     IommupHvIsStage1DmarCompatible @ 0x140563D40 (IommupHvIsStage1DmarCompatible.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 */

__int64 __fastcall IommupDeviceEnablePasidTaggedDma(__int64 a1, __int64 *a2)
{
  int PasidSettings; // ebx
  char v4; // r14
  unsigned __int8 v5; // si
  __int64 v6; // rcx
  char v7; // al
  bool IsStage1DmarCompatible; // al
  __int64 v9; // rdx
  unsigned __int8 v11; // [rsp+50h] [rbp+30h] BYREF
  char v12; // [rsp+60h] [rbp+40h] BYREF
  char v13; // [rsp+68h] [rbp+48h] BYREF

  *(_WORD *)(a1 + 273) = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  PasidSettings = IommupDeviceGetPasidSettings(a2, &v12, (char *)&v11, &v13);
  if ( PasidSettings < 0 )
    goto LABEL_19;
  v4 = v12;
  v5 = v11;
  if ( v12 )
  {
    if ( v11 )
    {
      PasidSettings = -1073741776;
      goto LABEL_19;
    }
  }
  else if ( !v11 )
  {
    return (unsigned int)PasidSettings;
  }
  v11 = 0;
  if ( !(unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline()
    && HalpGetCpuInfo(0LL, 0LL, 0LL, &v11)
    && v11 == 2
    || (v6 = *(_QWORD *)(a1 + 8),
        v7 = v13,
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
    IsStage1DmarCompatible = IommupHvIsStage1DmarCompatible(*(_DWORD **)a1, v4);
  else
    IsStage1DmarCompatible = HalpIommuIsDmarStageCompatible(*(_QWORD *)(a1 + 32), 1);
  if ( !IsStage1DmarCompatible )
  {
    PasidSettings = -1073741637;
LABEL_18:
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 288), v9);
    goto LABEL_19;
  }
  LOBYTE(v9) = v5;
  PasidSettings = IommupDeviceEnableSvm(a1, v9);
  if ( PasidSettings < 0 )
    goto LABEL_18;
  return (unsigned int)PasidSettings;
}
