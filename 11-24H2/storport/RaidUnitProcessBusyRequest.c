/*
 * XREFs of RaidUnitProcessBusyRequest @ 0x140031200
 * Callers:
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x1400697EC (RaidAcquireNvmeIceKeyResources.c)
 * Callees:
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     RaidNtStatusToSrbStatus @ 0x1400059F0 (RaidNtStatusToSrbStatus.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidStallDeviceQueue @ 0x1400131FC (RaidStallDeviceQueue.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140022C5C (McTemplateK0dud_EtwWriteTransfer.c)
 *     StorUnmapSenseInfo @ 0x140025620 (StorUnmapSenseInfo.c)
 *     RaidDeleteDeviceQueueEntry @ 0x140026BC8 (RaidDeleteDeviceQueueEntry.c)
 *     StorRemoveIoGatewayItem @ 0x140050F10 (StorRemoveIoGatewayItem.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x140053848 (McTemplateK0zx_EtwWriteTransfer.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x140055F58 (RaidAdapterReleaseCryptoKeyResources.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x14006AB70 (RaidReleaseNvmeIceKeyResources.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaidUnitProcessBusyRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // edi
  __int64 v5; // r13
  unsigned int v6; // eax
  char v7; // r8
  unsigned __int64 v8; // r9
  unsigned int v9; // edx
  unsigned int v10; // ebx
  char v11; // r11
  unsigned int v12; // r10d
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 *v23; // rbx
  __int64 v24; // r14
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v26; // rcx
  int v27; // r9d
  char v28; // al
  __int64 *v29; // rcx
  __int64 *v30; // r8
  __int64 **v31; // rax
  __int64 *v32; // rcx
  __int64 *v33; // rdx
  __int64 **v34; // rax
  int v35; // r9d
  char v36; // al
  __int64 *v37; // rcx
  __int64 *v38; // r8
  __int64 **v39; // rax
  __int64 *v40; // rcx
  __int64 *v41; // rdx
  __int64 **v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r14
  LARGE_INTEGER v51; // rax
  LARGE_INTEGER v52; // rbx
  unsigned int v53; // r8d
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v57; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v59; // r8
  char v60; // r9
  __int64 v61; // r9
  unsigned int v62; // ebx
  unsigned int v63; // r8d
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // r10
  int v67; // eax
  int v68; // eax
  int v69; // eax
  unsigned __int64 v70; // r8
  signed __int32 v71; // eax
  signed __int32 v72; // ett
  char v73; // al
  bool v74; // zf
  int v75; // ecx
  unsigned __int64 v76; // rcx
  __int64 v77; // rdx
  int *v78; // rax
  void *v79; // rdx
  __int64 v80; // rdx
  char v81; // bl
  char v82; // si
  _BYTE *v83; // r9
  unsigned __int8 v84; // r10
  char v85; // r11
  char v86; // r12
  char *v87; // rbx
  unsigned int v88; // r15d
  unsigned __int64 v89; // r14
  __int64 v90; // r8
  int v91; // ecx
  char v92; // cl
  char v93; // r8
  _BYTE *v94; // rax
  char *v95; // r12
  unsigned int v96; // eax
  char v97; // al
  int v98; // r8d
  __int64 v99; // rcx
  char v100; // [rsp+60h] [rbp-79h]
  char v101; // [rsp+61h] [rbp-78h]
  unsigned int v102; // [rsp+64h] [rbp-75h]
  unsigned int v103; // [rsp+68h] [rbp-71h]
  unsigned int v104; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v105; // [rsp+70h] [rbp-69h]
  unsigned int v106; // [rsp+74h] [rbp-65h]
  int v107; // [rsp+78h] [rbp-61h]
  unsigned int v108; // [rsp+78h] [rbp-61h]
  __int64 v109; // [rsp+80h] [rbp-59h]
  __int64 v110; // [rsp+88h] [rbp-51h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v113[3]; // [rsp+B0h] [rbp-29h] BYREF
  int v114; // [rsp+C8h] [rbp-11h]
  __int128 v115; // [rsp+D0h] [rbp-9h] BYREF
  __int128 v116; // [rsp+E0h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a2 + 168);
  LOBYTE(v4) = 0;
  v5 = *(_QWORD *)(a2 + 160);
  v113[0] = 0LL;
  v113[1] = 0LL;
  v114 = 0;
  v113[2] = a2;
  v6 = *(unsigned __int8 *)(v3 + 2);
  *(_QWORD *)&v115 = a3;
  v7 = 0;
  v110 = a1;
  v106 = 0;
  v105 = 0;
  if ( (_BYTE)v6 != 40 )
  {
    v9 = *(_DWORD *)(v3 + 12);
    v8 = v6;
    v7 = *(_BYTE *)(v3 + 4);
    v102 = v9;
    v103 = v6;
    goto LABEL_13;
  }
  v8 = *(unsigned int *)(v3 + 20);
  v9 = *(_DWORD *)(v3 + 24);
  v103 = v8;
  v102 = v9;
  if ( !(_DWORD)v8 )
  {
    v10 = *(_DWORD *)(v3 + 56);
    v11 = 0;
    v12 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v13 = *(unsigned int *)(v3 + 4LL * v12 + 120);
        if ( (unsigned int)v13 >= 0x80 )
        {
          v14 = *(unsigned int *)(v3 + 16);
          if ( (unsigned int)v13 < (unsigned int)v14 )
            break;
        }
LABEL_11:
        if ( ++v12 >= v10 )
          goto LABEL_12;
      }
      v15 = (unsigned int)v13;
      v16 = *(_DWORD *)(v13 + v3) - 64;
      if ( !v16 )
        goto LABEL_9;
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
        {
LABEL_9:
          if ( v15 + 40 <= v14 )
          {
            v7 = *(_BYTE *)(v15 + v3 + 8);
LABEL_12:
            v8 = 0LL;
            v9 = *(_DWORD *)(v3 + 24);
            a1 = v110;
            goto LABEL_13;
          }
        }
      }
      else if ( v15 + 56 <= v14 )
      {
        v7 = *(_BYTE *)(v15 + v3 + 8);
        v11 = 1;
      }
      if ( v11 )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
LABEL_13:
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || v7 == 8 )
  {
    v105 = *(_DWORD *)(a1 + 1936);
    v106 = 1;
  }
  if ( v7 == 40 )
  {
    v105 = *(_DWORD *)(a1 + 1932);
    v106 = 2;
  }
  v18 = 0x1000D0000LL;
  v104 = (v9 & 0x102) != 0x102 && (v9 & 0x80010) == 0 && ((unsigned int)v8 > 0x20 || !_bittest64(&v18, v8));
  v107 = RaUnitAcquireRemoveLock(a1, v5, 1);
  if ( v107 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  v19 = *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL);
  if ( *(_BYTE *)(v19 + 2) == 40 )
    v20 = *(_QWORD *)(v19 + 96);
  else
    v20 = *(_QWORD *)(v19 + 48);
  v109 = *(_QWORD *)(v20 + 224);
  if ( *(_BYTE *)(v19 + 2) == 40 )
    v21 = *(_QWORD *)(v19 + 96);
  else
    v21 = *(_QWORD *)(v19 + 48);
  if ( (*(_BYTE *)(v21 + 16) & 2) != 0 )
  {
    v22 = *(unsigned int *)(v21 + 84) + 1LL;
    PerformanceFrequency = *(union _LARGE_INTEGER *)(*(_QWORD *)(v20 + 224) + 560LL);
    v23 = (__int64 *)(v21 + 48);
    v24 = PerformanceFrequency.QuadPart + (v22 << 6);
    memset(&LockHandle, 0, sizeof(LockHandle));
    CurrentIrql = KeGetCurrentIrql();
    v26 = (KSPIN_LOCK *)(v24 + 40);
    if ( CurrentIrql == 2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v26, &LockHandle);
      v27 = *(_DWORD *)PerformanceFrequency.QuadPart;
      v28 = *((_BYTE *)v23 - 32);
      if ( (v28 & 2) == 0 )
      {
LABEL_52:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_67:
        if ( StorEtwLoggingEnabled )
        {
          v116 = 0LL;
          IoGetActivityIdIrp(v5, &v116);
          if ( byte_140171462 < 0 )
            McTemplateK0dud_EtwWriteTransfer(v44, v43, (__int64)&v116, v45, 4);
        }
        goto LABEL_70;
      }
      *((_BYTE *)v23 - 32) = v28 & 0xFD;
      v29 = (__int64 *)*v23;
      v30 = *(__int64 **)v24;
      if ( *(__int64 **)(*v23 + 8) == v23 )
      {
        v31 = (__int64 **)v23[1];
        if ( *v31 == v23 )
        {
          *v31 = v29;
          v29[1] = (__int64)v31;
          if ( (v23[6] & 1) == 0 )
          {
LABEL_47:
            if ( (v27 & 4) == 0 && v30 == v23 )
            {
              if ( *(_QWORD *)v24 == v24 )
                *(_DWORD *)(v24 + 48) = -1;
              else
                *(_DWORD *)(v24 + 48) = *(_DWORD *)(*(_QWORD *)v24 + 32LL);
            }
            goto LABEL_52;
          }
          v32 = v23 + 2;
          if ( *(__int64 **)(v24 + 32) == v23 + 2 )
            *(_QWORD *)(v24 + 32) = *v32;
          v33 = (__int64 *)*v32;
          if ( *(__int64 **)(*v32 + 8) == v32 )
          {
            v34 = (__int64 **)v23[3];
            if ( *v34 == v32 )
            {
              *v34 = v33;
              v33[1] = (__int64)v34;
              *((_DWORD *)v23 + 12) &= ~1u;
              goto LABEL_47;
            }
          }
        }
      }
LABEL_75:
      __fastfail(3u);
    }
    KeAcquireInStackQueuedSpinLock(v26, &LockHandle);
    v35 = *(_DWORD *)PerformanceFrequency.QuadPart;
    v36 = *((_BYTE *)v23 - 32);
    if ( (v36 & 2) != 0 )
    {
      *((_BYTE *)v23 - 32) = v36 & 0xFD;
      v37 = (__int64 *)*v23;
      v38 = *(__int64 **)v24;
      if ( *(__int64 **)(*v23 + 8) != v23 )
        goto LABEL_75;
      v39 = (__int64 **)v23[1];
      if ( *v39 != v23 )
        goto LABEL_75;
      *v39 = v37;
      v37[1] = (__int64)v39;
      if ( (v23[6] & 1) != 0 )
      {
        v40 = v23 + 2;
        if ( *(__int64 **)(v24 + 32) == v23 + 2 )
          *(_QWORD *)(v24 + 32) = *v40;
        v41 = (__int64 *)*v40;
        if ( *(__int64 **)(*v40 + 8) != v40 )
          goto LABEL_75;
        v42 = (__int64 **)v23[3];
        if ( *v42 != v40 )
          goto LABEL_75;
        *v42 = v41;
        v41[1] = (__int64)v42;
        *((_DWORD *)v23 + 12) &= ~1u;
      }
      if ( (v35 & 4) == 0 && v38 == v23 )
      {
        if ( *(_QWORD *)v24 == v24 )
          *(_DWORD *)(v24 + 48) = -1;
        else
          *(_DWORD *)(v24 + 48) = *(_DWORD *)(*(_QWORD *)v24 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_67;
  }
LABEL_70:
  v46 = v109;
  StorUnmapSenseInfo(v20, *(_QWORD *)(*(_QWORD *)(v109 + 24) + 8LL));
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v49 = *(_QWORD *)(v109 + 3600);
    if ( v49 && *(_QWORD *)(v49 + 104) )
    {
      v48 = v20;
      goto LABEL_73;
    }
    v47 = *(_QWORD *)(v109 + 24);
    if ( !*(_QWORD *)(v47 + 5616) )
      goto LABEL_82;
    v48 = v20;
LABEL_81:
    RaidAdapterReleaseCryptoKeyResources(v47, v48);
    goto LABEL_82;
  }
  v47 = *(_QWORD *)(v109 + 24);
  if ( *(_QWORD *)(v47 + 5624) )
  {
    v48 = v20;
    if ( (*(_BYTE *)(v47 + 112) & 0x10) != 0 )
    {
LABEL_73:
      RaidReleaseNvmeIceKeyResources(v109, v48);
      goto LABEL_82;
    }
    goto LABEL_81;
  }
LABEL_82:
  if ( *(_BYTE *)(v19 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v20 + 16) & 0x40) != 0 )
    {
      v50 = *(_QWORD *)(v20 + 752);
      PerformanceFrequency.QuadPart = 1LL;
      if ( v50 )
      {
        if ( UseQPCTime )
          v51 = KeQueryPerformanceCounter(&PerformanceFrequency);
        else
          v51.QuadPart = KeQueryUnbiasedInterruptTime();
        v52 = v51;
        *(_BYTE *)(v50 + 3) = *(_BYTE *)(v19 + 3);
        *(_DWORD *)(v50 + 12) = *(_DWORD *)(v19 + 24);
        if ( (*(_DWORD *)(v19 + 24) & 0x40) != 0 )
          *(_DWORD *)(v50 + 16) = *(_DWORD *)(v19 + 60);
        if ( *(_BYTE *)(v19 + 3) == 48 )
          *(_DWORD *)(v50 + 64) = *(_DWORD *)(v19 + 44);
        if ( !*(_DWORD *)(v19 + 20) )
        {
          v53 = 0;
          if ( *(_DWORD *)(v19 + 56) )
          {
            while ( 1 )
            {
              v54 = *(unsigned int *)(v19 + 4LL * v53 + 120);
              if ( (unsigned int)v54 >= 0x80 )
              {
                v55 = *(unsigned int *)(v19 + 16);
                if ( (unsigned int)v54 <= (unsigned int)v55 && *(_DWORD *)(v54 + v19) == 64 && v54 + 40 <= v55 )
                  break;
              }
              if ( ++v53 >= *(_DWORD *)(v19 + 56) )
                goto LABEL_99;
            }
            *(_BYTE *)(v50 + 4) = *(_BYTE *)((unsigned int)v54 + v19 + 8);
            *(_QWORD *)(v50 + 32) = *(_QWORD *)((unsigned int)v54 + v19 + 16);
            *(_BYTE *)(v50 + 11) = *(_BYTE *)((unsigned int)v54 + v19 + 9);
          }
          else
          {
LABEL_99:
            *(_BYTE *)(v50 + 3) = 48;
            *(_DWORD *)(v50 + 64) = -1073741811;
          }
        }
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v52.QuadPart )
          v59 = PerformanceCounter.QuadPart - v52.QuadPart;
        else
          v59 = PerformanceCounter.QuadPart - v52.QuadPart - 1;
        if ( UseQPCTime )
        {
          LowPart = PerformanceFrequency.LowPart;
          v60 = 0;
          if ( PerformanceFrequency.QuadPart && v59 )
          {
            v61 = v59 / PerformanceFrequency.QuadPart;
            v59 = 1000 * (v59 % PerformanceFrequency.QuadPart);
            v57.QuadPart = 10000 * (v59 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
            v60 = 10000 * (v59 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                + 16 * (-24 * v61 + v59 / PerformanceFrequency.QuadPart);
          }
        }
        else
        {
          v60 = v59;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
          McTemplateK0zx_EtwWriteTransfer(
            LowPart,
            v57.LowPart,
            v59,
            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
            v60);
        v46 = v109;
      }
      *(_QWORD *)(*(_QWORD *)(v20 + 752) + 48LL) = *(_QWORD *)(v20 + 176);
      *(_QWORD *)(*(_QWORD *)(v20 + 752) + 24LL) = *(_QWORD *)(v20 + 184);
      *(_QWORD *)(*(_QWORD *)(v20 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v20 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL) = *(_QWORD *)(v20 + 752);
      *(_BYTE *)(v20 + 16) &= ~0x40u;
      *(_QWORD *)(v20 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v19 + 96) = 0LL;
      *(_QWORD *)(v19 + 64) = *(_QWORD *)(v20 + 184);
      *(_QWORD *)(v19 + 104) = 0LL;
      if ( *(_QWORD *)(v20 + 192) && (*(_BYTE *)(v19 + 24) & 0xC0) == 0xC0 )
      {
        v62 = *(_DWORD *)(v19 + 56);
        v63 = 0;
        if ( v62 )
        {
          while ( 1 )
          {
            v64 = 0LL;
            v65 = *(unsigned int *)(v19 + 4LL * v63 + 120);
            if ( (unsigned int)v65 >= 0x80 )
            {
              v66 = *(unsigned int *)(v19 + 16);
              if ( (unsigned int)v65 <= (unsigned int)v66 && *(_DWORD *)(v65 + v19) == 1 && v65 + 24 <= v66 )
                break;
            }
            if ( ++v63 >= v62 )
              goto LABEL_127;
          }
          v64 = v65 + v19;
LABEL_127:
          v46 = v109;
          if ( v64 )
            *(_QWORD *)(v64 + 16) = *(_QWORD *)(v20 + 192);
        }
        else
        {
          v46 = v109;
        }
      }
      v67 = *(_DWORD *)(v19 + 24);
      if ( (v67 & 0x2000000) != 0 )
        *(_DWORD *)(v19 + 24) = v67 & 0xFDFFFFFF;
    }
  }
  else
  {
    *(_QWORD *)(v19 + 48) = *(_QWORD *)(v20 + 176);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(v20 + 184);
    v68 = *(_DWORD *)(v19 + 12);
    *(_QWORD *)(v19 + 56) = 0LL;
    *(_QWORD *)(v19 + 40) = 0LL;
    if ( (v68 & 0x2000000) != 0 )
      *(_DWORD *)(v19 + 12) = v68 & 0xFDFFFFFF;
  }
  RaidXrbDeallocateResources(v20, 1);
  if ( *(_BYTE *)(v19 + 2) == 40 )
    v69 = *(_DWORD *)(v19 + 24);
  else
    v69 = *(_DWORD *)(v19 + 12);
  if ( (v69 & 0x4000) == 0 )
  {
    v70 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v71 = *(_DWORD *)(v70 + *(_QWORD *)(v46 + 40));
    while ( (v71 & 1) == 0 )
    {
      v72 = v71;
      v71 = _InterlockedCompareExchange((volatile signed __int32 *)(v70 + *(_QWORD *)(v46 + 40)), v71 - 2, v71);
      if ( v72 == v71 )
        goto LABEL_143;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v46 + 520), 0, 0);
  }
LABEL_143:
  if ( (unsigned __int8)StorRemoveIoGatewayItem(v113, 0LL, 0LL) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(v110 + 24) + 1712LL), 0LL, 0LL);
  RaidDeleteDeviceQueueEntry(v110 + 720, v104);
  if ( v107 >= 0 )
  {
    RaidStallDeviceQueue(v110 + 720, v106, v105, v110);
    if ( (_QWORD)v115 )
      *(_BYTE *)v115 = 0;
    v98 = (v102 >> 3) & 2 | 4;
    if ( (v102 & 0x80000) == 0 )
      v98 = (v102 >> 3) & 2;
    if ( (v102 & 0x102) != 0x102 && (v102 & 0x80010) == 0 )
    {
      if ( v103 > 0x20 || (v99 = 0x1000D0000LL, !_bittest64(&v99, v103)) )
        v98 |= 1u;
    }
    if ( !(unsigned int)RaidStartIoPacket(v110, v5, v98) )
      RaidUnitRestartQueue(v110, 0);
    return;
  }
  v73 = RaidNtStatusToSrbStatus(v107);
  v74 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v3 + 3) = v73;
  *(_BYTE *)(v5 + 141) = -84;
  *(_DWORD *)(v5 + 48) = v75;
  if ( v74 )
    goto LABEL_211;
  v115 = 0LL;
  IoGetActivityIdIrp(v5, &v115);
  v77 = *(_QWORD *)(v5 + 184);
  if ( *(_BYTE *)v77 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_211;
    v79 = &EventNonReadWriteRequestComplete;
    goto LABEL_210;
  }
  if ( *(_BYTE *)v77 != 15 )
  {
    if ( *(_BYTE *)v77 != 27 )
      goto LABEL_211;
    if ( *(_BYTE *)(v77 + 1) == 7 && !*(_DWORD *)(v77 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v78 = *(int **)(v5 + 56);
        if ( v78 )
          v4 = *v78;
        McTemplateK0pqd_EtwWriteTransfer(v76, v77, (unsigned int)&v115, v5, v4, *(_DWORD *)(v5 + 48));
      }
      goto LABEL_211;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_211;
    v79 = &EventPnpRequestComplete;
LABEL_210:
    McTemplateK0pd_EtwWriteTransfer(v76, v79, &v115, v5, *(_DWORD *)(v5 + 48));
    goto LABEL_211;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_211;
  v80 = *(_QWORD *)(v77 + 8);
  v81 = 0;
  v82 = 0;
  v100 = 0;
  v83 = 0LL;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  if ( *(_BYTE *)(v80 + 2) != 40 )
  {
    v92 = *(_BYTE *)(v80 + 72);
    v83 = *(_BYTE **)(v80 + 32);
    v84 = *(_BYTE *)(v80 + 11);
    v82 = *(_BYTE *)(v80 + 4);
    if ( !*(_BYTE *)(v80 + 2) )
      goto LABEL_186;
    goto LABEL_211;
  }
  v87 = 0LL;
  v101 = 0;
  if ( *(_DWORD *)(v80 + 20) )
    goto LABEL_211;
  v88 = 0;
  v108 = *(_DWORD *)(v80 + 56);
  if ( !v108 )
    goto LABEL_183;
  while ( 1 )
  {
    v76 = *(unsigned int *)(v80 + 4LL * v88 + 120);
    if ( (unsigned int)v76 >= 0x80 )
    {
      v89 = *(unsigned int *)(v80 + 16);
      if ( (unsigned int)v76 < (unsigned int)v89 )
        break;
    }
LABEL_177:
    if ( ++v88 >= v108 )
      goto LABEL_183;
  }
  v90 = (unsigned int)v76;
  v91 = *(_DWORD *)(v76 + v80) - 64;
  if ( v91 )
  {
    LODWORD(v76) = v91 - 1;
    if ( (_DWORD)v76 )
    {
      if ( (_DWORD)v76 == 1 )
      {
        LODWORD(v76) = v90 + 40;
        if ( v90 + 40 <= v89 )
        {
          if ( *(_DWORD *)(v90 + v80 + 12) )
            v87 = (char *)(v90 + v80 + 32);
          v83 = *(_BYTE **)(v90 + v80 + 24);
          goto LABEL_182;
        }
      }
    }
    else
    {
      LODWORD(v76) = v90 + 56;
      if ( v90 + 56 <= v89 )
      {
        v101 = 1;
        if ( *(_BYTE *)(v90 + v80 + 10) )
          v87 = (char *)(v90 + v80 + 24);
        v82 = *(_BYTE *)(v90 + v80 + 8);
        v83 = *(_BYTE **)(v90 + v80 + 16);
        v84 = *(_BYTE *)(v90 + v80 + 9);
      }
    }
    goto LABEL_176;
  }
  LODWORD(v76) = v90 + 40;
  if ( v90 + 40 > v89 )
  {
LABEL_176:
    if ( v101 )
      goto LABEL_183;
    goto LABEL_177;
  }
  if ( *(_BYTE *)(v90 + v80 + 10) )
    v87 = (char *)(v90 + v80 + 24);
  v83 = *(_BYTE **)(v90 + v80 + 16);
LABEL_182:
  v84 = *(_BYTE *)(v90 + v80 + 9);
  v82 = *(_BYTE *)(v90 + v80 + 8);
LABEL_183:
  if ( v87 )
  {
    v92 = *v87;
    v81 = 0;
LABEL_186:
    LOBYTE(v76) = v92 - 8;
    if ( (v76 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v80 + 3) == 1 || !v83 || !v84 )
        goto LABEL_206;
      v93 = 0;
      v76 = (unsigned __int64)&v83[v84];
      v94 = v83 + 8;
      if ( (unsigned __int8)((*v83 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v94 <= v76 )
        {
          v93 = 1;
          v81 = v83[2];
          v85 = v83[1] & 0xF;
          v86 = v83[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v94 <= v76 )
        {
          v95 = v83 + 13;
          v85 = v83[2] & 0xF;
          v96 = v84;
          if ( (unsigned int)(unsigned __int8)v83[7] + 8 <= v84 )
            v96 = (unsigned __int8)v83[7] + 8;
          v76 = (unsigned __int64)&v83[v96];
          if ( (unsigned __int64)v95 > v76 )
            v100 = 0;
          else
            v100 = v83[12];
          if ( (unsigned __int64)(v83 + 14) > v76 )
            v86 = 0;
          else
            v86 = *v95;
          v93 = 1;
        }
        v81 = v100;
      }
      if ( v93 )
      {
        LOBYTE(v4) = v81;
        v97 = v86;
      }
      else
      {
LABEL_206:
        v85 = 0;
        v97 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v76,
        v80,
        (unsigned int)&v115,
        v5,
        *(_DWORD *)(v5 + 48),
        *(_BYTE *)(v80 + 3),
        v82,
        v85,
        v4,
        v97,
        v5);
    }
  }
LABEL_211:
  IofCompleteRequest((PIRP)v5, 0);
}
