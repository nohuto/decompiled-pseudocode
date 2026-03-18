/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x140A17B60
 * Callers:
 *     FsRtlUpperOplockFsctrl @ 0x1406FF560 (FsRtlUpperOplockFsctrl.c)
 *     FsRtlOplockFsctrl @ 0x140A17B20 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x140A17B40 (FsRtlOplockFsctrlEx.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpAttachOplockKey @ 0x140375F60 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1403EE800 (FsRtlCheckOplockEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     IoIsOperationSynchronous @ 0x140420CD0 (IoIsOperationSynchronous.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14042513C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockDequeueRH @ 0x14045A5B0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057D524 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057DFDC (FsRtlpSyncWithAckTimeout.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1406FF6FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1406FF854 (FsRtlpOplockBreakNotify.c)
 *     FsRtlpAllocateOplock @ 0x140A1F320 (FsRtlpAllocateOplock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(__int64 *Oplock, PIRP Irp, unsigned int a3, char a4, unsigned int a5)
{
  unsigned int v8; // ebx
  void *Pool2; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  ULONG Options; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PFAST_MUTEX *v15; // r15
  int v16; // ebx
  unsigned int LowPart; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  struct _IRP *MasterIrp; // r15
  int MdlAddress; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // ecx
  PVOID *v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 FileObject; // rdx
  char v33; // r8
  _QWORD *v34; // rax
  _QWORD *v35; // r9
  __int64 v36; // rcx
  _QWORD *v37; // rax
  int v38; // r12d
  int v39; // ebx
  PVOID *v40; // rcx
  unsigned int v41; // ebx
  int v43; // [rsp+40h] [rbp-58h]
  int v44; // [rsp+44h] [rbp-54h]
  __int16 v45; // [rsp+48h] [rbp-50h]
  PVOID P[9]; // [rsp+50h] [rbp-48h] BYREF

  v8 = 0;
  Pool2 = 0LL;
  P[0] = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction )
  {
    v16 = 2;
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart <= 0x90010 )
    {
      if ( LowPart == 589840 )
        return (unsigned int)FsRtlpOpBatchBreakClosePending(
                               *Oplock,
                               (__int64)Irp->Tail.Overlay.CurrentStackLocation,
                               Irp);
      v18 = LowPart - 589824;
      if ( !v18 )
        goto LABEL_96;
      v19 = v18 - 4;
      if ( !v19 )
      {
        if ( !a3
          && !IoIsOperationSynchronous(Irp)
          && (Irp->Flags & 0x40) == 0
          && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
        {
          return (unsigned int)FsRtlpRequestShareableOplock(
                                 Oplock,
                                 (__int64)CurrentStackLocation,
                                 (__int64)Irp,
                                 0x10u,
                                 0LL,
                                 1,
                                 0,
                                 a5);
        }
        goto LABEL_101;
      }
      v20 = v19 - 4;
      if ( v20 )
      {
        if ( v20 == 4 )
          return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, 1, a5);
        goto LABEL_43;
      }
LABEL_95:
      v16 *= 2;
LABEL_96:
      v41 = v16 | 0x40;
      if ( a3 == 1
        && !IoIsOperationSynchronous(Irp)
        && (Irp->Flags & 0x40) == 0
        && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               (__int64 **)Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               1u,
                               0,
                               v41,
                               a5);
      }
      goto LABEL_101;
    }
    v21 = LowPart - 589844;
    if ( !v21 )
      return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, (__int64)Irp, Irp);
    v22 = v21 - 60;
    if ( !v22 )
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, 0, a5);
    v23 = v22 - 12;
    if ( !v23 )
    {
      v16 = 4;
      goto LABEL_95;
    }
    if ( v23 != 484 )
      goto LABEL_43;
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( CurrentStackLocation->Parameters.Create.Options < 0xC || CurrentStackLocation->Parameters.Read.Length < 0x18 )
    {
      v8 = -1073741789;
      Irp->IoStatus.Status = -1073741789;
      IofCompleteRequest(Irp, 1);
      return v8;
    }
    if ( MasterIrp->Type > 1u )
      goto LABEL_43;
    MdlAddress = (int)MasterIrp->MdlAddress;
    if ( (MdlAddress & 1) != 0 )
    {
      v26 = *(_DWORD *)(&MasterIrp->Size + 1);
      v43 = (v26 & 1) << 12;
      v44 = (v26 & 2) << 12;
      v27 = v43 | v44 | ((v26 & 4) != 0 ? 0x4000 : 0);
      v45 = v27;
      if ( v27 )
      {
        if ( ((v27 - 4096) & 0xFFFFDFFF) != 0 )
        {
          if ( ((v27 - 20480) & 0xFFFFDFFF) != 0 )
          {
LABEL_43:
            v8 = -1073741811;
            Irp->IoStatus.Status = -1073741811;
            IofCompleteRequest(Irp, 1);
            return v8;
          }
          if ( !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
          {
            v28 = 16448;
            if ( (v26 & 4) == 0 )
              v28 = 64;
            return (unsigned int)FsRtlpRequestExclusiveOplock(
                                   (__int64 **)Oplock,
                                   (__int64)CurrentStackLocation,
                                   (__int64)Irp,
                                   a3,
                                   a4,
                                   v44 | v43 | (unsigned int)v28,
                                   a5);
          }
LABEL_101:
          v8 = -1073741598;
          Irp->IoStatus.Status = -1073741598;
          IofCompleteRequest(Irp, 1);
          return v8;
        }
        if ( a3 || IoIsOperationSynchronous(Irp) || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
          goto LABEL_101;
        if ( (v45 & 0x2000) != 0 )
        {
          Pool2 = (void *)ExAllocatePool2(0x120uLL);
          P[0] = Pool2;
          v26 = *(_DWORD *)(&MasterIrp->Size + 1);
        }
        v29 = P;
        if ( !Pool2 )
          v29 = 0LL;
        v8 = FsRtlpRequestShareableOplock(
               Oplock,
               (__int64)CurrentStackLocation,
               (__int64)Irp,
               ((v26 & 1) << 12) | ((unsigned __int8)(v26 & 6) << 12),
               (_QWORD **)v29,
               1,
               0,
               a5);
LABEL_91:
        if ( P[0] )
        {
          FsRtlpClearOwner(*Oplock, (__int64)P[0]);
          Feature_5466_1379__private_IsEnabledDeviceUsageNoInline();
          ExFreePoolWithTag(P[0], 0);
        }
        return v8;
      }
      v30 = *Oplock;
      if ( *Oplock )
      {
        v31 = 0LL;
        if ( (*(_DWORD *)(v30 + 144) & 0x10000) != 0 )
        {
          FileObject = (__int64)CurrentStackLocation->FileObject;
          v33 = 0;
          v34 = *(_QWORD **)(v30 + 120);
          if ( v34 != (_QWORD *)(v30 + 120) )
          {
            while ( FileObject != *(v34 - 4) )
            {
              v34 = (_QWORD *)*v34;
              if ( v34 == (_QWORD *)(v30 + 120) )
                goto LABEL_64;
            }
            v33 = 1;
            v31 = (__int64)(v34 - 7);
          }
LABEL_64:
          if ( v33 )
          {
            FsRtlpOplockDequeueRH(v31, FileObject);
            v36 = *(_QWORD *)(v31 + 56);
            v37 = *(_QWORD **)(v31 + 64);
            if ( *(_QWORD *)(v36 + 8) != v31 + 56 || *v37 != v31 + 56 )
              __fastfail(3u);
            *v37 = v36;
            *(_QWORD *)(v36 + 8) = v37;
            if ( (_QWORD *)*v35 == v35 )
              *(_DWORD *)(v30 + 144) &= 0xFFFCFFFF;
            if ( *(_QWORD *)(v31 + 40) )
              FsRtlpClearOwner(v30, v31);
            if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
              FsRtlpSyncWithAckTimeout((PVOID *)(v31 + 88));
            ExFreePoolWithTag((PVOID)v31, 0);
            FsRtlpComputeShareableOplockState((__int64 *)v30);
            FsRtlpReleaseIrpsWaitingForRH(v30);
          }
        }
      }
    }
    else
    {
      if ( (MdlAddress & 2) == 0 )
        goto LABEL_43;
      v38 = *(_DWORD *)(&MasterIrp->Size + 1);
      v39 = ((v38 & 1) << 12) | ((v38 & 6) << 12);
      if ( v39 )
      {
        if ( v39 != 4096 && v39 != 12288 && v39 != 20480 && v39 != 28672 )
          goto LABEL_43;
      }
      if ( IoIsOperationSynchronous(Irp) )
      {
        v8 = -1073741811;
        Irp->IoStatus.Status = -1073741811;
        IofCompleteRequest(Irp, 1);
        return v8;
      }
      if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        if ( (v39 & 0x2000) != 0 )
        {
          Pool2 = (void *)ExAllocatePool2(0x120uLL);
          P[0] = Pool2;
          v38 = *(_DWORD *)(&MasterIrp->Size + 1);
        }
        v40 = P;
        if ( !Pool2 )
          v40 = 0LL;
        v8 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
               *Oplock,
               (__int64)CurrentStackLocation,
               (__int64)Irp,
               ((v38 & 1) << 12) | ((unsigned __int8)(v38 & 6) << 12),
               v40,
               a5);
        goto LABEL_91;
      }
      *(_OWORD *)&MasterIrp->Type = 0LL;
      *(_QWORD *)&MasterIrp->Flags = 0LL;
      *(_DWORD *)&MasterIrp->Type = 1572865;
      Irp->IoStatus.Information = 24LL;
    }
    Irp->IoStatus.Status = 0;
    IofCompleteRequest(Irp, 1);
    return 0;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (Options & 0x100000) != 0 )
  {
    if ( a3 == 1
      && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) == 0
      && (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) == 7 )
    {
      v8 = FsRtlpAttachOplockKey(Irp);
      if ( !v8 )
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               (__int64 **)Oplock,
                               (__int64)CurrentStackLocation,
                               0LL,
                               a3,
                               0,
                               0xC8u,
                               a5);
    }
    else
    {
      return (unsigned int)-1073741598;
    }
  }
  else if ( (Options & 0x10000) != 0 )
  {
    v8 = FsRtlpAttachOplockKey(Irp);
    if ( !v8 )
    {
      v15 = (PFAST_MUTEX *)*Oplock;
      if ( !*Oplock )
      {
        v15 = (PFAST_MUTEX *)FsRtlpAllocateOplock(v14, v13);
        *Oplock = (__int64)v15;
      }
      ExAcquireFastMutexUnsafe(v15[19]);
      v8 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
      if ( !v8 )
      {
        P[0] = (PVOID)ExAllocatePool2(0x120uLL);
        v8 = FsRtlpRequestShareableOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 0x10000u, (_QWORD **)P, 0, 0, a5);
      }
      if ( P[0] )
      {
        FsRtlpClearOwner((__int64)v15, (__int64)P[0]);
        Feature_5466_1379__private_IsEnabledDeviceUsageNoInline();
        ExFreePoolWithTag(P[0], 0);
      }
      ExReleaseFastMutexUnsafe(v15[19]);
    }
  }
  return v8;
}
