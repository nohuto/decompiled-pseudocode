/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x14003C670
 * Callers:
 *     <none>
 * Callees:
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidLogRequestComplete @ 0x14001512C (RaidLogRequestComplete.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x14001BDD0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140022C5C (McTemplateK0dud_EtwWriteTransfer.c)
 *     StorUnmapSenseInfo @ 0x140025620 (StorUnmapSenseInfo.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x140053848 (McTemplateK0zx_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x140055F58 (RaidAdapterReleaseCryptoKeyResources.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x14006AB70 (RaidReleaseNvmeIceKeyResources.c)
 *     RaidResumeAndRestartUnitQueue @ 0x14009DA34 (RaidResumeAndRestartUnitQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaidUnitCompleteResetRequest(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r13
  __int64 v3; // r12
  unsigned int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rax
  unsigned __int8 v17; // bl
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rsi
  bool v21; // zf
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 *v26; // rbx
  KSPIN_LOCK *v27; // r14
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v29; // rcx
  int v30; // r9d
  char v31; // al
  __int64 *v32; // rcx
  KSPIN_LOCK v33; // r8
  __int64 **v34; // rax
  __int64 *v35; // rcx
  KSPIN_LOCK v36; // rdx
  __int64 **v37; // rax
  int v38; // r9d
  char v39; // al
  __int64 *v40; // rcx
  KSPIN_LOCK v41; // r8
  __int64 **v42; // rax
  __int64 *v43; // rcx
  KSPIN_LOCK v44; // rdx
  __int64 **v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r14
  LARGE_INTEGER v54; // rax
  LARGE_INTEGER v55; // rbx
  unsigned int v56; // r8d
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v60; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v62; // r8
  char v63; // r9
  __int64 v64; // r9
  unsigned int v65; // r14d
  unsigned int v66; // r8d
  __int64 v67; // rdx
  __int64 v68; // rcx
  unsigned __int64 v69; // r10
  int v70; // eax
  int v71; // eax
  int v72; // eax
  unsigned __int64 v73; // r8
  signed __int32 v74; // eax
  signed __int32 v75; // ett
  __int64 v76; // rbx
  unsigned __int64 v77; // rcx
  __int64 v78; // rdx
  int *v79; // rax
  void *v80; // rdx
  __int64 v81; // rdx
  char v82; // bl
  char v83; // si
  _BYTE *v84; // r9
  unsigned __int8 v85; // r10
  char v86; // r11
  char v87; // r12
  char *v88; // rbx
  unsigned int v89; // r15d
  unsigned __int64 v90; // r14
  __int64 v91; // r8
  int v92; // ecx
  char v93; // cl
  char v94; // r8
  _BYTE *v95; // rax
  char *v96; // r12
  unsigned int v97; // eax
  char v98; // al
  char v99; // [rsp+60h] [rbp-A0h] BYREF
  char v100; // [rsp+61h] [rbp-9Fh] BYREF
  char v101; // [rsp+62h] [rbp-9Eh] BYREF
  char v102; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v103; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v104; // [rsp+6Ch] [rbp-94h]
  int *v105; // [rsp+70h] [rbp-90h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-88h] BYREF
  __int64 v107; // [rsp+80h] [rbp-80h]
  _QWORD *v108; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  __int128 v110; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v111; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v113; // [rsp+F0h] [rbp-10h]
  __int64 v114; // [rsp+F8h] [rbp-8h]
  __int64 v115; // [rsp+100h] [rbp+0h]
  __int64 v116; // [rsp+108h] [rbp+8h]
  unsigned int *v117; // [rsp+110h] [rbp+10h]
  __int64 v118; // [rsp+118h] [rbp+18h]
  char *v119; // [rsp+120h] [rbp+20h]
  __int64 v120; // [rsp+128h] [rbp+28h]
  char *v121; // [rsp+130h] [rbp+30h]
  __int64 v122; // [rsp+138h] [rbp+38h]
  char *v123; // [rsp+140h] [rbp+40h]
  __int64 v124; // [rsp+148h] [rbp+48h]
  char *v125; // [rsp+150h] [rbp+50h]
  __int64 v126; // [rsp+158h] [rbp+58h]

  v1 = a1[21];
  v2 = a1[20];
  v3 = a1[28];
  v108 = a1;
  v4 = *(unsigned __int8 *)(v1 + 2);
  *(_QWORD *)&v110 = v1;
  v5 = v4;
  if ( (_BYTE)v4 == 40 )
  {
    v6 = *(unsigned int *)(v1 + 20);
    v7 = *(_DWORD *)(v1 + 60);
    v104 = *(_DWORD *)(v1 + 20);
  }
  else
  {
    v7 = *(_DWORD *)(v1 + 16);
    v6 = v4;
    v104 = v4;
  }
  if ( (_DWORD)v6 != 16 )
  {
    if ( (_BYTE)v4 == 40 )
      v5 = *(_DWORD *)(v1 + 20);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 1396));
    v8 = v5 - 18;
    if ( v8 && (v9 = v8 - 1) != 0 )
    {
      if ( v9 == 13 )
        RaidResumeAndRestartUnitQueue(v3);
    }
    else
    {
      RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v3 + 24));
    }
  }
  v10 = *(unsigned __int8 *)(v1 + 2);
  if ( (_BYTE)v10 == 40 )
    v10 = *(_DWORD *)(v1 + 20);
  LOBYTE(v11) = 0;
  if ( v10 == 16 && (unsigned int)dword_140170178 > 5 && (unsigned __int8)tlgKeywordOn(v6, 0x400000000000LL) )
  {
    v14 = *(_QWORD *)(v3 + 24);
    v114 = 16LL;
    v116 = 16LL;
    v113 = v14 + 5064;
    v115 = v3 + 2104;
    v103 = *(_DWORD *)(v14 + 56);
    v117 = &v103;
    v100 = *(_BYTE *)(v3 + 104);
    v119 = &v100;
    v99 = *(_BYTE *)(v3 + 105);
    v121 = &v99;
    v101 = *(_BYTE *)(v3 + 106);
    v123 = &v101;
    v118 = 4LL;
    v120 = 1LL;
    v122 = 1LL;
    v124 = 1LL;
    v15 = *(_BYTE *)(v1 + 3) & 0x3F;
    v126 = 1LL;
    v102 = v15;
    v125 = &v102;
    tlgWriteTransfer_EtwWriteTransfer(v14, (unsigned __int8 *)dword_14015E7A4, v12, v13, 9u, &v112);
  }
  v16 = *(_QWORD *)(v2 + 184);
  v17 = *(_BYTE *)(v16 + 16) & 3;
  *(_QWORD *)(v16 + 16) = 0LL;
  v18 = *(_QWORD *)(v3 + 24);
  if ( (v17 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(v3) )
  {
    PoFxIdleComponent(**(_QWORD **)(v3 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 1864));
  }
  if ( v17 >= 2u && *(_QWORD *)(v18 + 4960) )
    RaidAdapterPoFxIdleComponent(v18, 0LL, 0LL);
  v19 = (__int64)v108;
  if ( (*((_BYTE *)v108 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v3, *((_DWORD *)v108 + 187));
    *(_BYTE *)(v19 + 17) &= ~2u;
  }
  *(_DWORD *)(v2 + 48) = RaidSrbStatusToNtStatus(*(_BYTE *)(v1 + 3));
  *(_QWORD *)(v2 + 56) = v7;
  v20 = *(_QWORD *)(*(_QWORD *)(v2 + 184) + 8LL);
  v21 = *(_BYTE *)(v20 + 2) == 40;
  if ( *(_BYTE *)(v20 + 2) == 40 )
    v22 = *(_QWORD *)(v20 + 96);
  else
    v22 = *(_QWORD *)(v20 + 48);
  v23 = *(_QWORD *)(v22 + 224);
  v107 = v23;
  if ( v21 )
    v24 = *(_QWORD *)(v20 + 96);
  else
    v24 = *(_QWORD *)(v20 + 48);
  if ( (*(_BYTE *)(v24 + 16) & 2) != 0 )
  {
    v25 = *(unsigned int *)(v24 + 84) + 1LL;
    v105 = *(int **)(v23 + 560);
    v26 = (__int64 *)(v24 + 48);
    v27 = (KSPIN_LOCK *)&v105[16 * v25];
    memset(&LockHandle, 0, sizeof(LockHandle));
    CurrentIrql = KeGetCurrentIrql();
    v29 = v27 + 5;
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v29, &LockHandle);
      v30 = *v105;
      v31 = *((_BYTE *)v26 - 32);
      if ( (v31 & 2) == 0 )
      {
LABEL_48:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_63:
        if ( StorEtwLoggingEnabled )
        {
          v111 = 0LL;
          IoGetActivityIdIrp(v2, &v111);
          if ( byte_140171462 < 0 )
            McTemplateK0dud_EtwWriteTransfer(v47, v46, (__int64)&v111, v48, 4);
        }
        goto LABEL_66;
      }
      *((_BYTE *)v26 - 32) = v31 & 0xFD;
      v32 = (__int64 *)*v26;
      v33 = *v27;
      if ( *(__int64 **)(*v26 + 8) == v26 )
      {
        v34 = (__int64 **)v26[1];
        if ( *v34 == v26 )
        {
          *v34 = v32;
          v32[1] = (__int64)v34;
          if ( (v26[6] & 1) == 0 )
          {
LABEL_43:
            if ( (v30 & 4) == 0 && (__int64 *)v33 == v26 )
            {
              if ( (KSPIN_LOCK *)*v27 == v27 )
                *((_DWORD *)v27 + 12) = -1;
              else
                *((_DWORD *)v27 + 12) = *(_DWORD *)(*v27 + 32);
            }
            goto LABEL_48;
          }
          v35 = v26 + 2;
          if ( (__int64 *)v27[4] == v26 + 2 )
            v27[4] = *v35;
          v36 = *v35;
          if ( *(__int64 **)(*v35 + 8) == v35 )
          {
            v37 = (__int64 **)v26[3];
            if ( *v37 == v35 )
            {
              *v37 = (__int64 *)v36;
              *(_QWORD *)(v36 + 8) = v37;
              *((_DWORD *)v26 + 12) &= ~1u;
              goto LABEL_43;
            }
          }
        }
      }
LABEL_71:
      __fastfail(3u);
    }
    KeAcquireInStackQueuedSpinLock(v29, &LockHandle);
    v38 = *v105;
    v39 = *((_BYTE *)v26 - 32);
    if ( (v39 & 2) != 0 )
    {
      *((_BYTE *)v26 - 32) = v39 & 0xFD;
      v40 = (__int64 *)*v26;
      v41 = *v27;
      if ( *(__int64 **)(*v26 + 8) != v26 )
        goto LABEL_71;
      v42 = (__int64 **)v26[1];
      if ( *v42 != v26 )
        goto LABEL_71;
      *v42 = v40;
      v40[1] = (__int64)v42;
      if ( (v26[6] & 1) != 0 )
      {
        v43 = v26 + 2;
        if ( (__int64 *)v27[4] == v26 + 2 )
          v27[4] = *v43;
        v44 = *v43;
        if ( *(__int64 **)(*v43 + 8) != v43 )
          goto LABEL_71;
        v45 = (__int64 **)v26[3];
        if ( *v45 != v43 )
          goto LABEL_71;
        *v45 = (__int64 *)v44;
        *(_QWORD *)(v44 + 8) = v45;
        *((_DWORD *)v26 + 12) &= ~1u;
      }
      if ( (v38 & 4) == 0 && (__int64 *)v41 == v26 )
      {
        if ( (KSPIN_LOCK *)*v27 == v27 )
          *((_DWORD *)v27 + 12) = -1;
        else
          *((_DWORD *)v27 + 12) = *(_DWORD *)(*v27 + 32);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_63;
  }
LABEL_66:
  v49 = v107;
  StorUnmapSenseInfo(v22, *(_QWORD *)(*(_QWORD *)(v107 + 24) + 8LL));
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v52 = *(_QWORD *)(v49 + 3600);
    if ( v52 && *(_QWORD *)(v52 + 104) )
    {
      v51 = v22;
      goto LABEL_69;
    }
    v50 = *(_QWORD *)(v49 + 24);
    if ( !*(_QWORD *)(v50 + 5616) )
      goto LABEL_78;
    v51 = v22;
LABEL_77:
    RaidAdapterReleaseCryptoKeyResources(v50, v51);
    goto LABEL_78;
  }
  v50 = *(_QWORD *)(v49 + 24);
  if ( *(_QWORD *)(v50 + 5624) )
  {
    v51 = v22;
    if ( (*(_BYTE *)(v50 + 112) & 0x10) != 0 )
    {
LABEL_69:
      RaidReleaseNvmeIceKeyResources(v49, v51);
      goto LABEL_78;
    }
    goto LABEL_77;
  }
LABEL_78:
  if ( *(_BYTE *)(v20 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v22 + 16) & 0x40) != 0 )
    {
      v53 = *(_QWORD *)(v22 + 752);
      PerformanceFrequency.QuadPart = 1LL;
      if ( v53 )
      {
        if ( UseQPCTime )
          v54 = KeQueryPerformanceCounter(&PerformanceFrequency);
        else
          v54.QuadPart = KeQueryUnbiasedInterruptTime();
        v55 = v54;
        *(_BYTE *)(v53 + 3) = *(_BYTE *)(v20 + 3);
        *(_DWORD *)(v53 + 12) = *(_DWORD *)(v20 + 24);
        if ( (*(_DWORD *)(v20 + 24) & 0x40) != 0 )
          *(_DWORD *)(v53 + 16) = *(_DWORD *)(v20 + 60);
        if ( *(_BYTE *)(v20 + 3) == 48 )
          *(_DWORD *)(v53 + 64) = *(_DWORD *)(v20 + 44);
        if ( !*(_DWORD *)(v20 + 20) )
        {
          v56 = 0;
          if ( *(_DWORD *)(v20 + 56) )
          {
            while ( 1 )
            {
              v57 = *(unsigned int *)(v20 + 4LL * v56 + 120);
              if ( (unsigned int)v57 >= 0x80 )
              {
                v58 = *(unsigned int *)(v20 + 16);
                if ( (unsigned int)v57 <= (unsigned int)v58 && *(_DWORD *)(v57 + v20) == 64 && v57 + 40 <= v58 )
                  break;
              }
              if ( ++v56 >= *(_DWORD *)(v20 + 56) )
                goto LABEL_95;
            }
            *(_BYTE *)(v53 + 4) = *(_BYTE *)((unsigned int)v57 + v20 + 8);
            *(_QWORD *)(v53 + 32) = *(_QWORD *)((unsigned int)v57 + v20 + 16);
            *(_BYTE *)(v53 + 11) = *(_BYTE *)((unsigned int)v57 + v20 + 9);
          }
          else
          {
LABEL_95:
            *(_BYTE *)(v53 + 3) = 48;
            *(_DWORD *)(v53 + 64) = -1073741811;
          }
        }
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v55.QuadPart )
          v62 = PerformanceCounter.QuadPart - v55.QuadPart;
        else
          v62 = PerformanceCounter.QuadPart - v55.QuadPart - 1;
        if ( UseQPCTime )
        {
          LowPart = PerformanceFrequency.LowPart;
          v63 = 0;
          if ( PerformanceFrequency.QuadPart && v62 )
          {
            v64 = v62 / PerformanceFrequency.QuadPart;
            v62 = 1000 * (v62 % PerformanceFrequency.QuadPart);
            v60.QuadPart = 10000 * (v62 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
            v63 = 10000 * (v62 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                + 16 * (-24 * v64 + v62 / PerformanceFrequency.QuadPart);
          }
        }
        else
        {
          v63 = v62;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
          McTemplateK0zx_EtwWriteTransfer(
            LowPart,
            v60.LowPart,
            v62,
            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
            v63);
        v49 = v107;
      }
      *(_QWORD *)(*(_QWORD *)(v22 + 752) + 48LL) = *(_QWORD *)(v22 + 176);
      *(_QWORD *)(*(_QWORD *)(v22 + 752) + 24LL) = *(_QWORD *)(v22 + 184);
      *(_QWORD *)(*(_QWORD *)(v22 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v22 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v2 + 184) + 8LL) = *(_QWORD *)(v22 + 752);
      *(_BYTE *)(v22 + 16) &= ~0x40u;
      *(_QWORD *)(v22 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v20 + 96) = 0LL;
      *(_QWORD *)(v20 + 64) = *(_QWORD *)(v22 + 184);
      *(_QWORD *)(v20 + 104) = 0LL;
      v105 = *(int **)(v22 + 192);
      if ( v105 )
      {
        if ( (*(_BYTE *)(v20 + 24) & 0xC0) == 0xC0 )
        {
          v65 = *(_DWORD *)(v20 + 56);
          v66 = 0;
          if ( v65 )
          {
            while ( 1 )
            {
              v67 = 0LL;
              v68 = *(unsigned int *)(v20 + 4LL * v66 + 120);
              if ( (unsigned int)v68 >= 0x80 )
              {
                v69 = *(unsigned int *)(v20 + 16);
                if ( (unsigned int)v68 <= (unsigned int)v69 && *(_DWORD *)(v68 + v20) == 1 && v68 + 24 <= v69 )
                  break;
              }
              if ( ++v66 >= v65 )
                goto LABEL_123;
            }
            v67 = v68 + v20;
LABEL_123:
            if ( v67 )
              *(_QWORD *)(v67 + 16) = v105;
          }
        }
      }
      v70 = *(_DWORD *)(v20 + 24);
      if ( (v70 & 0x2000000) != 0 )
        *(_DWORD *)(v20 + 24) = v70 & 0xFDFFFFFF;
    }
  }
  else
  {
    *(_QWORD *)(v20 + 48) = *(_QWORD *)(v22 + 176);
    *(_QWORD *)(v20 + 24) = *(_QWORD *)(v22 + 184);
    v71 = *(_DWORD *)(v20 + 12);
    *(_QWORD *)(v20 + 56) = 0LL;
    *(_QWORD *)(v20 + 40) = 0LL;
    if ( (v71 & 0x2000000) != 0 )
      *(_DWORD *)(v20 + 12) = v71 & 0xFDFFFFFF;
  }
  RaidXrbDeallocateResources(v22, 1);
  if ( *(_BYTE *)(v20 + 2) == 40 )
    v72 = *(_DWORD *)(v20 + 24);
  else
    v72 = *(_DWORD *)(v20 + 12);
  if ( (v72 & 0x4000) == 0 )
  {
    v73 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v74 = *(_DWORD *)(v73 + *(_QWORD *)(v49 + 40));
    while ( (v74 & 1) == 0 )
    {
      v75 = v74;
      v74 = _InterlockedCompareExchange((volatile signed __int32 *)(v73 + *(_QWORD *)(v49 + 40)), v74 - 2, v74);
      if ( v75 == v74 )
        goto LABEL_138;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v49 + 520), 0, 0);
  }
LABEL_138:
  if ( v104 == 16 )
  {
    v76 = (__int64)v108;
    RaidXrbDeallocateResources((__int64)v108, 1);
    StorFreeContiguousIoResources(*(_QWORD *)(v3 + 24), v76 - 48);
  }
  else
  {
    *(_DWORD *)(v3 + 1856) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      24LL,
      &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
      v3,
      v2,
      *(_DWORD *)(v2 + 48));
  }
  if ( (qword_140170460 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v3 + 24), v2, v110);
  v21 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v2 + 141) = -84;
  if ( v21 )
    goto LABEL_212;
  v110 = 0LL;
  IoGetActivityIdIrp(v2, &v110);
  v78 = *(_QWORD *)(v2 + 184);
  if ( *(_BYTE *)v78 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_212;
    v80 = &EventNonReadWriteRequestComplete;
    goto LABEL_211;
  }
  if ( *(_BYTE *)v78 != 15 )
  {
    if ( *(_BYTE *)v78 != 27 )
      goto LABEL_212;
    if ( *(_BYTE *)(v78 + 1) == 7 && !*(_DWORD *)(v78 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v79 = *(int **)(v2 + 56);
        if ( v79 )
          v11 = *v79;
        McTemplateK0pqd_EtwWriteTransfer(v77, v78, (unsigned int)&v110, v2, v11, *(_DWORD *)(v2 + 48));
      }
      goto LABEL_212;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_212;
    v80 = &EventPnpRequestComplete;
LABEL_211:
    McTemplateK0pd_EtwWriteTransfer(v77, v80, &v110, v2, *(_DWORD *)(v2 + 48));
    goto LABEL_212;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_212;
  v81 = *(_QWORD *)(v78 + 8);
  v82 = 0;
  v83 = 0;
  v99 = 0;
  v84 = 0LL;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  if ( *(_BYTE *)(v81 + 2) != 40 )
  {
    v93 = *(_BYTE *)(v81 + 72);
    v84 = *(_BYTE **)(v81 + 32);
    v85 = *(_BYTE *)(v81 + 11);
    v83 = *(_BYTE *)(v81 + 4);
    if ( !*(_BYTE *)(v81 + 2) )
      goto LABEL_187;
    goto LABEL_212;
  }
  v88 = 0LL;
  v100 = 0;
  if ( *(_DWORD *)(v81 + 20) )
    goto LABEL_212;
  v89 = 0;
  v103 = *(_DWORD *)(v81 + 56);
  if ( !v103 )
    goto LABEL_184;
  while ( 1 )
  {
    v77 = *(unsigned int *)(v81 + 4LL * v89 + 120);
    if ( (unsigned int)v77 >= 0x80 )
    {
      v90 = *(unsigned int *)(v81 + 16);
      if ( (unsigned int)v77 < (unsigned int)v90 )
        break;
    }
LABEL_178:
    if ( ++v89 >= v103 )
      goto LABEL_184;
  }
  v91 = (unsigned int)v77;
  v92 = *(_DWORD *)(v77 + v81) - 64;
  if ( v92 )
  {
    LODWORD(v77) = v92 - 1;
    if ( (_DWORD)v77 )
    {
      if ( (_DWORD)v77 == 1 )
      {
        LODWORD(v77) = v91 + 40;
        if ( v91 + 40 <= v90 )
        {
          if ( *(_DWORD *)(v91 + v81 + 12) )
            v88 = (char *)(v91 + v81 + 32);
          v84 = *(_BYTE **)(v91 + v81 + 24);
          goto LABEL_183;
        }
      }
    }
    else
    {
      LODWORD(v77) = v91 + 56;
      if ( v91 + 56 <= v90 )
      {
        v100 = 1;
        if ( *(_BYTE *)(v91 + v81 + 10) )
          v88 = (char *)(v91 + v81 + 24);
        v83 = *(_BYTE *)(v91 + v81 + 8);
        v84 = *(_BYTE **)(v91 + v81 + 16);
        v85 = *(_BYTE *)(v91 + v81 + 9);
      }
    }
    goto LABEL_177;
  }
  LODWORD(v77) = v91 + 40;
  if ( v91 + 40 > v90 )
  {
LABEL_177:
    if ( v100 )
      goto LABEL_184;
    goto LABEL_178;
  }
  if ( *(_BYTE *)(v91 + v81 + 10) )
    v88 = (char *)(v91 + v81 + 24);
  v84 = *(_BYTE **)(v91 + v81 + 16);
LABEL_183:
  v85 = *(_BYTE *)(v91 + v81 + 9);
  v83 = *(_BYTE *)(v91 + v81 + 8);
LABEL_184:
  if ( v88 )
  {
    v93 = *v88;
    v82 = 0;
LABEL_187:
    LOBYTE(v77) = v93 - 8;
    if ( (v77 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v81 + 3) == 1 || !v84 || !v85 )
        goto LABEL_207;
      v94 = 0;
      v77 = (unsigned __int64)&v84[v85];
      v95 = v84 + 8;
      if ( (unsigned __int8)((*v84 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v95 <= v77 )
        {
          v94 = 1;
          v82 = v84[2];
          v86 = v84[1] & 0xF;
          v87 = v84[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v95 <= v77 )
        {
          v96 = v84 + 13;
          v86 = v84[2] & 0xF;
          v97 = v85;
          if ( (unsigned int)(unsigned __int8)v84[7] + 8 <= v85 )
            v97 = (unsigned __int8)v84[7] + 8;
          v77 = (unsigned __int64)&v84[v97];
          if ( (unsigned __int64)v96 > v77 )
            v99 = 0;
          else
            v99 = v84[12];
          if ( (unsigned __int64)(v84 + 14) > v77 )
            v87 = 0;
          else
            v87 = *v96;
          v94 = 1;
        }
        v82 = v99;
      }
      if ( v94 )
      {
        LOBYTE(v11) = v82;
        v98 = v87;
      }
      else
      {
LABEL_207:
        v86 = 0;
        v98 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v77,
        v81,
        (unsigned int)&v110,
        v2,
        *(_DWORD *)(v2 + 48),
        *(_BYTE *)(v81 + 3),
        v83,
        v86,
        v11,
        v98,
        v2);
    }
  }
LABEL_212:
  IofCompleteRequest((PIRP)v2, 0);
}
