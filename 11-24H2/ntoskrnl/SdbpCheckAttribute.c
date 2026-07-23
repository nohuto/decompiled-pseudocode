/*
 * XREFs of SdbpCheckAttribute @ 0x140807D34
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140807A9C (SdbpCheckAllAttributes.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     SdbpCheckFromStringVersion @ 0x140808034 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckFromVersion @ 0x1408081C4 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x14080820C (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckUptoVersion @ 0x140808380 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1408083C8 (SdbpCheckVersion.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckAttribute(_DWORD *a1, unsigned __int16 a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  int v5; // ebx
  unsigned int v9; // edi
  int v10; // r8d
  int v11; // eax
  int v12; // r9d
  bool v13; // zf
  unsigned __int8 v15; // [rsp+40h] [rbp+8h]
  unsigned __int8 v16; // [rsp+40h] [rbp+8h]

  v5 = 0;
  *a1 = 0;
  v9 = 1;
  if ( a2 > 0x5012u )
  {
    if ( a2 != 20499 )
    {
      if ( a2 == 24644 || a2 == 24645 )
      {
        if ( (Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 0x10) == 0 )
        {
          v16 = Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor,
            Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1,
            3);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v16,
            3,
            (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor);
        }
        if ( a4 < 2 )
        {
          v10 = 275;
          goto LABEL_14;
        }
        v11 = SdbpCheckUptoStringVersion(a3, *(_QWORD *)(a5 + 16));
        goto LABEL_52;
      }
      if ( (unsigned int)a2 - 24646 < 2 )
      {
        if ( (Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 0x10) == 0 )
        {
          v15 = Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor,
            Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1,
            3);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v15,
            3,
            (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor);
        }
        if ( a4 < 2 )
        {
          v10 = 292;
          goto LABEL_14;
        }
        v11 = SdbpCheckFromStringVersion(a3, *(_QWORD *)(a5 + 16));
        goto LABEL_52;
      }
      goto LABEL_26;
    }
LABEL_49:
    if ( a4 < 8 )
    {
      v10 = 246;
      goto LABEL_14;
    }
    v11 = SdbpCheckFromVersion(*a3, *(_QWORD *)(a5 + 16));
    goto LABEL_52;
  }
  switch ( a2 )
  {
    case 0x5012u:
      goto LABEL_49;
    case 0x401Eu:
      if ( a4 < 4 )
      {
        v10 = 320;
        goto LABEL_14;
      }
      LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
      goto LABEL_53;
    case 0x4033u:
      if ( a4 < 4 )
      {
        v10 = 307;
        goto LABEL_14;
      }
      LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
      goto LABEL_53;
    case 0x5002u:
    case 0x5003u:
      if ( a4 < 8 )
      {
        v10 = 232;
        goto LABEL_14;
      }
      v11 = SdbpCheckVersion(*a3, *(_QWORD *)(a5 + 16));
      goto LABEL_52;
  }
  if ( a2 != 20486 && a2 != 20493 )
  {
LABEL_26:
    v12 = a2 & 0xF000;
    switch ( v12 )
    {
      case 16384:
        if ( a4 < 4 )
        {
          v10 = 336;
          goto LABEL_14;
        }
        v13 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
        break;
      case 20480:
        if ( a4 < 8 )
        {
          v10 = 366;
          goto LABEL_14;
        }
        v13 = *a3 == *(_QWORD *)(a5 + 16);
        break;
      case 24576:
        if ( a4 < 2 )
        {
          v10 = 352;
          goto LABEL_14;
        }
        v11 = AslStringPatternMatchExW(a3, *(_QWORD *)(a5 + 16));
        goto LABEL_52;
      default:
LABEL_53:
        *a1 = v5;
        return v9;
    }
    LOBYTE(v5) = v13;
    goto LABEL_53;
  }
  if ( a4 >= 8 )
  {
    v11 = SdbpCheckUptoVersion(*a3, *(_QWORD *)(a5 + 16));
LABEL_52:
    v5 = v11;
    goto LABEL_53;
  }
  v10 = 260;
LABEL_14:
  AslLogCallPrintf(1, (unsigned int)"SdbpCheckAttribute", v10, (unsigned int)"Attribute size doesn't match");
  return 0;
}
