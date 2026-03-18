/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1800C8C00
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800C865C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800C8870 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800C8A90 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x18024839C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QEAA_NXZ @ 0x180249DB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NXZ @ 0x18024A934 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EffectHash@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x18024B1A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QEAA_NXZ @ 0x18024B7E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, int a3)
{
  int v6; // edx
  signed __int32 v7; // eax
  char v8; // r9
  signed __int32 v9; // r8d
  signed __int32 v10; // ett
  int v11; // edi
  signed __int32 v12; // eax
  BOOL v13; // ebp
  unsigned int v14; // ecx
  char v15; // si
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  signed __int32 v20; // ett
  signed __int32 v21; // eax
  BOOL v22; // esi
  unsigned int v23; // ecx
  char v24; // r9
  int v25; // edx
  int v26; // r8d
  unsigned int v27; // edx
  unsigned int v28; // r8d
  signed __int32 v29; // ett
  int v30; // edx
  unsigned __int32 v31; // eax
  int v32; // ecx
  unsigned __int32 v33; // ett

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( a3 )
  {
    case 0:
    case 4:
      v12 = *a2;
      v13 = a3 == 4;
      do
      {
        *(_DWORD *)(a1 + 4) = 0;
        v14 = v12 | 1;
        v15 = v12;
        if ( (((v12 | 1u) >> 14) & 1) != v13 )
        {
          if ( ((v14 >> 5) & 0x1FF) != 0 )
          {
            *(_DWORD *)(a1 + 4) = (v14 >> 5) & 0x1FF;
            v16 = 4;
            if ( a3 )
              v16 = 0;
            v14 = v12 & 0xFFFFC01E | 1;
            *(_DWORD *)(a1 + 8) = v16;
          }
          v17 = 0;
          if ( a3 == 4 )
            v17 = 0x4000;
          v14 = v14 & 0xFFFFBFFF | v17;
        }
        v18 = (v14 >> 5) & 0x1FF;
        v19 = v18 + 1;
        if ( v18 + 1 > 0x1FF || v19 < v18 )
        {
          LOWORD(v19) = 1;
          *(_DWORD *)(a1 + 8) = a3;
          *(_DWORD *)(a1 + 4) = v18;
        }
        v20 = v12;
        v12 = _InterlockedCompareExchange(
                a2,
                ((unsigned __int16)v14 ^ (unsigned __int16)(32 * v19)) & 0x3FE0 ^ v14,
                v12);
      }
      while ( v20 != v12 );
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)a1 = (v15 & 1) == 0;
      break;
    case 1:
    case 5:
      v21 = *a2;
      v22 = a3 == 5;
      do
      {
        *(_DWORD *)(a1 + 4) = 0;
        v23 = v21 | 1;
        v24 = v21;
        if ( (((v21 | 1u) >> 22) & 1) != v22 )
        {
          if ( ((v23 >> 15) & 0x7F) != 0 )
          {
            *(_DWORD *)(a1 + 4) = (v23 >> 15) & 0x7F;
            v25 = 5;
            if ( a3 != 1 )
              v25 = 1;
            v23 = v21 & 0xFFC07FFE | 1;
            *(_DWORD *)(a1 + 8) = v25;
          }
          v26 = 0;
          if ( a3 == 5 )
            v26 = 0x400000;
          v23 = v23 & 0xFFBFFFFF | v26;
        }
        v27 = (v23 >> 15) & 0x7F;
        v28 = v27 + 1;
        if ( v27 + 1 > 0x7F || v28 < v27 )
        {
          v28 = 1;
          *(_DWORD *)(a1 + 8) = a3;
          *(_DWORD *)(a1 + 4) = v27;
        }
        v29 = v21;
        v21 = _InterlockedCompareExchange(a2, (v23 ^ (v28 << 15)) & 0x3F8000 ^ v23, v21);
      }
      while ( v29 != v21 );
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)a1 = (v24 & 1) == 0;
      break;
    case 2:
    case 3:
    case 6:
    case 7:
      v6 = 0;
      switch ( a3 )
      {
        case 2:
          v6 = 2;
          break;
        case 3:
          v6 = 8;
          break;
        case 6:
          v6 = 4;
          break;
        case 7:
          v6 = 16;
          break;
      }
      v7 = *a2;
      do
      {
        v8 = v7;
        *(_DWORD *)(a1 + 16) = (v7 | v6) == v7;
        v9 = v7 | v6 | 1;
        if ( (v7 | v6) == v7 )
          v9 = v7 | v6;
        v10 = v7;
        v7 = _InterlockedCompareExchange(a2, v9, v7);
      }
      while ( v10 != v7 );
      if ( (v9 & 1) == 0 || (v11 = 1, (v8 & 1) != 0) )
        v11 = 0;
      *(_DWORD *)a1 = v11;
      break;
    default:
      v30 = a3 - 320;
      if ( a3 - 320 >= 64 )
        goto LABEL_53;
      v31 = *((_DWORD *)a2 + 1);
      do
      {
        if ( (v31 & 0x10) == 0 || (v32 = 1, ((v31 >> 5) & 0x3F) != v30) )
          v32 = 0;
        *(_DWORD *)(a1 + 16) = v32;
        v33 = v31;
        v31 = _InterlockedCompareExchange(
                a2 + 1,
                v31 ^ ((unsigned __int16)v31 ^ (unsigned __int16)(32 * v30)) & 0x7E0 | 0x10,
                v31);
      }
      while ( v33 != v31 );
      if ( !*(_DWORD *)(a1 + 16) )
      {
LABEL_53:
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 12) = 0;
      }
      break;
  }
  return a1;
}
