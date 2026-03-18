/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x1404E4EB0
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140580DB0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     MmDoesFileHaveUserWritableReferences @ 0x14022E6E0 (MmDoesFileHaveUserWritableReferences.c)
 *     FsRtlpOplockEnqueueRH @ 0x140247DCC (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140330A70 (FsRtlpComputeShareableOplockState.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     _tlgWriteAgg @ 0x1403D06F8 (_tlgWriteAgg.c)
 *     FsRtlpOplockKeysEqual @ 0x1403DA0A0 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403DC8D4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404190F0 (FsRtlpCancelOplockRHIrp.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     FsRtlpOplockDequeueRH @ 0x140459914 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14046D804 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140580BC0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x140580D80 (FsRtlpFreeRHOpContext.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A15260 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140A28938 (FsRtlpAllocateOplock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r11d
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 *i; // r14
  __int64 *v24; // rcx
  _QWORD *v25; // r14
  __int64 v26; // rcx
  _QWORD *v27; // rax
  SECTION_OBJECT_POINTERS *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  __int64 *m; // rbx
  __int64 *n; // rbx
  _QWORD *v36; // rbx
  __int64 v37; // rcx
  _QWORD **v38; // r13
  int v39; // eax
  __int64 v40; // rcx
  bool v41; // r14
  _QWORD *v42; // rax
  _QWORD *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  _QWORD *v52; // rbx
  _QWORD *j; // rbx
  int v54; // eax
  __int64 *k; // rbx
  __int64 v56; // rax
  __int64 *v57; // rdx
  _QWORD *v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rdx
  char v63; // [rsp+44h] [rbp-164h]
  char v64; // [rsp+46h] [rbp-162h] BYREF
  PVOID P; // [rsp+48h] [rbp-160h] BYREF
  _QWORD **v66; // [rsp+50h] [rbp-158h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-150h] BYREF
  int v68; // [rsp+5Ch] [rbp-14Ch] BYREF
  _DWORD v69[4]; // [rsp+60h] [rbp-148h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+70h] [rbp-138h]
  __int64 v71; // [rsp+78h] [rbp-130h] BYREF
  __int64 v72; // [rsp+80h] [rbp-128h] BYREF
  __int64 v73; // [rsp+88h] [rbp-120h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-118h]
  char v75[32]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 *v76; // [rsp+C0h] [rbp-E8h]
  __int64 v77; // [rsp+C8h] [rbp-E0h]
  int *v78; // [rsp+D0h] [rbp-D8h]
  __int64 v79; // [rsp+D8h] [rbp-D0h]
  int *v80; // [rsp+E0h] [rbp-C8h]
  __int64 v81; // [rsp+E8h] [rbp-C0h]
  __int64 *v82; // [rsp+F0h] [rbp-B8h]
  __int64 v83; // [rsp+F8h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+100h] [rbp-A8h] BYREF
  _DWORD *v85; // [rsp+120h] [rbp-88h]
  __int64 v86; // [rsp+128h] [rbp-80h]
  char *v87; // [rsp+130h] [rbp-78h]
  __int64 v88; // [rsp+138h] [rbp-70h]
  __int64 *v89; // [rsp+140h] [rbp-68h]
  __int64 v90; // [rsp+148h] [rbp-60h]
  _QWORD *v91; // [rsp+150h] [rbp-58h]
  __int64 v92; // [rsp+158h] [rbp-50h]

  v69[2] = a4;
  v66 = a5;
  v12 = 0;
  P = 0LL;
  FastMutex = 0LL;
  v63 = 0;
  v13 = 0;
  v64 = 0;
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
    v63 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v19 & 0x20000) != 0 )
    {
      v20 = P;
      FsRtlpOplockDequeueRH((__int64)P, v16);
      v21 = v20[7];
      v22 = (_QWORD *)v20[8];
      if ( *(_QWORD **)(v21 + 8) != v20 + 7 || (_QWORD *)*v22 != v20 + 7 )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v20[5] )
        FsRtlpClearOwner(Oplock, (__int64)v20);
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v21) )
        FsRtlpFreeRHOpContext(v20);
      else
        ExFreePoolWithTag(v20, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
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
        FsRtlpRemoveAndCompleteWaitingIrp(v24, v16, v17, v18);
      }
    }
    v25 = P;
    FsRtlpOplockDequeueRH((__int64)P, v16);
    v26 = v25[7];
    v27 = (_QWORD *)v25[8];
    if ( *(_QWORD **)(v26 + 8) != v25 + 7 || (_QWORD *)*v27 != v25 + 7 )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v25[5] )
      FsRtlpClearOwner(Oplock, (__int64)v25);
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v26) )
      FsRtlpFreeRHOpContext(v25);
    else
      ExFreePoolWithTag(v25, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v13 = 0;
    v15 = a7;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
    goto LABEL_158;
  if ( (a4 & 0x1000) != 0 || a4 == 0x10000 )
  {
    v28 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(a2 + 48) + 40LL);
    if ( v28 )
    {
      if ( MmDoesFileHaveUserWritableReferences(v28) )
      {
        if ( a4 == 0x10000 )
        {
          v12 = -1073741598;
          goto LABEL_160;
        }
        v29 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v29 + 8) = 0;
        *(_DWORD *)(v29 + 12) |= 4u;
        if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL) )
        {
          v71 = 1LL;
          v76 = &v71;
          v77 = 8LL;
          v67 = a4;
          v78 = (int *)&v67;
          v79 = 4LL;
          v68 = *(_DWORD *)(Oplock + 144);
          v80 = &v68;
          v81 = 4LL;
          v72 = 0x1000000LL;
          v82 = &v72;
          v83 = 8LL;
          tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)&dword_140044E9C, v30, v30 + 6, (__int64)v75);
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
    v48 = *(_DWORD *)(Oplock + 144);
    if ( (v48 & 1) == 0 )
    {
      v49 = v48 & 0x1F0FFDF;
      if ( v49 != 16 && v49 != 4096 && v49 != 4112 )
        goto LABEL_158;
    }
    goto LABEL_119;
  }
  if ( a4 == 4096 )
  {
LABEL_119:
    if ( !v15 )
    {
      v50 = *(_DWORD *)(Oplock + 144);
      if ( (v50 & 1) == 0 )
      {
        v51 = v50 & 0x1F0FFDF;
        if ( (v50 & 0x1F0FFDF) != 0x10
          && v51 != 4096
          && v51 != 4112
          && v51 != 12288
          && v51 != 45056
          && v51 != 1060864
          && v51 != 8400896
          && (v50 & 0x10000) == 0 )
        {
          goto LABEL_158;
        }
      }
      v52 = *(_QWORD **)(Oplock + 56);
      if ( v52 != (_QWORD *)(Oplock + 56) || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        while ( v52 != (_QWORD *)(Oplock + 56) )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v52[3], 0) )
            goto LABEL_158;
          v52 = (_QWORD *)*v52;
        }
        for ( j = *(_QWORD **)(Oplock + 72); j != (_QWORD *)(Oplock + 72); j = (_QWORD *)*j )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0) )
            goto LABEL_158;
        }
      }
      v54 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v54 == 16 || v54 == 4096 || v54 == 4112 || v54 == 45056 )
      {
        for ( k = *(__int64 **)(Oplock + 40); k != (__int64 *)(Oplock + 40); k = (__int64 *)*k )
        {
          v56 = k[2];
          v57 = (__int64 *)(v56 + 48);
          if ( (*(_DWORD *)(v56 + 24) == 590400 || *v57 != *(_QWORD *)(a2 + 48))
            && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *v57, 0) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)k[1], 533, a4 & 0x7000, Oplock);
            break;
          }
        }
      }
    }
    *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
    *(_DWORD *)(a3 + 48) = 0;
    v58 = (_QWORD *)(a3 + 168);
    v59 = (_QWORD *)(Oplock + 40);
    v60 = *(_QWORD *)(Oplock + 40);
    if ( *(_QWORD *)(v60 + 8) != Oplock + 40 )
      __fastfail(3u);
    *v58 = v60;
    *(_QWORD *)(a3 + 176) = v59;
    *(_QWORD *)(v60 + 8) = v58;
    *v59 = v58;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
    *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v61) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v61);
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
    v31 = *(_DWORD *)(Oplock + 144);
    if ( (v31 & 1) == 0 )
    {
      v32 = v31 & 0x1F0FFDF;
      if ( (v31 & 0x1F0FFDF) != 0x1000
        && v32 != 12288
        && v32 != 45056
        && v32 != 1060864
        && v32 != 8400896
        && (v31 & 0x10000) == 0 )
      {
        goto LABEL_50;
      }
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) )
    goto LABEL_50;
  if ( !v15 )
  {
    v33 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v33 == 4096 || v33 == 45056 )
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
    v36 = *(_QWORD **)(Oplock + 72);
    if ( v36 != (_QWORD *)(Oplock + 72) )
    {
      while ( v36 != (_QWORD *)(Oplock + 72) )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v36[3], 0) )
        {
          v12 = -1073741598;
          if ( a4 == 0x10000 )
            goto LABEL_160;
          goto LABEL_159;
        }
        v36 = (_QWORD *)*v36;
      }
    }
  }
  (*v66)[4] = KeGetCurrentThread()->ApcState.Process;
  v37 = *(_QWORD *)(a2 + 48);
  v38 = v66;
  (*v66)[3] = v37;
  v39 = FsRtlpOplockEnqueueRH((__int64 *)(Oplock + 56), *v38);
  v12 = v39;
  if ( v39 >= 0 )
  {
    v41 = 0;
    if ( a4 == 0x10000 )
    {
      Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v40);
      v42 = *v38 + 7;
      v43 = (_QWORD *)(Oplock + 120);
      v44 = *(_QWORD *)(Oplock + 120);
      if ( *(_QWORD *)(v44 + 8) != Oplock + 120 )
        __fastfail(3u);
      *v42 = v44;
      v42[1] = v43;
      *(_QWORD *)(v44 + 8) = v42;
      *v43 = v42;
      v12 = 0;
      v41 = (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v43) != 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      (*v38)[5] = CurrentThread;
      ObfReferenceObjectWithTag((PVOID)(*v38)[5], 0x746C6644u);
      (*v38)[2] = a3;
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      v12 = 259;
      *(_DWORD *)(a3 + 48) = 0;
      *(_QWORD *)(a3 + 56) = Oplock;
      if ( a6 )
        ObfReferenceObjectWithTag((PVOID)(*v38)[3], 0x746C6644u);
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
        v41 = (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v46) != 0;
        v12 = 259;
      }
    }
    if ( !(unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v45) )
      *v38 = 0LL;
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v69[0] = a4;
      v85 = v69;
      v86 = 4LL;
      v64 = a7;
      v87 = &v64;
      v88 = 1LL;
      v73 = Oplock;
      v89 = &v73;
      v90 = 8LL;
      LODWORD(v66) = *(_DWORD *)(Oplock + 144);
      v91 = &v66;
      v92 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06C30,
        (unsigned __int8 *)&byte_140044DBF,
        0LL,
        0LL,
        6u,
        &v84);
    }
    FsRtlpComputeShareableOplockState(Oplock);
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v47) )
    {
      if ( v41 )
        FsRtlpOplockTryPrepForAckTimeout(Oplock, (*v38)[3], a3, *v38 + 9, *v38 + 11);
      *v38 = 0LL;
    }
    if ( a4 == 0x10000 )
      *(_DWORD *)(Oplock + 144) |= 0x10000u;
  }
  else if ( a4 != 0x10000 )
  {
    *(_DWORD *)(a3 + 48) = v39;
    IofCompleteRequest((PIRP)a3, 1);
  }
LABEL_160:
  if ( v63 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v12;
}
