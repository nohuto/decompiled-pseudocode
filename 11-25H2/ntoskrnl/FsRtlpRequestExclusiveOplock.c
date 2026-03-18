/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x1404E552C
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     MmDoesFileHaveUserWritableReferences @ 0x140218410 (MmDoesFileHaveUserWritableReferences.c)
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     FsRtlpOplockKeysEqual @ 0x1403EE550 (FsRtlpOplockKeysEqual.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     FsRtlpOplockDequeueRH @ 0x14045A5B0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14046F010 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404A9C7C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1404E18C8 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpFreeRHOpContext @ 0x14057D960 (FsRtlpFreeRHOpContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A0BC94 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140A1F320 (FsRtlpAllocateOplock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        __int64 **a1,
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
  __int64 *Oplock; // rsi
  __int64 v14; // rdx
  int v15; // r11d
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 i; // r14
  _QWORD *v23; // rcx
  _QWORD *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // rcx
  _QWORD *v29; // rax
  SECTION_OBJECT_POINTERS *v30; // rcx
  int v31; // r10d
  ULONG HaveUserWritableReferences; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r10d
  bool v36; // zf
  int v37; // ecx
  char v38; // al
  int v39; // eax
  int v40; // ecx
  PIRP v41; // r15
  IRP *v42; // rcx
  struct _IRP *MasterIrp; // rdx
  __int64 *m; // rbx
  char v45; // al
  __int64 *v46; // rcx
  __int64 **v47; // rbx
  __int64 *j; // r15
  __int64 *k; // rcx
  __int64 **v50; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 *v57; // [rsp+48h] [rbp-F0h] BYREF
  int v58; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-E0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v61; // [rsp+70h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+78h] [rbp-C0h]
  struct _IRP *v63; // [rsp+80h] [rbp-B8h]
  char v64[32]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 *v65; // [rsp+B0h] [rbp-88h]
  __int64 v66; // [rsp+B8h] [rbp-80h]
  int *v67; // [rsp+C0h] [rbp-78h]
  __int64 v68; // [rsp+C8h] [rbp-70h]
  __int64 **v69; // [rsp+D0h] [rbp-68h]
  __int64 v70; // [rsp+D8h] [rbp-60h]
  __int64 *v71; // [rsp+E0h] [rbp-58h]
  __int64 v72; // [rsp+E8h] [rbp-50h]

  v7 = a4;
  LODWORD(v57) = a4;
  v9 = a2;
  v59 = a2;
  v11 = 0;
  v58 = 0;
  v12 = 0;
  P[0] = 0LL;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = (__int64 *)FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  P[1] = Oplock;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)Oplock[19]);
  if ( (Oplock[18] & 0x10000) != 0
    && *(_BYTE *)v9 == 13
    && FsRtlpCallerIsAtomicRequestor((__int64)Oplock, *(_QWORD *)(v9 + 48), P) )
  {
    if ( (v15 & 0x20000) != 0 )
    {
      v16 = P[0];
      FsRtlpOplockDequeueRH((__int64)P[0], v14);
      v20 = v16[7];
      v21 = (_QWORD *)v16[8];
      if ( *(_QWORD **)(v20 + 8) != v16 + 7 || (_QWORD *)*v21 != v16 + 7 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      if ( (__int64 *)Oplock[15] == Oplock + 15 )
        *((_DWORD *)Oplock + 36) &= 0xFFFCFFFF;
      if ( v16[5] != v19 )
        FsRtlpClearOwner((__int64)Oplock, (__int64)v16);
      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v20, v17, v18) )
        FsRtlpFreeRHOpContext(v16);
      else
        ExFreePoolWithTag(v16, 0);
      P[0] = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_17;
    }
    for ( i = Oplock[11]; (__int64 *)i != Oplock + 11; i = *(_QWORD *)i )
    {
      v23 = (_QWORD *)i;
      if ( !*(_BYTE *)(i + 53) )
      {
        i = *(_QWORD *)(i + 8);
        FsRtlpRemoveAndCompleteWaitingIrp(v23);
      }
    }
    v24 = P[0];
    FsRtlpOplockDequeueRH((__int64)P[0], v14);
    v28 = v24[7];
    v29 = (_QWORD *)v24[8];
    if ( *(_QWORD **)(v28 + 8) != v24 + 7 || (_QWORD *)*v29 != v24 + 7 )
      __fastfail(3u);
    *v29 = v28;
    *(_QWORD *)(v28 + 8) = v29;
    if ( (__int64 *)Oplock[15] == Oplock + 15 )
      *((_DWORD *)Oplock + 36) &= 0xFFFCFFFF;
    if ( v24[5] != v27 )
      FsRtlpClearOwner((__int64)Oplock, (__int64)v24);
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v28, v25, v26) )
      FsRtlpFreeRHOpContext(v24);
    else
      ExFreePoolWithTag(v24, 0);
    P[0] = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v9 = v59;
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
    v30 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(v9 + 48) + 40LL);
    if ( v30 )
    {
      HaveUserWritableReferences = MmDoesFileHaveUserWritableReferences(v30);
      v31 = 0;
      if ( HaveUserWritableReferences )
      {
        v33 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v33 + 8) = 0;
        *(_DWORD *)(v33 + 12) |= 4u;
        if ( (unsigned int)dword_140E06C30 > 5 && tlgKeywordOn((__int64)&dword_140E06C30, 0x400000000000LL) )
        {
          v59 = 1LL;
          v65 = &v59;
          v66 = 8LL;
          v58 = a6;
          v67 = &v58;
          v68 = v34;
          LODWORD(v57) = *((_DWORD *)Oplock + 36);
          v69 = &v57;
          v70 = v34;
          v61 = 0x1000000LL;
          v71 = &v61;
          v72 = 8LL;
          tlgWriteAgg((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_1400449A7, v34, v35 + 6, (__int64)v64);
        }
        goto LABEL_17;
      }
    }
  }
  if ( a6 == 200 )
  {
    *Oplock = a3;
    Oplock[1] = *(_QWORD *)(v9 + 48);
    v36 = (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v30) == 0;
    *((_DWORD *)Oplock + 36) = Oplock[18] & 0x20 | 0xC8;
    if ( !v36 )
    {
      v11 = v58;
      v12 = 0;
    }
    goto LABEL_116;
  }
  v37 = *((_DWORD *)Oplock + 36);
  if ( (v37 & 0x91) == 0 )
  {
    if ( (v37 & 0x7000) == 0 || (v37 & 0x1F00F00) != 0 || (__int64 *)Oplock[9] != Oplock + 9 )
    {
      if ( (a6 & 0x10000) == 0 )
      {
        v11 = -1073741598;
        if ( a3 )
        {
          *(_DWORD *)(a3 + 48) = -1073741598;
          IofCompleteRequest((PIRP)a3, 1);
        }
        v58 = -1073741598;
LABEL_116:
        if ( !v12 )
          goto LABEL_123;
LABEL_117:
        v9 = v59;
        goto LABEL_118;
      }
LABEL_52:
      v11 = -1073739511;
      goto LABEL_123;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_52;
    if ( (a6 & 0x7000) == 0 || *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) != (_BYTE)v31 && (a6 & 0x2000) != 0 )
      goto LABEL_17;
    v40 = v37 & 0x1F0FFDF;
    if ( v40 == 4096 )
    {
      if ( ((a6 - 20544) & 0xFFFFDFFF) == 0 )
      {
        for ( j = (__int64 *)Oplock[5]; j != Oplock + 5; j = (__int64 *)*j )
        {
          v61 = j[2];
          if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(v59 + 48), *(_QWORD *)(v61 + 48), 0) )
            goto LABEL_101;
        }
        if ( (unsigned int)v57 > 1 && (a5 & 1) == 0 )
          goto LABEL_17;
        for ( k = (__int64 *)Oplock[5]; ; k = *v50 )
        {
          v57 = k;
          if ( k == Oplock + 5 )
            break;
          v50 = (__int64 **)k[1];
          FsRtlpRemoveAndCompleteReadOnlyIrp(*v50, 533, a6 & 0x7000, (__int64)Oplock);
        }
        v12 = 1;
        goto LABEL_116;
      }
    }
    else
    {
      if ( v40 != 12288 )
      {
        if ( v40 != 20544 && (v40 != 28736 || a6 != 28736)
          || ((a6 - 20544) & 0xFFFFDFFF) != 0
          || !FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), Oplock[1], 0) )
        {
          goto LABEL_17;
        }
        Irp = (PIRP)*Oplock;
        v41 = Irp;
        v41->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)&v41->CancelRoutine, 0LL);
        KeReleaseQueuedSpinLock(7uLL, v41->CancelIrql);
        v42 = Irp;
        if ( Irp->Cancel )
        {
          v41->IoStatus.Information = 0LL;
          v41->IoStatus.Status = -1073741536;
        }
        else
        {
          MasterIrp = Irp->AssociatedIrp.MasterIrp;
          v63 = MasterIrp;
          *(_OWORD *)&MasterIrp->Type = 0LL;
          *(_QWORD *)&MasterIrp->Flags = 0LL;
          *(_DWORD *)&MasterIrp->Type = 1572865;
          *(_DWORD *)(&MasterIrp->Size + 1) = (*((_DWORD *)Oplock + 36) >> 12) & 7;
          LODWORD(MasterIrp->MdlAddress) = (a6 >> 12) & 7;
          v41->IoStatus.Information = 24LL;
          v41->IoStatus.Status = 533;
        }
        IofCompleteRequest(v42, 1);
        *Oplock = 0LL;
        ObfDereferenceObjectWithTag((PVOID)Oplock[1], 0x746C6644u);
        Oplock[1] = 0LL;
        goto LABEL_117;
      }
      if ( a6 == 28736 )
      {
        for ( m = (__int64 *)Oplock[7]; m != Oplock + 7; m = (__int64 *)*m )
        {
          v45 = FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), m[3], 0);
          v31 = 0;
          if ( !v45 )
            goto LABEL_101;
          if ( m[7] )
          {
            v11 = -1073741597;
            goto LABEL_18;
          }
        }
        if ( (unsigned int)v57 > 1 && (a5 & 1) == 0 )
          goto LABEL_17;
        v46 = (__int64 *)Oplock[7];
        while ( 1 )
        {
          v57 = v46;
          if ( v46 == Oplock + 7 )
            break;
          v47 = (__int64 **)v46[1];
          FsRtlpRemoveAndCompleteRHIrp(*v47, (__int64)Oplock, 533, 0x7000u, v31, v31, v31, v31);
          v46 = *v47;
          v31 = 0;
        }
        goto LABEL_118;
      }
    }
