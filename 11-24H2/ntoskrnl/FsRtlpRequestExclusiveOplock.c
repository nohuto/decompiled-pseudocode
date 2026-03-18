/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x1404E4608
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     MmDoesFileHaveUserWritableReferences @ 0x14022E6E0 (MmDoesFileHaveUserWritableReferences.c)
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140330A70 (FsRtlpComputeShareableOplockState.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     _tlgWriteAgg @ 0x1403D06F8 (_tlgWriteAgg.c)
 *     FsRtlpOplockKeysEqual @ 0x1403DA0A0 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403DC8D4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     FsRtlpOplockDequeueRH @ 0x140459914 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14046D804 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x140580D80 (FsRtlpFreeRHOpContext.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A15260 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140A28938 (FsRtlpAllocateOplock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r12d
  __int64 v9; // r15
  unsigned int v11; // ebx
  char v12; // r13
  _QWORD *Oplock; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r11d
  _QWORD *v18; // rbx
  __int64 v19; // r10
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 *i; // r14
  _QWORD *v23; // rcx
  _QWORD *v24; // r14
  __int64 v25; // r10
  __int64 v26; // rcx
  _QWORD *v27; // rax
  SECTION_OBJECT_POINTERS *v28; // rcx
  int v29; // r10d
  ULONG HaveUserWritableReferences; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r10d
  bool v34; // zf
  int v35; // ecx
  char v36; // al
  int v37; // eax
  int v38; // ecx
  PIRP v39; // r15
  IRP *v40; // rcx
  struct _IRP *MasterIrp; // rdx
  _QWORD *m; // rbx
  char v43; // al
  _QWORD *v44; // rcx
  _QWORD **v45; // rbx
  _QWORD *j; // r15
  _QWORD *k; // rcx
  _QWORD **v48; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rcx
  _QWORD *v55; // [rsp+48h] [rbp-F0h] BYREF
  int v56; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-E0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+70h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+78h] [rbp-C0h]
  struct _IRP *v61; // [rsp+80h] [rbp-B8h]
  char v62[32]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 *v63; // [rsp+B0h] [rbp-88h]
  __int64 v64; // [rsp+B8h] [rbp-80h]
  int *v65; // [rsp+C0h] [rbp-78h]
  __int64 v66; // [rsp+C8h] [rbp-70h]
  _QWORD *v67; // [rsp+D0h] [rbp-68h]
  __int64 v68; // [rsp+D8h] [rbp-60h]
  __int64 *v69; // [rsp+E0h] [rbp-58h]
  __int64 v70; // [rsp+E8h] [rbp-50h]

  v7 = a4;
  LODWORD(v55) = a4;
  v9 = a2;
  v57 = a2;
  v11 = 0;
  v56 = 0;
  v12 = 0;
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
    && *(_BYTE *)v9 == 13
    && FsRtlpCallerIsAtomicRequestor((__int64)Oplock, *(_QWORD *)(v9 + 48), P) )
  {
    if ( (v17 & 0x20000) != 0 )
    {
      v18 = P[0];
      FsRtlpOplockDequeueRH((__int64)P[0], v14);
      v20 = v18[7];
      v21 = (_QWORD *)v18[8];
      if ( *(_QWORD **)(v20 + 8) != v18 + 7 || (_QWORD *)*v21 != v18 + 7 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      if ( (_QWORD *)Oplock[15] == Oplock + 15 )
        *((_DWORD *)Oplock + 36) &= 0xFFFCFFFF;
      if ( v18[5] != v19 )
        FsRtlpClearOwner((__int64)Oplock, (__int64)v18);
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v20) )
        FsRtlpFreeRHOpContext(v18);
      else
        ExFreePoolWithTag(v18, 0);
      P[0] = 0LL;
      FsRtlpComputeShareableOplockState((__int64)Oplock);
      goto LABEL_17;
    }
    for ( i = (__int64 *)Oplock[11]; i != Oplock + 11; i = (__int64 *)*i )
    {
      v23 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v23, v14, v15, v16);
      }
    }
    v24 = P[0];
    FsRtlpOplockDequeueRH((__int64)P[0], v14);
    v26 = v24[7];
    v27 = (_QWORD *)v24[8];
    if ( *(_QWORD **)(v26 + 8) != v24 + 7 || (_QWORD *)*v27 != v24 + 7 )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    if ( (_QWORD *)Oplock[15] == Oplock + 15 )
      *((_DWORD *)Oplock + 36) &= 0xFFFCFFFF;
    if ( v24[5] != v25 )
      FsRtlpClearOwner((__int64)Oplock, (__int64)v24);
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v26) )
      FsRtlpFreeRHOpContext(v24);
    else
      ExFreePoolWithTag(v24, 0);
    P[0] = 0LL;
    FsRtlpComputeShareableOplockState((__int64)Oplock);
    v9 = v57;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
