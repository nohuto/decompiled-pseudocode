/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x1409E0F60
 * Callers:
 *     FsRtlUpperOplockFsctrl @ 0x140709000 (FsRtlUpperOplockFsctrl.c)
 *     FsRtlOplockFsctrl @ 0x1409E0F20 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x1409E0F40 (FsRtlOplockFsctrlEx.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402B8E90 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403B48A0 (ObDereferenceObjectDeferDelete.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     FsRtlpAttachOplockKey @ 0x1403CD800 (FsRtlpAttachOplockKey.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx @ 0x1403CE7A0 (FsRtlCheckOplockEx.c)
 *     IoIsOperationSynchronous @ 0x140412360 (IoIsOperationSynchronous.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x1404683A4 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404DA8E8 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057DC84 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070919C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1407092D0 (FsRtlpOplockBreakNotify.c)
 *     FsRtlpAllocateOplock @ 0x1409E1594 (FsRtlpAllocateOplock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(PFAST_MUTEX **Oplock, PIRP Irp, int a3, int a4, unsigned int a5)
{
  unsigned int v8; // edi
  void *Pool2; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v11; // edi
  ULONG LowPart; // eax
  struct _IRP *MasterIrp; // r13
  int MdlAddress; // eax
  int v15; // edi
  int v16; // eax
  PVOID *v17; // rcx
  _QWORD *v18; // rax
  void *v19; // rcx
  ULONG Options; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PFAST_MUTEX *v24; // r15
  _QWORD *v25; // rax
  void *v26; // rcx
  int v27; // ecx
  unsigned int v29; // edi
  int v30; // r12d
  int v31; // edi
  PVOID *v32; // rcx
  char v33; // r9
  PFAST_MUTEX *v34; // rdi
  char *v35; // rbx
  _QWORD **v36; // rcx
  PVOID *v37; // rax
  int v38; // [rsp+40h] [rbp-58h]
  int v39; // [rsp+44h] [rbp-54h]
  PVOID P[9]; // [rsp+50h] [rbp-48h] BYREF
  PVOID v41; // [rsp+A8h] [rbp+10h] BYREF
  int v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v8 = 0;
  Pool2 = 0LL;
  P[0] = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100000) != 0 )
    {
      if ( a3 != 1
        || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) != 0
        || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) != 7 )
      {
        return (unsigned int)-1073741598;
      }
      v8 = FsRtlpAttachOplockKey(Irp);
      if ( !v8 )
        return (unsigned int)FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 1, 0, 0xC8u, a5);
    }
    else if ( (Options & 0x10000) != 0 )
    {
      v8 = FsRtlpAttachOplockKey(Irp);
      if ( !v8 )
      {
        v24 = *Oplock;
        if ( !*Oplock )
        {
          v24 = (PFAST_MUTEX *)FsRtlpAllocateOplock(v23, v22);
          *Oplock = v24;
        }
        v41 = v24;
        ExAcquireFastMutexUnsafe(v24[19]);
        v8 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
        if ( !v8 )
        {
          P[0] = (PVOID)ExAllocatePool2(0x120uLL, 0x60uLL, 0x6F725346u);
          v8 = FsRtlpRequestShareableOplock(
                 (__int64 *)Oplock,
                 (__int64)CurrentStackLocation,
                 0LL,
                 0x10000u,
                 (_QWORD **)P,
                 0,
                 0,
                 a5);
        }
        v25 = P[0];
        if ( P[0] )
        {
          v26 = (void *)*((_QWORD *)P[0] + 5);
          *((_QWORD *)P[0] + 5) = 0LL;
          v25[4] = 0LL;
          if ( v26 )
            ObDereferenceObjectDeferDelete(v26);
          FsRtlpFreeRHOpContext((char *)P[0], 0);
        }
        ExReleaseFastMutexUnsafe(v24[19]);
      }
    }
    return v8;
  }
  v11 = 2;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart != 590400 )
  {
    switch ( LowPart )
    {
      case 0x90000u:
        goto LABEL_41;
      case 0x90004u:
        if ( a3
          || IoIsOperationSynchronous(Irp)
          || (Irp->Flags & 0x40) != 0
          || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
        {
          goto LABEL_42;
        }
        return (unsigned int)FsRtlpRequestShareableOplock(
                               (__int64 *)Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               0x10u,
                               0LL,
                               1,
                               0,
                               a5);
      case 0x90008u:
        goto LABEL_45;
      case 0x9000Cu:
        v33 = 1;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(
                               (__int64)*Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               v33,
                               a5);
      case 0x90010u:
        return (unsigned int)FsRtlpOpBatchBreakClosePending((__int64)*Oplock, (__int64)CurrentStackLocation, Irp);
      case 0x90014u:
        return (unsigned int)FsRtlpOplockBreakNotify((__int64)*Oplock, 0x140000000LL, Irp);
      case 0x90050u:
        v33 = 0;
        return (unsigned int)FsRtlpAcknowledgeOplockBreak(
                               (__int64)*Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               v33,
                               a5);
      case 0x9005Cu:
        v11 = 4;
LABEL_45:
        v11 *= 2;
LABEL_41:
        v29 = v11 | 0x40;
        if ( a3 != 1
          || IoIsOperationSynchronous(Irp)
          || (Irp->Flags & 0x40) != 0
          || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
        {
          goto LABEL_42;
        }
        v8 = FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, (__int64)Irp, 1, 0, v29, a5);
        break;
      default:
        goto LABEL_70;
    }
    return v8;
  }
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC || CurrentStackLocation->Parameters.Read.Length < 0x18 )
  {
    v8 = -1073741789;
    goto LABEL_57;
  }
  if ( MasterIrp->Type > 1u )
    goto LABEL_56;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (MdlAddress & 1) != 0 )
  {
    v15 = *(_DWORD *)(&MasterIrp->Size + 1);
    v39 = (v15 & 1) << 12;
    LODWORD(v41) = v15 & 4;
    v38 = (v15 & 2) << 12;
    v16 = v39 | v38 | ((_DWORD)v41 != 0 ? 0x4000 : 0);
    if ( v16 == 12288 )
    {
LABEL_8:
      if ( !a3 && !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        if ( v39 & 0x2000 | v38 & 0x2000 )
        {
          Pool2 = (void *)ExAllocatePool2(0x120uLL, 0x60uLL, 0x6F725346u);
          P[0] = Pool2;
          v15 = *(_DWORD *)(&MasterIrp->Size + 1);
        }
        v17 = P;
        if ( !Pool2 )
          v17 = 0LL;
        v8 = FsRtlpRequestShareableOplock(
               (__int64 *)Oplock,
               (__int64)CurrentStackLocation,
               (__int64)Irp,
               ((v15 & 1) << 12) | ((unsigned __int8)(v15 & 6) << 12),
               (_QWORD **)v17,
               1,
               0,
               a5);
        v18 = P[0];
        if ( P[0] )
        {
          v19 = (void *)*((_QWORD *)P[0] + 5);
          *((_QWORD *)P[0] + 5) = 0LL;
          v18[4] = 0LL;
          if ( v19 )
            ObDereferenceObjectDeferDelete(v19);
          FsRtlpFreeRHOpContext((char *)P[0], 0);
        }
        return v8;
      }
      goto LABEL_42;
    }
    if ( v16 )
    {
      if ( v16 != 28672 )
      {
        if ( v16 == 4096 )
          goto LABEL_8;
        if ( v16 != 20480 )
        {
LABEL_70:
          v8 = -1073741811;
          Irp->IoStatus.Status = -1073741811;
          IofCompleteRequest(Irp, 1);
          return v8;
        }
      }
      if ( IoIsOperationSynchronous(Irp) || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      {
LABEL_42:
        v8 = -1073741598;
        Irp->IoStatus.Status = -1073741598;
LABEL_43:
        IofCompleteRequest(Irp, 1);
        return v8;
      }
      v27 = 16448;
      if ( !(_DWORD)v41 )
        v27 = 64;
      return (unsigned int)FsRtlpRequestExclusiveOplock(
                             Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             a3,
                             v42,
                             v39 | v38 | (unsigned int)v27,
                             a5);
    }
    v34 = *Oplock;
    if ( *Oplock )
    {
      v41 = 0LL;
      if ( ((_DWORD)v34[18] & 0x10000) != 0 )
      {
        if ( FsRtlpCallerIsAtomicRequestor((__int64)v34, (__int64)CurrentStackLocation->FileObject, &v41) )
        {
          v35 = (char *)v41;
          FsRtlpOplockDequeueRH((__int64)v41);
          v36 = (_QWORD **)*((_QWORD *)v35 + 7);
          v37 = (PVOID *)*((_QWORD *)v35 + 8);
          if ( v36[1] != (_QWORD *)(v35 + 56) || *v37 != v35 + 56 )
            __fastfail(3u);
          *v37 = v36;
          v36[1] = v37;
          if ( v34[15] == (PFAST_MUTEX)(v34 + 15) )
            *((_DWORD *)v34 + 36) &= 0xFFFCFFFF;
          if ( *((_QWORD *)v35 + 5) )
            FsRtlpClearOwner((__int64)v34, (__int64)v35);
          FsRtlpFreeRHOpContext(v35, 1);
          FsRtlpComputeShareableOplockState((__int64)v34);
          FsRtlpReleaseIrpsWaitingForRH((__int64)v34);
        }
      }
    }
LABEL_98:
    Irp->IoStatus.Status = 0;
    IofCompleteRequest(Irp, 1);
    return 0;
  }
  if ( (MdlAddress & 2) == 0
    || (v30 = *(_DWORD *)(&MasterIrp->Size + 1), v31 = ((v30 & 1) << 12) | ((v30 & 6) << 12), v31 != 28672)
    && v31
    && v31 != 4096
    && v31 != 12288
    && v31 != 20480 )
  {
LABEL_56:
    v8 = -1073741811;
LABEL_57:
    Irp->IoStatus.Status = v8;
    goto LABEL_43;
  }
  if ( IoIsOperationSynchronous(Irp) )
    goto LABEL_70;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
  {
    *(_OWORD *)&MasterIrp->Type = 0LL;
    *(_QWORD *)&MasterIrp->Flags = 0LL;
    *(_DWORD *)&MasterIrp->Type = 1572865;
    Irp->IoStatus.Information = 24LL;
    goto LABEL_98;
  }
  if ( (v31 & 0x2000) != 0 )
  {
    Pool2 = (void *)ExAllocatePool2(0x120uLL, 0x60uLL, 0x6F725346u);
    P[0] = Pool2;
    v30 = *(_DWORD *)(&MasterIrp->Size + 1);
  }
  v32 = P;
  if ( !Pool2 )
    v32 = 0LL;
  v8 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
         (__int64)*Oplock,
         (__int64)CurrentStackLocation,
         (__int64)Irp,
         ((v30 & 1) << 12) | ((unsigned __int8)(v30 & 6) << 12),
         v32,
         a5);
  if ( P[0] )
  {
    FsRtlpClearOwner((__int64)*Oplock, (__int64)P[0]);
    FsRtlpFreeRHOpContext((char *)P[0], 0);
  }
  return v8;
}
