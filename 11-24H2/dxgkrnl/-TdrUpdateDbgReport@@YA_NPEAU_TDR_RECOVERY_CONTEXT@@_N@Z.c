/*
 * XREFs of ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D0730
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CF6A0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1401CF8E0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D01F0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140368AC0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140186D64 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1401D067C (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D06CC (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     DpiIsRfxVgpuDevice @ 0x14023758C (DpiIsRfxVgpuDevice.c)
 */

char __fastcall TdrUpdateDbgReport(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  char v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 DbgOwnerTag; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r15
  __int64 v15; // r12
  bool v16; // bp
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  int v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+40h] [rbp-48h]
  unsigned __int64 retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+18h]

  v2 = a2;
  if ( *((_BYTE *)a1 + 2921) )
  {
    if ( *((_QWORD *)a1 + 357) )
    {
      if ( *((_QWORD *)a1 + 358) )
        TdrUpdateDbgBuffer(a1);
    }
    return 1;
  }
  v5 = *((_QWORD *)a1 + 4);
  if ( !v5
    || ((v6 = *(_QWORD *)(v5 + 216), (v7 = *(_QWORD *)(v6 + 64)) == 0)
     || *(_DWORD *)(v7 + 16) != 1953656900
     || (unsigned int)(*(_DWORD *)(v7 + 20) - 2) > 1
     || !*(_BYTE *)(v7 + 2719))
    && !(unsigned __int8)DpiIsRfxVgpuDevice(v6) )
  {
    if ( !*((_QWORD *)a1 + 356) || v2 )
    {
      DbgOwnerTag = TdrGetDbgOwnerTag(a1);
      if ( ((DbgOwnerTag + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
        DbgOwnerTag = retaddr;
      v31 = 0;
      TdrRetrieveSecondaryBucketingKey(a1, &v31);
      v32 = (unsigned int)Feature_EnableFullLKDOnTDR__private_featureState;
      if ( (Feature_EnableFullLKDOnTDR__private_featureState & 0x10) == 0 )
      {
        LODWORD(v32) = Feature_EnableFullLKDOnTDR__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_EnableFullLKDOnTDR__private_descriptor,
          v32,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v32,
          3,
          (__int64)&Feature_EnableFullLKDOnTDR__private_descriptor);
      }
      v10 = *((_QWORD *)a1 + 4);
      if ( v10 )
        v11 = *(_QWORD *)(v10 + 216);
      else
        v11 = 0LL;
      v12 = *((_DWORD *)a1 + 4);
      if ( v12 == 6 || v12 == 12 )
        v13 = (*((_BYTE *)a1 + 2820) != 0) + 321;
      else
        v13 = 279;
      v14 = v31;
      v15 = *((_QWORD *)a1 + 351);
      if ( v10 )
        v16 = *(_QWORD *)(v10 + 3128) == 0LL;
      else
        v16 = 0;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
        McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&TdrCaptureDumpStart, v9);
      v17 = WdDbgReportRecreate(v11, v13, a1, DbgOwnerTag, v14, v15, v16, *((_QWORD *)a1 + 356), 3);
      *((_QWORD *)a1 + 356) = v17;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
      {
        LODWORD(v26) = v17 == 0 ? 0xC0000017 : 0;
        LODWORD(v24) = 3;
        McTemplateK0pqq_EtwWriteTransfer(v18, (__int64)&TdrCaptureDumpFinish, v19, *((_QWORD *)a1 + 4), v24, v26);
      }
      if ( !*((_QWORD *)a1 + 356) )
      {
        v32 = (unsigned int)Feature_EnableFullLKDOnTDR__private_featureState;
        if ( (Feature_EnableFullLKDOnTDR__private_featureState & 0x10) == 0 )
        {
          LODWORD(v32) = Feature_EnableFullLKDOnTDR__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_EnableFullLKDOnTDR__private_descriptor,
            v32,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v32,
            3,
            (__int64)&Feature_EnableFullLKDOnTDR__private_descriptor);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
        {
          LODWORD(v24) = 0;
          McTemplateK0pt_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            (__int64)&TdrCaptureDumpStart,
            v19,
            *((_QWORD *)a1 + 4),
            v24);
        }
        LOBYTE(v29) = 0;
        LOBYTE(v28) = v16;
        v20 = WdDbgReportRecreate(v11, v13, a1, DbgOwnerTag, v14, v15, v28, *((_QWORD *)a1 + 356), v29);
        *((_QWORD *)a1 + 356) = v20;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
        {
          LODWORD(v27) = v20 == 0 ? 0xC0000017 : 0;
          LODWORD(v25) = 0;
          McTemplateK0pqq_EtwWriteTransfer(v21, (__int64)&TdrCaptureDumpFinish, v22, *((_QWORD *)a1 + 4), v25, v27);
        }
      }
      v23 = *((_QWORD *)a1 + 356);
      if ( !v23 )
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 1090;
        return 0;
      }
      if ( !(unsigned __int8)WdDbgReportQueryInfo(v23, (char *)a1 + 128) )
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 1098;
      }
    }
    if ( !*((_QWORD *)a1 + 357) )
      return 1;
    if ( !*((_QWORD *)a1 + 358) )
      return 1;
    TdrUpdateDbgBuffer(a1);
    if ( (unsigned __int8)WdDbgReportSecondaryData(
                            *((_QWORD *)a1 + 356),
                            *((_QWORD *)a1 + 357),
                            *((unsigned int *)a1 + 716)) )
      return 1;
    *((_DWORD *)a1 + 29) |= 0x80000000;
    WdLogSingleEntry2(2LL, a1, *((_QWORD *)a1 + 358));
    WdLogGlobalForLineNumber = 1115;
  }
  return 0;
}
