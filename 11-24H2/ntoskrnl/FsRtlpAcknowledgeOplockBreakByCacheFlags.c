/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140330618 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140330A70 (FsRtlpComputeShareableOplockState.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x1403DA0A0 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpOplockDequeueRH @ 0x140459914 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x140580D80 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140580DB0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     FsRtlpOplockMoveAckTimeout @ 0x14070BADC (FsRtlpOplockMoveAckTimeout.c)
 *     FsRtlpOplockPerfMoveData @ 0x14070BCE0 (FsRtlpOplockPerfMoveData.c)
 *     FsRtlpOplockPerfSendData @ 0x14070BDB4 (FsRtlpOplockPerfSendData.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A15260 (FsRtlpOplockUpperLowerCompatible.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6)
{
  int v8; // eax
  _QWORD *Pool2; // rsi
  char v10; // r13
  __int64 v12; // r9
  int v13; // ecx
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *i; // rdi
  __int64 v23; // rcx
  int v24; // eax
  int v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  _QWORD *v29; // r10
  _QWORD *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  _QWORD *v33; // r9
  _QWORD *v34; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  char v43; // cl
  __int64 v44; // r8
  _QWORD *v45; // rcx
  int v46; // [rsp+60h] [rbp-250h]
  __int64 v47; // [rsp+88h] [rbp-228h] BYREF
  bool v48; // [rsp+90h] [rbp-220h]
  unsigned int v49; // [rsp+94h] [rbp-21Ch]
  char v50; // [rsp+98h] [rbp-218h]
  char v51; // [rsp+99h] [rbp-217h]
  char v52; // [rsp+9Ah] [rbp-216h] BYREF
  char v53[5]; // [rsp+9Bh] [rbp-215h] BYREF
  int v54; // [rsp+A0h] [rbp-210h] BYREF
  _QWORD *v55; // [rsp+A8h] [rbp-208h] BYREF
  char v56; // [rsp+B0h] [rbp-200h]
  char v57; // [rsp+B1h] [rbp-1FFh]
  unsigned int v58; // [rsp+B4h] [rbp-1FCh] BYREF
  int v59; // [rsp+B8h] [rbp-1F8h] BYREF
  int v60; // [rsp+BCh] [rbp-1F4h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-1F0h]
  _QWORD *v62; // [rsp+C8h] [rbp-1E8h]
  _QWORD *v63; // [rsp+D0h] [rbp-1E0h] BYREF
  unsigned int v64; // [rsp+D8h] [rbp-1D8h] BYREF
  unsigned int v65; // [rsp+DCh] [rbp-1D4h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-1C8h] BYREF
  __int64 v67; // [rsp+F0h] [rbp-1C0h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-1B8h] BYREF
  __int64 v69; // [rsp+100h] [rbp-1B0h] BYREF
  __int64 v70; // [rsp+110h] [rbp-1A0h]
  struct _KTHREAD *v71; // [rsp+118h] [rbp-198h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+128h] [rbp-188h] BYREF
  unsigned int *v73; // [rsp+148h] [rbp-168h]
  __int64 v74; // [rsp+150h] [rbp-160h]
  __int64 *v75; // [rsp+158h] [rbp-158h]
  __int64 v76; // [rsp+160h] [rbp-150h]
  int *v77; // [rsp+168h] [rbp-148h]
  __int64 v78; // [rsp+170h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v79[2]; // [rsp+178h] [rbp-138h] BYREF
  __int64 *v80; // [rsp+198h] [rbp-118h]
  __int64 v81; // [rsp+1A0h] [rbp-110h]
  unsigned int *v82; // [rsp+1A8h] [rbp-108h]
  __int64 v83; // [rsp+1B0h] [rbp-100h]
  __int64 *v84; // [rsp+1B8h] [rbp-F8h]
  __int64 v85; // [rsp+1C0h] [rbp-F0h]
  int *v86; // [rsp+1C8h] [rbp-E8h]
  __int64 v87; // [rsp+1D0h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+1D8h] [rbp-D8h] BYREF
  __int64 *v89; // [rsp+1F8h] [rbp-B8h]
  __int64 v90; // [rsp+200h] [rbp-B0h]
  __int64 *v91; // [rsp+208h] [rbp-A8h]
  __int64 v92; // [rsp+210h] [rbp-A0h]
  int *v93; // [rsp+218h] [rbp-98h]
  __int64 v94; // [rsp+220h] [rbp-90h]

  v61 = a2;
  v47 = a1;
  v8 = (int)a5;
  v63 = a5;
  v49 = 0;
  Pool2 = 0LL;
  v55 = 0LL;
  v50 = 0;
  v10 = 0;
  v56 = 0;
  v51 = 0;
  LOBYTE(v8) = 0;
  v54 = v8;
  v57 = 0;
  v53[0] = 0;
  v52 = 0;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v64 = a4;
    v80 = (__int64 *)&v64;
    v81 = 4LL;
    v65 = a6;
    v82 = &v65;
    v83 = 4LL;
    v67 = a1;
    v84 = &v67;
    v85 = 8LL;
    v60 = *(_DWORD *)(a1 + 144);
    v86 = &v60;
    v87 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&word_140044CC6, 0LL, 0LL, 6u, v79);
    a1 = v47;
  }
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v13 = *(_DWORD *)(v47 + 144);
  if ( (v13 & 0xF00000) == 0 && (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v47 + 72) == v47 + 72 )
  {
LABEL_9:
    v49 = -1073741597;
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_122;
  }
  v70 = *(_QWORD *)(a3 + 24);
  v14 = *(_DWORD *)(v70 + 8) & 4;
  v48 = v14 != 0;
  if ( v14 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x120uLL);
    v55 = Pool2;
  }
  v15 = *(_DWORD *)(v47 + 144) & 0x1F0FFDF;
  v16 = 3174464LL;
  if ( (unsigned int)v15 > 0x307040 )
  {
    if ( (_DWORD)v15 == 5271616 )
      goto LABEL_18;
    if ( (_DWORD)v15 != 8400896 )
    {
      v17 = v15 - 8409152;
LABEL_17:
      if ( (v17 & 0xFFFFDFFF) != 0 )
        goto LABEL_9;
LABEL_18:
      v18 = v61;
      if ( v14 )
      {
        v19 = *(_QWORD *)(v47 + 8);
        v20 = *(_QWORD *)(v61 + 48);
        if ( v19 == v20 || !FsRtlpOplockKeysEqual(v20, v19, 0) )
          goto LABEL_9;
        if ( !a4 )
        {
          FsRtlpModifyThreadPriorities(v47, 0LL, 0LL);
          FsRtlpClearOwner(v47, 0LL);
          *(_BYTE *)(v47 + 32) = 0;
          if ( (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v21) )
          {
            *(_DWORD *)(v47 + 144) = *(_DWORD *)(v47 + 144) & 0x20 | 1;
            Pool2 = v55;
          }
          else
          {
            *(_DWORD *)(v47 + 144) = *(_DWORD *)(v47 + 144) & 0x20 | 1;
          }
          Pool2[2] = *(_QWORD *)(v47 + 8);
          if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
          {
            FsRtlpOplockPerfMoveData(v47 + 160, Pool2 + 3);
            FsRtlpOplockMoveAckTimeout(v47 + 176, Pool2 + 5);
          }
          v40 = (_QWORD *)(v47 + 104);
          v41 = *(_QWORD *)(v47 + 104);
          if ( *(_QWORD *)(v41 + 8) != v47 + 104 )
            __fastfail(3u);
          *Pool2 = v41;
          Pool2[1] = v40;
          *(_QWORD *)(v41 + 8) = Pool2;
          *v40 = Pool2;
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v67 = Pool2[2];
            v80 = &v67;
            v81 = 8LL;
            v63 = (_QWORD *)v47;
            v82 = (unsigned int *)&v63;
            v83 = 8LL;
            v60 = *(_DWORD *)(v47 + 144);
            v84 = (__int64 *)&v60;
            v85 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)&word_140044BDE,
              0LL,
              0LL,
              5u,
              v79);
          }
          Pool2 = 0LL;
          v55 = 0LL;
          *(_QWORD *)(v47 + 8) = 0LL;
          *(_DWORD *)(v47 + 144) |= 0x1000000u;
          *(_DWORD *)(a3 + 48) = 0;
          IofCompleteRequest((PIRP)a3, 1);
          goto LABEL_117;
        }
      }
      else if ( *(_QWORD *)(v47 + 8) != *(_QWORD *)(v61 + 48) )
      {
        goto LABEL_9;
      }
      v42 = *(_DWORD *)(v47 + 144) & 0x1F0FFDF;
      if ( (v42 == 1069120 || v42 == 1077312 || v42 == 3174464 || v42 == 5271616 || v42 == 8409152 || v42 == 8417344)
        && (a4 & 0x7000) > (*(_DWORD *)(v47 + 144) & 0x200000 | ((*(_DWORD *)(v47 + 144) & 0x100000 | (*(_DWORD *)(v47 + 144) >> 1) & 0x200000u) >> 1)) >> 7 )
      {
        v43 = v54;
        if ( *(_QWORD *)(v47 + 88) != v47 + 88 )
          v43 = 1;
      }
      else
      {
        v43 = v54;
      }
      if ( !v43 )
      {
        FsRtlpModifyThreadPriorities(v47, 0LL, 0LL);
        FsRtlpClearOwner(v47, 0LL);
        *(_BYTE *)(v47 + 32) = 0;
        LOBYTE(v46) = v48;
        v49 = FsRtlpGrantAnyOplockFromExclusive(v47, a3, v18, a4, v63, v46, &v55, &v52, v53, a6);
        Pool2 = v55;
        goto LABEL_117;
      }
      v44 = *(_QWORD *)(a3 + 24);
      *(_OWORD *)v44 = 0LL;
      *(_QWORD *)(v44 + 16) = 0LL;
      *(_DWORD *)(v44 + 4) = (*(_DWORD *)(v47 + 144) >> 12) & 7;
      *(_DWORD *)(v44 + 8) = (*(_DWORD *)(v47 + 144) & 0x200000 | ((*(_DWORD *)(v47 + 144) & 0x100000 | (*(_DWORD *)(v47 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
      *(_DWORD *)(v44 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      *(_DWORD *)(a3 + 48) = -2147483602;
      IofCompleteRequest((PIRP)a3, 1);
      v49 = -2147483602;
      goto LABEL_122;
    }
  }
  else
  {
    if ( (_DWORD)v15 == 3174464 )
      goto LABEL_18;
    if ( (((_DWORD)v15 - 12288) & 0xFFEF7FFF) != 0 || (_DWORD)v15 == 1093632 )
    {
      v17 = v15 - 1069120;
      goto LABEL_17;
    }
  }
  for ( i = *(_QWORD **)(v47 + 72); ; i = (_QWORD *)*i )
  {
    v62 = i;
    if ( i == (_QWORD *)(v47 + 72) )
      goto LABEL_52;
    if ( v14 )
      break;
    if ( i[3] == *(_QWORD *)(v61 + 48) )
      goto LABEL_37;
LABEL_94:
    ;
  }
  v15 = i[3];
  v23 = *(_QWORD *)(v61 + 48);
  if ( v15 == v23 || !FsRtlpOplockKeysEqual(v23, v15, 0) )
    goto LABEL_94;
LABEL_37:
  v50 = 1;
  v24 = i[6] & 0xF00000;
  v25 = a6;
  if ( v24 != 0x800000 )
  {
    if ( v24 == 0x100000
      && (a4 & 0x7000) > 0x3000
      && (*(_QWORD *)(v47 + 88) != v47 + 88 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6)) )
    {
      v27 = *(_QWORD *)(a3 + 24);
      *(_OWORD *)v27 = 0LL;
      *(_QWORD *)(v27 + 16) = 0LL;
      *(_DWORD *)(v27 + 4) = 3;
      if ( *(_QWORD *)(v47 + 88) != v47 + 88 )
        v25 = 1;
      *(_DWORD *)(v27 + 8) = v25;
      *(_DWORD *)(v27 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      *(_DWORD *)(a3 + 48) = -2147483602;
      IofCompleteRequest((PIRP)a3, 1);
      v49 = -2147483602;
      goto LABEL_51;
    }
LABEL_57:
    FsRtlpOplockDequeueRH((__int64)i, v15);
    if ( v14 )
    {
      Pool2[2] = i[3];
      IsEnabledDeviceUsageNoInline = Feature_5466_1379__private_IsEnabledDeviceUsageNoInline();
      v29 = 0LL;
      if ( IsEnabledDeviceUsageNoInline )
      {
        FsRtlpOplockPerfMoveData(i + 9, Pool2 + 3);
        FsRtlpOplockMoveAckTimeout(i + 11, Pool2 + 5);
      }
      v30 = (_QWORD *)(v47 + 104);
      v31 = *(_QWORD *)(v47 + 104);
      if ( *(_QWORD *)(v31 + 8) != v47 + 104 )
        __fastfail(3u);
      *Pool2 = v31;
      Pool2[1] = v30;
      *(_QWORD *)(v31 + 8) = Pool2;
      *v30 = Pool2;
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v68 = Pool2[2];
        v89 = &v68;
        v90 = 8LL;
        v69 = v47;
        v91 = &v69;
        v92 = 8LL;
        v54 = *(_DWORD *)(v47 + 144);
        v93 = &v54;
        v94 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)byte_140044D40,
          0LL,
          0LL,
          5u,
          &v88);
        v29 = 0LL;
      }
      Pool2 = v29;
      v55 = v29;
    }
    else
    {
      v51 = 1;
      if ( a4 )
        goto LABEL_69;
      ObfDereferenceObjectWithTag((PVOID)i[3], 0x746C6644u);
    }
    if ( !a4 )
    {
      FsRtlpComputeShareableOplockState(v47);
      v49 = 0;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
LABEL_87:
      FsRtlpModifyThreadPriorities(v47, (__int64)i, 0LL);
      FsRtlpClearOwner(v47, (__int64)i);
      if ( *(_QWORD *)(v47 + 72) == v47 + 72 )
        *(_BYTE *)(v47 + 32) = 0;
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      {
        FsRtlpOplockPerfSendData(i + 9);
        FsRtlpFreeRHOpContext(i);
      }
      else
      {
        ExFreePoolWithTag(i, 0);
      }
      if ( v14 )
        *(_DWORD *)(v47 + 144) |= 0x1000000u;
LABEL_51:
      v10 = 1;
      goto LABEL_52;
    }
LABEL_69:
    if ( (a4 & 0x3010) == 0 || (a4 & 0x4040) != 0 )
    {
      *(_QWORD *)v47 = a3;
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      v49 = 259;
      *(_QWORD *)(a3 + 56) = v47;
      *(_QWORD *)(v47 + 16) = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      v71 = CurrentThread;
      *(_QWORD *)(v47 + 24) = CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_BYTE *)(v47 + 32) = 0;
      if ( v14 )
      {
        v36 = v61;
        ObfReferenceObjectWithTag(*(PVOID *)(v61 + 48), 0x746C6644u);
        *(_QWORD *)(v47 + 8) = *(_QWORD *)(v36 + 48);
        i = v62;
      }
      else
      {
        i = v62;
        *(_QWORD *)(v47 + 8) = v62[3];
      }
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      {
        FsRtlpOplockPerfMoveData(i + 9, v47 + 160);
        FsRtlpOplockMoveAckTimeout(i + 11, v47 + 176);
      }
      if ( (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v37) )
      {
        *(_DWORD *)(v47 + 144) = *(_DWORD *)(v47 + 144) & 0x20 | a4 | 0x40;
        i = v62;
      }
      else
      {
        *(_DWORD *)(v47 + 144) = *(_DWORD *)(v47 + 144) & 0x20 | a4 | 0x40;
      }
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v39) = !v48;
        LOBYTE(v38) = 1;
        FsRtlpCancelExclusiveIrp(a3, v38, v39);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        i = v62;
      }
      Pool2 = v55;
    }
    else
    {
      v32 = Feature_5466_1379__private_IsEnabledDeviceUsageNoInline();
      v33 = v63;
      if ( v32 && v63 )
      {
        FsRtlpOplockPerfMoveData(i + 9, *v63 + 72LL);
        FsRtlpOplockMoveAckTimeout(i + 11, *v34 + 88LL);
      }
      LOBYTE(v46) = v48;
      v49 = FsRtlpRequestShareableOplock(&v47, v61, a3, a4, v33, v46, 1, a6);
    }
    goto LABEL_87;
  }
  if ( !a4 || *(_QWORD *)(v47 + 88) == v47 + 88 && (unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6) )
    goto LABEL_57;
  v26 = *(_QWORD *)(a3 + 24);
  *(_OWORD *)v26 = 0LL;
  *(_QWORD *)(v26 + 16) = 0LL;
  *(_DWORD *)(v26 + 4) = 3;
  if ( *(_QWORD *)(v47 + 88) != v47 + 88 )
    v25 = 0;
  *(_DWORD *)(v26 + 8) = v25;
  *(_DWORD *)(v26 + 12) |= 1u;
  *(_QWORD *)(a3 + 56) = 24LL;
  *(_DWORD *)(a3 + 48) = -2147483602;
  IofCompleteRequest((PIRP)a3, 1);
  v49 = -2147483602;
  v10 = 1;
LABEL_52:
  if ( !v50 )
    goto LABEL_9;
  if ( v51 )
    FsRtlpReleaseIrpsWaitingForRH(v47);
  if ( !v10 )
  {
LABEL_117:
    if ( v52 )
    {
      while ( 1 )
      {
        v45 = *(_QWORD **)(v47 + 88);
        if ( v45 == (_QWORD *)(v47 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v45, v15, v16, v12);
      }
    }
    if ( v53[0] )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v47 + 8), 0x746C6644u);
      *(_QWORD *)(v47 + 8) = 0LL;
    }
  }
LABEL_122:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v58 = v49;
    v73 = &v58;
    v74 = 4LL;
    v66 = v47;
    v75 = &v66;
    v76 = 8LL;
    v59 = *(_DWORD *)(v47 + 144);
    v77 = &v59;
    v78 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06C30,
      (unsigned __int8 *)&dword_140044C64,
      0LL,
      0LL,
      5u,
      &v72);
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v47 + 152));
  return v49;
}
