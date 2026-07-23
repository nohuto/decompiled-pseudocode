/*
 * XREFs of CmFcManagerUpdateFeatureConfigurations @ 0x1407E4C9C
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x1407D6120 (CmUpdateFeatureConfiguration.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x140496128 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404975C8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404B7E24 (RtlpFcWriteHighLowHigh.c)
 *     RtlpFcValidateGovernedFeatures @ 0x1405F00D8 (RtlpFcValidateGovernedFeatures.c)
 *     Feature_CFR_Child_KM_C__private_ReportUsageFallback @ 0x14066722C (Feature_CFR_Child_KM_C__private_ReportUsageFallback.c)
 *     Feature_CFR_Parent_KM_C__private_ReportUsageFallback @ 0x14066729C (Feature_CFR_Parent_KM_C__private_ReportUsageFallback.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14066730C (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140781D08 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 *     CmFcpCleanupSectionState @ 0x140A1AB08 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140A2AFE4 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A2B208 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A2B2EC (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140AA0444 (RtlpFcUpdateFeatureConfiguration.c)
 *     CmFcpMapSection @ 0x140AA3BBC (CmFcpMapSection.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x140AB25D8 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerCreateSection @ 0x140ABBEBC (CmFcpManagerCreateSection.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureConfigurations(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 *v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rax
  signed __int8 v12; // cf
  char *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rcx
  int updated; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int8 *v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  char *v25; // rax
  char *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rsi
  _QWORD *v33; // rbx
  int v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+28h] [rbp-D8h]
  int v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v39; // [rsp+50h] [rbp-B0h]
  __int128 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  _DWORD v42[2]; // [rsp+70h] [rbp-90h]
  _DWORD v43[2]; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v52[9]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v53; // [rsp+118h] [rbp+18h] BYREF
  void *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h] BYREF
  char v56; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v57; // [rsp+150h] [rbp+50h]
  int v58; // [rsp+158h] [rbp+58h]
  int v59; // [rsp+15Ch] [rbp+5Ch]
  char v60; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v61; // [rsp+180h] [rbp+80h]
  int v62; // [rsp+188h] [rbp+88h]
  int v63; // [rsp+18Ch] [rbp+8Ch]

  v5 = a3;
  v44 = 0LL;
  v38 = (unsigned int)Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState;
  if ( (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState & 0x10) == 0 )
    Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback(v38, 3);
  v38 = (unsigned int)Feature_CFR_Child_KM_C__private_featureState;
  if ( (Feature_CFR_Child_KM_C__private_featureState & 0x10) == 0 )
    Feature_CFR_Child_KM_C__private_ReportUsageFallback(v38, 3);
  v38 = (unsigned int)Feature_CFR_Parent_KM_C__private_featureState;
  if ( (Feature_CFR_Parent_KM_C__private_featureState & 0x10) == 0 )
    Feature_CFR_Parent_KM_C__private_ReportUsageFallback(v38, 3);
  v47 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  *((_QWORD *)&v48 + 1) = 0LL;
  v49 = 0LL;
  v40 = 0LL;
  memset_0(v52, 0, 0x60uLL);
  v43[0] = 0;
  v43[1] = 1;
  v8 = (unsigned int)v43[v5];
  v42[1] = 1;
  v42[0] = 0;
  v39 = v42[v5];
  v46 = 3 * v8;
  v9 = &v52[3 * v8];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (char *)KeAbPreAcquire((__int64)&stru_140EF7150, 0LL);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF7150, 0LL);
  v13 = v11;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF7150, v11, (__int64)&stru_140EF7150);
  if ( v13 )
    v13[10] = 1;
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140EF71C8, (__int64)&v44, &v38);
  v15 = v38;
  if ( a2 && v44 != a2 )
  {
    v37 = -1073741823;
LABEL_36:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF7150, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF7150);
    KeAbPostRelease((ULONG_PTR)&stru_140EF7150);
    v24 = v38;
    if ( v38 )
      RtlpFcBufferManagerDereferenceBuffers(qword_140EF71C8, v38);
    goto LABEL_49;
  }
  v16 = v44 + 1;
  if ( v44 == -1 )
    v16 = 1LL;
  v45 = 0LL;
  v17 = *(_QWORD *)(v38 + 8 * v46 + 8);
  *v9 = v16;
  *(_QWORD *)&v40 = v16;
  *(_QWORD *)&v48 = v16;
  v53 = v16;
  updated = RtlpFcUpdateFeatureConfiguration(v17, v14, a4, a5, 0LL, &v45);
  v37 = updated;
  if ( updated < 0 )
  {
    if ( updated != -2147483643 )
      goto LABEL_36;
    v37 = CmFcpManagerCreateSection(v45, v16, CmFcSystemManager[0], &v40);
    if ( v37 < 0 )
      goto LABEL_36;
    v37 = CmFcpMapSection(&v40, v9);
    if ( v37 < 0 )
      goto LABEL_36;
    v37 = RtlpFcUpdateFeatureConfiguration(*(_QWORD *)(v15 + 8 * v46 + 8), v19, a4, a5, v9[1], v9 + 2);
    if ( v37 < 0 )
      goto LABEL_36;
    v20 = v9[1];
    if ( (int)RtlpFcValidateFeatureConfigurationBuffer(v20, v9[2]) < 0 )
    {
      if ( (unsigned int)dword_140E09F20 <= 5 || !tlgKeywordOn((__int64)&dword_140E09F20, 0x400000000001LL) )
        goto LABEL_35;
      v59 = 0;
      v57 = &v50;
      v21 = (unsigned __int8 *)&word_1400565F6;
      v22 = (struct _EVENT_DATA_DESCRIPTOR *)&v56;
      v50 = 0x1000000LL;
      v58 = 8;
LABEL_34:
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F20, v21, 0LL, 0LL, 3u, v22);
LABEL_35:
      v37 = -1073741595;
      goto LABEL_36;
    }
    v23 = RtlpFcUpdateGovernedFeaturesEffectiveStates(
            *(char **)(v15 + 80),
            *(_QWORD *)(v15 + 88),
            a4,
            a5,
            v20,
            v35,
            0LL,
            &v47);
    v37 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -2147483643 )
        goto LABEL_36;
      v37 = CmFcpManagerCreateSection(v47, v16, CmFcSystemManager[0], &v48);
      if ( v37 < 0 )
        goto LABEL_36;
      v37 = CmFcpMapSection(&v48, &v53);
      if ( v37 < 0 )
        goto LABEL_36;
      v37 = RtlpFcUpdateGovernedFeaturesEffectiveStates(
              *(char **)(v15 + 80),
              *(_QWORD *)(v15 + 88),
              a4,
              a5,
              v9[1],
              v36,
              (char *)v54,
              &v55);
      if ( v37 < 0 )
        goto LABEL_36;
      if ( (int)RtlpFcValidateGovernedFeatures((__int64)v54, v55) < 0 )
      {
        if ( (unsigned int)dword_140E09F20 <= 5 || !tlgKeywordOn((__int64)&dword_140E09F20, 0x400000000001LL) )
          goto LABEL_35;
        v63 = 0;
        v61 = &v51;
        v21 = (unsigned __int8 *)byte_14005668D;
        v22 = (struct _EVENT_DATA_DESCRIPTOR *)&v60;
        v51 = 0x1000000LL;
        v62 = 8;
        goto LABEL_34;
      }
    }
  }
  RtlpFcBufferManagerDereferenceBuffers(qword_140EF71C8, v15);
  v25 = (char *)KeAbPreAcquire((__int64)&stru_140EF7148, 0LL);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF7148, 0LL);
  v26 = v25;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF7148, v25, (__int64)&stru_140EF7148);
  if ( v26 )
    v26[10] = 1;
  v27 = 3LL * v39;
  v28 = CmFcSystemManager[3 * v39 + 5];
  CmFcSystemManager[v27 + 5] = v40;
  *(_QWORD *)&v40 = v28;
  v29 = CmFcSystemManager[v27 + 6];
  CmFcSystemManager[v27 + 6] = *((_QWORD *)&v40 + 1);
  *((_QWORD *)&v40 + 1) = v29;
  v30 = CmFcSystemManager[v27 + 7];
  CmFcSystemManager[v27 + 7] = v41;
  xmmword_140EF71B0 = v48;
  v41 = v30;
  qword_140EF71C0 = v49;
  RtlpFcBufferManagerUpdateBuffers(qword_140EF71C8, v16, v52);
  RtlpFcWriteHighLowHigh((__int64)&qword_140EF7158, v16);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF7148, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF7148);
  KeAbPostRelease((ULONG_PTR)&stru_140EF7148);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF7150, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF7150);
  KeAbPostRelease((ULONG_PTR)&stru_140EF7150);
  CmFcpManagerPublishChangeNotifications(v31, v16);
  v37 = 0;
LABEL_49:
  v32 = 4LL;
  v33 = v52;
  do
  {
    CmFcpUnmapSection(v33, v24);
    v33 += 3;
    --v32;
  }
  while ( v32 );
  CmFcpCleanupSectionState(&v40);
  KeLeaveCriticalRegion();
  return (unsigned int)v37;
}
