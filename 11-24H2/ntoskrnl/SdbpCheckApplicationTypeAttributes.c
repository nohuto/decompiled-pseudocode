/*
 * XREFs of SdbpCheckApplicationTypeAttributes @ 0x1406970F8
 * Callers:
 *     SdbpCheckBackupApplicationAttributes @ 0x1408030D0 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x1408047C0 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     ULongLongMult @ 0x140437FD0 (ULongLongMult.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     SdbReadQWORDTag @ 0x14080631C (SdbReadQWORDTag.c)
 *     SdbpCheckFromStringVersion @ 0x140808034 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckFromVersion @ 0x1408081C4 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x14080820C (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckUptoVersion @ 0x140808380 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1408083C8 (SdbpCheckVersion.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     AslStringPatternMatchW @ 0x140946C54 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckApplicationTypeAttributes(int *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  int v9; // ebp
  unsigned __int64 i; // rsi
  __int64 v11; // r8
  unsigned int FirstTag; // r10d
  ULONGLONG v13; // rax
  ULONGLONG v14; // r9
  ULONGLONG v15; // rdi
  ULONGLONG v16; // rcx
  ULONGLONG v17; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  bool v26; // zf
  __int64 StringTagPtr; // rax
  int v28; // eax
  __int64 QWORDTag; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int DWORDTag; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0;
  v9 = 1;
  pullResult = (unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState;
  if ( (Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState & 0x10) == 0 )
  {
    LODWORD(pullResult) = Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor,
      Feature_Servicing_MercuryNewSdbTagsForBackup__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      pullResult,
      3,
      (__int64)&Feature_Servicing_MercuryNewSdbTagsForBackup__private_descriptor);
  }
  for ( i = 0LL; i < 0x40; i += 4LL )
  {
    FirstTag = SdbFindFirstTag(a2, a3, *(unsigned __int16 *)((char *)&unk_140E0ED50 + i));
    if ( !FirstTag )
      continue;
    v13 = a4[2];
    v14 = 0LL;
    if ( !v13 )
      goto LABEL_13;
    while ( 1 )
    {
      v15 = 0LL;
      if ( v14 < v13 )
      {
        v16 = a4[1];
        pullResult = 0LL;
        if ( ULongLongMult(v16, v14, &pullResult) < 0 || (v17 = a4[5], v15 = v17 + pullResult, v17 + pullResult < v17) )
          v15 = 0LL;
      }
      if ( *(_WORD *)v15 == *(_WORD *)((char *)&unk_140E0ED50 + i + 2) )
        break;
      v13 = a4[2];
      if ( ++v14 >= v13 )
        goto LABEL_13;
    }
    if ( !v15 )
    {
LABEL_13:
      if ( *(_WORD *)((char *)&unk_140E0ED50 + i) == 24577 )
        continue;
      if ( (unsigned __int16)SdbGetTagFromTagID(a2, a3, v11, v14) != 28768 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckApplicationTypeAttributes",
          5180,
          (unsigned int)"Failed to find Attribute to use for sdb tag");
        return v4;
      }
LABEL_15:
      v9 = 0;
      continue;
    }
    v18 = *(unsigned __int16 *)((char *)&unk_140E0ED50 + i);
    if ( v18 > 0x6011 )
    {
      v33 = v18 - 24617;
      if ( !v33 )
        goto LABEL_29;
      v34 = v33 - 1;
      if ( !v34 )
        goto LABEL_29;
      v35 = v34 - 1;
      if ( !v35 )
        goto LABEL_29;
      v36 = v35 - 23;
      if ( !v36 )
        goto LABEL_29;
      v37 = v36 - 2;
      if ( v37 )
      {
        v38 = v37 - 2;
        if ( v38 )
        {
          v26 = v38 == 2;
LABEL_28:
          if ( !v26 )
            return v4;
LABEL_29:
          StringTagPtr = SdbGetStringTagPtr(a2, FirstTag);
          if ( !StringTagPtr )
            return v4;
          v28 = AslStringPatternMatchW(StringTagPtr, *(_QWORD *)(v15 + 8));
          goto LABEL_31;
        }
        v39 = SdbGetStringTagPtr(a2, FirstTag);
        if ( !v39 )
          return v4;
        v28 = SdbpCheckFromStringVersion(v39, *(_QWORD *)(v15 + 8));
      }
      else
      {
        v40 = SdbGetStringTagPtr(a2, FirstTag);
        if ( !v40 )
          return v4;
        v28 = SdbpCheckUptoStringVersion(v40, *(_QWORD *)(v15 + 8));
      }
    }
    else
    {
      if ( v18 == 24593 )
        goto LABEL_29;
      v19 = v18 - 16453;
      if ( v19 )
      {
        v20 = v19 - 4047;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
            goto LABEL_36;
          v22 = v21 - 1;
          if ( !v22 )
            goto LABEL_34;
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 == 4072;
                goto LABEL_28;
              }
LABEL_34:
              QWORDTag = SdbReadQWORDTag(a2, FirstTag, -1LL);
              if ( QWORDTag == -1 )
                return v4;
              v28 = SdbpCheckUptoVersion(QWORDTag, *(_QWORD *)(v15 + 8));
              goto LABEL_31;
            }
LABEL_36:
            v30 = SdbReadQWORDTag(a2, FirstTag, -1LL);
            if ( v30 == -1 )
              return v4;
            v28 = SdbpCheckFromVersion(v30, *(_QWORD *)(v15 + 8));
            goto LABEL_31;
          }
        }
        v31 = SdbReadQWORDTag(a2, FirstTag, -1LL);
        if ( v31 == -1 )
          return v4;
        v28 = SdbpCheckVersion(v31, *(_QWORD *)(v15 + 8));
      }
      else
      {
        DWORDTag = SdbReadDWORDTag(a2, FirstTag, 0xFFFFFFFFLL);
        if ( DWORDTag == -1 )
          return v4;
        v28 = DWORDTag == *(_DWORD *)(v15 + 8);
      }
    }
LABEL_31:
    if ( !v9 || !v28 )
      goto LABEL_15;
    v9 = 1;
  }
  *a1 = v9;
  return 1;
}