LABEL_17:
    v11 = -1073741598;
LABEL_18:
    *(_DWORD *)(a3 + 48) = v11;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_123;
  }
  if ( (a6 & 0x1000) != 0 )
  {
    v28 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(v9 + 48) + 40LL);
    if ( v28 )
    {
      HaveUserWritableReferences = MmDoesFileHaveUserWritableReferences(v28);
      v29 = 0;
      if ( HaveUserWritableReferences )
      {
        v31 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v31 + 8) = 0;
        *(_DWORD *)(v31 + 12) |= 4u;
        if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL) )
        {
          v57 = 1LL;
          v63 = &v57;
          v64 = 8LL;
          v56 = a6;
          v65 = &v56;
          v66 = v32;
          LODWORD(v55) = *((_DWORD *)Oplock + 36);
          v67 = &v55;
          v68 = v32;
          v59 = 0x1000000LL;
          v69 = &v59;
          v70 = 8LL;
          tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_140044F0F, v32, v33 + 6, (__int64)v62);
        }
        goto LABEL_17;
      }
    }
  }
  if ( a6 == 200 )
  {
    *Oplock = a3;
    Oplock[1] = *(_QWORD *)(v9 + 48);
    v34 = (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v28) == 0;
    *((_DWORD *)Oplock + 36) = Oplock[18] & 0x20 | 0xC8;
    if ( !v34 )
    {
      v11 = v56;
      v12 = 0;
    }
    goto LABEL_116;
  }
  v35 = *((_DWORD *)Oplock + 36);
  if ( (v35 & 0x91) == 0 )
  {
    if ( (v35 & 0x7000) == 0 || (v35 & 0x1F00F00) != 0 || (_QWORD *)Oplock[9] != Oplock + 9 )
    {
      if ( (a6 & 0x10000) == 0 )
      {
        v11 = -1073741598;
        if ( a3 )
        {
          *(_DWORD *)(a3 + 48) = -1073741598;
          IofCompleteRequest((PIRP)a3, 1);
        }
        v56 = -1073741598;
LABEL_116:
        if ( !v12 )
          goto LABEL_123;
LABEL_117:
        v9 = v57;
        goto LABEL_118;
      }
LABEL_52:
      v11 = -1073739511;
      goto LABEL_123;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_52;
    if ( (a6 & 0x7000) == 0 || *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) != (_BYTE)v29 && (a6 & 0x2000) != 0 )
      goto LABEL_17;
    v38 = v35 & 0x1F0FFDF;
    if ( v38 == 4096 )
    {
      if ( ((a6 - 20544) & 0xFFFFDFFF) == 0 )
      {
        for ( j = (_QWORD *)Oplock[5]; j != Oplock + 5; j = (_QWORD *)*j )
        {
          v59 = j[2];
          if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(v57 + 48), *(_QWORD *)(v59 + 48), 0) )
            goto LABEL_101;
        }
        if ( (unsigned int)v55 > 1 && (a5 & 1) == 0 )
          goto LABEL_17;
        for ( k = (_QWORD *)Oplock[5]; ; k = *v48 )
        {
          v55 = k;
          if ( k == Oplock + 5 )
            break;
          v48 = (_QWORD **)k[1];
          FsRtlpRemoveAndCompleteReadOnlyIrp(*v48, 533, a6 & 0x7000, (__int64)Oplock);
        }
        v12 = 1;
        goto LABEL_116;
      }
    }
    else
    {
      if ( v38 != 12288 )
      {
        if ( v38 != 20544 && (v38 != 28736 || a6 != 28736)
          || ((a6 - 20544) & 0xFFFFDFFF) != 0
          || !FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), Oplock[1], 0) )
        {
          goto LABEL_17;
        }
        Irp = (PIRP)*Oplock;
        v39 = Irp;
        v39->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)&v39->CancelRoutine, 0LL);
        KeReleaseQueuedSpinLock(7uLL, v39->CancelIrql);
        v40 = Irp;
        if ( Irp->Cancel )
        {
          v39->IoStatus.Information = 0LL;
          v39->IoStatus.Status = -1073741536;
        }
        else
        {
          MasterIrp = Irp->AssociatedIrp.MasterIrp;
          v61 = MasterIrp;
          *(_OWORD *)&MasterIrp->Type = 0LL;
          *(_QWORD *)&MasterIrp->Flags = 0LL;
          *(_DWORD *)&MasterIrp->Type = 1572865;
          *(_DWORD *)(&MasterIrp->Size + 1) = (*((_DWORD *)Oplock + 36) >> 12) & 7;
          LODWORD(MasterIrp->MdlAddress) = (a6 >> 12) & 7;
          v39->IoStatus.Information = 24LL;
          v39->IoStatus.Status = 533;
        }
        IofCompleteRequest(v40, 1);
        *Oplock = 0LL;
        ObfDereferenceObjectWithTag((PVOID)Oplock[1], 0x746C6644u);
        Oplock[1] = 0LL;
        goto LABEL_117;
      }
      if ( a6 == 28736 )
      {
        for ( m = (_QWORD *)Oplock[7]; m != Oplock + 7; m = (_QWORD *)*m )
        {
          v43 = FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), m[3], 0);
          v29 = 0;
          if ( !v43 )
            goto LABEL_101;
          if ( m[7] )
          {
            v11 = -1073741597;
            goto LABEL_18;
          }
        }
        if ( (unsigned int)v55 > 1 && (a5 & 1) == 0 )
          goto LABEL_17;
        v44 = (_QWORD *)Oplock[7];
        while ( 1 )
        {
          v55 = v44;
          if ( v44 == Oplock + 7 )
            break;
          v45 = (_QWORD **)v44[1];
          FsRtlpRemoveAndCompleteRHIrp(*v45, (__int64)Oplock, 533, 0x7000u, v29, v29, v29, v29);
          v44 = *v45;
          v29 = 0;
        }
        goto LABEL_118;
      }
    }
