/*
 * XREFs of CrmActivityStart @ 0x18002D8A0
 * Callers:
 *     CrmRegistrationCreateActivity @ 0x1800315A0 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CrmRegisterToStateMonitor @ 0x18002DDF0 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorTrackedStateNotificationMethod @ 0x18002E030 (CrmStateMonitorTrackedStateNotificationMethod.c)
 *     CrmPolicyTableEntryGet @ 0x18002E7B0 (CrmPolicyTableEntryGet.c)
 *     RmpWnfGetPublisherSid @ 0x18002EE50 (RmpWnfGetPublisherSid.c)
 *     ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x18002EF60 (-RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z.c)
 *     CrmRegistrationNotify @ 0x18002F240 (CrmRegistrationNotify.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18002FE58 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline @ 0x18006FE84 (Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline.c)
 *     CrmPolicyComparisonPairsGet @ 0x180078CEC (CrmPolicyComparisonPairsGet.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmActivityStart(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, void *Source1)
{
  unsigned int v9; // r14d
  unsigned int v10; // edi
  unsigned __int64 *v11; // rax
  __int64 v12; // rax
  __int128 *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int128 *v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  PVOID Heap; // rax
  int PublisherSid; // esi
  __int64 v31; // rdx
  unsigned int v32; // edi
  int v33; // eax
  __int64 v34; // r8
  unsigned int v35; // r9d
  __int128 *v36; // r10
  __int64 v37; // rcx
  __int128 v38; // xmm0
  int v39; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-C0h]
  unsigned int v43; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+58h] [rbp-A8h]
  unsigned __int64 Key; // [rsp+60h] [rbp-A0h] BYREF
  int v47; // [rsp+68h] [rbp-98h]
  _OWORD Source2[4]; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+B0h] [rbp-50h]
  char v50[32]; // [rsp+C0h] [rbp-40h] BYREF
  UUID *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *p_Key; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  int *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  int *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  unsigned int v61[176]; // [rsp+130h] [rbp+30h] BYREF

  v39 = 0;
  memset_0(v61, 0, sizeof(v61));
  v9 = *(_DWORD *)(a2 + 24);
  Key = __PAIR64__(a3, v9);
  v10 = 0;
  v44 = 0LL;
  v45 = 0;
  v47 = 0;
  v42 = 0LL;
  v43 = 0;
  v11 = (unsigned __int64 *)bsearch(&Key, &CrmActivityToPolicyTable, 0x5DuLL, 0xCuLL, CrmActivityPolicyTableCompare);
  if ( !v11 )
  {
    if ( v9 - 9 > 0x7C || a3 - 301 > 0x7C )
      goto LABEL_6;
    v44 = __PAIR64__(a3, v9);
    v11 = &v44;
    v45 = 17;
  }
  v10 = *((_DWORD *)v11 + 2);
  v42 = *v11;
  v43 = v10;
LABEL_6:
  *(_DWORD *)(a1 + 68) = v10;
  *(_DWORD *)(a1 + 64) = a3;
  if ( a4 )
  {
    v15 = CrmPolicyComparisonPairsGet(a4, v61);
    *(_BYTE *)(a1 + 364) = *a4;
    *(_BYTE *)(a1 + 365) = a4[4];
    *(_BYTE *)(a1 + 366) = a4[8];
    *(_BYTE *)(a1 + 367) = a4[12];
    *(_BYTE *)(a1 + 368) = a4[16];
    *(_BYTE *)(a1 + 369) = a4[20];
    *(_BYTE *)(a1 + 370) = a4[24];
    *(_BYTE *)(a1 + 371) = a4[28];
  }
  else
  {
    v12 = CrmPolicyTableEntryGet(v10);
    v13 = (__int128 *)v61;
    v14 = 5LL;
    v15 = *(_DWORD *)(v12 + 4);
    v16 = (__int128 *)(v12 + 8);
    do
    {
      v13 += 8;
      v17 = *v16;
      v18 = v16[1];
      v16 += 8;
      *(v13 - 8) = v17;
      v19 = *(v16 - 6);
      *(v13 - 7) = v18;
      v20 = *(v16 - 5);
      *(v13 - 6) = v19;
      v21 = *(v16 - 4);
      *(v13 - 5) = v20;
      v22 = *(v16 - 3);
      *(v13 - 4) = v21;
      v23 = *(v16 - 2);
      *(v13 - 3) = v22;
      v24 = *(v16 - 1);
      *(v13 - 2) = v23;
      *(v13 - 1) = v24;
      --v14;
    }
    while ( v14 );
    v25 = v16[1];
    *v13 = *v16;
    v26 = v16[2];
    v13[1] = v25;
    v27 = v16[3];
    v13[2] = v26;
    v13[3] = v27;
  }
  *(_QWORD *)(a1 + 56) = _InterlockedIncrement64(&qword_1800EA9B8);
  memset(Source2, 0, sizeof(Source2));
  v49 = 0;
  if ( RtlCompareMemory(Source1, Source2, 0x44uLL) == 68 )
  {
    if ( a3 == 17 )
    {
      *(_QWORD *)(a1 + 152) = WNF_RM_QUIET_MODE;
      v39 = 511;
      if ( !(unsigned int)Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline() )
        v39 &= ~0x100u;
      PublisherSid = RtlPublishWnfStateData(*(_QWORD *)(a1 + 152), 0LL, &v39, 4LL, 0LL);
      if ( PublisherSid < 0 )
        goto LABEL_22;
    }
  }
  else
  {
    memset_0(Source2, 0, 0x44uLL);
    PublisherSid = RmpWnfGetPublisherSid(Source2);
    if ( PublisherSid < 0 )
      goto LABEL_22;
    PublisherSid = RmpWnfCreateStateNameForIpcEx(Source2, Source1, 4u, 0, (struct _WNF_STATE_NAME *)(a1 + 144));
    if ( PublisherSid < 0 )
      goto LABEL_22;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 56LL * v15);
  *(_QWORD *)(a1 + 112) = Heap;
  if ( Heap )
  {
    *(_DWORD *)(a1 + 96) = v15;
    *(_QWORD *)(a1 + 128) = CempQueryUnbiasedInterruptTimeMs64();
    v32 = 0;
    *(_QWORD *)(a1 + 240) = MEMORY[0x7FFE0008];
    while ( v32 < v15 )
    {
      v33 = CrmStateMonitorTrackedStateNotificationMethod(v61[4 * v32], v31, v32);
      if ( v33 > *(_DWORD *)(a1 + 120) )
        *(_DWORD *)(a1 + 120) = v33;
      v37 = *(_QWORD *)(a1 + 112) + 56 * v34;
      *(_QWORD *)(v37 + 16) = 0LL;
      *(_QWORD *)(v37 + 48) = 0LL;
      v38 = *v36;
      *(_QWORD *)(v37 + 24) = a1;
      *(_OWORD *)(v37 + 32) = v38;
      *(_QWORD *)(v37 + 16) = v37 + 8;
      *(_QWORD *)(v37 + 8) = v37 + 8;
      *(_QWORD *)v37 = CrmActivityListenerCallback;
      PublisherSid = CrmRegisterToStateMonitor(v37, v35);
      if ( PublisherSid < 0 )
        goto LABEL_22;
      ++*(_DWORD *)(a1 + 108);
      ++v32;
    }
    RtlAcquireSRWLockExclusive(a1 + 80);
    *(_DWORD *)(a1 + 88) = GetCurrentThreadId();
    if ( *(_DWORD *)(a1 + 64) == 17 )
    {
      CrmRegistrationNotifyWindowClosedReasonChange(a2, a1);
    }
    else
    {
      RtlAcquireSRWLockShared(&unk_1800EA9E0);
      if ( *(_DWORD *)(a1 + 124) == 4 )
        CrmRegistrationNotify(a2, a1, 1LL);
      RtlReleaseSRWLockShared(&unk_1800EA9E0);
    }
    *(_DWORD *)(a1 + 88) = 0;
    RtlReleaseSRWLockExclusive(a1 + 80);
    PublisherSid = 0;
  }
  else
  {
    PublisherSid = -1073741801;
  }
LABEL_22:
  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 4) != 0 && (qword_1800E8300 & 4) == qword_1800E8300 )
  {
    v52 = 16LL;
    v51 = &Uuid;
    Key = *(_QWORD *)(a1 + 56);
    v54 = 8LL;
    p_Key = &Key;
    v40 = *(_DWORD *)(a1 + 68);
    v55 = &v40;
    v44 = *(_QWORD *)(a2 + 16);
    v57 = &v44;
    v59 = &v41;
    v56 = 4LL;
    v58 = 8LL;
    v41 = PublisherSid;
    v60 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D2C26, 0LL, 0LL, 7, v50);
  }
  return (unsigned int)PublisherSid;
}
