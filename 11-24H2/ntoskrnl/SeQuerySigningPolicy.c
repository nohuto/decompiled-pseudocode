/*
 * XREFs of SeQuerySigningPolicy @ 0x140A1BB40
 * Callers:
 *     PspCreateProcess @ 0x140A1B354 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     SeCompareSigningLevels @ 0x1409354F0 (SeCompareSigningLevels.c)
 *     SepIsMinTCB @ 0x140A1BD1C (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x140A1C030 (SepIsSystemAppTCB.c)
 *     SeQuerySigningPolicyWorker @ 0x140A1C1B8 (SeQuerySigningPolicyWorker.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        int a1,
        const UNICODE_STRING *a2,
        int a3,
        char a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  char v7; // r14
  __int64 v11; // rdx
  int IsMinTCB; // ebp
  __int64 v13; // r8
  __int64 v14; // r9
  int IsSystemAppTCB; // eax
  __int64 v17; // rcx
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 v27; // [rsp+40h] [rbp-38h]

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = SepIsMinTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
  if ( IsMinTCB >= 0 )
    goto LABEL_11;
  if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
  {
    v27 = Feature_ID51912085__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ID51912085__private_descriptor,
      Feature_ID51912085__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v27, 3, (__int64)&Feature_ID51912085__private_descriptor);
  }
  if ( IsMinTCB == -1073741275 )
  {
    IsSystemAppTCB = SepIsSystemAppTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
    IsMinTCB = IsSystemAppTCB;
    if ( IsSystemAppTCB >= 0
      || IsSystemAppTCB == -1073741275
      && (LOBYTE(v14) = a4,
          IsMinTCB = SeQuerySigningPolicyWorker(a1, (_DWORD)a2, a3, v14, v7, (__int64)a5, (__int64)a6, (__int64)a7),
          IsMinTCB >= 0) )
    {
LABEL_11:
      v17 = (*a7 & 7u) - 1;
      if ( (*a7 & 7) == 1 )
      {
        *a5 |= 0x30u;
      }
      else if ( (*a7 & 7) == 2 )
      {
        *a5 |= 0x10u;
        *a6 |= 0x10u;
      }
      if ( IsMinTCB >= 0 )
      {
        v18 = 8;
        if ( (*a5 & 0xF) != 8 )
        {
          LOBYTE(v11) = 8;
          LOBYTE(v17) = *a5;
          if ( (unsigned int)SeCompareSigningLevels(v17, v11, v13, v14) )
          {
            if ( (SeCiDebugOptions & 4) != 0
              || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
            {
              LOBYTE(v19) = 8;
              LOBYTE(v20) = v7;
              if ( (unsigned int)SeCompareSigningLevels(v20, v19, v21, v22) || (*a7 & 7) == 0 )
              {
                LOBYTE(v24) = v7;
                v18 = v7 & 0xF;
              }
              else
              {
                LOBYTE(v24) = 8;
              }
              *a5 = v18 | *a5 & 0x30;
              LOBYTE(v23) = *a6;
              if ( !(unsigned int)SeCompareSigningLevels(v24, v23, v25, v26) )
                *a6 = v18 | *a6 & 0x30;
            }
          }
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
