/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402B8E90 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x1403CE290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047A8E8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404DA8E8 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14057DEC0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057E1D0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlpOplockMoveAckTimeout @ 0x140709670 (FsRtlpOplockMoveAckTimeout.c)
 *     FsRtlpOplockPerfMoveData @ 0x140709874 (FsRtlpOplockPerfMoveData.c)
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0E080 (FsRtlpOplockUpperLowerCompatible.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6)
{
  _QWORD *Pool2; // r14
  char v9; // r13
  int v11; // ecx
  int v12; // r12d
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // r9
  __int64 v18; // r9
  _QWORD *v19; // r9
  _QWORD *v20; // rcx
  __int64 v21; // rax
  _QWORD *i; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r13d
  __int64 v27; // rcx
  char v28; // di
  __int64 v29; // rcx
  _QWORD *v30; // r10
  _QWORD *v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // r9
  _QWORD *v34; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v36; // rdi
  _QWORD *v37; // r9
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // r8
  _QWORD *v43; // rcx
  int v44; // [rsp+60h] [rbp-250h]
  __int64 v45; // [rsp+88h] [rbp-228h] BYREF
  bool v46; // [rsp+90h] [rbp-220h]
  unsigned int v47; // [rsp+94h] [rbp-21Ch]
  char v48; // [rsp+98h] [rbp-218h]
  char v49; // [rsp+99h] [rbp-217h]
  char v50; // [rsp+9Ah] [rbp-216h] BYREF
  char v51; // [rsp+9Bh] [rbp-215h] BYREF
  char v52; // [rsp+9Ch] [rbp-214h]
  _QWORD *v53; // [rsp+A0h] [rbp-210h] BYREF
  char v54; // [rsp+A8h] [rbp-208h]
  char v55; // [rsp+A9h] [rbp-207h]
  unsigned int v56; // [rsp+ACh] [rbp-204h] BYREF
  int v57; // [rsp+B0h] [rbp-200h] BYREF
  int v58; // [rsp+B4h] [rbp-1FCh] BYREF
  __int64 v59; // [rsp+B8h] [rbp-1F8h]
  _QWORD *v60; // [rsp+C0h] [rbp-1F0h]
  _QWORD *v61; // [rsp+C8h] [rbp-1E8h] BYREF
  unsigned int v62; // [rsp+D0h] [rbp-1E0h] BYREF
  int v63; // [rsp+D4h] [rbp-1DCh] BYREF
  __int64 v64; // [rsp+E0h] [rbp-1D0h] BYREF
  unsigned int v65; // [rsp+E8h] [rbp-1C8h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-1C0h] BYREF
  __int64 v67; // [rsp+F8h] [rbp-1B8h] BYREF
  __int64 v68; // [rsp+100h] [rbp-1B0h] BYREF
  __int64 v69; // [rsp+110h] [rbp-1A0h]
  struct _KTHREAD *v70; // [rsp+118h] [rbp-198h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+128h] [rbp-188h] BYREF
  unsigned int *v72; // [rsp+148h] [rbp-168h]
  __int64 v73; // [rsp+150h] [rbp-160h]
  __int64 *v74; // [rsp+158h] [rbp-158h]
  __int64 v75; // [rsp+160h] [rbp-150h]
  int *v76; // [rsp+168h] [rbp-148h]
  __int64 v77; // [rsp+170h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v78[2]; // [rsp+178h] [rbp-138h] BYREF
  __int64 *v79; // [rsp+198h] [rbp-118h]
  __int64 v80; // [rsp+1A0h] [rbp-110h]
  unsigned int *v81; // [rsp+1A8h] [rbp-108h]
  __int64 v82; // [rsp+1B0h] [rbp-100h]
  __int64 *v83; // [rsp+1B8h] [rbp-F8h]
  __int64 v84; // [rsp+1C0h] [rbp-F0h]
  int *v85; // [rsp+1C8h] [rbp-E8h]
  __int64 v86; // [rsp+1D0h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+1D8h] [rbp-D8h] BYREF
  __int64 *v88; // [rsp+1F8h] [rbp-B8h]
  __int64 v89; // [rsp+200h] [rbp-B0h]
  __int64 *v90; // [rsp+208h] [rbp-A8h]
  __int64 v91; // [rsp+210h] [rbp-A0h]
  int *v92; // [rsp+218h] [rbp-98h]
  __int64 v93; // [rsp+220h] [rbp-90h]

  v59 = a2;
  v45 = a1;
  v61 = a5;
  v47 = 0;
  Pool2 = 0LL;
  v53 = 0LL;
  v48 = 0;
  v52 = 0;
  v54 = 0;
  v49 = 0;
  v9 = 0;
  v55 = 0;
  v51 = 0;
  v50 = 0;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v65 = a4;
    v79 = (__int64 *)&v65;
    v80 = 4LL;
    v62 = a6;
    v81 = &v62;
    v82 = 4LL;
    v66 = a1;
    v83 = &v66;
    v84 = 8LL;
    v58 = *(_DWORD *)(a1 + 144);
    v85 = &v58;
    v86 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140044D63, 0LL, 0LL, 6u, v78);
    a1 = v45;
  }
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v11 = *(_DWORD *)(v45 + 144);
  if ( (v11 & 0xF00000) == 0 && (((v11 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v11 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v45 + 72) == v45 + 72 )
  {
LABEL_9:
    v47 = -1073741597;
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_105;
  }
  v69 = *(_QWORD *)(a3 + 24);
  v12 = *(_DWORD *)(v69 + 8) & 4;
  v46 = v12 != 0;
  if ( v12 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x120uLL, 0x30uLL, 0x6F725346u);
    v53 = Pool2;
  }
  v13 = *(_DWORD *)(v45 + 144) & 0x1F0FFDF;
  if ( v13 > 0x307040 )
  {
    if ( v13 == 5271616 )
      goto LABEL_18;
    if ( v13 != 8400896 )
    {
      v14 = v13 - 8409152;
LABEL_17:
      if ( (v14 & 0xFFFFDFFF) != 0 )
        goto LABEL_9;
LABEL_18:
      if ( v12 )
      {
        v15 = *(_QWORD *)(v45 + 8);
        v16 = *(_QWORD *)(v59 + 48);
        if ( v15 == v16 || !FsRtlpOplockKeysEqual(v16, v15, 0) )
          goto LABEL_9;
        if ( !a4 )
        {
          FsRtlpModifyThreadPriorities(v45, 0LL, 0);
          FsRtlpClearOwner(v45, 0LL);
          *(_BYTE *)(v45 + 32) = 0;
          *(_DWORD *)(v45 + 144) = *(_DWORD *)(v45 + 144) & 0x20 | 1;
          v17 = v53;
          v53[2] = *(_QWORD *)(v45 + 8);
          FsRtlpOplockPerfMoveData(v45 + 160, v17 + 3);
          FsRtlpOplockMoveAckTimeout(v45 + 176, v18 + 40);
          v20 = (_QWORD *)(v45 + 104);
          v21 = *(_QWORD *)(v45 + 104);
          if ( *(_QWORD *)(v21 + 8) != v45 + 104 )
            __fastfail(3u);
          *v19 = v21;
          v19[1] = v20;
          *(_QWORD *)(v21 + 8) = v19;
          *v20 = v19;
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v66 = v19[2];
            v79 = &v66;
            v80 = 8LL;
            v61 = (_QWORD *)v45;
            v81 = (unsigned int *)&v61;
            v82 = 8LL;
            v58 = *(_DWORD *)(v45 + 144);
            v83 = (__int64 *)&v58;
            v84 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)&byte_140044E3F,
              0LL,
              0LL,
              5u,
              v78);
          }
          Pool2 = 0LL;
          v53 = 0LL;
          *(_QWORD *)(v45 + 8) = 0LL;
          *(_DWORD *)(v45 + 144) |= 0x1000000u;
          *(_DWORD *)(a3 + 48) = 0;
          IofCompleteRequest((PIRP)a3, 1);
          goto LABEL_100;
        }
      }
      else if ( *(_QWORD *)(v45 + 8) != *(_QWORD *)(v59 + 48) )
      {
        goto LABEL_9;
      }
      v41 = *(_DWORD *)(v45 + 144) & 0x1F0FFDF;
      if ( (v41 == 1069120 || v41 == 1077312 || v41 == 3174464 || v41 == 5271616 || v41 == 8409152 || v41 == 8417344)
        && (a4 & 0x7000) > (*(_DWORD *)(v45 + 144) & 0x200000 | ((*(_DWORD *)(v45 + 144) & 0x100000 | (*(_DWORD *)(v45 + 144) >> 1) & 0x200000u) >> 1)) >> 7
        && *(_QWORD *)(v45 + 88) != v45 + 88 )
      {
        v9 = 1;
      }
      if ( !v9 )
      {
        FsRtlpModifyThreadPriorities(v45, 0LL, 0);
        FsRtlpClearOwner(v45, 0LL);
        *(_BYTE *)(v45 + 32) = 0;
        LOBYTE(v44) = v46;
        v47 = FsRtlpGrantAnyOplockFromExclusive(v45, a3, v59, a4, v61, v44, &v53, &v50, &v51, a6);
        Pool2 = v53;
        goto LABEL_100;
      }
      v42 = *(_QWORD *)(a3 + 24);
      *(_OWORD *)v42 = 0LL;
      *(_QWORD *)(v42 + 16) = 0LL;
      *(_DWORD *)(v42 + 4) = (*(_DWORD *)(v45 + 144) >> 12) & 7;
      *(_DWORD *)(v42 + 8) = (*(_DWORD *)(v45 + 144) & 0x200000 | ((*(_DWORD *)(v45 + 144) & 0x100000 | (*(_DWORD *)(v45 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
      *(_DWORD *)(v42 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      *(_DWORD *)(a3 + 48) = -2147483602;
      IofCompleteRequest((PIRP)a3, 1);
      v47 = -2147483602;
      goto LABEL_105;
    }
  }
  else
  {
    if ( v13 == 3174464 )
      goto LABEL_18;
    if ( ((v13 - 12288) & 0xFFEF7FFF) != 0 || v13 == 1093632 )
    {
      v14 = v13 - 1069120;
      goto LABEL_17;
    }
  }
  for ( i = *(_QWORD **)(v45 + 72); ; i = (_QWORD *)*i )
  {
    v60 = i;
    if ( i == (_QWORD *)(v45 + 72) )
    {
      v28 = v52;
      goto LABEL_80;
    }
    if ( v12 )
      break;
    if ( i[3] == *(_QWORD *)(v59 + 48) )
      goto LABEL_37;
LABEL_78:
    ;
  }
  v23 = i[3];
  v24 = *(_QWORD *)(v59 + 48);
  if ( v23 == v24 || !FsRtlpOplockKeysEqual(v24, v23, 0) )
    goto LABEL_78;
LABEL_37:
  v48 = 1;
  v25 = i[6] & 0xF00000;
  v26 = a6;
  if ( v25 != 0x800000 )
  {
    if ( v25 == 0x100000
      && (a4 & 0x7000) > 0x3000
      && (*(_QWORD *)(v45 + 88) != v45 + 88 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6)) )
    {
      v29 = *(_QWORD *)(a3 + 24);
      *(_OWORD *)v29 = 0LL;
      *(_QWORD *)(v29 + 16) = 0LL;
      *(_DWORD *)(v29 + 4) = 3;
      if ( *(_QWORD *)(v45 + 88) != v45 + 88 )
        v26 = 1;
      *(_DWORD *)(v29 + 8) = v26;
      *(_DWORD *)(v29 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      *(_DWORD *)(a3 + 48) = -2147483602;
      IofCompleteRequest((PIRP)a3, 1);
      v47 = -2147483602;
      goto LABEL_51;
    }
LABEL_52:
    FsRtlpOplockDequeueRH((__int64)i);
    if ( v12 )
    {
      Pool2[2] = i[3];
      FsRtlpOplockPerfMoveData(i + 9, Pool2 + 3);
      FsRtlpOplockMoveAckTimeout(i + 11, Pool2 + 5);
      v31 = (_QWORD *)(v45 + 104);
      v32 = *(_QWORD *)(v45 + 104);
      if ( *(_QWORD *)(v32 + 8) != v45 + 104 )
        __fastfail(3u);
      *Pool2 = v32;
      Pool2[1] = v31;
      *(_QWORD *)(v32 + 8) = Pool2;
      *v31 = Pool2;
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v67 = Pool2[2];
        v88 = &v67;
        v89 = 8LL;
        v68 = v45;
        v90 = &v68;
        v91 = 8LL;
        v63 = *(_DWORD *)(v45 + 144);
        v92 = &v63;
        v93 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)&dword_140044CE4,
          0LL,
          0LL,
          5u,
          &v87);
        v30 = 0LL;
      }
      Pool2 = v30;
      v53 = v30;
    }
    else
    {
      v49 = 1;
      if ( a4 )
        goto LABEL_62;
      ObfDereferenceObjectWithTag((PVOID)i[3], 0x746C6644u);
    }
    if ( !a4 )
    {
      FsRtlpComputeShareableOplockState(v45);
      v47 = 0;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
LABEL_74:
      FsRtlpModifyThreadPriorities(v45, (__int64)i, 0);
      FsRtlpClearOwner(v45, (__int64)i);
      if ( *(_QWORD *)(v45 + 72) == v45 + 72 )
        *(_BYTE *)(v45 + 32) = 0;
      FsRtlpOplockPerfSendData(i + 9);
      FsRtlpFreeRHOpContext(i);
      if ( v12 )
        *(_DWORD *)(v45 + 144) |= 0x1000000u;
LABEL_51:
      v28 = 1;
      goto LABEL_80;
    }
LABEL_62:
    if ( (a4 & 0x3010) == 0 || (a4 & 0x4040) != 0 )
    {
      *(_QWORD *)v45 = a3;
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      v47 = 259;
      *(_QWORD *)(a3 + 56) = v45;
      *(_QWORD *)(v45 + 16) = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      v70 = CurrentThread;
      *(_QWORD *)(v45 + 24) = CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_BYTE *)(v45 + 32) = 0;
      if ( v12 )
      {
        v36 = v59;
        ObfReferenceObjectWithTag(*(PVOID *)(v59 + 48), 0x746C6644u);
        *(_QWORD *)(v45 + 8) = *(_QWORD *)(v36 + 48);
        v37 = v60;
      }
      else
      {
        v37 = v60;
        *(_QWORD *)(v45 + 8) = v60[3];
      }
      FsRtlpOplockPerfMoveData(v37 + 9, v45 + 160);
      FsRtlpOplockMoveAckTimeout(v38 + 88, v45 + 176);
      *(_DWORD *)(v45 + 144) = *(_DWORD *)(v45 + 144) & 0x20 | a4 | 0x40;
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v40) = !v46;
        LOBYTE(v39) = 1;
        FsRtlpCancelExclusiveIrp(a3, v39, v40);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      i = v60;
      Pool2 = v53;
    }
    else
    {
      v33 = v61;
      if ( v61 )
      {
        FsRtlpOplockPerfMoveData(i + 9, *v61 + 72LL);
        FsRtlpOplockMoveAckTimeout(i + 11, *v34 + 88LL);
      }
      LOBYTE(v44) = v46;
      v47 = FsRtlpRequestShareableOplock(&v45, v59, a3, a4, v33, v44, 1, a6);
    }
    goto LABEL_74;
  }
  if ( !a4 || *(_QWORD *)(v45 + 88) == v45 + 88 && (unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6) )
    goto LABEL_52;
  v27 = *(_QWORD *)(a3 + 24);
  *(_OWORD *)v27 = 0LL;
  *(_QWORD *)(v27 + 16) = 0LL;
  *(_DWORD *)(v27 + 4) = 3;
  if ( *(_QWORD *)(v45 + 88) != v45 + 88 )
    v26 = 0;
  *(_DWORD *)(v27 + 8) = v26;
  *(_DWORD *)(v27 + 12) |= 1u;
  *(_QWORD *)(a3 + 56) = 24LL;
  *(_DWORD *)(a3 + 48) = -2147483602;
  IofCompleteRequest((PIRP)a3, 1);
  v47 = -2147483602;
  v28 = 1;
LABEL_80:
  if ( !v48 )
    goto LABEL_9;
  if ( v49 )
    FsRtlpReleaseIrpsWaitingForRH(v45);
  if ( !v28 )
  {
LABEL_100:
    if ( v50 )
    {
      while ( 1 )
      {
        v43 = *(_QWORD **)(v45 + 88);
        if ( v43 == (_QWORD *)(v45 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v43);
      }
    }
    if ( v51 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v45 + 8), 0x746C6644u);
      *(_QWORD *)(v45 + 8) = 0LL;
    }
  }
LABEL_105:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v56 = v47;
    v72 = &v56;
    v73 = 4LL;
    v64 = v45;
    v74 = &v64;
    v75 = 8LL;
    v57 = *(_DWORD *)(v45 + 144);
    v76 = &v57;
    v77 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140044DDD, 0LL, 0LL, 5u, &v71);
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v45 + 152));
  return v47;
}
