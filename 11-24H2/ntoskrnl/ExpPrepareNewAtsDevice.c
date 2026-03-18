/*
 * XREFs of ExpPrepareNewAtsDevice @ 0x140658070
 * Callers:
 *     ExInitializeDeviceAts @ 0x140657C40 (ExInitializeDeviceAts.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ExpAtsConfigureSecureDevice @ 0x140657EFC (ExpAtsConfigureSecureDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewAtsDevice(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r12
  int v10; // eax
  int v11; // edi
  __int64 Pool2; // rax
  _QWORD *v13; // rbx
  char v14; // r14
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v22; // eax
  _QWORD *v23; // r9
  __int64 (__fastcall *v24)(); // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  unsigned __int8 v29; // [rsp+30h] [rbp-10h]
  __int64 v30; // [rsp+80h] [rbp+40h] BYREF

  v5 = (_QWORD *)a5;
  LODWORD(a5) = 0;
  v30 = 0LL;
  *v5 = 0LL;
  v10 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), 0LL, 0LL, &v30);
  v11 = v10;
  if ( v10 == -1073741789 )
  {
    if ( !v30 )
      return (unsigned int)-1073741823;
    Pool2 = ExAllocatePool2(0x40uLL);
    v13 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 32) = 1;
    *(_QWORD *)(Pool2 + 24) = a1;
    v14 = a2 & 1;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a3 + 64);
    v15 = *(_QWORD *)(Pool2 + 48);
    *(_OWORD *)(Pool2 + 120) = *(_OWORD *)a4;
    *(_OWORD *)(Pool2 + 136) = *(_OWORD *)(a4 + 16);
    v16 = *(_OWORD *)(a4 + 32);
    *(_BYTE *)(Pool2 + 16) = 1;
    *(_BYTE *)(Pool2 + 17) = v14;
    *(_OWORD *)(Pool2 + 152) = v16;
    *(_QWORD *)(Pool2 + 168) = Pool2 + 192;
    v11 = guard_dispatch_icall_no_overrides(v15, v30, Pool2 + 192, 0LL);
    if ( v11 < 0 )
      goto LABEL_11;
    v11 = guard_dispatch_icall_no_overrides(v13[6], &a5, v18, v19);
    if ( v11 < 0 )
      goto LABEL_11;
    if ( (a5 & 1) == 0 )
      goto LABEL_10;
    *((_DWORD *)v13 + 46) = ((unsigned int)a5 >> 12) & 0x1F;
    v22 = a5;
    if ( !v14 && (a5 & 2) != 0 && (a5 & 4) != 0 )
    {
      *((_BYTE *)v13 + 18) = 1;
      v22 = a5;
    }
    if ( v13[19] )
    {
      if ( !*((_BYTE *)v13 + 18) )
        LODWORD(a5) = v22 & 0xFFFFFFF9;
      if ( (Feature_Servicing_SecureDevAts__private_featureState & 0x10) == 0 )
      {
        v29 = Feature_Servicing_SecureDevAts__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_Servicing_SecureDevAts__private_descriptor,
          Feature_Servicing_SecureDevAts__private_featureState | 1,
          3);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v29,
          3,
          (__int64)&Feature_Servicing_SecureDevAts__private_descriptor);
      }
      if ( (a5 & 0x800000) != 0 )
      {
        v11 = ExpAtsConfigureSecureDevice((__int64)v13, 1);
        if ( v11 < 0 )
          goto LABEL_11;
        v23 = v13;
        v24 = (__int64 (__fastcall *)())&ExAtsSvmSecureDevicePowerCallback;
      }
      else
      {
        v11 = guard_dispatch_icall_no_overrides(v13[21], a1, &a5, v13 + 22);
        if ( v11 < 0 )
          goto LABEL_11;
        v23 = (_QWORD *)v13[22];
        v24 = ExAtsSvmDevicePowerCallback;
      }
      v11 = guard_dispatch_icall_no_overrides(v13[6], &a5, v24, v23);
      if ( v11 >= 0 )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a4 + 8), v17, v18, v19);
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), v25, v26, v27);
        v28 = ExpAtsSvmDevices;
        if ( *((PVOID **)ExpAtsSvmDevices + 1) != &ExpAtsSvmDevices )
          __fastfail(3u);
        *v13 = ExpAtsSvmDevices;
        v13[1] = &ExpAtsSvmDevices;
        v28[1] = v13;
        ExpAtsSvmDevices = v13;
        *v5 = v13;
        return (unsigned int)v11;
      }
    }
    else
    {
LABEL_10:
      v11 = -1073741637;
    }
LABEL_11:
    v20 = v13[22];
    if ( v20 )
      guard_dispatch_icall_no_overrides(v20, v17, v18, v19);
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v11;
  }
  if ( v10 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v11;
}
