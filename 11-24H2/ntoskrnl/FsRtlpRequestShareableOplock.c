/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x1404DB6D0
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057E1D0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpOplockEnqueueRH @ 0x1402E2018 (FsRtlpOplockEnqueueRH.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140301FF0 (MmDoesFileHaveUserWritableReferences.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403CB79C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x1403CE290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140408EA0 (FsRtlpCancelOplockRHIrp.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1404683A4 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404DA8E8 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404DAB70 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_3244801339__private_IsEnabledDeviceUsageNoInline @ 0x14057D918 (Feature_3244801339__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057DFDC (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpAllocateOplock @ 0x1409E1594 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0E080 (FsRtlpOplockUpperLowerCompatible.c)
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
  int v16; // r11d
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 *n; // r14
  __int64 *v21; // rcx
  _QWORD *v22; // r14
  __int64 v23; // rcx
  _QWORD *v24; // rax
  SECTION_OBJECT_POINTERS *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  __int64 *i; // rbx
  __int64 *j; // rbx
  _QWORD *v33; // rbx
  _QWORD **v34; // r12
  int v35; // eax
  char v36; // r14
  __int64 v37; // r13
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  _QWORD *v45; // rbx
  _QWORD *k; // rbx
  int v47; // eax
  __int64 *m; // rbx
  __int64 v49; // rax
  __int64 *v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  char v56; // [rsp+44h] [rbp-164h]
  char v57; // [rsp+45h] [rbp-163h] BYREF
  _QWORD **v58; // [rsp+48h] [rbp-160h] BYREF
  PVOID P; // [rsp+50h] [rbp-158h] BYREF
  unsigned int v60; // [rsp+58h] [rbp-150h] BYREF
  int v61; // [rsp+5Ch] [rbp-14Ch] BYREF
  _DWORD v62[4]; // [rsp+60h] [rbp-148h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+70h] [rbp-138h]
  __int64 v64; // [rsp+78h] [rbp-130h] BYREF
  __int64 v65; // [rsp+80h] [rbp-128h] BYREF
  __int64 v66; // [rsp+88h] [rbp-120h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-118h]
  char v68[32]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 *v69; // [rsp+C0h] [rbp-E8h]
  __int64 v70; // [rsp+C8h] [rbp-E0h]
  int *v71; // [rsp+D0h] [rbp-D8h]
  __int64 v72; // [rsp+D8h] [rbp-D0h]
  int *v73; // [rsp+E0h] [rbp-C8h]
  __int64 v74; // [rsp+E8h] [rbp-C0h]
  __int64 *v75; // [rsp+F0h] [rbp-B8h]
  __int64 v76; // [rsp+F8h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+100h] [rbp-A8h] BYREF
  _DWORD *v78; // [rsp+120h] [rbp-88h]
  __int64 v79; // [rsp+128h] [rbp-80h]
  char *v80; // [rsp+130h] [rbp-78h]
  __int64 v81; // [rsp+138h] [rbp-70h]
  __int64 *v82; // [rsp+140h] [rbp-68h]
  __int64 v83; // [rsp+148h] [rbp-60h]
  _QWORD *v84; // [rsp+150h] [rbp-58h]
  __int64 v85; // [rsp+158h] [rbp-50h]

  v62[2] = a4;
  v58 = a5;
  v12 = 0;
  P = 0LL;
  FastMutex = 0LL;
  v56 = 0;
  v13 = 0;
  v57 = 0;
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
    v56 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) == 0
    || *(_BYTE *)a2 != 13
    || !FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
LABEL_31:
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
      goto LABEL_155;
    if ( (a4 & 0x1000) != 0 || a4 == 0x10000 )
    {
      v25 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(a2 + 48) + 40LL);
      if ( v25 )
      {
        if ( MmDoesFileHaveUserWritableReferences(v25) )
        {
          if ( a4 == 0x10000 )
          {
            v12 = -1073741598;
            goto LABEL_157;
          }
          v26 = *(_QWORD *)(a3 + 24);
          *(_DWORD *)(v26 + 8) = 0;
          *(_DWORD *)(v26 + 12) |= 4u;
          if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL) )
          {
            v64 = 1LL;
            v69 = &v64;
            v70 = 8LL;
            v60 = a4;
            v71 = (int *)&v60;
            v72 = 4LL;
            v61 = *(_DWORD *)(Oplock + 144);
            v73 = &v61;
            v74 = 4LL;
            v65 = 0x1000000LL;
            v75 = &v65;
            v76 = 8LL;
            tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_1400451BF, v27, v27 + 6, (__int64)v68);
          }
          goto LABEL_155;
        }
      }
    }
    if ( !v15 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
    {
LABEL_44:
      if ( a4 == 0x10000 )
      {
        v12 = -1073739511;
        goto LABEL_157;
      }
      goto LABEL_155;
    }
    switch ( a4 )
    {
      case 0x10u:
        v41 = *(_DWORD *)(Oplock + 144);
        if ( (v41 & 1) == 0 )
        {
          v42 = v41 & 0x1F0FFDF;
          if ( v42 != 16 && v42 != 4096 && v42 != 4112 )
            goto LABEL_155;
        }
        break;
      case 0x1000u:
        break;
      case 0x3000u:
      case 0x10000u:
        if ( !v15 )
        {
          v28 = *(_DWORD *)(Oplock + 144);
          if ( (v28 & 1) == 0 )
          {
            v29 = v28 & 0x1F0FFDF;
            if ( (v28 & 0x1F0FFDF) != 0x1000
              && v29 != 12288
              && v29 != 45056
              && v29 != 1060864
              && v29 != 8400896
              && (v28 & 0x10000) == 0 )
            {
              goto LABEL_44;
            }
          }
        }
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) )
          goto LABEL_44;
        if ( !v15 )
        {
          v30 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
          if ( v30 == 4096 || v30 == 45056 )
          {
            for ( i = *(__int64 **)(Oplock + 40); i != (__int64 *)(Oplock + 40); i = (__int64 *)*i )
            {
              if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(i[2] + 48), 0) )
              {
                if ( a4 == 0x10000 )
                {
                  v12 = -1073741597;
                  goto LABEL_157;
                }
                FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)i[1], 533, 0x3000u, Oplock);
                break;
              }
            }
          }
          if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
          {
            for ( j = *(__int64 **)(Oplock + 56); j != (__int64 *)(Oplock + 56); j = (__int64 *)*j )
            {
              if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0) && !j[7] )
              {
                if ( a4 == 0x10000 )
                {
                  v12 = -1073741597;
                  goto LABEL_157;
                }
                FsRtlpRemoveAndCompleteRHIrp(*(_QWORD **)j[1], Oplock, 533, 0x3000u, 0, 0, 0, 0);
                break;
              }
            }
          }
          v33 = *(_QWORD **)(Oplock + 72);
          if ( v33 != (_QWORD *)(Oplock + 72) )
          {
            while ( v33 != (_QWORD *)(Oplock + 72) )
            {
              if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v33[3], 0) )
              {
                v12 = -1073741598;
                if ( a4 == 0x10000 )
                  goto LABEL_157;
                goto LABEL_156;
              }
              v33 = (_QWORD *)*v33;
            }
          }
        }
        v34 = v58;
        (*v58)[4] = KeGetCurrentThread()->ApcState.Process;
        (*v34)[3] = *(_QWORD *)(a2 + 48);
        v35 = FsRtlpOplockEnqueueRH((__int64 *)(Oplock + 56), *v34);
        v12 = v35;
        if ( v35 < 0 )
        {
          if ( a4 != 0x10000 )
          {
            *(_DWORD *)(a3 + 48) = v35;
            IofCompleteRequest((PIRP)a3, 1);
          }
          goto LABEL_157;
        }
        v36 = 0;
        v37 = 0LL;
        if ( a4 == 0x10000 )
        {
          v38 = *v34 + 7;
          v39 = (_QWORD *)(Oplock + 120);
          v40 = *(_QWORD *)(Oplock + 120);
          if ( *(_QWORD *)(v40 + 8) != Oplock + 120 )
            __fastfail(3u);
          *v38 = v40;
          v38[1] = v39;
          *(_QWORD *)(v40 + 8) = v38;
          *v39 = v38;
          v12 = 0;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          (*v34)[5] = CurrentThread;
          ObfReferenceObjectWithTag((PVOID)(*v34)[5], 0x746C6644u);
          (*v34)[2] = a3;
          *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
          v12 = 259;
          *(_DWORD *)(a3 + 48) = 0;
          *(_QWORD *)(a3 + 56) = Oplock;
          if ( a6 )
            ObfReferenceObjectWithTag((PVOID)(*v58)[3], 0x746C6644u);
          *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
          if ( *(_BYTE *)(a3 + 68) )
          {
            if ( a6 && a7 )
            {
              FsRtlpCancelOplockRHIrp(a3, 1, 0);
              v34 = v58;
            }
            else
            {
              FsRtlpCancelOplockRHIrp(a3, 1, 1);
              v34 = v58;
            }
            goto LABEL_100;
          }
          _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
          v12 = 259;
          v34 = v58;
        }
        v36 = 1;
