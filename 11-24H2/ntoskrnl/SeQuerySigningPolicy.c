/*
 * XREFs of SeQuerySigningPolicy @ 0x1409FA0B0
 * Callers:
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     SepIsMinTCB @ 0x1409FA28C (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x1409FA5A0 (SepIsSystemAppTCB.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     SeQuerySigningPolicyWorker @ 0x1409FA8F8 (SeQuerySigningPolicyWorker.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        void *a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  char v7; // r14
  __int64 v9; // rdx
  int IsMinTCB; // ebp
  int IsSystemAppTCB; // eax
  __int64 v13; // rcx
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int8 v19; // [rsp+40h] [rbp-38h]

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = SepIsMinTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
  if ( IsMinTCB >= 0 )
    goto LABEL_11;
  if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
  {
    v19 = Feature_ID51912085__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ID51912085__private_descriptor,
      Feature_ID51912085__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v19, 3, (__int64)&Feature_ID51912085__private_descriptor);
  }
  if ( IsMinTCB == -1073741275 )
  {
    IsSystemAppTCB = SepIsSystemAppTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
    IsMinTCB = IsSystemAppTCB;
    if ( IsSystemAppTCB >= 0
      || IsSystemAppTCB == -1073741275
      && (IsMinTCB = SeQuerySigningPolicyWorker(a1, v7, (__int64)a5, (__int64)a6, (__int64)a7), IsMinTCB >= 0) )
    {
LABEL_11:
      v13 = (*a7 & 7u) - 1;
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
        v14 = 8;
        if ( (*a5 & 0xF) != 8 )
        {
          LOBYTE(v9) = 8;
          LOBYTE(v13) = *a5;
          if ( (unsigned int)SeCompareSigningLevels(v13, v9) )
          {
            if ( (SeCiDebugOptions & 4) != 0
              || (SeCiDebugOptions & 2) != 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
            {
              LOBYTE(v15) = 8;
              LOBYTE(v16) = v7;
              if ( (unsigned int)SeCompareSigningLevels(v16, v15) || (*a7 & 7) == 0 )
              {
                LOBYTE(v18) = v7;
                v14 = v7 & 0xF;
              }
              else
              {
                LOBYTE(v18) = 8;
              }
              *a5 = v14 | *a5 & 0x30;
              LOBYTE(v17) = *a6;
              if ( !(unsigned int)SeCompareSigningLevels(v18, v17) )
                *a6 = v14 | *a6 & 0x30;
            }
          }
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
