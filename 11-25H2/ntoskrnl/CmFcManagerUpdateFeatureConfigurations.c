/*
 * XREFs of CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x1407C64D0 (CmUpdateFeatureConfiguration.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403B7F5C (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403B8688 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404BDC88 (RtlpFcWriteHighLowHigh.c)
 *     RtlpFcValidateGovernedFeatures @ 0x1405E6748 (RtlpFcValidateGovernedFeatures.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14065CE6C (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140772B88 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 *     CmFcpCleanupSectionState @ 0x140A1B0A8 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140A30204 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A30428 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A3050C (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x140AA0038 (RtlpFcUpdateFeatureConfiguration.c)
 *     CmFcpMapSection @ 0x140AA3A88 (CmFcpMapSection.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x140AB3D4C (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerCreateSection @ 0x140ABC9D8 (CmFcpManagerCreateSection.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureConfigurations(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  unsigned __int64 *v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // edi
  unsigned __int64 v16; // rsi
  _DWORD *v17; // rcx
  NTSTATUS updated; // eax
  __int64 v19; // rdx
  unsigned int *v20; // rdi
  unsigned __int8 *v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v22; // rax
  int v23; // eax
  __int64 *v24; // rax
  signed __int8 v25; // cf
  __int64 *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // rsi
  int v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+28h] [rbp-D8h]
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-B8h]
  __int128 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h]
  _DWORD v41[2]; // [rsp+68h] [rbp-98h]
  _DWORD v42[2]; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  __int128 v47; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v51[9]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v52; // [rsp+108h] [rbp+8h] BYREF
  void *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h] BYREF
  char v55; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v56; // [rsp+140h] [rbp+40h]
  int v57; // [rsp+148h] [rbp+48h]
  int v58; // [rsp+14Ch] [rbp+4Ch]
  char v59; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v60; // [rsp+170h] [rbp+70h]
  int v61; // [rsp+178h] [rbp+78h]
  int v62; // [rsp+17Ch] [rbp+7Ch]

  v43 = 0LL;
  v6 = a3;
  v37 = (unsigned int)Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState;
  if ( (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState & 0x10) == 0 )
    Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback(v37, 3);
  v46 = 0LL;
  v37 = 0LL;
  *((_QWORD *)&v47 + 1) = 0LL;
  v48 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memset_0(v51, 0, 0x60uLL);
  v42[0] = 0;
  v41[0] = 0;
  v42[1] = 1;
  v8 = (unsigned int)v42[v6];
  v41[1] = 1;
  v38 = v41[v6];
  v45 = 3 * v8;
  v9 = &v51[3 * v8];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((__int64)&stru_140EF6B70, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6B70, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6B70, v11, (__int64)&stru_140EF6B70);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140EF6BE8, (__int64)&v43, &v37);
  v14 = v37;
  if ( a2 && v43 != a2 )
  {
    v15 = -1073741823;
LABEL_32:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6B70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6B70);
    KeAbPostRelease((ULONG_PTR)&stru_140EF6B70);
    if ( v37 )
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140EF6BE8, v37);
    goto LABEL_45;
  }
  v16 = v43 + 1;
  if ( v43 == -1 )
    v16 = 1LL;
  v44.QuadPart = 0LL;
  v17 = *(_DWORD **)(v37 + 8 * v45 + 8);
  *v9 = v16;
  *(_QWORD *)&v39 = v16;
  *(_QWORD *)&v47 = v16;
  v52 = v16;
  updated = RtlpFcUpdateFeatureConfiguration(v17, v13, a4, a5, 0LL, (size_t *)&v44.QuadPart);
  v15 = updated;
  if ( updated < 0 )
  {
    if ( updated != -2147483643 )
      goto LABEL_32;
    v15 = CmFcpManagerCreateSection(v44, v16, (void *)CmFcSystemManager[0], &v39);
    if ( v15 < 0 )
      goto LABEL_32;
    v15 = CmFcpMapSection(&v39, v9);
    if ( v15 < 0 )
      goto LABEL_32;
    v15 = RtlpFcUpdateFeatureConfiguration(*(_DWORD **)(v14 + 8 * v45 + 8), v19, a4, a5, (void *)v9[1], v9 + 2);
    if ( v15 < 0 )
      goto LABEL_32;
    v20 = (unsigned int *)v9[1];
    if ( (int)RtlpFcValidateFeatureConfigurationBuffer(v20, v9[2]) < 0 )
    {
      if ( (unsigned int)dword_140E09DD0 <= 5 || !tlgKeywordOn((__int64)&dword_140E09DD0, 0x400000000001LL) )
        goto LABEL_31;
      v58 = 0;
      v56 = &v49;
      v21 = (unsigned __int8 *)word_1400546D2;
      v22 = (struct _EVENT_DATA_DESCRIPTOR *)&v55;
      v49 = 0x1000000LL;
      v57 = 8;
LABEL_30:
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09DD0, v21, 0LL, 0LL, 3u, v22);
LABEL_31:
      v15 = -1073741595;
      goto LABEL_32;
    }
    v23 = RtlpFcUpdateGovernedFeaturesEffectiveStates(
            *(void **)(v14 + 80),
            *(_QWORD *)(v14 + 88),
            (__int64)a4,
            a5,
            (__int64)v20,
            v35,
            0LL,
            &v46);
    v15 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -2147483643 )
        goto LABEL_32;
      v15 = CmFcpManagerCreateSection((LARGE_INTEGER)v46, v16, (void *)CmFcSystemManager[0], &v47);
      if ( v15 < 0 )
        goto LABEL_32;
      v15 = CmFcpMapSection(&v47, &v52);
      if ( v15 < 0 )
        goto LABEL_32;
      v15 = RtlpFcUpdateGovernedFeaturesEffectiveStates(
              *(void **)(v14 + 80),
              *(_QWORD *)(v14 + 88),
              (__int64)a4,
              a5,
              v9[1],
              v36,
              v53,
              &v54);
      if ( v15 < 0 )
        goto LABEL_32;
      if ( (int)RtlpFcValidateGovernedFeatures((__int64)v53, v54) < 0 )
      {
        if ( (unsigned int)dword_140E09DD0 <= 5 || !tlgKeywordOn((__int64)&dword_140E09DD0, 0x400000000001LL) )
          goto LABEL_31;
        v62 = 0;
        v60 = &v50;
        v21 = (unsigned __int8 *)byte_140054769;
        v22 = (struct _EVENT_DATA_DESCRIPTOR *)&v59;
        v50 = 0x1000000LL;
        v61 = 8;
        goto LABEL_30;
      }
    }
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140EF6BE8, v14);
  v24 = KeAbPreAcquire((__int64)&stru_140EF6B68, 0LL);
  v25 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6B68, 0LL);
  v26 = v24;
  if ( v25 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6B68, v24, (__int64)&stru_140EF6B68);
  if ( v26 )
    *((_BYTE *)v26 + 10) = 1;
  v27 = 3LL * v38;
  v28 = CmFcSystemManager[3 * v38 + 5];
  CmFcSystemManager[v27 + 5] = v39;
  *(_QWORD *)&v39 = v28;
  v29 = CmFcSystemManager[v27 + 6];
  CmFcSystemManager[v27 + 6] = *((_QWORD *)&v39 + 1);
  *((_QWORD *)&v39 + 1) = v29;
  v30 = CmFcSystemManager[v27 + 7];
  CmFcSystemManager[v27 + 7] = v40;
  xmmword_140EF6BD0 = v47;
  v40 = v30;
  qword_140EF6BE0 = v48;
  RtlpFcBufferManagerUpdateBuffers(qword_140EF6BE8, v16, (__int64)v51);
  RtlpFcWriteHighLowHigh((__int64)&qword_140EF6B78, v16);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6B68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6B68);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6B68);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6B70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6B70);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6B70);
  CmFcpManagerPublishChangeNotifications(v31, v16);
  v15 = 0;
LABEL_45:
  v32 = v51;
  v33 = 4LL;
  do
  {
    CmFcpUnmapSection((__int64)v32);
    v32 += 3;
    --v33;
  }
  while ( v33 );
  CmFcpCleanupSectionState((__int64)&v39);
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
