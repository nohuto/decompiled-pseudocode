/*
 * XREFs of PspSchedulerSharedDataRegionCreate @ 0x1408EB67C
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1404084E0 (ObReferenceObjectByPointerWithTag.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     MmMapViewOfSection @ 0x1408DE270 (MmMapViewOfSection.c)
 *     MiMapViewInSystemSpace @ 0x1408EB578 (MiMapViewInSystemSpace.c)
 *     MmCreateSectionEx @ 0x14098AECC (MmCreateSectionEx.c)
 */

__int64 __fastcall PspSchedulerSharedDataRegionCreate(_KPROCESS *Object, __int64 *a2)
{
  char PreviousMode; // bl
  int v5; // eax
  _QWORD *v6; // rbx
  int Section; // edi
  __int64 *v8; // r14
  __int64 v9; // rcx
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 Tag; // [rsp+20h] [rbp-60h]
  int v17; // [rsp+40h] [rbp-40h]
  ULONGLONG ullMultiplicand; // [rsp+50h] [rbp-30h]
  PVOID Objecta[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+58h] BYREF

  v20 = 0LL;
  v22 = 0LL;
  Objecta[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = (unsigned int)Feature_UserModeAutoBoost__private_featureState;
  if ( (Feature_UserModeAutoBoost__private_featureState & 0x10) == 0 )
  {
    LODWORD(v21) = Feature_UserModeAutoBoost__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UserModeAutoBoost__private_descriptor,
      Feature_UserModeAutoBoost__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v21,
      3,
      (__int64)&Feature_UserModeAutoBoost__private_descriptor);
  }
  if ( Object != KeGetCurrentThread()->ApcState.Process )
    return (unsigned int)-1073741637;
  v5 = ObCreateObjectEx(PreviousMode, PspSchedulerSharedDataType, 0, PreviousMode, Tag, 248, 0, 0, Objecta, 0LL);
  v6 = Objecta[0];
  Section = v5;
  if ( v5 >= 0 )
  {
    memset_0(Objecta[0], 0, 0xF8uLL);
    v6[25] = 0LL;
    v6[27] = (char *)v6 + 228;
    *((_DWORD *)v6 + 52) = 128;
    *((_DWORD *)v6 + 56) = 0;
    Section = ObReferenceObjectByPointerWithTag(Object, 0x200u, (POBJECT_TYPE)PsProcessType, 0, 0x61537350u);
    if ( Section >= 0 )
    {
      LODWORD(ullMultiplicand) = 0;
      v8 = v6 + 21;
      v6[20] = Object;
      *(_OWORD *)Objecta = 0LL;
      Section = MmCreateSectionEx((int)v6 + 168, 0, 0x2000, 4, 0x4000000, 0LL, 0LL, 0, v17, 0LL, ullMultiplicand);
      if ( Section >= 0 )
      {
        v9 = *v8;
        v21 = 0x2000LL;
        Objecta[0] = 0LL;
        Section = MiMapViewInSystemSpace(v9, v6 + 22, (unsigned __int64 *)&v21, (unsigned __int64 *)Objecta, 0LL, 0LL);
        if ( Section >= 0 )
        {
          v10 = (char *)v6 + 34;
          v11 = 0LL;
          v12 = 2LL;
          do
          {
            v13 = v6[22];
            *(_QWORD *)(v10 - 18) = 0LL;
            v14 = v11 + v13;
            *(_QWORD *)(v10 - 34) = v14;
            *(_QWORD *)(v10 - 26) = 0LL;
            *(_QWORD *)(v10 - 10) = 0LL;
            v11 += 4096LL;
            *(_WORD *)v10 = 0;
            *((_WORD *)v10 - 1) = 8 * (((unsigned __int16)((v14 & 0xFFF) + 0x1FFF) >> 12) + 6);
            *(_DWORD *)(v10 + 30) = 4096;
            v10 += 80;
            *(_QWORD *)(v10 - 58) = v14 & 0xFFFFFFFFFFFFF000uLL;
            *(_DWORD *)(v10 - 46) = v14 & 0xFFF;
            --v12;
          }
          while ( v12 );
          Section = MmMapViewOfSection(*v8, (__int64)Object, v6 + 23, 0LL, 0LL, &v20, &v21, 1, 0x400000, 4);
          if ( Section >= 0 )
          {
            Section = ObInsertObjectEx((struct _FILE_OBJECT *)v6, 0LL, 1, 0, 0, 0LL, (__int64)&v22);
            if ( Section < 0 )
              return (unsigned int)Section;
            v6 = 0LL;
            *a2 = v22;
            Section = 0;
            v22 = 0LL;
          }
        }
      }
    }
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)Section;
}
