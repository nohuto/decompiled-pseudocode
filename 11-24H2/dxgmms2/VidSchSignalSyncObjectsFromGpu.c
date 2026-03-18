/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x14000FC30
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1400ED550 (VidSchSignalPagingFences.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140112AB8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer @ 0x14000EE98 (McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14000F8C0 (VidSchiCompleteSignalSyncObject.c)
 *     ??1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ @ 0x140011258 (--1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1400118C0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400228C0 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiFreeQueuePacket @ 0x1400232B0 (VidSchiFreeQueuePacket.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchiAllocateQueuePacket @ 0x1400E4AC0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E4CE0 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        unsigned int a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        unsigned __int64 *a8,
        char a9)
{
  int v9; // r14d
  __int64 v10; // rsi
  unsigned int v11; // edx
  unsigned __int8 v12; // bl
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdi
  _QWORD **Pool2; // r15
  unsigned int v17; // r14d
  KSPIN_LOCK *v18; // r13
  _DWORD *HwQueuePacket; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  _QWORD *v23; // rsi
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rdi
  _BYTE *v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // edi
  _QWORD *v30; // rax
  unsigned int v31; // r13d
  __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned __int64 *v34; // r14
  __int64 v35; // rdi
  int v36; // ecx
  unsigned __int64 v37; // rax
  unsigned int *v38; // rcx
  __int64 v39; // r8
  struct _VIDSCH_QUEUE_PACKET **v40; // r15
  __int64 v41; // rbx
  struct _VIDSCH_QUEUE_PACKET *v42; // rcx
  bool v43; // zf
  struct _KLOCK_QUEUE_HANDLE *v44; // rcx
  unsigned __int64 *v45; // r13
  __int64 v46; // r15
  unsigned __int64 *v47; // r14
  __int64 v48; // rdi
  int v49; // ecx
  unsigned __int64 v50; // rax
  unsigned int *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rdx
  unsigned __int64 v55; // r9
  char v56; // dl
  unsigned __int64 v57; // rcx
  char *v58; // rax
  _BYTE *v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  const wchar_t *v64; // r9
  void (*v65)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  __int64 v66; // r9
  __int64 v67; // r11
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // rax
  __int64 v76; // r13
  unsigned __int64 v77; // r8
  struct _KLOCK_QUEUE_HANDLE *v78; // rcx
  unsigned __int64 v79; // r9
  unsigned __int64 v80; // r8
  __int64 v81; // rbx
  struct _VIDSCH_QUEUE_PACKET *v82; // rdx
  unsigned __int64 v83; // r8
  struct _KLOCK_QUEUE_HANDLE *v84; // rcx
  unsigned __int64 v85; // r13
  unsigned __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // rax
  unsigned __int64 v90; // r8
  __int64 v91; // [rsp+20h] [rbp-E0h]
  unsigned int v93; // [rsp+58h] [rbp-A8h]
  __int64 v94; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v95; // [rsp+60h] [rbp-A0h]
  __int64 v96; // [rsp+60h] [rbp-A0h]
  __int64 v97; // [rsp+60h] [rbp-A0h]
  __int64 v98; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v99; // [rsp+68h] [rbp-98h]
  __int64 v100; // [rsp+70h] [rbp-90h]
  struct VIDSCH_HW_QUEUE *v101; // [rsp+78h] [rbp-88h]
  _QWORD *v103; // [rsp+80h] [rbp-80h]
  unsigned __int64 v105; // [rsp+88h] [rbp-78h]
  unsigned __int64 v106; // [rsp+88h] [rbp-78h]
  _QWORD *v107; // [rsp+90h] [rbp-70h]
  struct _VIDSCH_QUEUE_PACKET **v108; // [rsp+98h] [rbp-68h]
  _BYTE *P; // [rsp+A0h] [rbp-60h]
  _BYTE v110[16]; // [rsp+A8h] [rbp-58h] BYREF
  int v111; // [rsp+B8h] [rbp-48h]
  __int64 v112; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v113; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v114[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v115; // [rsp+E0h] [rbp-20h]
  int v116; // [rsp+E4h] [rbp-1Ch]
  __int64 v117; // [rsp+E8h] [rbp-18h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v119; // [rsp+108h] [rbp+8h]
  KSPIN_LOCK *v120; // [rsp+110h] [rbp+10h]
  struct _KLOCK_QUEUE_HANDLE v121; // [rsp+118h] [rbp+18h] BYREF
  __int16 v122; // [rsp+130h] [rbp+30h]
  KSPIN_LOCK *v123; // [rsp+138h] [rbp+38h]
  struct _KLOCK_QUEUE_HANDLE v124; // [rsp+140h] [rbp+40h] BYREF
  __int16 v125; // [rsp+158h] [rbp+58h]
  KSPIN_LOCK *v126; // [rsp+160h] [rbp+60h]
  struct _KLOCK_QUEUE_HANDLE v127; // [rsp+168h] [rbp+68h] BYREF
  __int16 v128; // [rsp+180h] [rbp+80h]
  KSPIN_LOCK *v129; // [rsp+188h] [rbp+88h]
  struct _KLOCK_QUEUE_HANDLE v130; // [rsp+190h] [rbp+90h] BYREF
  __int16 v131; // [rsp+1A8h] [rbp+A8h]
  struct _KLOCK_QUEUE_HANDLE v132; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v133; // [rsp+1C8h] [rbp+C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v134; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v135; // [rsp+1F8h] [rbp+F8h] BYREF
  _BYTE *v136; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v137[16]; // [rsp+218h] [rbp+118h] BYREF
  int v138; // [rsp+228h] [rbp+128h]
  _BYTE *v139; // [rsp+230h] [rbp+130h]
  char *v140; // [rsp+238h] [rbp+138h]
  char v141[8]; // [rsp+240h] [rbp+140h] BYREF
  int v142; // [rsp+248h] [rbp+148h]
  char *v143; // [rsp+250h] [rbp+150h]
  _BYTE *v144; // [rsp+258h] [rbp+158h]
  _BYTE v145[16]; // [rsp+260h] [rbp+160h] BYREF
  int v146; // [rsp+270h] [rbp+170h]
  _BYTE *v147; // [rsp+278h] [rbp+178h]

  v9 = a3;
  v10 = a5;
  v11 = a1;
  v99 = a8;
  v112 = 0LL;
  if ( a3 || a1 )
  {
    if ( a6 && a5 )
      goto LABEL_4;
    WdLogSingleEntry1(1LL, -1073741811LL);
    v64 = L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x";
    WdLogGlobalForLineNumber = 11870;
LABEL_178:
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      v64,
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !a6 || !a5 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    v64 = L"NULL VIDSCH_CONTEXT pointer, returning 0x%I64x";
    WdLogGlobalForLineNumber = 11853;
    goto LABEL_178;
  }
  v9 = 1;
  v112 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a6 + 8LL) + 264LL);
  a4 = &v112;
LABEL_4:
  v12 = a7;
  v13 = *(_QWORD *)(*(_QWORD *)a6 + 8LL);
  v94 = v13;
  if ( (a7 & 0x80000004) != 0 )
    goto LABEL_12;
  v119 = 0;
  v117 = v13 + 1984;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 1984), &LockHandle);
  v14 = 0LL;
  LOBYTE(v119) = 1;
  while ( (unsigned int)v14 < a5 )
  {
    v27 = *(_QWORD *)(a6 + 8 * v14);
    v28 = *(_DWORD *)(v27 + 48);
    if ( v28 != 4 && v28 != 6 && v28 != 5 || *(_BYTE *)(v27 + 29) )
      goto LABEL_48;
    v55 = a8[v14];
    v56 = *(_BYTE *)(v27 + 30);
    if ( *(_BYTE *)(v27 + 28) )
    {
      v57 = *(_QWORD *)(*(_QWORD *)(v27 + 304) + 40LL);
    }
    else if ( v28 == 6 )
    {
      v57 = *(_QWORD *)(v27 + 168);
    }
    else
    {
      v57 = *(_QWORD *)(v27 + 96);
    }
    if ( v56 )
    {
      if ( v55 < v57 )
      {
        WdLogSingleEntry2(3LL, v55, v57);
        WdLogGlobalForLineNumber = 5995;
        goto LABEL_181;
      }
      if ( v55 != v57 )
        goto LABEL_48;
      WdLogSingleEntry1(3LL, v55);
      v14 = (unsigned int)(v14 + 1);
      WdLogGlobalForLineNumber = 6004;
    }
    else
    {
      if ( (int)v57 - (int)v55 > 0 )
      {
        WdLogSingleEntry2(3LL, (unsigned int)v55, (unsigned int)v57);
        WdLogGlobalForLineNumber = 6014;
LABEL_181:
        WdLogSingleEntry2(1LL, a8[v14], -1073741811LL);
        v65 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
        v91 = a8[v14];
        WdLogGlobalForLineNumber = 11894;
        v65(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
          v91,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        if ( (_BYTE)v119 )
        {
          if ( HIBYTE(v119) )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            return 3221225485LL;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        return 3221225485LL;
      }
      if ( (_DWORD)v57 == (_DWORD)v55 )
      {
        WdLogSingleEntry1(3LL, (unsigned int)v55);
        WdLogGlobalForLineNumber = 6023;
      }
LABEL_48:
      v14 = (unsigned int)(v14 + 1);
    }
  }
  if ( (_BYTE)v119 )
  {
    if ( HIBYTE(v119) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v119) = 0;
  }
  v11 = a1;
LABEL_12:
  v15 = v9 + v11;
  P = 0LL;
  v111 = 0;
  if ( (unsigned int)v15 <= 2 )
  {
    Pool2 = (_QWORD **)v110;
    v108 = (struct _VIDSCH_QUEUE_PACKET **)v110;
    P = v110;
    if ( (_DWORD)v15 )
    {
      memset(v110, 0, 8LL * (unsigned int)v15);
      Pool2 = (_QWORD **)v110;
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v15 < 8 )
    goto LABEL_200;
  Pool2 = (_QWORD **)ExAllocatePool2(64LL, 8 * v15, 945908054LL);
  P = Pool2;
LABEL_15:
  v11 = a1;
  v108 = (struct _VIDSCH_QUEUE_PACKET **)Pool2;
LABEL_16:
  v111 = v15;
  if ( !Pool2 )
  {
LABEL_200:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11907;
LABEL_173:
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225495LL;
  }
  v93 = 0;
  v17 = 0;
  v107 = 0LL;
  v18 = (KSPIN_LOCK *)(v13 + 1984);
  while ( v17 < (unsigned int)v15 )
  {
    v100 = 0LL;
    v101 = 0LL;
    if ( v17 < v11 )
    {
      v123 = v18;
      v125 = 0;
      v101 = *(struct VIDSCH_HW_QUEUE **)(a2 + 8LL * v17);
      KeAcquireInStackQueuedSpinLock(v18, &v124);
      LOBYTE(v125) = 1;
      if ( *((struct VIDSCH_HW_QUEUE **)v101 + 20) != (struct VIDSCH_HW_QUEUE *)((char *)v101 + 160) )
      {
        if ( HIBYTE(v125) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v124);
        else
          KeReleaseInStackQueuedSpinLock(&v124);
        LOBYTE(v125) = 0;
        if ( v101 )
        {
          HwQueuePacket = (_DWORD *)VidSchiAllocateHwQueuePacket(v101, 0LL);
LABEL_25:
          Pool2[v17] = HwQueuePacket;
          if ( !HwQueuePacket )
          {
            WdLogSingleEntry1(3LL, -1073741801LL);
            WdLogGlobalForLineNumber = 11982;
            if ( v17 )
            {
              v81 = v17;
              do
              {
                v82 = (struct _VIDSCH_QUEUE_PACKET *)*Pool2;
                if ( *Pool2 )
                {
                  if ( *((_QWORD *)v82 + 12) )
                    VidSchiFreeQueuePacket(v101, v82);
                  else
                    VidSchiFreeQueuePacket(v100);
                }
                ++Pool2;
                --v81;
              }
              while ( v81 );
            }
            goto LABEL_173;
          }
          *HwQueuePacket = 895576406;
          v93 = v17;
          *((_DWORD *)Pool2[v17] + 12) = 5;
          Pool2[v17][7] = MEMORY[0xFFFFF78000000320];
          *((_DWORD *)Pool2[v17] + 13) = 2;
          v20 = Pool2[v17];
          if ( v101 )
            v20[12] = v101;
          else
            v20[11] = v100;
          Pool2[v17][13] = KeGetCurrentThread();
          Pool2[v17][9] = 0LL;
          *((_DWORD *)Pool2[v17] + 188) ^= (v12 ^ (unsigned __int8)*((_DWORD *)Pool2[v17] + 188)) & 1;
          *((_DWORD *)Pool2[v17] + 188) ^= ((unsigned __int8)*((_DWORD *)Pool2[v17] + 188) ^ (unsigned __int8)(16 * a9)) & 0x10;
          if ( (v12 & 4) != 0 )
            *((_DWORD *)Pool2[v17] + 188) |= 4u;
          if ( *(_DWORD *)(*(_QWORD *)a6 + 48LL) == 2 )
            Pool2[v17][127] = *a8;
          if ( (_DWORD)v10 )
          {
            v21 = (unsigned int)v10;
            v22 = a6;
            v23 = &Pool2[v17];
            do
            {
              *(_QWORD *)(760 - a6 + v22 + *v23) = *(_QWORD *)v22;
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v22 + 48LL) - 4) <= 2 )
                *(_QWORD *)(1016 - a6 + v22 + *v23) = *(unsigned __int64 *)((char *)a8 + v22 - a6);
              v22 += 8LL;
              --v21;
            }
            while ( v21 );
            v12 = a7;
            v10 = a5;
          }
          *((_DWORD *)Pool2[v17] + 189) = v10;
          Pool2[v17][159] = 0LL;
          v24 = Pool2[v17];
          if ( v107 )
          {
            v24[160] = v107;
            v107[159] = Pool2[v17];
          }
          else
          {
            v24[160] = 0LL;
          }
          v107 = Pool2[v17];
LABEL_51:
          v11 = a1;
          ++v17;
          continue;
        }
LABEL_24:
        HwQueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v100, *(_DWORD *)(v100 + 796) == 0);
        goto LABEL_25;
      }
      if ( HIBYTE(v125) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v124);
      else
        KeReleaseInStackQueuedSpinLock(&v124);
      v11 = a1;
      ++v17;
      LOBYTE(v125) = 0;
    }
    else
    {
      _mm_lfence();
      v126 = v18;
      v128 = 0;
      v100 = a4[v17 - v11];
      KeAcquireInStackQueuedSpinLock(v18, &v127);
      LOBYTE(v128) = 1;
      if ( *(_QWORD *)(v100 + 664) != v100 + 664 )
      {
        if ( HIBYTE(v128) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v127);
        else
          KeReleaseInStackQueuedSpinLock(&v127);
        LOBYTE(v128) = 0;
        goto LABEL_24;
      }
      if ( !HIBYTE(v128) )
      {
        KeReleaseInStackQueuedSpinLock(&v127);
        LOBYTE(v128) = 0;
        goto LABEL_51;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v127);
      v11 = a1;
      ++v17;
      LOBYTE(v128) = 0;
    }
  }
  if ( !v107 )
  {
    v129 = v18;
    v131 = 0;
    KeAcquireInStackQueuedSpinLock(v18, &v130);
    LOBYTE(v131) = 1;
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
    {
      v136 = 0LL;
      v138 = 0;
      v140 = 0LL;
      v142 = 0;
      v144 = 0LL;
      v146 = 0;
      if ( (unsigned int)v10 <= 2 )
      {
        v26 = v137;
        v136 = v137;
        if ( (_DWORD)v10 )
        {
          memset(v137, 0, 8 * v10);
          v26 = v136;
        }
LABEL_131:
        v138 = v10;
        v25 = (unsigned int)v10;
        v139 = v26;
        if ( (unsigned int)v10 > 2 )
          goto LABEL_149;
        v58 = v141;
        v140 = v141;
        if ( (_DWORD)v10 )
        {
          memset(v141, 0, 4 * v10);
          v58 = v140;
        }
      }
      else
      {
        v25 = (unsigned int)v10;
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 >= 8 )
        {
          v26 = (_BYTE *)ExAllocatePool2(64LL, 8 * v10, 945908054LL);
          v136 = v26;
          goto LABEL_131;
        }
        v139 = 0LL;
LABEL_149:
        if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 4 )
        {
          v143 = 0LL;
          v59 = 0LL;
          goto LABEL_138;
        }
        v58 = (char *)ExAllocatePool2(64LL, 4 * v25, 945908054LL);
        v140 = v58;
      }
      v142 = v10;
      v143 = v58;
      if ( (unsigned int)v10 > 2 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 8 )
        {
          v59 = 0LL;
          goto LABEL_138;
        }
        v59 = (_BYTE *)ExAllocatePool2(64LL, 8 * v25, 945908054LL);
        v144 = v59;
      }
      else
      {
        v59 = v145;
        v144 = v145;
        if ( (_DWORD)v10 )
        {
          memset(v145, 0, 8 * v25);
          v59 = v144;
        }
      }
      v146 = v10;
