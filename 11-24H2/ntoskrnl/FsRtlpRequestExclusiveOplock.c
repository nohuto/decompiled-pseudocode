/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x1404DAE94
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140301FF0 (MmDoesFileHaveUserWritableReferences.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403CB79C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x1403CE290 (FsRtlpOplockKeysEqual.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1404683A4 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404DA8E8 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404DAB70 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14057DEC0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpAllocateOplock @ 0x1409E1594 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0E080 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v10; // ebx
  char v11; // r12
  _QWORD *Oplock; // rsi
  int v13; // r11d
  _QWORD *v14; // rbx
  __int64 v15; // r10
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 *i; // r14
  _QWORD *v19; // rcx
  _QWORD *v20; // r14
  __int64 v21; // r10
  __int64 v22; // rcx
  _QWORD *v23; // rax
  int v24; // r10d
  SECTION_OBJECT_POINTERS *v25; // rcx
  ULONG HaveUserWritableReferences; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r10d
  int v30; // ecx
  char v31; // al
  int v32; // eax
  int v33; // ecx
  PIRP v34; // rbx
  IRP *v35; // rcx
  struct _IRP *MasterIrp; // rdx
  _QWORD *m; // rbx
  char v38; // al
  _QWORD *v39; // rcx
  _QWORD **v40; // rbx
  _QWORD *j; // r12
  _QWORD *k; // rcx
  _QWORD **v43; // r12
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  _QWORD *v48; // [rsp+48h] [rbp-F0h] BYREF
  int v49; // [rsp+50h] [rbp-E8h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+78h] [rbp-C0h]
  struct _IRP *v54; // [rsp+80h] [rbp-B8h]
  char v55[32]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 *v56; // [rsp+B0h] [rbp-88h]
  __int64 v57; // [rsp+B8h] [rbp-80h]
  int *v58; // [rsp+C0h] [rbp-78h]
  __int64 v59; // [rsp+C8h] [rbp-70h]
  _QWORD *v60; // [rsp+D0h] [rbp-68h]
  __int64 v61; // [rsp+D8h] [rbp-60h]
  __int64 *v62; // [rsp+E0h] [rbp-58h]
  __int64 v63; // [rsp+E8h] [rbp-50h]

  LODWORD(v48) = a4;
  v10 = 0;
  v49 = 0;
  v11 = 0;
  P[0] = 0LL;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = (_QWORD *)FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  P[1] = Oplock;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)Oplock[19]);
  if ( (Oplock[18] & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor((__int64)Oplock, *(_QWORD *)(a2 + 48), P) )
  {
    if ( (v13 & 0x20000) != 0 )
    {
      v14 = P[0];
      FsRtlpOplockDequeueRH((__int64)P[0]);
      v16 = v14[7];
      v17 = (_QWORD *)v14[8];
      if ( *(_QWORD **)(v16 + 8) != v14 + 7 || (_QWORD *)*v17 != v14 + 7 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      if ( (_QWORD *)Oplock[15] == Oplock + 15 )
        *((_DWORD *)Oplock + 36) &= 0xFFFCFFFF;
      if ( v14[5] != v15 )
        FsRtlpClearOwner((__int64)Oplock, (__int64)v14);
      FsRtlpFreeRHOpContext(v14);
      P[0] = 0LL;
      FsRtlpComputeShareableOplockState((__int64)Oplock);
      goto LABEL_14;
    }
    for ( i = (__int64 *)Oplock[11]; i != Oplock + 11; i = (__int64 *)*i )
    {
      v19 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v19);
      }
    }
    v20 = P[0];
    FsRtlpOplockDequeueRH((__int64)P[0]);
    v22 = v20[7];
    v23 = (_QWORD *)v20[8];
    if ( *(_QWORD **)(v22 + 8) != v20 + 7 || (_QWORD *)*v23 != v20 + 7 )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    if ( (_QWORD *)Oplock[15] == Oplock + 15 )
      *((_DWORD *)Oplock + 36) &= 0xFFFCFFFF;
    if ( v20[5] != v21 )
      FsRtlpClearOwner((__int64)Oplock, (__int64)v20);
    FsRtlpFreeRHOpContext(v20);
    P[0] = 0LL;
    FsRtlpComputeShareableOplockState((__int64)Oplock);
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
LABEL_14:
    v10 = -1073741598;
LABEL_15:
    *(_DWORD *)(a3 + 48) = v10;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_110;
  }
  if ( (a6 & 0x1000) != 0 )
  {
    v25 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(a2 + 48) + 40LL);
    if ( v25 )
    {
      HaveUserWritableReferences = MmDoesFileHaveUserWritableReferences(v25);
      v24 = 0;
      if ( HaveUserWritableReferences )
      {
        v27 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v27 + 8) = 0;
        *(_DWORD *)(v27 + 12) |= 4u;
        if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL) )
        {
          v52 = 1LL;
          v56 = &v52;
          v57 = 8LL;
          v49 = a6;
          v58 = &v49;
          v59 = v28;
          LODWORD(v48) = *((_DWORD *)Oplock + 36);
          v60 = &v48;
          v61 = v28;
          v51 = 0x1000000LL;
          v62 = &v51;
          v63 = 8LL;
          tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140045379, v28, v29 + 6, (__int64)v55);
        }
        goto LABEL_14;
      }
    }
  }
  if ( a6 == 200 )
  {
    *Oplock = a3;
    Oplock[1] = *(_QWORD *)(a2 + 48);
    *((_DWORD *)Oplock + 36) = Oplock[18] & 0x20 | 0xC8;
    v10 = v49;
    v11 = 0;
    goto LABEL_105;
  }
  v30 = *((_DWORD *)Oplock + 36);
  if ( (v30 & 0x91) == 0 )
  {
    if ( (v30 & 0x7000) == 0 || (v30 & 0x1F00F00) != 0 || (_QWORD *)Oplock[9] != Oplock + 9 )
    {
      if ( (a6 & 0x10000) == 0 )
      {
        v10 = -1073741598;
        if ( a3 )
        {
          *(_DWORD *)(a3 + 48) = -1073741598;
          IofCompleteRequest((PIRP)a3, 1);
        }
        v49 = -1073741598;
LABEL_105:
        if ( !v11 )
          goto LABEL_110;
        goto LABEL_106;
      }
      goto LABEL_43;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_43;
    if ( (a6 & 0x7000) != 0 && (*(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) == (_BYTE)v24 || (a6 & 0x2000) == 0) )
    {
      v33 = v30 & 0x1F0FFDF;
      if ( v33 == 4096 )
      {
        if ( ((a6 - 20544) & 0xFFFFDFFF) == 0 )
        {
          for ( j = (_QWORD *)Oplock[5]; j != Oplock + 5; j = (_QWORD *)*j )
          {
            v51 = j[2];
            if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v51 + 48), 0) )
              goto LABEL_44;
          }
          if ( (unsigned int)v48 > 1 && (a5 & 1) == 0 )
            goto LABEL_14;
          for ( k = (_QWORD *)Oplock[5]; ; k = *v43 )
          {
            v48 = k;
            if ( k == Oplock + 5 )
              break;
            v43 = (_QWORD **)k[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp(*v43, 533, a6 & 0x7000, (__int64)Oplock);
          }
          v11 = 1;
          goto LABEL_105;
        }
      }
      else if ( v33 == 12288 )
      {
        if ( a6 == 28736 )
        {
          for ( m = (_QWORD *)Oplock[7]; m != Oplock + 7; m = (_QWORD *)*m )
          {
            v38 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0);
            v24 = 0;
            if ( !v38 )
              goto LABEL_44;
            if ( m[7] )
            {
              v10 = -1073741597;
              goto LABEL_15;
            }
          }
          if ( (unsigned int)v48 > 1 && (a5 & 1) == 0 )
            goto LABEL_14;
          v39 = (_QWORD *)Oplock[7];
          while ( 1 )
          {
            v48 = v39;
            if ( v39 == Oplock + 7 )
              break;
            v40 = (_QWORD **)v39[1];
            FsRtlpRemoveAndCompleteRHIrp(*v40, (__int64)Oplock, 533, 0x7000u, v24, v24, v24, v24);
            v39 = *v40;
            v24 = 0;
          }
          goto LABEL_106;
        }
      }
      else if ( (v33 == 20544 || v33 == 28736 && a6 == 28736)
             && ((a6 - 20544) & 0xFFFFDFFF) == 0
             && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), Oplock[1], 0) )
      {
        Irp = (PIRP)*Oplock;
        v34 = Irp;
        v34->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)&v34->CancelRoutine, 0LL);
        KeReleaseQueuedSpinLock(7uLL, v34->CancelIrql);
        v35 = Irp;
        if ( Irp->Cancel )
        {
          v34->IoStatus.Information = 0LL;
          v34->IoStatus.Status = -1073741536;
        }
        else
        {
          MasterIrp = Irp->AssociatedIrp.MasterIrp;
          v54 = MasterIrp;
          *(_OWORD *)&MasterIrp->Type = 0LL;
          *(_QWORD *)&MasterIrp->Flags = 0LL;
          *(_DWORD *)&MasterIrp->Type = 1572865;
          *(_DWORD *)(&MasterIrp->Size + 1) = (*((_DWORD *)Oplock + 36) >> 12) & 7;
          LODWORD(MasterIrp->MdlAddress) = (a6 >> 12) & 7;
          v34->IoStatus.Information = 24LL;
          v34->IoStatus.Status = 533;
        }
        IofCompleteRequest(v35, 1);
        *Oplock = 0LL;
        ObfDereferenceObjectWithTag((PVOID)Oplock[1], 0x746C6644u);
        Oplock[1] = 0LL;
        goto LABEL_106;
      }
    }