LABEL_101:
    v11 = -1073741598;
    goto LABEL_18;
  }
  if ( (v35 & 0x10) != 0 )
  {
    if ( (a6 & 0x7000) != 0 )
      goto LABEL_51;
    v7 = (unsigned int)v55;
  }
  if ( (v35 & 0x80u) != 0 )
  {
    v36 = FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), Oplock[1], 0);
    LOBYTE(v29) = 0;
    if ( !v36 )
    {
LABEL_51:
      if ( (a6 & 0x10000) == 0 )
        goto LABEL_17;
      goto LABEL_52;
    }
  }
  v37 = Oplock[18] & 0x1F0FFDF;
  if ( v37 == 16 || v37 == 4096 || v37 == 4112 )
  {
    FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)Oplock[5], 0, 0, (__int64)Oplock);
    LOBYTE(v29) = 0;
  }
  if ( v7 > 1 && (Oplock[18] & 1) != 0 && (a5 & 1) == 0 )
  {
    v11 = -1073741598;
    if ( !a3 )
      goto LABEL_123;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) != (_BYTE)v29 && (a6 & 0x2000) != 0 )
  {
    if ( (a6 & 0x10000) == 0 )
      goto LABEL_17;
    goto LABEL_52;
  }
LABEL_118:
  *Oplock = a3;
  Oplock[1] = *(_QWORD *)(v9 + 48);
  FsRtlpClearOwner((__int64)Oplock, 0LL);
  Oplock[2] = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Oplock[3] = CurrentThread;
  ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  *((_BYTE *)Oplock + 32) = 0;
  Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v50);
  *((_DWORD *)Oplock + 36) = a6 | Oplock[18] & 0x20;
  ObfReferenceObjectWithTag(*(PVOID *)(v9 + 48), 0x746C6644u);
  *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
  *(_QWORD *)(a3 + 56) = Oplock;
  *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( *(_BYTE *)(a3 + 68) )
  {
    LOBYTE(v52) = 1;
    LOBYTE(v51) = 1;
    FsRtlpCancelExclusiveIrp(a3, v51, v52);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v53) )
      FsRtlpOplockTryPrepForAckTimeout(Oplock, Oplock[1], a3, Oplock + 20, Oplock + 22);
  }
  v11 = 259;
LABEL_123:
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)Oplock[19]);
  return v11;
}