LABEL_138:
      v147 = v59;
      if ( v143 && v139 && v59 && (_DWORD)v10 )
      {
        v66 = (unsigned int)v10;
        if ( a8 )
        {
          v67 = 0LL;
          v68 = a6;
          do
          {
            v67 += 4LL;
            v69 = v68 - a6;
            *(_QWORD *)&v139[v69] = *(_QWORD *)(*(_QWORD *)v68 + 16LL);
            *(_DWORD *)&v143[v67 - 4] = *(unsigned __int8 *)(*(_QWORD *)v68 + 29LL);
            v70 = *(unsigned __int64 *)((char *)a8 + v68 - a6);
            v68 += 8LL;
            *(_QWORD *)&v147[v69] = v70;
            --v66;
          }
          while ( v66 );
        }
        else
        {
          v87 = 0LL;
          v88 = 0LL;
          do
          {
            v89 = *(_QWORD *)(v87 + a6);
            v87 += 8LL;
            v88 += 4LL;
            *(_QWORD *)&v139[v87 - 8] = *(_QWORD *)(v89 + 16);
            *(_DWORD *)&v143[v88 - 4] = *(unsigned __int8 *)(*(_QWORD *)(v87 + a6 - 8) + 29LL);
            *(_QWORD *)&v147[v87 - 8] = 0LL;
            --v66;
          }
          while ( v66 );
        }
        v59 = v147;
      }
      if ( v139 && v143 && v59 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer(
          (__int64)v59,
          &EventVidSchSignalSyncObjectsFromGpuImmediate,
          (__int64)v143,
          v10,
          a6,
          (__int64)v139,
          (__int64)v59,
          (__int64)v143);
      TraceDxgkSignalSynchronizationObjectArrays::~TraceDxgkSignalSynchronizationObjectArrays((TraceDxgkSignalSynchronizationObjectArrays *)&v136);
    }
    v113 = v94;
    v115 = 0;
    v116 = 1;
    v114[1] = v114;
    v114[0] = v114;
    if ( !(_DWORD)v10 )
      goto LABEL_101;
    v45 = a8;
    v46 = (unsigned int)v10;
    v47 = a8;
    while ( 2 )
    {
      v48 = *(unsigned __int64 *)((char *)v45 + a6 - (_QWORD)a8);
      v49 = *(_DWORD *)(v48 + 48);
      switch ( v49 )
      {
        case 6:
LABEL_89:
          if ( *(_BYTE *)(v48 + 29) )
            goto LABEL_98;
          if ( !*(_BYTE *)(v48 + 28) )
          {
            if ( (v12 & 4) != 0 )
              goto LABEL_92;
            v60 = *v45;
            if ( v49 == 6 )
              v61 = *(_QWORD *)(v48 + 168);
            else
              v61 = *(_QWORD *)(v48 + 96);
            if ( *(_BYTE *)(v48 + 30) )
            {
              if ( v60 >= v61 )
              {
                if ( v60 == v61 )
                {
                  WdLogSingleEntry1(3LL, *v45);
                  WdLogGlobalForLineNumber = 6004;
                }
                goto LABEL_92;
              }
              WdLogSingleEntry2(3LL, *v45, v61);
              WdLogGlobalForLineNumber = 5995;
LABEL_194:
              WdLogSingleEntry3(3LL, *(_QWORD *)(v48 + 16), *(_QWORD *)(v48 + 96), *v45);
              WdLogGlobalForLineNumber = 26657;
            }
            else
            {
              if ( (int)v61 - (int)v60 > 0 )
              {
                WdLogSingleEntry2(3LL, (unsigned int)v60, (unsigned int)v61);
                WdLogGlobalForLineNumber = 6014;
                goto LABEL_194;
              }
              if ( (_DWORD)v61 == (_DWORD)v60 )
              {
                WdLogSingleEntry1(3LL, (unsigned int)v60);
                WdLogGlobalForLineNumber = 6023;
              }
LABEL_92:
              v50 = *v45;
              if ( *(_DWORD *)(v48 + 48) == 6 )
                *(_QWORD *)(v48 + 168) = v50;
              else
                *(_QWORD *)(v48 + 96) = v50;
            }
            v51 = *(unsigned int **)(v48 + 72);
            if ( *(_DWORD *)(v48 + 48) == 6 )
            {
              v52 = *(_QWORD *)v51;
            }
            else if ( *(_BYTE *)(v48 + 30) )
            {
              v52 = *(_QWORD *)v51;
            }
            else
            {
              v52 = *v51;
            }
            WdLogSingleEntry4(4LL, v48, v52);
            WdLogGlobalForLineNumber = 26665;
LABEL_98:
            _InterlockedIncrement((volatile signed __int32 *)(v48 + 36));
            VidSchiCompleteSignalSyncObject((HwQueueStagingList *)&v113, v48, (v12 & 4) != 0, v47, 1);
            VidSchiReleaseSyncObjectReference((char *)v48, v53);
            ++v45;
            ++v47;
            v99 = v45;
            if ( !--v46 )
            {
              if ( !v115 && v116 )
LABEL_101:
                HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v113, 0LL);
              if ( (_BYTE)v131 )
              {
                v43 = HIBYTE(v131) == 0;
                v44 = &v130;
                goto LABEL_104;
              }
              goto LABEL_106;
            }
            continue;
          }
          v75 = *v45;
          v76 = *(_QWORD *)(v48 + 304);
          v95 = v75;
          memset(&v133, 0, sizeof(v133));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v76 + 8), &v133);
          v77 = *(_QWORD *)(v76 + 40);
          if ( v77 >= v95 )
          {
            WdLogSingleEntry3(3LL, *(_QWORD *)(v48 + 16), v77, v95);
            WdLogGlobalForLineNumber = 6187;
          }
          else
          {
            *(_QWORD *)(v76 + 40) = v95;
          }
          v78 = &v133;
          break;
        case 0:
          if ( !*(_QWORD *)(v48 + 72) )
          {
            WdLogSingleEntry1(3LL, *(_QWORD *)(v48 + 16));
            WdLogGlobalForLineNumber = 26569;
          }
          *(_QWORD *)(v48 + 72) = 0LL;
          goto LABEL_98;
        case 1:
          v71 = *(_DWORD *)(v48 + 72);
          if ( v71 >= *(_DWORD *)(v48 + 68) )
          {
            WdLogSingleEntry1(3LL, *(_QWORD *)(v48 + 16));
            WdLogGlobalForLineNumber = 26583;
          }
          else
          {
            *(_DWORD *)(v48 + 72) = v71 + 1;
          }
          goto LABEL_98;
        case 2:
          if ( !*(_BYTE *)(v48 + 28) )
          {
            v73 = *v45;
            v74 = *(_QWORD *)(v48 + 72);
            if ( v74 >= *v45 )
            {
              WdLogSingleEntry3(3LL, *(_QWORD *)(v48 + 16), v74, v73);
              WdLogGlobalForLineNumber = 26618;
            }
            else
            {
              *(_QWORD *)(v48 + 72) = v73;
            }
            goto LABEL_98;
          }
          v85 = *v45;
          v97 = *(_QWORD *)(v48 + 304);
          memset(&v132, 0, sizeof(v132));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v97 + 8), &v132);
          v86 = *(_QWORD *)(v97 + 40);
          if ( v86 >= v85 )
          {
            WdLogSingleEntry3(3LL, *(_QWORD *)(v48 + 16), v86, v85);
            WdLogGlobalForLineNumber = 6187;
          }
          else
          {
            *(_QWORD *)(v97 + 40) = v85;
          }
          v78 = &v132;
          break;
        default:
          if ( (unsigned int)(v49 - 4) < 2 )
            goto LABEL_89;
          goto LABEL_98;
      }
      break;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v78);
    v45 = v99;
    goto LABEL_98;
  }
  v120 = v18;
  v122 = 0;
  KeAcquireInStackQueuedSpinLock(v18, &v121);
  v29 = v93;
  v30 = Pool2;
  v31 = 0;
  v103 = Pool2;
  LOBYTE(v122) = 1;
  while ( 2 )
  {
    if ( *v30 && (_DWORD)v10 )
    {
      v32 = a6 - (_QWORD)a8;
      v33 = v93;
      v34 = a8;
      while ( 1 )
      {
        v35 = *(unsigned __int64 *)((char *)v34 + v32);
        if ( v31 == v33 )
          break;
LABEL_69:
        _InterlockedIncrement((volatile signed __int32 *)(v35 + 36));
        ++v34;
        if ( !--v10 )
        {
          v10 = a5;
          v30 = v103;
          v29 = v93;
          goto LABEL_71;
        }
      }
      v36 = *(_DWORD *)(v35 + 48);
      switch ( v36 )
      {
        case 6:
LABEL_58:
          if ( *(_BYTE *)(v35 + 29) )
            goto LABEL_68;
          if ( !*(_BYTE *)(v35 + 28) )
          {
            if ( (v12 & 4) != 0 )
              goto LABEL_61;
            v62 = *v34;
            if ( v36 == 6 )
              v63 = *(_QWORD *)(v35 + 168);
            else
              v63 = *(_QWORD *)(v35 + 96);
            if ( *(_BYTE *)(v35 + 30) )
            {
              if ( v62 >= v63 )
              {
                if ( v62 == v63 )
                {
                  WdLogSingleEntry1(3LL, v62);
                  WdLogGlobalForLineNumber = 6004;
                }
                goto LABEL_61;
              }
              WdLogSingleEntry2(3LL, v62, v63);
              WdLogGlobalForLineNumber = 5995;
LABEL_205:
              WdLogSingleEntry3(3LL, *(_QWORD *)(v35 + 16), *(_QWORD *)(v35 + 96), *v34);
              WdLogGlobalForLineNumber = 26657;
            }
            else
            {
              if ( (int)v63 - (int)v62 > 0 )
              {
                WdLogSingleEntry2(3LL, (unsigned int)v62, (unsigned int)v63);
                WdLogGlobalForLineNumber = 6014;
                goto LABEL_205;
              }
              if ( (_DWORD)v63 == (_DWORD)v62 )
              {
                WdLogSingleEntry1(3LL, (unsigned int)v62);
                WdLogGlobalForLineNumber = 6023;
              }
LABEL_61:
              v37 = *v34;
              if ( *(_DWORD *)(v35 + 48) == 6 )
                *(_QWORD *)(v35 + 168) = v37;
              else
                *(_QWORD *)(v35 + 96) = v37;
            }
            v38 = *(unsigned int **)(v35 + 72);
            if ( *(_DWORD *)(v35 + 48) == 6 )
            {
              v39 = *(_QWORD *)v38;
            }
            else if ( *(_BYTE *)(v35 + 30) )
            {
              v39 = *(_QWORD *)v38;
            }
            else
            {
              v39 = *v38;
            }
            WdLogSingleEntry4(4LL, v35, v39);
            WdLogGlobalForLineNumber = 26665;
LABEL_67:
            v32 = a6 - (_QWORD)a8;
LABEL_68:
            v33 = v93;
            goto LABEL_69;
          }
          v105 = *v34;
          v96 = *(_QWORD *)(v35 + 304);
          memset(&v135, 0, sizeof(v135));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v96 + 8), &v135);
          v83 = *(_QWORD *)(v96 + 40);
          if ( v83 >= v105 )
          {
            WdLogSingleEntry3(3LL, *(_QWORD *)(v35 + 16), v83, v105);
            WdLogGlobalForLineNumber = 6187;
          }
          else
          {
            *(_QWORD *)(v96 + 40) = v105;
          }
          v84 = &v135;
          break;
        case 0:
          if ( !*(_QWORD *)(v35 + 72) )
          {
            WdLogSingleEntry1(3LL, *(_QWORD *)(v35 + 16));
            WdLogGlobalForLineNumber = 26569;
          }
          *(_QWORD *)(v35 + 72) = 0LL;
          goto LABEL_67;
        case 1:
          v72 = *(_DWORD *)(v35 + 72);
          if ( v72 >= *(_DWORD *)(v35 + 68) )
          {
            WdLogSingleEntry1(3LL, *(_QWORD *)(v35 + 16));
            WdLogGlobalForLineNumber = 26583;
          }
          else
          {
            *(_DWORD *)(v35 + 72) = v72 + 1;
          }
          goto LABEL_67;
        case 2:
          if ( !*(_BYTE *)(v35 + 28) )
          {
            v79 = *v34;
            v80 = *(_QWORD *)(v35 + 72);
            if ( v80 >= *v34 )
            {
              WdLogSingleEntry3(3LL, *(_QWORD *)(v35 + 16), v80, v79);
              WdLogGlobalForLineNumber = 26618;
            }
            else
            {
              *(_QWORD *)(v35 + 72) = v79;
            }
            goto LABEL_67;
          }
          v106 = *v34;
          v98 = *(_QWORD *)(v35 + 304);
          memset(&v134, 0, sizeof(v134));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v98 + 8), &v134);
          v90 = *(_QWORD *)(v98 + 40);
          if ( v90 >= v106 )
          {
            WdLogSingleEntry3(3LL, *(_QWORD *)(v35 + 16), v90, v106);
            WdLogGlobalForLineNumber = 6187;
          }
          else
          {
            *(_QWORD *)(v98 + 40) = v106;
          }
          v84 = &v134;
          break;
        default:
          v32 = a6 - (_QWORD)a8;
          if ( (unsigned int)(v36 - 4) < 2 )
            goto LABEL_58;
          goto LABEL_68;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v84);
      goto LABEL_67;
    }
LABEL_71:
    ++v30;
    ++v31;
    v103 = v30;
    if ( v31 <= v29 )
      continue;
    break;
  }
  v40 = v108;
  if ( (_BYTE)v122 )
  {
    if ( HIBYTE(v122) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v121);
    else
      KeReleaseInStackQueuedSpinLock(&v121);
    LOBYTE(v122) = 0;
  }
  v41 = v29 + 1;
  do
  {
    v42 = *v40;
    if ( *v40 )
    {
      if ( *((_QWORD *)v42 + 12) )
        VidSchiSubmitCommandPacketToHwQueue(v42);
      else
        VidSchiSubmitCommandPacketToQueue((__int64)v42);
    }
    ++v40;
    --v41;
  }
  while ( v41 );
  if ( (_BYTE)v122 )
  {
    v43 = HIBYTE(v122) == 0;
    v44 = &v121;
LABEL_104:
    if ( v43 )
      KeReleaseInStackQueuedSpinLock(v44);
    else
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v44);
  }
LABEL_106:
  if ( P != v110 && P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
