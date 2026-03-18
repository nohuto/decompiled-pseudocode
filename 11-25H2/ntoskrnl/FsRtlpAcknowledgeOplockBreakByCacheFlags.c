/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x1403EE550 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14042513C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpOplockDequeueRH @ 0x14045A5B0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047F2B8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1404E18C8 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpFreeRHOpContext @ 0x14057D960 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057D990 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     FsRtlpOplockMoveAckTimeout @ 0x1406FFBFC (FsRtlpOplockMoveAckTimeout.c)
 *     FsRtlpOplockPerfMoveData @ 0x1406FFE00 (FsRtlpOplockPerfMoveData.c)
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0BC94 (FsRtlpOplockUpperLowerCompatible.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  int v12; // ecx
  int v13; // r12d
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *i; // rdi
  __int64 v20; // rcx
  int v21; // eax
  int v22; // r13d
  __int64 v23; // rcx
  __int64 v24; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  _QWORD *v26; // r10
  _QWORD *v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  _QWORD *v30; // r9
  _QWORD *v31; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  char v39; // cl
  __int64 v40; // r8
  _QWORD *v41; // rcx
  int v42; // [rsp+60h] [rbp-250h]
  __int64 v43; // [rsp+88h] [rbp-228h] BYREF
  bool v44; // [rsp+90h] [rbp-220h]
  unsigned int v45; // [rsp+94h] [rbp-21Ch]
  char v46; // [rsp+98h] [rbp-218h]
  char v47; // [rsp+99h] [rbp-217h]
  char v48; // [rsp+9Ah] [rbp-216h] BYREF
  char v49[5]; // [rsp+9Bh] [rbp-215h] BYREF
  int v50; // [rsp+A0h] [rbp-210h] BYREF
  _QWORD *v51; // [rsp+A8h] [rbp-208h] BYREF
  char v52; // [rsp+B0h] [rbp-200h]
  char v53; // [rsp+B1h] [rbp-1FFh]
  unsigned int v54; // [rsp+B4h] [rbp-1FCh] BYREF
  int v55; // [rsp+B8h] [rbp-1F8h] BYREF
  int v56; // [rsp+BCh] [rbp-1F4h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-1F0h]
  _QWORD *v58; // [rsp+C8h] [rbp-1E8h]
  _QWORD *v59; // [rsp+D0h] [rbp-1E0h] BYREF
  unsigned int v60; // [rsp+D8h] [rbp-1D8h] BYREF
  unsigned int v61; // [rsp+DCh] [rbp-1D4h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-1C8h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-1C0h] BYREF
  __int64 v64; // [rsp+F8h] [rbp-1B8h] BYREF
  __int64 v65; // [rsp+100h] [rbp-1B0h] BYREF
  __int64 v66; // [rsp+110h] [rbp-1A0h]
  struct _KTHREAD *v67; // [rsp+118h] [rbp-198h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+128h] [rbp-188h] BYREF
  unsigned int *v69; // [rsp+148h] [rbp-168h]
  __int64 v70; // [rsp+150h] [rbp-160h]
  __int64 *v71; // [rsp+158h] [rbp-158h]
  __int64 v72; // [rsp+160h] [rbp-150h]
  int *v73; // [rsp+168h] [rbp-148h]
  __int64 v74; // [rsp+170h] [rbp-140h]
  struct _EVENT_DATA_DESCRIPTOR v75[2]; // [rsp+178h] [rbp-138h] BYREF
  __int64 *v76; // [rsp+198h] [rbp-118h]
  __int64 v77; // [rsp+1A0h] [rbp-110h]
  unsigned int *v78; // [rsp+1A8h] [rbp-108h]
  __int64 v79; // [rsp+1B0h] [rbp-100h]
  __int64 *v80; // [rsp+1B8h] [rbp-F8h]
  __int64 v81; // [rsp+1C0h] [rbp-F0h]
  int *v82; // [rsp+1C8h] [rbp-E8h]
  __int64 v83; // [rsp+1D0h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+1D8h] [rbp-D8h] BYREF
  __int64 *v85; // [rsp+1F8h] [rbp-B8h]
  __int64 v86; // [rsp+200h] [rbp-B0h]
  __int64 *v87; // [rsp+208h] [rbp-A8h]
  __int64 v88; // [rsp+210h] [rbp-A0h]
  int *v89; // [rsp+218h] [rbp-98h]
  __int64 v90; // [rsp+220h] [rbp-90h]

  v57 = a2;
  v43 = a1;
  v8 = (int)a5;
  v59 = a5;
  v45 = 0;
  Pool2 = 0LL;
  v51 = 0LL;
  v46 = 0;
  v10 = 0;
  v52 = 0;
  v47 = 0;
  LOBYTE(v8) = 0;
  v50 = v8;
  v53 = 0;
  v49[0] = 0;
  v48 = 0;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v60 = a4;
    v76 = (__int64 *)&v60;
    v77 = 4LL;
    v61 = a6;
    v78 = &v61;
    v79 = 4LL;
    v63 = a1;
    v80 = &v63;
    v81 = 8LL;
    v56 = *(_DWORD *)(a1 + 144);
    v82 = &v56;
    v83 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_14004450F, 0LL, 0LL, 6u, v75);
    a1 = v43;
  }
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v12 = *(_DWORD *)(v43 + 144);
  if ( (v12 & 0xF00000) == 0 && (((v12 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v12 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v43 + 72) == v43 + 72 )
  {
LABEL_9:
    v45 = -1073741597;
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_122;
  }
  v66 = *(_QWORD *)(a3 + 24);
  v13 = *(_DWORD *)(v66 + 8) & 4;
  v44 = v13 != 0;
  if ( v13 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x120uLL);
    v51 = Pool2;
  }
  v14 = *(_DWORD *)(v43 + 144) & 0x1F0FFDF;
  if ( (unsigned int)v14 > 0x307040 )
  {
    if ( (_DWORD)v14 == 5271616 )
      goto LABEL_18;
    if ( (_DWORD)v14 != 8400896 )
    {
      v15 = v14 - 8409152;
LABEL_17:
      if ( (v15 & 0xFFFFDFFF) != 0 )
        goto LABEL_9;
LABEL_18:
      v16 = v57;
      if ( v13 )
      {
        v17 = *(_QWORD *)(v43 + 8);
        v18 = *(_QWORD *)(v57 + 48);
        if ( v17 == v18 || !FsRtlpOplockKeysEqual(v18, v17, 0) )
          goto LABEL_9;
        if ( !a4 )
        {
          FsRtlpModifyThreadPriorities(v43, 0LL, 0);
          FsRtlpClearOwner(v43, 0LL);
          *(_BYTE *)(v43 + 32) = 0;
          if ( (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_DWORD *)(v43 + 144) = *(_DWORD *)(v43 + 144) & 0x20 | 1;
            Pool2 = v51;
          }
          else
          {
            *(_DWORD *)(v43 + 144) = *(_DWORD *)(v43 + 144) & 0x20 | 1;
          }
          Pool2[2] = *(_QWORD *)(v43 + 8);
          if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
          {
            FsRtlpOplockPerfMoveData(v43 + 160, Pool2 + 3);
            FsRtlpOplockMoveAckTimeout(v43 + 176, Pool2 + 5);
          }
          v36 = (_QWORD *)(v43 + 104);
          v37 = *(_QWORD *)(v43 + 104);
          if ( *(_QWORD *)(v37 + 8) != v43 + 104 )
            __fastfail(3u);
          *Pool2 = v37;
          Pool2[1] = v36;
          *(_QWORD *)(v37 + 8) = Pool2;
          *v36 = Pool2;
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v63 = Pool2[2];
            v76 = &v63;
            v77 = 8LL;
            v59 = (_QWORD *)v43;
            v78 = (unsigned int *)&v59;
            v79 = 8LL;
            v56 = *(_DWORD *)(v43 + 144);
            v80 = (__int64 *)&v56;
            v81 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)byte_140044921,
              0LL,
              0LL,
              5u,
              v75);
          }
          Pool2 = 0LL;
          v51 = 0LL;
          *(_QWORD *)(v43 + 8) = 0LL;
          *(_DWORD *)(v43 + 144) |= 0x1000000u;
          *(_DWORD *)(a3 + 48) = 0;
          IofCompleteRequest((PIRP)a3, 1);
          goto LABEL_117;
        }
      }
      else if ( *(_QWORD *)(v43 + 8) != *(_QWORD *)(v57 + 48) )
      {
        goto LABEL_9;
      }
      v38 = *(_DWORD *)(v43 + 144) & 0x1F0FFDF;
      if ( (v38 == 1069120 || v38 == 1077312 || v38 == 3174464 || v38 == 5271616 || v38 == 8409152 || v38 == 8417344)
        && (a4 & 0x7000) > (*(_DWORD *)(v43 + 144) & 0x200000 | ((*(_DWORD *)(v43 + 144) & 0x100000 | (*(_DWORD *)(v43 + 144) >> 1) & 0x200000u) >> 1)) >> 7 )
      {
        v39 = v50;
        if ( *(_QWORD *)(v43 + 88) != v43 + 88 )
          v39 = 1;
      }
      else
      {
        v39 = v50;
      }
      if ( !v39 )
      {
        FsRtlpModifyThreadPriorities(v43, 0LL, 0);
        FsRtlpClearOwner(v43, 0LL);
        *(_BYTE *)(v43 + 32) = 0;
        LOBYTE(v42) = v44;
        v45 = FsRtlpGrantAnyOplockFromExclusive(v43, a3, v16, a4, v59, v42, &v51, &v48, v49, a6);
        Pool2 = v51;
        goto LABEL_117;
      }
      v40 = *(_QWORD *)(a3 + 24);
      *(_OWORD *)v40 = 0LL;
      *(_QWORD *)(v40 + 16) = 0LL;
      *(_DWORD *)(v40 + 4) = (*(_DWORD *)(v43 + 144) >> 12) & 7;
      *(_DWORD *)(v40 + 8) = (*(_DWORD *)(v43 + 144) & 0x200000 | ((*(_DWORD *)(v43 + 144) & 0x100000 | (*(_DWORD *)(v43 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
      *(_DWORD *)(v40 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      *(_DWORD *)(a3 + 48) = -2147483602;
      IofCompleteRequest((PIRP)a3, 1);
      v45 = -2147483602;
      goto LABEL_122;
    }
  }
  else
  {
    if ( (_DWORD)v14 == 3174464 )
      goto LABEL_18;
    if ( (((_DWORD)v14 - 12288) & 0xFFEF7FFF) != 0 || (_DWORD)v14 == 1093632 )
    {
      v15 = v14 - 1069120;
      goto LABEL_17;
    }
  }
  for ( i = *(_QWORD **)(v43 + 72); ; i = (_QWORD *)*i )
  {
    v58 = i;
    if ( i == (_QWORD *)(v43 + 72) )
      goto LABEL_52;
    if ( v13 )
      break;
    if ( i[3] == *(_QWORD *)(v57 + 48) )
      goto LABEL_37;
LABEL_94:
    ;
  }
  v14 = i[3];
  v20 = *(_QWORD *)(v57 + 48);
  if ( v14 == v20 || !FsRtlpOplockKeysEqual(v20, v14, 0) )
    goto LABEL_94;
LABEL_37:
  v46 = 1;
  v21 = i[6] & 0xF00000;
  v22 = a6;
  if ( v21 != 0x800000 )
  {
    if ( v21 == 0x100000
      && (a4 & 0x7000) > 0x3000
      && (*(_QWORD *)(v43 + 88) != v43 + 88 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6)) )
    {
      v24 = *(_QWORD *)(a3 + 24);
      *(_OWORD *)v24 = 0LL;
      *(_QWORD *)(v24 + 16) = 0LL;
      *(_DWORD *)(v24 + 4) = 3;
      if ( *(_QWORD *)(v43 + 88) != v43 + 88 )
        v22 = 1;
      *(_DWORD *)(v24 + 8) = v22;
      *(_DWORD *)(v24 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      *(_DWORD *)(a3 + 48) = -2147483602;
      IofCompleteRequest((PIRP)a3, 1);
      v45 = -2147483602;
      goto LABEL_51;
    }
LABEL_57:
    FsRtlpOplockDequeueRH((__int64)i, v14);
    if ( v13 )
    {
      Pool2[2] = i[3];
      IsEnabledDeviceUsageNoInline = Feature_5466_1379__private_IsEnabledDeviceUsageNoInline();
      v26 = 0LL;
      if ( IsEnabledDeviceUsageNoInline )
      {
        FsRtlpOplockPerfMoveData(i + 9, Pool2 + 3);
        FsRtlpOplockMoveAckTimeout(i + 11, Pool2 + 5);
      }
      v27 = (_QWORD *)(v43 + 104);
      v28 = *(_QWORD *)(v43 + 104);
      if ( *(_QWORD *)(v28 + 8) != v43 + 104 )
        __fastfail(3u);
      *Pool2 = v28;
      Pool2[1] = v27;
      *(_QWORD *)(v28 + 8) = Pool2;
      *v27 = Pool2;
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v64 = Pool2[2];
        v85 = &v64;
        v86 = 8LL;
        v65 = v43;
        v87 = &v65;
        v88 = 8LL;
        v50 = *(_DWORD *)(v43 + 144);
        v89 = &v50;
        v90 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)byte_140044490,
          0LL,
          0LL,
          5u,
          &v84);
        v26 = 0LL;
      }
      Pool2 = v26;
      v51 = v26;
    }
    else
    {
      v47 = 1;
      if ( a4 )
        goto LABEL_69;
      ObfDereferenceObjectWithTag((PVOID)i[3], 0x746C6644u);
    }
    if ( !a4 )
    {
      FsRtlpComputeShareableOplockState(v43);
      v45 = 0;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
LABEL_87:
      FsRtlpModifyThreadPriorities(v43, (__int64)i, 0);
      FsRtlpClearOwner(v43, (__int64)i);
      if ( *(_QWORD *)(v43 + 72) == v43 + 72 )
        *(_BYTE *)(v43 + 32) = 0;
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      {
        FsRtlpOplockPerfSendData(i + 9);
        FsRtlpFreeRHOpContext(i);
      }
      else
      {
        ExFreePoolWithTag(i, 0);
      }
      if ( v13 )
        *(_DWORD *)(v43 + 144) |= 0x1000000u;
LABEL_51:
      v10 = 1;
      goto LABEL_52;
    }
LABEL_69:
    if ( (a4 & 0x3010) == 0 || (a4 & 0x4040) != 0 )
    {
      *(_QWORD *)v43 = a3;
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      v45 = 259;
      *(_QWORD *)(a3 + 56) = v43;
      *(_QWORD *)(v43 + 16) = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      v67 = CurrentThread;
      *(_QWORD *)(v43 + 24) = CurrentThread;
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_BYTE *)(v43 + 32) = 0;
      if ( v13 )
      {
        v33 = v57;
        ObfReferenceObjectWithTag(*(PVOID *)(v57 + 48), 0x746C6644u);
        *(_QWORD *)(v43 + 8) = *(_QWORD *)(v33 + 48);
        i = v58;
      }
      else
      {
        i = v58;
        *(_QWORD *)(v43 + 8) = v58[3];
      }
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
      {
        FsRtlpOplockPerfMoveData(i + 9, v43 + 160);
        FsRtlpOplockMoveAckTimeout(i + 11, v43 + 176);
      }
      if ( (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline() )
      {
        *(_DWORD *)(v43 + 144) = *(_DWORD *)(v43 + 144) & 0x20 | a4 | 0x40;
        i = v58;
      }
      else
      {
        *(_DWORD *)(v43 + 144) = *(_DWORD *)(v43 + 144) & 0x20 | a4 | 0x40;
      }
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v35) = !v44;
        LOBYTE(v34) = 1;
        FsRtlpCancelExclusiveIrp(a3, v34, v35);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        i = v58;
      }
      Pool2 = v51;
    }
    else
    {
      v29 = Feature_5466_1379__private_IsEnabledDeviceUsageNoInline();
      v30 = v59;
      if ( v29 && v59 )
      {
        FsRtlpOplockPerfMoveData(i + 9, *v59 + 72LL);
        FsRtlpOplockMoveAckTimeout(i + 11, *v31 + 88LL);
      }
      LOBYTE(v42) = v44;
      v45 = FsRtlpRequestShareableOplock(&v43, v57, a3, a4, v30, v42, 1, a6);
    }
    goto LABEL_87;
  }
  if ( !a4 || *(_QWORD *)(v43 + 88) == v43 + 88 && (unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6) )
    goto LABEL_57;
  v23 = *(_QWORD *)(a3 + 24);
  *(_OWORD *)v23 = 0LL;
  *(_QWORD *)(v23 + 16) = 0LL;
  *(_DWORD *)(v23 + 4) = 3;
  if ( *(_QWORD *)(v43 + 88) != v43 + 88 )
    v22 = 0;
  *(_DWORD *)(v23 + 8) = v22;
  *(_DWORD *)(v23 + 12) |= 1u;
  *(_QWORD *)(a3 + 56) = 24LL;
  *(_DWORD *)(a3 + 48) = -2147483602;
  IofCompleteRequest((PIRP)a3, 1);
  v45 = -2147483602;
  v10 = 1;
LABEL_52:
  if ( !v46 )
    goto LABEL_9;
  if ( v47 )
    FsRtlpReleaseIrpsWaitingForRH(v43);
  if ( !v10 )
  {
LABEL_117:
    if ( v48 )
    {
      while ( 1 )
      {
        v41 = *(_QWORD **)(v43 + 88);
        if ( v41 == (_QWORD *)(v43 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v41);
      }
    }
    if ( v49[0] )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v43 + 8), 0x746C6644u);
      *(_QWORD *)(v43 + 8) = 0LL;
    }
  }
LABEL_122:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v54 = v45;
    v69 = &v54;
    v70 = 4LL;
    v62 = v43;
    v71 = &v62;
    v72 = 8LL;
    v55 = *(_DWORD *)(v43 + 144);
    v73 = &v55;
    v74 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_1400448BF, 0LL, 0LL, 5u, &v68);
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v43 + 152));
  return v45;
}