LABEL_100:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v62[0] = a4;
          v78 = v62;
          v79 = 4LL;
          v57 = a7;
          v80 = &v57;
          v81 = 1LL;
          v66 = Oplock;
          v82 = &v66;
          v83 = 8LL;
          LODWORD(v58) = *(_DWORD *)(Oplock + 144);
          v84 = &v58;
          v85 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)&byte_1400452A7,
            0LL,
            0LL,
            6u,
            &v77);
        }
        FsRtlpComputeShareableOplockState(Oplock);
        if ( !(unsigned int)Feature_3244801339__private_IsEnabledDeviceUsageNoInline() && v36 )
          FsRtlpOplockTryPrepForAckTimeout(Oplock, (*v34)[3], a3, *v34 + 9, *v34 + 11);
        if ( (unsigned int)Feature_3244801339__private_IsEnabledDeviceUsageNoInline() )
          v37 = (__int64)*v34;
        *v34 = 0LL;
        if ( a4 == 0x10000 )
          *(_DWORD *)(Oplock + 144) |= 0x10000u;
        if ( (unsigned int)Feature_3244801339__private_IsEnabledDeviceUsageNoInline() && v36 )
          FsRtlpOplockTryPrepForAckTimeout(Oplock, *(_QWORD *)(v37 + 24), a3, v37 + 72, v37 + 88);
        goto LABEL_157;
      default:
