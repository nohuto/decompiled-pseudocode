/*
 * XREFs of CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800
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
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140772B88 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1407D4F70 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcpCleanupSectionState @ 0x140A1B0A8 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140A30204 (CmFcpUnmapSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A30428 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A3050C (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpMapSection @ 0x140AA3A88 (CmFcpMapSection.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x140AB3D4C (RtlpFcValidateFeatureConfigurationBuffer.c)
 *     CmFcpManagerCreateSection @ 0x140ABC9D8 (CmFcpManagerCreateSection.c)
 */

__int64 __fastcall CmFcManagerOverwriteFeatureConfigurationSection(
        __int64 a1,
        __int64 a2,
        int a3,
        void *a4,
        size_t Size)
{
  __int64 v5; // rbx
  int v8; // eax
  __int64 v9; // rdx
  int SectionFromBuffer; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // r13
  __int64 *v15; // rax
  signed __int8 v16; // cf
  __int64 *v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rsi
  _QWORD *v20; // rbx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 *v25; // rdi
  bool v26; // zf
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // [rsp+28h] [rbp-D8h]
  char v33; // [rsp+40h] [rbp-C0h]
  unsigned int v34; // [rsp+44h] [rbp-BCh]
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  _DWORD v38[2]; // [rsp+68h] [rbp-98h]
  _DWORD v39[2]; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v44[9]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v45[8]; // [rsp+E8h] [rbp-18h] BYREF
  void *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v49; // [rsp+120h] [rbp+20h]
  int v50; // [rsp+128h] [rbp+28h]
  int v51; // [rsp+12Ch] [rbp+2Ch]

  v5 = a3;
  v40 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  v42 = 0LL;
  *(_OWORD *)v36 = 0LL;
  v41 = 0LL;
  memset_0(v44, 0, 0x60uLL);
  v33 = 0;
  v8 = RtlpFcValidateFeatureConfigurationBuffer(a4, Size);
  v9 = 1LL;
  SectionFromBuffer = v8;
  if ( v8 < 0 )
  {
    if ( (unsigned int)dword_140E09DD0 > 5 && tlgKeywordOn((__int64)&dword_140E09DD0, 0x400000000001LL) )
    {
      v51 = 0;
      v49 = &v43;
      v43 = 0x1000000LL;
      v50 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09DD0,
        (unsigned __int8 *)&dword_14005471C,
        0LL,
        0LL,
        3u,
        &v48);
    }
    goto LABEL_16;
  }
  v39[1] = 1;
  v38[1] = 1;
  v33 = 1;
  v39[0] = 0;
  v11 = (unsigned int)v39[v5];
  v38[0] = 0;
  v34 = v38[v5];
  v12 = 3 * v11;
  CurrentThread = KeGetCurrentThread();
  v14 = &v44[v12];
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire((__int64)&stru_140EF6B70, 0LL);
  v16 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6B70, 0LL);
  v17 = v15;
  if ( v16 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6B70, v15, (__int64)&stru_140EF6B70);
  if ( v17 )
    *((_BYTE *)v17 + 10) = 1;
  RtlpFcBufferManagerReferenceBuffers((__int64)&unk_140EF6BE8, (__int64)&v40, &v35);
  v18 = v35;
  if ( a2 && v40 != a2 )
  {
    SectionFromBuffer = -1073741823;
LABEL_12:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6B70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6B70);
    KeAbPostRelease((ULONG_PTR)&stru_140EF6B70);
    v9 = v35;
    if ( v35 )
      RtlpFcBufferManagerDereferenceBuffers((__int64)&unk_140EF6BE8, v35);
    goto LABEL_16;
  }
  v22 = v40 + 1;
  if ( v40 == -1 )
    v22 = 1LL;
  if ( a4 )
  {
    SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(a4, Size, (__int64)v36);
    if ( SectionFromBuffer < 0 )
      goto LABEL_12;
  }
  SectionFromBuffer = CmFcpMapSection(v36, v14);
  if ( SectionFromBuffer < 0 )
    goto LABEL_12;
  if ( a4 )
  {
    if ( *(_QWORD *)(v18 + 80) )
    {
      v23 = *(_QWORD *)(v18 + 88);
      if ( v23 )
      {
        SectionFromBuffer = CmFcpManagerCreateSection(v23, v22, CmFcSystemManager[0], &v41);
        if ( SectionFromBuffer < 0 )
          goto LABEL_12;
        SectionFromBuffer = CmFcpMapSection(&v41, v45);
        if ( SectionFromBuffer < 0 )
          goto LABEL_12;
        SectionFromBuffer = RtlpFcUpdateGovernedFeaturesEffectiveStates(
                              *(void **)(v18 + 80),
                              *(_QWORD *)(v18 + 88),
                              0LL,
                              0LL,
                              v14[1],
                              v32,
                              v46,
                              &v47);
        if ( SectionFromBuffer < 0 )
          goto LABEL_12;
        RtlpFcValidateGovernedFeatures((__int64)v46, v47);
      }
    }
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)&unk_140EF6BE8, v18);
  v24 = KeAbPreAcquire((__int64)&stru_140EF6B68, 0LL);
  v16 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6B68, 0LL);
  v25 = v24;
  if ( v16 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6B68, v24, (__int64)&stru_140EF6B68);
  if ( v25 )
    *((_BYTE *)v25 + 10) = 1;
  v26 = v47 == 0;
  v27 = 3LL * v34;
  v28 = CmFcSystemManager[3 * v34 + 5];
  CmFcSystemManager[v27 + 5] = v36[0];
  v36[0] = v28;
  v29 = CmFcSystemManager[3 * v34 + 6];
  CmFcSystemManager[v27 + 6] = v36[1];
  v30 = CmFcSystemManager[3 * v34 + 7];
  CmFcSystemManager[v27 + 7] = v37;
  v37 = v30;
  v36[1] = v29;
  if ( !v26 )
  {
    xmmword_140EF6BD0 = v41;
    qword_140EF6BE0 = v42;
  }
  RtlpFcBufferManagerUpdateBuffers(&unk_140EF6BE8, v22, v44);
  RtlpFcWriteHighLowHigh((__int64)&qword_140EF6B78, v22);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, v22);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6B68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6B68);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6B68);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6B70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6B70);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6B70);
  CmFcpManagerPublishChangeNotifications(v31, v22);
  SectionFromBuffer = 0;
LABEL_16:
  v19 = 4LL;
  v20 = v44;
  do
  {
    CmFcpUnmapSection(v20, v9);
    v20 += 3;
    --v19;
  }
  while ( v19 );
  CmFcpCleanupSectionState(v36);
  if ( v33 )
    KeLeaveCriticalRegion();
  return (unsigned int)SectionFromBuffer;
}
