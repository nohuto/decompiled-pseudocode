/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x1404E5DD0
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057D990 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     MmDoesFileHaveUserWritableReferences @ 0x140218410 (MmDoesFileHaveUserWritableReferences.c)
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockEnqueueRH @ 0x140375544 (FsRtlpOplockEnqueueRH.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     FsRtlpOplockKeysEqual @ 0x1403EE550 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14041B390 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     FsRtlpOplockDequeueRH @ 0x14045A5B0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14046F010 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404A9C7C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057D7A4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x14057D960 (FsRtlpFreeRHOpContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0BC94 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140A1F320 (FsRtlpAllocateOplock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRequestShareableOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD **a5,
        char a6,
        char a7,
        unsigned int a8)
{
  unsigned int v12; // ebx
  char v13; // r12
  __int64 Oplock; // rdi
  char v15; // r14
  __int64 v16; // rdx
  int v17; // r11d
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 *i; // r14
  __int64 *v24; // rcx
  _QWORD *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  _QWORD *v29; // rax
  SECTION_OBJECT_POINTERS *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  __int64 *m; // rbx
  __int64 *n; // rbx
  _QWORD *v38; // rbx
  __int64 v39; // rcx
  _QWORD **v40; // r13
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  bool v45; // r14
  __int64 v46; // r8
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // eax
  int v60; // eax
  int v61; // ecx
  int v62; // eax
  _QWORD *v63; // rbx
  _QWORD *j; // rbx
  int v65; // eax
  __int64 *k; // rbx
  __int64 v67; // rax
  __int64 *v68; // rdx
  _QWORD *v69; // rax
  _QWORD *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdx
  char v74; // [rsp+44h] [rbp-164h]
  char v75; // [rsp+46h] [rbp-162h] BYREF
  PVOID P; // [rsp+48h] [rbp-160h] BYREF
  _QWORD **v77; // [rsp+50h] [rbp-158h] BYREF
  unsigned int v78; // [rsp+58h] [rbp-150h] BYREF
  int v79; // [rsp+5Ch] [rbp-14Ch] BYREF
  _DWORD v80[4]; // [rsp+60h] [rbp-148h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+70h] [rbp-138h]
  __int64 v82; // [rsp+78h] [rbp-130h] BYREF
  __int64 v83; // [rsp+80h] [rbp-128h] BYREF
  __int64 v84; // [rsp+88h] [rbp-120h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-118h]
  char v86[32]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 *v87; // [rsp+C0h] [rbp-E8h]
  __int64 v88; // [rsp+C8h] [rbp-E0h]
  int *v89; // [rsp+D0h] [rbp-D8h]
  __int64 v90; // [rsp+D8h] [rbp-D0h]
  int *v91; // [rsp+E0h] [rbp-C8h]
  __int64 v92; // [rsp+E8h] [rbp-C0h]
  __int64 *v93; // [rsp+F0h] [rbp-B8h]
  __int64 v94; // [rsp+F8h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+100h] [rbp-A8h] BYREF
  _DWORD *v96; // [rsp+120h] [rbp-88h]
  __int64 v97; // [rsp+128h] [rbp-80h]
  char *v98; // [rsp+130h] [rbp-78h]
  __int64 v99; // [rsp+138h] [rbp-70h]
  __int64 *v100; // [rsp+140h] [rbp-68h]
  __int64 v101; // [rsp+148h] [rbp-60h]
  _QWORD *v102; // [rsp+150h] [rbp-58h]
  __int64 v103; // [rsp+158h] [rbp-50h]

  v80[2] = a4;
  v77 = a5;
  v12 = 0;
  P = 0LL;
  FastMutex = 0LL;
  v74 = 0;
  v13 = 0;
  v75 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v15 = a7;
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v74 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v17 & 0x20000) != 0 )
    {
      v18 = P;
      FsRtlpOplockDequeueRH((__int64)P, v16);
      v21 = v18[7];
      v22 = (_QWORD *)v18[8];
      if ( *(_QWORD **)(v21 + 8) != v18 + 7 || (_QWORD *)*v22 != v18 + 7 )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v18[5] )
        FsRtlpClearOwner(Oplock, (__int64)v18);
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v21, v19, v20) )
        FsRtlpFreeRHOpContext(v18);
      else
        ExFreePoolWithTag(v18, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState((__int64 *)Oplock);
LABEL_158:
      v12 = -1073741598;
LABEL_159:
      *(_DWORD *)(a3 + 48) = -1073741598;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_160;
    }
    for ( i = *(__int64 **)(Oplock + 88); i != (__int64 *)(Oplock + 88); i = (__int64 *)*i )
    {
      v24 = i;
      if ( !*((_BYTE *)i + 53) || a4 != 12288 )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v24);
      }
    }
    v25 = P;
    FsRtlpOplockDequeueRH((__int64)P, v16);
    v28 = v25[7];
    v29 = (_QWORD *)v25[8];
    if ( *(_QWORD **)(v28 + 8) != v25 + 7 || (_QWORD *)*v29 != v25 + 7 )
      __fastfail(3u);
    *v29 = v28;
    *(_QWORD *)(v28 + 8) = v29;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v25[5] )
      FsRtlpClearOwner(Oplock, (__int64)v25);
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v28, v26, v27) )
      FsRtlpFreeRHOpContext(v25);
    else
      ExFreePoolWithTag(v25, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState((__int64 *)Oplock);
    v13 = 0;
    v15 = a7;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
    goto LABEL_158;
  if ( (a4 & 0x1000) != 0 || a4 == 0x10000 )
  {
    v30 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(a2 + 48) + 40LL);
    if ( v30 )
    {
      if ( MmDoesFileHaveUserWritableReferences(v30) )
      {
        if ( a4 == 0x10000 )
        {
          v12 = -1073741598;
          goto LABEL_160;
        }
        v31 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v31 + 8) = 0;
        *(_DWORD *)(v31 + 12) |= 4u;
        if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL) )
        {
          v82 = 1LL;
          v87 = &v82;
          v88 = 8LL;
          v78 = a4;
          v89 = (int *)&v78;
          v90 = 4LL;
          v79 = *(_DWORD *)(Oplock + 144);
          v91 = &v79;
          v92 = 4LL;
          v83 = 0x1000000LL;
          v93 = &v83;
          v94 = 8LL;
          tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)&word_140044666, v32, v32 + 6, (__int64)v86);
        }
        goto LABEL_158;
      }
    }
  }
  if ( !v15 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
  {
LABEL_50:
    if ( a4 == 0x10000 )
    {
      v12 = -1073739511;
      goto LABEL_160;
    }
    goto LABEL_158;
  }
  if ( a4 == 16 )
  {
    v59 = *(_DWORD *)(Oplock + 144);
    if ( (v59 & 1) == 0 )
    {
      v60 = v59 & 0x1F0FFDF;
      if ( v60 != 16 && v60 != 4096 && v60 != 4112 )
        goto LABEL_158;
    }
    goto LABEL_119;
  }
  if ( a4 == 4096 )
  {
LABEL_119:
    if ( !v15 )
    {
      v61 = *(_DWORD *)(Oplock + 144);
      if ( (v61 & 1) == 0 )
      {
        v62 = v61 & 0x1F0FFDF;
        if ( (v61 & 0x1F0FFDF) != 0x10
          && v62 != 4096
          && v62 != 4112
          && v62 != 12288
          && v62 != 45056
          && v62 != 1060864
          && v62 != 8400896
          && (v61 & 0x10000) == 0 )
        {
          goto LABEL_158;
        }
      }
      v63 = *(_QWORD **)(Oplock + 56);
      if ( v63 != (_QWORD *)(Oplock + 56) || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        while ( v63 != (_QWORD *)(Oplock + 56) )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v63[3], 0) )
            goto LABEL_158;
          v63 = (_QWORD *)*v63;
        }
        for ( j = *(_QWORD **)(Oplock + 72); j != (_QWORD *)(Oplock + 72); j = (_QWORD *)*j )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0) )
            goto LABEL_158;
        }
      }
      v65 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v65 == 16 || v65 == 4096 || v65 == 4112 || v65 == 45056 )
      {
        for ( k = *(__int64 **)(Oplock + 40); k != (__int64 *)(Oplock + 40); k = (__int64 *)*k )
        {
          v67 = k[2];
          v68 = (__int64 *)(v67 + 48);
          if ( (*(_DWORD *)(v67 + 24) == 590400 || *v68 != *(_QWORD *)(a2 + 48))
            && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *v68, 0) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)k[1], 533, a4 & 0x7000, Oplock);
            break;
          }
        }
      }
    }
    *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
    *(_DWORD *)(a3 + 48) = 0;
    v69 = (_QWORD *)(a3 + 168);
    v70 = (_QWORD *)(Oplock + 40);
    v71 = *(_QWORD *)(Oplock + 40);
    if ( *(_QWORD *)(v71 + 8) != Oplock + 40 )
      __fastfail(3u);
    *v69 = v71;
    *(_QWORD *)(a3 + 176) = v70;
    *(_QWORD *)(v71 + 8) = v69;
    *v70 = v69;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState((__int64 *)Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
    *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v72) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v72);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v13 = 1;
    v12 = 259;