LABEL_154:
        if ( v13 )
          goto LABEL_157;
        goto LABEL_155;
    }
    if ( !v15 )
    {
      v43 = *(_DWORD *)(Oplock + 144);
      if ( (v43 & 1) == 0 )
      {
        v44 = v43 & 0x1F0FFDF;
        if ( (v43 & 0x1F0FFDF) != 0x10
          && v44 != 4096
          && v44 != 4112
          && v44 != 12288
          && v44 != 45056
          && v44 != 1060864
          && v44 != 8400896
          && (v43 & 0x10000) == 0 )
        {
          goto LABEL_155;
        }
      }
      v45 = *(_QWORD **)(Oplock + 56);
      if ( v45 != (_QWORD *)(Oplock + 56) || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        while ( v45 != (_QWORD *)(Oplock + 56) )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v45[3], 0) )
            goto LABEL_155;
          v45 = (_QWORD *)*v45;
        }
        for ( k = *(_QWORD **)(Oplock + 72); k != (_QWORD *)(Oplock + 72); k = (_QWORD *)*k )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), k[3], 0) )
            goto LABEL_155;
        }
      }
      v47 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v47 == 16 || v47 == 4096 || v47 == 4112 || v47 == 45056 )
      {
        for ( m = *(__int64 **)(Oplock + 40); m != (__int64 *)(Oplock + 40); m = (__int64 *)*m )
        {
          v49 = m[2];
          v50 = (__int64 *)(v49 + 48);
          if ( (*(_DWORD *)(v49 + 24) == 590400 || *v50 != *(_QWORD *)(a2 + 48))
            && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *v50, 0) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)m[1], 533, a4 & 0x7000, Oplock);
            break;
          }
        }
      }
    }
    *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
    *(_DWORD *)(a3 + 48) = 0;
    v51 = (_QWORD *)(a3 + 168);
    v52 = (_QWORD *)(Oplock + 40);
    v53 = *(_QWORD *)(Oplock + 40);
    if ( *(_QWORD *)(v53 + 8) != Oplock + 40 )
      __fastfail(3u);
    *v51 = v53;
    *(_QWORD *)(a3 + 176) = v52;
    *(_QWORD *)(v53 + 8) = v51;
    *v52 = v51;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
    *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v54) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v54);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v13 = 1;
    v12 = 259;
    goto LABEL_154;
  }
  if ( (v16 & 0x20000) == 0 )
  {
    for ( n = *(__int64 **)(Oplock + 88); n != (__int64 *)(Oplock + 88); n = (__int64 *)*n )
    {
      v21 = n;
      if ( !*((_BYTE *)n + 53) || a4 != 12288 )
      {
        n = (__int64 *)n[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v21);
      }
    }
    v22 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v23 = v22[7];
    v24 = (_QWORD *)v22[8];
    if ( *(_QWORD **)(v23 + 8) != v22 + 7 || (_QWORD *)*v24 != v22 + 7 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v22[5] )
      FsRtlpClearOwner(Oplock, (__int64)v22);
    FsRtlpFreeRHOpContext(v22);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v13 = 0;
    v15 = a7;
    goto LABEL_31;
  }
  v17 = P;
  FsRtlpOplockDequeueRH((__int64)P);
  v18 = v17[7];
  v19 = (_QWORD *)v17[8];
  if ( *(_QWORD **)(v18 + 8) != v17 + 7 || (_QWORD *)*v19 != v17 + 7 )
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
    *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
  if ( v17[5] )
    FsRtlpClearOwner(Oplock, (__int64)v17);
  FsRtlpFreeRHOpContext(v17);
  P = 0LL;
  FsRtlpComputeShareableOplockState(Oplock);
LABEL_155:
  v12 = -1073741598;
LABEL_156:
  *(_DWORD *)(a3 + 48) = -1073741598;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_157:
  if ( v56 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v12;
}