LABEL_44:
    v10 = -1073741598;
    goto LABEL_15;
  }
  if ( (v30 & 0x10) != 0 && (a6 & 0x7000) != 0
    || (v30 & 0x80u) != 0 && (v31 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), Oplock[1], 0), LOBYTE(v24) = 0, !v31) )
  {
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_43;
    goto LABEL_44;
  }
  v32 = Oplock[18] & 0x1F0FFDF;
  if ( v32 == 16 || v32 == 4096 || v32 == 4112 )
  {
    FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)Oplock[5], 0, 0, (__int64)Oplock);
    LOBYTE(v24) = 0;
  }
  if ( (unsigned int)v48 > 1 && (Oplock[18] & 1) != 0 && (a5 & 1) == 0 )
  {
    v10 = -1073741598;
    if ( !a3 )
      goto LABEL_110;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) != (_BYTE)v24 && (a6 & 0x2000) != 0 )
  {
    if ( (a6 & 0x10000) == 0 )
      goto LABEL_14;
LABEL_43:
    v10 = -1073739511;
    goto LABEL_110;
  }
LABEL_106:
  *Oplock = a3;
  Oplock[1] = *(_QWORD *)(a2 + 48);
  FsRtlpClearOwner((__int64)Oplock, 0LL);
  Oplock[2] = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Oplock[3] = CurrentThread;
  ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  *((_BYTE *)Oplock + 32) = 0;
  *((_DWORD *)Oplock + 36) = a6 | Oplock[18] & 0x20;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
  *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
  *(_QWORD *)(a3 + 56) = Oplock;
  *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( *(_BYTE *)(a3 + 68) )
  {
    LOBYTE(v46) = 1;
    LOBYTE(v45) = 1;
    FsRtlpCancelExclusiveIrp(a3, v45, v46);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    FsRtlpOplockTryPrepForAckTimeout(Oplock, Oplock[1], a3, Oplock + 20, Oplock + 22);
  }
  v10 = 259;
LABEL_110:
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)Oplock[19]);
  return v10;
}
