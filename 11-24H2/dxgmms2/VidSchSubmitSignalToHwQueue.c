/*
 * XREFs of VidSchSubmitSignalToHwQueue @ 0x140031EF0
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140112AB8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14000F8C0 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1400118C0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400228C0 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x14002A240 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSignalSyncObject @ 0x140032A90 (VidSchiSignalSyncObject.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E4CE0 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitSignalToHwQueue(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        char **a4,
        int a5,
        unsigned __int64 *a6)
{
  int v6; // ebx
  char *v7; // rax
  unsigned int v8; // r15d
  unsigned __int64 v9; // rsi
  char **v10; // r14
  unsigned int v11; // r13d
  __int64 v12; // rax
  unsigned int i; // edi
  __int64 v14; // r8
  char *v15; // rcx
  int v16; // edx
  struct _VIDSCH_QUEUE_PACKET **Pool2; // rdi
  unsigned int v18; // r14d
  __int64 v19; // r12
  __int64 v20; // r13
  struct _VIDSCH_QUEUE_PACKET *HwQueuePacket; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  struct _VIDSCH_QUEUE_PACKET *v25; // rax
  struct _VIDSCH_QUEUE_PACKET **v26; // rax
  unsigned int v27; // r12d
  unsigned int v28; // edi
  PKSPIN_LOCK *v29; // r14
  __int64 v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rsi
  int v33; // ecx
  PKSPIN_LOCK v34; // rax
  unsigned int *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  struct _VIDSCH_QUEUE_PACKET **v38; // rdi
  unsigned __int64 *v40; // r14
  char v41; // r8
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // rcx
  PKSPIN_LOCK v44; // rdx
  KSPIN_LOCK *v45; // rax
  __int64 v46; // r12
  int v47; // eax
  char **v48; // rsi
  unsigned __int64 *v49; // r14
  char *v50; // rdi
  __int64 v51; // rdx
  void (*v52)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  unsigned int v53; // eax
  char *v54; // rdi
  __int64 v55; // rdx
  unsigned __int64 v56; // r8
  PKSPIN_LOCK v57; // r9
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // [rsp+20h] [rbp-E0h]
  unsigned int v61; // [rsp+50h] [rbp-B0h]
  KSPIN_LOCK *SpinLock; // [rsp+58h] [rbp-A8h]
  PKSPIN_LOCK SpinLocka; // [rsp+58h] [rbp-A8h]
  PKSPIN_LOCK SpinLockb; // [rsp+58h] [rbp-A8h]
  struct _VIDSCH_QUEUE_PACKET *j; // [rsp+60h] [rbp-A0h]
  __int64 v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  struct _VIDSCH_QUEUE_PACKET **v69; // [rsp+68h] [rbp-98h]
  struct _VIDSCH_QUEUE_PACKET **v70; // [rsp+70h] [rbp-90h]
  __int64 v71; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v72[2]; // [rsp+80h] [rbp-80h] BYREF
  char v73; // [rsp+90h] [rbp-70h]
  int v74; // [rsp+94h] [rbp-6Ch]
  PVOID P; // [rsp+98h] [rbp-68h]
  _BYTE v76[16]; // [rsp+A0h] [rbp-60h] BYREF
  int v77; // [rsp+B0h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-48h] BYREF
  KSPIN_LOCK *v79; // [rsp+D0h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v80; // [rsp+D8h] [rbp-28h] BYREF
  __int16 v81; // [rsp+F0h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE v82; // [rsp+F8h] [rbp-8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v83; // [rsp+110h] [rbp+10h] BYREF

  v6 = a5;
  v7 = *a4;
  v8 = 0;
  v9 = a1;
  v10 = a4;
  v11 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v12 = *((_QWORD *)v7 + 1);
  v68 = v12;
  SpinLock = (KSPIN_LOCK *)(v12 + 1984);
  if ( (a5 & 0x80000004) != 0 )
  {
    SpinLock = (KSPIN_LOCK *)(v12 + 1984);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 1984), &LockHandle);
    for ( i = 0; i < v11; ++i )
    {
      v14 = i;
      v15 = v10[v14];
      v16 = *((_DWORD *)v15 + 12);
      if ( (unsigned int)(v16 - 4) <= 2 && !v15[29] )
      {
        v40 = &a6[v14];
        v41 = v15[30];
        v42 = *v40;
        if ( v15[28] )
        {
          v43 = *(_QWORD *)(*((_QWORD *)v15 + 38) + 40LL);
        }
        else if ( v16 == 2 )
        {
          v43 = *((_QWORD *)v15 + 9);
        }
        else if ( v16 == 6 )
        {
          v43 = *((_QWORD *)v15 + 21);
        }
        else
        {
          v43 = *((_QWORD *)v15 + 12);
        }
        if ( v41 )
        {
          if ( v42 < v43 )
          {
            WdLogSingleEntry2(3LL, *v40, v43);
            WdLogGlobalForLineNumber = 5995;
LABEL_89:
            WdLogSingleEntry2(1LL, *v40, -1073741811LL);
            v52 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
            v60 = *v40;
            WdLogGlobalForLineNumber = 5316;
            v52(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
              v60,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            return 3221225485LL;
          }
          if ( v42 == v43 )
          {
            WdLogSingleEntry1(3LL, *v40);
            WdLogGlobalForLineNumber = 6004;
          }
        }
        else
        {
          if ( (int)v43 - (int)v42 > 0 )
          {
            WdLogSingleEntry2(3LL, (unsigned int)v42, (unsigned int)v43);
            WdLogGlobalForLineNumber = 6014;
            goto LABEL_89;
          }
          if ( (_DWORD)v43 == (_DWORD)v42 )
          {
            WdLogSingleEntry1(3LL, (unsigned int)v42);
            WdLogGlobalForLineNumber = 6023;
          }
        }
        v10 = a4;
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  P = 0LL;
  v77 = 0;
  if ( (unsigned int)v9 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_125;
    Pool2 = (struct _VIDSCH_QUEUE_PACKET **)ExAllocatePool2(64LL, 8 * v9, 945908054LL);
    P = Pool2;
  }
  else
  {
    Pool2 = (struct _VIDSCH_QUEUE_PACKET **)v76;
    v70 = (struct _VIDSCH_QUEUE_PACKET **)v76;
    P = v76;
    if ( !(_DWORD)v9 )
      goto LABEL_12;
    memset(v76, 0, 8 * v9);
    Pool2 = (struct _VIDSCH_QUEUE_PACKET **)P;
  }
  v70 = Pool2;
LABEL_12:
  v77 = v9;
  if ( !Pool2 )
  {
LABEL_125:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 5336;
    goto LABEL_91;
  }
  v61 = 0;
  v18 = 0;
  for ( j = 0LL; ; j = Pool2[v19] )
  {
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v9 )
      {
        if ( !j )
        {
          v79 = SpinLock;
          v81 = 0;
          KeAcquireInStackQueuedSpinLock(SpinLock, &v80);
          v46 = v68;
          LOBYTE(v81) = 1;
          v71 = v68;
          v73 = 0;
          v74 = 1;
          v72[1] = v72;
          v72[0] = v72;
          if ( v11 )
          {
            v47 = (int)a4;
            v48 = a4;
            v49 = a6;
            if ( (v6 & 4) != 0 )
            {
              do
              {
                v50 = *v48;
                VidSchiSignalSyncObject(v8, v47, v6, (_DWORD)a6, 1);
                VidSchiCompleteSignalSyncObject((HwQueueStagingList *)&v71, (__int64)v50, 1, v49, 1);
                VidSchiReleaseSyncObjectReference(v50, v51);
                v47 = (int)a4;
                ++v48;
                ++v8;
                ++v49;
              }
              while ( v8 < v11 );
            }
            else
            {
              do
              {
                v54 = *v48;
                VidSchiSignalSyncObject(v8, v47, v6, (_DWORD)a6, 1);
                VidSchiCompleteSignalSyncObject((HwQueueStagingList *)&v71, (__int64)v54, 0, v49, 1);
                VidSchiReleaseSyncObjectReference(v54, v55);
                v47 = (int)a4;
                ++v48;
                ++v8;
                ++v49;
              }
              while ( v8 < v11 );
            }
            v46 = v68;
          }
          if ( *(_DWORD *)(v46 + 860) )
            VidSchUnwaitFlipQueue((struct HwQueueStagingList *)&v71, v46);
          if ( !v73 && v74 )
            HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v71, 0LL);
          if ( (_BYTE)v81 )
          {
            if ( HIBYTE(v81) )
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v80);
            else
              KeReleaseInStackQueuedSpinLock(&v80);
          }
LABEL_52:
          if ( P != v76 && P )
            ExFreePoolWithTag(P, 0);
          return 0LL;
        }
        KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
        v26 = Pool2;
        v27 = 0;
        v28 = v61;
        v69 = v26;
        while ( !*v26 || !v11 )
        {
LABEL_47:
          ++v26;
          ++v27;
          v69 = v26;
          if ( v27 > v28 )
          {
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v37 = v28 + 1;
            v38 = v70;
            do
            {
              if ( *v38 )
                VidSchiSubmitCommandPacketToHwQueue(*v38);
              ++v38;
              --v37;
            }
            while ( v37 );
            goto LABEL_52;
          }
        }
        v29 = (PKSPIN_LOCK *)a6;
        v30 = a3;
        v31 = v61;
        while ( 1 )
        {
          v32 = *(__int64 *)((char *)v29 + (char *)a4 - (char *)a6);
          if ( v27 == v31 )
          {
            v33 = *(_DWORD *)(v32 + 48);
            if ( v33 != 6 )
            {
              switch ( v33 )
              {
                case 0:
                  if ( !*(_QWORD *)(v32 + 72) )
                  {
                    WdLogSingleEntry1(3LL, *(_QWORD *)(v32 + 16));
                    WdLogGlobalForLineNumber = 26569;
                  }
                  *(_QWORD *)(v32 + 72) = 0LL;
                  goto LABEL_44;
                case 1:
                  v53 = *(_DWORD *)(v32 + 72);
                  if ( v53 >= *(_DWORD *)(v32 + 68) )
                  {
                    WdLogSingleEntry1(3LL, *(_QWORD *)(v32 + 16));
                    WdLogGlobalForLineNumber = 26583;
                  }
                  else
                  {
                    *(_DWORD *)(v32 + 72) = v53 + 1;
                  }
LABEL_44:
                  v31 = v61;
                  goto LABEL_45;
                case 2:
                  if ( *(_BYTE *)(v32 + 28) )
                  {
                    SpinLockb = *v29;
                    v67 = *(_QWORD *)(v32 + 304);
                    memset(&v82, 0, sizeof(v82));
                    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v67 + 8), &v82);
                    v59 = *(_QWORD *)(v67 + 40);
                    if ( v59 >= (unsigned __int64)SpinLockb )
                    {
                      WdLogSingleEntry3(3LL, *(_QWORD *)(v32 + 16), v59, SpinLockb);
                      WdLogGlobalForLineNumber = 6187;
                    }
                    else
                    {
                      *(_QWORD *)(v67 + 40) = SpinLockb;
                    }
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v82);
                  }
                  else
                  {
                    v56 = *(_QWORD *)(v32 + 72);
                    v57 = *v29;
                    if ( v56 >= (unsigned __int64)*v29 )
                    {
                      WdLogSingleEntry3(3LL, *(_QWORD *)(v32 + 16), v56, v57);
                      WdLogGlobalForLineNumber = 26618;
                    }
                    else
                    {
                      *(_QWORD *)(v32 + 72) = v57;
                    }
                  }
                  goto LABEL_44;
              }
              v31 = v61;
              if ( (unsigned int)(v33 - 4) >= 2 )
                goto LABEL_45;
            }
            if ( !*(_BYTE *)(v32 + 29) )
              break;
          }
LABEL_45:
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 36));
          ++v29;
          if ( !--v30 )
          {
            v26 = v69;
            v11 = a3;
            v28 = v61;
            goto LABEL_47;
          }
        }
        if ( *(_BYTE *)(v32 + 28) )
        {
          SpinLocka = *v29;
          v66 = *(_QWORD *)(v32 + 304);
          memset(&v83, 0, sizeof(v83));
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v66 + 8), &v83);
          v58 = *(_QWORD *)(v66 + 40);
          if ( v58 >= (unsigned __int64)SpinLocka )
          {
            WdLogSingleEntry3(3LL, *(_QWORD *)(v32 + 16), v58, SpinLocka);
            WdLogGlobalForLineNumber = 6187;
          }
          else
          {
            *(_QWORD *)(v66 + 40) = SpinLocka;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v83);
          goto LABEL_44;
        }
        if ( (v6 & 4) != 0 )
          goto LABEL_38;
        v44 = *v29;
        if ( v33 == 6 )
          v45 = *(KSPIN_LOCK **)(v32 + 168);
        else
          v45 = *(KSPIN_LOCK **)(v32 + 96);
        if ( *(_BYTE *)(v32 + 30) )
        {
          if ( v44 >= v45 )
          {
            if ( v44 == v45 )
            {
              WdLogSingleEntry1(3LL, v44);
              WdLogGlobalForLineNumber = 6004;
            }
LABEL_38:
            v34 = *v29;
            if ( *(_DWORD *)(v32 + 48) == 6 )
              *(_QWORD *)(v32 + 168) = v34;
            else
              *(_QWORD *)(v32 + 96) = v34;
LABEL_40:
            v35 = *(unsigned int **)(v32 + 72);
            if ( *(_DWORD *)(v32 + 48) == 6 )
            {
              v36 = *(_QWORD *)v35;
            }
            else if ( *(_BYTE *)(v32 + 30) )
            {
              v36 = *(_QWORD *)v35;
            }
            else
            {
              v36 = *v35;
            }
            WdLogSingleEntry4(4LL, v32, v36);
            WdLogGlobalForLineNumber = 26665;
            goto LABEL_44;
          }
          WdLogSingleEntry2(3LL, v44, v45);
          WdLogGlobalForLineNumber = 5995;
        }
        else
        {
          if ( (int)v45 - (int)v44 <= 0 )
          {
            if ( (_DWORD)v45 == (_DWORD)v44 )
            {
              WdLogSingleEntry1(3LL, (unsigned int)v44);
              WdLogGlobalForLineNumber = 6023;
            }
            goto LABEL_38;
          }
          WdLogSingleEntry2(3LL, (unsigned int)v44, (unsigned int)v45);
          WdLogGlobalForLineNumber = 6014;
        }
        WdLogSingleEntry3(3LL, *(_QWORD *)(v32 + 16), *(_QWORD *)(v32 + 96), *v29);
        WdLogGlobalForLineNumber = 26657;
        goto LABEL_40;
      }
      v19 = v18;
      v20 = *(_QWORD *)(a2 + 8LL * v18);
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      if ( *(_QWORD *)(v20 + 160) != v20 + 160 )
        break;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v11 = a3;
      ++v18;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateHwQueuePacket(v20, 0LL);
    Pool2[v18] = HwQueuePacket;
    if ( !HwQueuePacket )
      break;
    *(_DWORD *)HwQueuePacket = 895576406;
    v61 = v18;
    *((_DWORD *)Pool2[v18] + 12) = 5;
    *((_QWORD *)Pool2[v18] + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)Pool2[v18] + 13) = 2;
    *((_QWORD *)Pool2[v18] + 12) = v20;
    *((_QWORD *)Pool2[v18] + 13) = KeGetCurrentThread();
    *((_QWORD *)Pool2[v18] + 9) = 0LL;
    *((_DWORD *)Pool2[v18] + 188) ^= ((unsigned __int8)v6 ^ (unsigned __int8)*((_DWORD *)Pool2[v18] + 188)) & 1;
    if ( (v6 & 4) != 0 )
      *((_DWORD *)Pool2[v18] + 188) |= 4u;
    v11 = a3;
    if ( a3 )
    {
      v22 = 127LL;
      v23 = a3;
      do
      {
        v24 = *((_DWORD *)a4[v22 - 127] + 12);
        if ( v24 == 4 || v24 == 2 )
          *(_QWORD *)((char *)Pool2[v18] + v22 * 8) = a6[v22 - 127];
        *(_QWORD *)((char *)Pool2[v18] + v22 * 8 - 256) = a4[v22 - 127];
        ++v22;
        --v23;
      }
      while ( v23 );
      v6 = a5;
    }
    *((_DWORD *)Pool2[v18] + 189) = a3;
    *((_QWORD *)Pool2[v18] + 159) = 0LL;
    v25 = Pool2[v18];
    if ( j )
    {
      *((_QWORD *)v25 + 160) = j;
      *((_QWORD *)j + 159) = Pool2[v18];
    }
    else
    {
      *((_QWORD *)v25 + 160) = 0LL;
    }
    ++v18;
  }
  WdLogSingleEntry1(3LL, -1073741801LL);
  WdLogGlobalForLineNumber = 5376;
  if ( v18 )
  {
    do
    {
      if ( *Pool2 )
        VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v20, *Pool2);
      ++Pool2;
      --v19;
    }
    while ( v19 );
  }
LABEL_91:
  if ( P != v76 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225495LL;
}
