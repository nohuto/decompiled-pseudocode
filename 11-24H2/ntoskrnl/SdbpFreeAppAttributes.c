/*
 * XREFs of SdbpFreeAppAttributes @ 0x140804CBC
 * Callers:
 *     SdbpReleaseSearchDBContext @ 0x1409412B8 (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     ULongLongMult @ 0x140437FD0 (ULongLongMult.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SdbpFreeAppAttributes(__int64 a1)
{
  ULONGLONG v1; // rax
  ULONGLONG i; // rsi
  unsigned __int16 *v4; // rdi
  ULONGLONG v5; // rcx
  ULONGLONG v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    for ( i = 0LL; i < v1; ++i )
    {
      v4 = 0LL;
      if ( i < v1 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        pullResult = 0LL;
        if ( ULongLongMult(v5, i, &pullResult) < 0
          || (v6 = *(_QWORD *)(a1 + 40), v4 = (unsigned __int16 *)(v6 + pullResult), v6 + pullResult < v6) )
        {
          v4 = 0LL;
        }
      }
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
      v7 = *v4;
      v8 = 24577LL;
      if ( (_WORD)v7 == 24577
        || (LOWORD(v7) = v7 - 24593, (unsigned __int16)v7 <= 0x37u) && (v8 = 0x82000007000001LL, _bittest64(&v8, v7)) )
      {
        AslFree(v8);
      }
      v1 = *(_QWORD *)(a1 + 16);
    }
    v9 = *(void **)(a1 + 40);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72615452u);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
  }
}
