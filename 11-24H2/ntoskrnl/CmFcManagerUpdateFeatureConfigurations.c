/*
 * XREFs of CmFcManagerUpdateFeatureConfigurations @ 0x1407E474C
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x1407D5C24 (CmUpdateFeatureConfiguration.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A68E8 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6924 (RtlpFcBufferManagerReferenceBuffers.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404BCCB4 (RtlpFcWriteHighLowHigh.c)
 *     RtlpFcValidateGovernedFeatures @ 0x1405F2A98 (RtlpFcValidateGovernedFeatures.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14066893C (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140781DD8 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 *     CmFcpCleanupSectionState @ 0x140A26080 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140A35AC8 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A35CEC (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A35DD0 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140AA53D4 (RtlpFcUpdateFeatureConfiguration.c)
 *     CmFcpMapSection @ 0x140AA8B10 (CmFcpMapSection.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x140AB8114 (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerCreateSection @ 0x140AC0D5C (CmFcpManagerCreateSection.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureConfigurations(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 *v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // edi
  __int64 v16; // rsi
  __int64 v17; // rcx
  int updated; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int8 *v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  signed __int8 v26; // cf
  _QWORD *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  _QWORD *v33; // rbx
  __int64 v34; // rsi
  int v36; // [rsp+28h] [rbp-D8h]
  int v37; // [rsp+28h] [rbp-D8h]
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-B8h]
  __int128 v40; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h]
  _DWORD v42[2]; // [rsp+68h] [rbp-98h]
  _DWORD v43[2]; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  __int128 v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v52[9]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v53; // [rsp+108h] [rbp+8h] BYREF
  void *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h] BYREF
  char v56; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v57; // [rsp+140h] [rbp+40h]
  int v58; // [rsp+148h] [rbp+48h]
  int v59; // [rsp+14Ch] [rbp+4Ch]
  char v60; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v61; // [rsp+170h] [rbp+70h]
  int v62; // [rsp+178h] [rbp+78h]
  int v63; // [rsp+17Ch] [rbp+7Ch]

  v44 = 0LL;
  v6 = (int)a3;
  v38 = (unsigned int)Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState;
  if ( (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState & 0x10) == 0 )
    Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback(v38, 3, a3, a4);
  v47 = 0LL;
  v38 = 0LL;
  *((_QWORD *)&v48 + 1) = 0LL;
  v49 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  memset_0(v52, 0, 0x60uLL);
  v43[0] = 0;
  v42[0] = 0;
  v43[1] = 1;
  v8 = (unsigned int)v43[v6];
  v42[1] = 1;
  v39 = v42[v6];
  v46 = 3 * v8;
  v9 = &v52[3 * v8];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((__int64)&stru_140EF6F10, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6F10, 0LL) )
    ExfAcquirePushLockExclusiveEx(&stru_140EF6F10, (__int64)v11, (__int64)&stru_140EF6F10);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140EF6F88, (__int64)&v44, &v38);
  v14 = v38;
  if ( a2 && v44 != a2 )
  {
    v15 = -1073741823;
LABEL_32:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6F10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6F10);
    KeAbPostRelease((ULONG_PTR)&stru_140EF6F10);
    v24 = v38;
    if ( v38 )
      RtlpFcBufferManagerDereferenceBuffers(qword_140EF6F88, v38);
    goto LABEL_45;
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
  updated = RtlpFcUpdateFeatureConfiguration(v17, v13, a4, a5, 0LL, &v45);
  v15 = updated;
  if ( updated < 0 )
  {
    if ( updated != -2147483643 )
      goto LABEL_32;
    v15 = CmFcpManagerCreateSection(v45, v16, CmFcSystemManager[0], &v40);
    if ( v15 < 0 )
      goto LABEL_32;
    v15 = CmFcpMapSection(&v40, v9);
    if ( v15 < 0 )
      goto LABEL_32;
    v15 = RtlpFcUpdateFeatureConfiguration(*(_QWORD *)(v14 + 8 * v46 + 8), v19, a4, a5, v9[1], v9 + 2);
    if ( v15 < 0 )
      goto LABEL_32;
    v20 = v9[1];
    if ( (int)RtlpFcValidateFeatureConfigurationBuffer(v20, v9[2]) < 0 )
    {
      if ( (unsigned int)dword_140E09EB0 <= 5 || !tlgKeywordOn((__int64)&dword_140E09EB0, 0x400000000001LL) )
        goto LABEL_31;
      v59 = 0;
      v57 = &v50;
      v21 = (unsigned __int8 *)&dword_140055AFC;
      v22 = (struct _EVENT_DATA_DESCRIPTOR *)&v56;
      v50 = 0x1000000LL;
      v58 = 8;
LABEL_30:
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EB0, v21, 0LL, 0LL, 3u, v22);
LABEL_31:
      v15 = -1073741595;
      goto LABEL_32;
    }
    v23 = RtlpFcUpdateGovernedFeaturesEffectiveStates(
            *(char **)(v14 + 80),
            *(_QWORD *)(v14 + 88),
            a4,
            a5,
            v20,
            v36,
            0LL,
            &v47);
    v15 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -2147483643 )
        goto LABEL_32;
      v15 = CmFcpManagerCreateSection(v47, v16, CmFcSystemManager[0], &v48);
      if ( v15 < 0 )
        goto LABEL_32;
      v15 = CmFcpMapSection(&v48, &v53);
      if ( v15 < 0 )
        goto LABEL_32;
      v15 = RtlpFcUpdateGovernedFeaturesEffectiveStates(
              *(char **)(v14 + 80),
              *(_QWORD *)(v14 + 88),
              a4,
              a5,
              v9[1],
              v37,
              (char *)v54,
              &v55);
      if ( v15 < 0 )
        goto LABEL_32;
      if ( (int)RtlpFcValidateGovernedFeatures((__int64)v54, v55) < 0 )
      {
        if ( (unsigned int)dword_140E09EB0 <= 5 || !tlgKeywordOn((__int64)&dword_140E09EB0, 0x400000000001LL) )
          goto LABEL_31;
        v63 = 0;
        v61 = &v51;
        v21 = (unsigned __int8 *)byte_140055B93;
        v22 = (struct _EVENT_DATA_DESCRIPTOR *)&v60;
        v51 = 0x1000000LL;
        v62 = 8;
        goto LABEL_30;
      }
    }
  }
  RtlpFcBufferManagerDereferenceBuffers(qword_140EF6F88, v14);
  v25 = KeAbPreAcquire((__int64)&stru_140EF6F08, 0LL);
  v26 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6F08, 0LL);
  v27 = v25;
  if ( v26 )
    ExfAcquirePushLockExclusiveEx(&stru_140EF6F08, (__int64)v25, (__int64)&stru_140EF6F08);
  if ( v27 )
    *((_BYTE *)v27 + 10) = 1;
  v28 = 3LL * v39;
  v29 = CmFcSystemManager[3 * v39 + 5];
  CmFcSystemManager[v28 + 5] = v40;
  *(_QWORD *)&v40 = v29;
  v30 = CmFcSystemManager[v28 + 6];
  CmFcSystemManager[v28 + 6] = *((_QWORD *)&v40 + 1);
  *((_QWORD *)&v40 + 1) = v30;
  v31 = CmFcSystemManager[v28 + 7];
  CmFcSystemManager[v28 + 7] = v41;
  xmmword_140EF6F70 = v48;
  v41 = v31;
  qword_140EF6F80 = v49;
  RtlpFcBufferManagerUpdateBuffers(qword_140EF6F88, v16, v52);
  RtlpFcWriteHighLowHigh((__int64)&qword_140EF6F18, v16);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6F08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6F08);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6F08);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6F10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6F10);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6F10);
  CmFcpManagerPublishChangeNotifications(v32, v16);
  v15 = 0;
LABEL_45:
  v33 = v52;
  v34 = 4LL;
  do
  {
    CmFcpUnmapSection(v33, v24);
    v33 += 3;
    --v34;
  }
  while ( v34 );
  CmFcpCleanupSectionState(&v40);
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