LABEL_157:
    if ( v13 )
      goto LABEL_160;
    goto LABEL_158;
  }
  if ( a4 != 12288 && a4 != 0x10000 )
    goto LABEL_157;
  if ( !v15 )
  {
    v33 = *(_DWORD *)(Oplock + 144);
    if ( (v33 & 1) == 0 )
    {
      v34 = v33 & 0x1F0FFDF;
      if ( (v33 & 0x1F0FFDF) != 0x1000
        && v34 != 12288
        && v34 != 45056
        && v34 != 1060864
        && v34 != 8400896
        && (v33 & 0x10000) == 0 )
      {
        goto LABEL_50;
      }
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) )
    goto LABEL_50;
  if ( !v15 )
  {
    v35 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v35 == 4096 || v35 == 45056 )
    {
      for ( m = *(__int64 **)(Oplock + 40); m != (__int64 *)(Oplock + 40); m = (__int64 *)*m )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(m[2] + 48), 0) )
        {
          if ( a4 == 0x10000 )
          {
            v12 = -1073741597;
            goto LABEL_160;
          }
          FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)m[1], 533, 0x3000u, Oplock);
          break;
        }
      }
    }
    if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
    {
      for ( n = *(__int64 **)(Oplock + 56); n != (__int64 *)(Oplock + 56); n = (__int64 *)*n )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), n[3], 0) && !n[7] )
        {
          if ( a4 == 0x10000 )
          {
            v12 = -1073741597;
            goto LABEL_160;
          }
          FsRtlpRemoveAndCompleteRHIrp(*(_QWORD **)n[1], Oplock, 533, 0x3000u, 0, 0, 0, 0);
          break;
        }
      }
    }
    v38 = *(_QWORD **)(Oplock + 72);
    if ( v38 != (_QWORD *)(Oplock + 72) )
    {
      while ( v38 != (_QWORD *)(Oplock + 72) )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v38[3], 0) )
        {
          v12 = -1073741598;
          if ( a4 == 0x10000 )
            goto LABEL_160;
          goto LABEL_159;
        }
        v38 = (_QWORD *)*v38;
      }
    }
  }
  (*v77)[4] = KeGetCurrentThread()->ApcState.Process;
  v39 = *(_QWORD *)(a2 + 48);
  v40 = v77;
  (*v77)[3] = v39;
  v41 = FsRtlpOplockEnqueueRH((__int64 *)(Oplock + 56), *v40);
  v12 = v41;
  if ( v41 >= 0 )
  {
    v45 = 0;
    if ( a4 == 0x10000 )
    {
      Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v43, v42, v44);
      v47 = *v40 + 7;
      v48 = (_QWORD *)(Oplock + 120);
      v49 = *(_QWORD *)(Oplock + 120);
      if ( *(_QWORD *)(v49 + 8) != Oplock + 120 )
        __fastfail(3u);
      *v47 = v49;
      v47[1] = v48;
      *(_QWORD *)(v49 + 8) = v47;
      *v48 = v47;
      v12 = 0;
      v45 = (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v48, v49, v46) != 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      (*v40)[5] = CurrentThread;
      ObfReferenceObjectWithTag((PVOID)(*v40)[5], 0x746C6644u);
      (*v40)[2] = a3;
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      v12 = 259;
      *(_DWORD *)(a3 + 48) = 0;
      *(_QWORD *)(a3 + 56) = Oplock;
      if ( a6 )
        ObfReferenceObjectWithTag((PVOID)(*v40)[3], 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        if ( a6 && a7 )
          FsRtlpCancelOplockRHIrp(a3, 1, 0);
        else
          FsRtlpCancelOplockRHIrp(a3, 1, 1);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v45 = (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v54, v53, v55) != 0;
        v12 = 259;
      }
    }
    if ( !(unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v51, v50, v52) )
      *v40 = 0LL;
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v80[0] = a4;
      v96 = v80;
      v97 = 4LL;
      v75 = a7;
      v98 = &v75;
      v99 = 1LL;
      v84 = Oplock;
      v100 = &v84;
      v101 = 8LL;
      LODWORD(v77) = *(_DWORD *)(Oplock + 144);
      v102 = &v77;
      v103 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06C30,
        (unsigned __int8 *)&word_1400445FE,
        0LL,
        0LL,
        6u,
        &v95);
    }
    FsRtlpComputeShareableOplockState((__int64 *)Oplock);
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v57, v56, v58) )
    {
      if ( v45 )
        FsRtlpOplockTryPrepForAckTimeout(Oplock, (*v40)[3], a3, *v40 + 9, *v40 + 11);
      *v40 = 0LL;
    }
    if ( a4 == 0x10000 )
      *(_DWORD *)(Oplock + 144) |= 0x10000u;
  }
  else if ( a4 != 0x10000 )
  {
    *(_DWORD *)(a3 + 48) = v41;
    IofCompleteRequest((PIRP)a3, 1);
  }
LABEL_160:
  if ( v74 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v12;
}