LABEL_101:
    v11 = -1073741598;
    goto LABEL_18;
  }
  if ( (v37 & 0x10) != 0 )
  {
    if ( (a6 & 0x7000) != 0 )
      goto LABEL_51;
    v7 = (unsigned int)v57;
  }
  if ( (v37 & 0x80u) != 0 )
  {
    v38 = FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), Oplock[1], 0);
    LOBYTE(v31) = 0;
    if ( !v38 )
    {
LABEL_51:
      if ( (a6 & 0x10000) == 0 )
        goto LABEL_17;
      goto LABEL_52;
    }
  }
  v39 = Oplock[18] & 0x1F0FFDF;
  if ( v39 == 16 || v39 == 4096 || v39 == 4112 )
  {
    FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)Oplock[5], 0, 0, (__int64)Oplock);
    LOBYTE(v31) = 0;
  }
  if ( v7 > 1 && (Oplock[18] & 1) != 0 && (a5 & 1) == 0 )
  {
    v11 = -1073741598;
    if ( !a3 )
      goto LABEL_123;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) != (_BYTE)v31 && (a6 & 0x2000) != 0 )
  {
    if ( (a6 & 0x10000) == 0 )
      goto LABEL_17;
    goto LABEL_52;
  }
LABEL_118:
  *Oplock = a3;
  Oplock[1] = *(_QWORD *)(v9 + 48);
  FsRtlpClearOwner((__int64)Oplock, 0LL);
  Oplock[2] = (__int64)KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Oplock[3] = (__int64)CurrentThread;
  ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  *((_BYTE *)Oplock + 32) = 0;
  Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v52);
  *((_DWORD *)Oplock + 36) = a6 | Oplock[18] & 0x20;
  ObfReferenceObjectWithTag(*(PVOID *)(v9 + 48), 0x746C6644u);
  *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
  *(_QWORD *)(a3 + 56) = Oplock;
  *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( *(_BYTE *)(a3 + 68) )
  {
    FsRtlpCancelExclusiveIrp(a3, 1, 1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v54, v53, v55) )
      FsRtlpOplockTryPrepForAckTimeout(Oplock, Oplock[1], a3, Oplock + 20, Oplock + 22);
  }
  v11 = 259;
LABEL_123:
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)Oplock[19]);
  return v11;
}
