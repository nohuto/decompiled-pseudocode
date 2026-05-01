/*
 * XREFs of ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1801C89B8
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800A6FF0 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z @ 0x1801C8F38 (-IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAA?AW4Variant_AutoGamePowerProfile@@W4VariantReportingKind@3@_N@Z @ 0x1801C8FE8 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A6FD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180318CBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAA?AW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_N@Z @ 0x180319E98 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BroadcastDVRComponent::GetGameModeRequest(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  BOOL v8; // edi
  int ValueW; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // r12d
  LSTATUS v15; // eax
  bool v16; // sf
  unsigned int v17; // r14d
  char v18; // r15
  int v19; // eax
  int v20; // edx
  __int64 v21; // rdx
  int v22; // ecx
  const struct _GUID *v23; // rdx
  BroadcastDVRComponent *v24; // rcx
  char Variant; // di
  bool IsUsingPowerProfile; // al
  __int64 v27; // rax
  DWORD ActiveProcessorCount; // edi
  __int64 v29; // rdx
  char v30; // al
  _WORD *v31; // rcx
  unsigned int i; // r9d
  int v33; // r8d
  unsigned int v34; // eax
  unsigned int v35; // ecx
  char v36; // dl
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // ecx
  unsigned int v41; // eax
  __int64 result; // rax
  int pvData; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v45; // [rsp+48h] [rbp-18h] BYREF
  int v46; // [rsp+4Ch] [rbp-14h]
  int v47; // [rsp+50h] [rbp-10h]
  __int64 v48; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  DWORD pcbData; // [rsp+B0h] [rbp+50h] BYREF
  int v52; // [rsp+B8h] [rbp+58h] BYREF

  pcbData = 4;
  v4 = *(_BYTE *)(a3 + 5) == 0;
  pvData = 0;
  v8 = v4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\GameBar",
             L"GpuGameMemoryBudgetPercentage",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW > 0 )
    ValueW = (unsigned __int16)ValueW | 0x80070000;
  pcbData = 4;
  v10 = 50;
  if ( ValueW >= 0 )
    v10 = pvData;
  v46 = v10;
  v11 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\GameBar",
          L"GpuDwmMemoryBudgetPercentage",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0x80070000;
  pcbData = 4;
  v12 = 30;
  if ( v11 >= 0 )
    v12 = pvData;
  v47 = v12;
  v13 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\GameBar",
          L"GpuYieldPercentage",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  if ( v13 > 0 )
    v13 = (unsigned __int16)v13 | 0x80070000;
  pcbData = 4;
  v14 = 2;
  if ( v13 >= 0 )
    v14 = pvData;
  v15 = RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\GameBar",
          L"DisallowSystemAllowedCpuSets",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v16 = v15 < 0;
  if ( v15 > 0 )
    v16 = 1;
  if ( !v16 )
    v8 = pvData != 0;
  v17 = *(_DWORD *)(a3 + 24);
  v18 = 1;
  v19 = a2;
  v20 = *(_DWORD *)(a4 + 28);
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_BYTE *)(a4 + 36) = 2;
  if ( a2 == 5 )
  {
    v21 = v20 & 0xFFFFFFE0 | 0x10;
  }
  else
  {
    v19 = a2;
    v21 = (16 * v8) | v20 & 0xFFFFFFE7 | (8 * !v8) & 0xFFFFFFEF | 7;
  }
  *(_DWORD *)(a4 + 28) = v21;
  if ( *(_QWORD *)(a3 + 16) == -1LL )
  {
    *(_DWORD *)(a4 + 4) = 0;
    if ( !*(_BYTE *)(a3 + 6) )
    {
      v22 = 0;
      if ( v19 == 4 )
        v22 = 8;
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 32) & 0xFFFFFFF7 | v22;
    }
    goto LABEL_83;
  }
  if ( *(_BYTE *)(a3 + 6) )
    goto LABEL_35;
  LOBYTE(v21) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AutoGamePowerProfile>::GetImpl'::`2'::impl,
    v21,
    4294967287LL);
  Variant = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGamePowerProfile>::GetImpl'::`2'::impl);
  if ( !Variant && a2 == 4 )
    Variant = 2;
  IsUsingPowerProfile = BroadcastDVRComponent::IsUsingPowerProfile(v24, v23);
  switch ( Variant )
  {
    case 0:
LABEL_34:
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 32) & 0xFFFFFFF7 | (8 * !IsUsingPowerProfile);
      goto LABEL_35;
    case 1:
      *(_DWORD *)(a4 + 32) |= 8u;
      goto LABEL_35;
    case 2:
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)(a4 + 32) |= 8u;
LABEL_48:
      v34 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 16) = v14;
      goto LABEL_49;
  }
  if ( Variant != 3 )
  {
    if ( Variant != 4 )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( IsUsingPowerProfile )
  {
LABEL_35:
    if ( a2 == 4 )
      goto LABEL_83;
    v27 = *(_QWORD *)(a3 + 16);
    if ( v27 || *(_DWORD *)(a3 + 28) || *(_BYTE *)(a3 + 5) )
    {
      *(_QWORD *)(a4 + 8) = v27;
      v41 = *(_DWORD *)(a3 + 28);
      if ( v41 )
      {
        if ( v41 > *(_DWORD *)(a4 + 4) )
          *(_DWORD *)(a4 + 28) |= 0x40u;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a3 + 28);
      }
      goto LABEL_83;
    }
    ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
    LOBYTE(v29) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_AutoGameModeProfile>::GetImpl'::`2'::impl,
      v29);
    v30 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGameModeProfile>::GetImpl'::`2'::impl);
    v31 = &unk_180793EF0;
    for ( i = 0; i < 0x23; ++i )
    {
      if ( *((_BYTE *)v31 + 4) == v30 )
      {
        v33 = *(_DWORD *)v31 >> 28;
        if ( v33 != 12 && ((*(_DWORD *)v31 >> 21) & 0x3F) == ActiveProcessorCount )
        {
          *(_QWORD *)(a4 + 8) = (unsigned __int16)*(_DWORD *)v31;
          if ( (v31[1] & 0x1F) != 0 )
          {
            if ( (v31[1] & 0x1Fu) > *(_DWORD *)(a4 + 4) )
              *(_DWORD *)(a4 + 28) |= 0x40u;
            *(_DWORD *)(a4 + 4) = v31[1] & 0x1F;
          }
          if ( ((v33 - 2) & 0xFFFFFFFB) != 0 )
            goto LABEL_83;
LABEL_76:
          *(_DWORD *)(a4 + 28) = *(_DWORD *)(a4 + 28) & 0xFFFFFFE7 | 8;
          goto LABEL_83;
        }
      }
      v31 += 4;
    }
    v37 = *(_QWORD *)(a1 + 256);
    v44 = 0;
    LOBYTE(v52) = 1;
    v48 = 0LL;
    v45 = 0;
    LOBYTE(pcbData) = 0;
    v38 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *, unsigned int *, int *, DWORD *))(*(_QWORD *)v37 + 88LL))(
            v37,
            &v44,
            &v48,
            &v45,
            &v52,
            &pcbData);
    if ( v38 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA40,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v38);
LABEL_61:
      if ( ActiveProcessorCount == 2 )
        goto LABEL_62;
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a4 + 28) & 0xFFFFFFE7 | 8;
      if ( ActiveProcessorCount == 4 )
        *(_DWORD *)(a4 + 4) = 2;
      goto LABEL_83;
    }
    if ( !(_BYTE)pcbData )
      goto LABEL_61;
    v39 = v48;
    if ( !v17 )
      v17 = v44;
    if ( v48 )
    {
      if ( v48 == -1 )
        goto LABEL_70;
      *(_QWORD *)(a4 + 8) = v48;
    }
    if ( v39 != -1 )
    {
      v40 = v45;
      if ( v45 )
      {
        if ( v45 > *(_DWORD *)(a4 + 4) )
          *(_DWORD *)(a4 + 28) |= 0x40u;
        *(_DWORD *)(a4 + 4) = v40;
      }
LABEL_75:
      if ( !(_BYTE)v52 )
        goto LABEL_83;
      goto LABEL_76;
    }
LABEL_70:
    *(_DWORD *)(a4 + 4) = 0;
    goto LABEL_75;
  }
  *(_DWORD *)(a4 + 32) |= 8u;
LABEL_62:
  *(_DWORD *)(a4 + 4) = 0;
LABEL_83:
  if ( !v17 )
    goto LABEL_48;
  *(_DWORD *)(a4 + 16) = HIBYTE(v17);
  if ( HIBYTE(v17) > 0xAu )
    *(_DWORD *)(a4 + 16) = 100 - HIBYTE(v17);
  *(_DWORD *)(a4 + 20) = BYTE2(v17);
  v34 = BYTE1(v17);
  *(_DWORD *)(a4 + 24) = BYTE1(v17);
LABEL_49:
  v35 = *(_DWORD *)(a4 + 20);
  if ( !v35 && !v34 )
  {
    v36 = 1;
LABEL_89:
    v18 = 0;
    goto LABEL_90;
  }
  v36 = 0;
  if ( v35 < 0x64 && v34 < 0x64 )
    goto LABEL_89;
LABEL_90:
  if ( v36 || v18 || v35 + v34 >= 0x64 )
  {
    *(_DWORD *)(a4 + 20) = v46;
    *(_DWORD *)(a4 + 24) = v47;
  }
  result = (unsigned int)(*(_DWORD *)(a4 + 16) - 2);
  if ( (unsigned int)result > 8 )
    *(_DWORD *)(a4 + 16) = v14;
  if ( a2 != 3 )
  {
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)(a4 + 16) = 10;
    *(_DWORD *)(a4 + 20) = 50;
    *(_DWORD *)(a4 + 24) = 30;
  }
  return result;
}
