/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x1402D4D60
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1402D379C (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1408C3790 (IopWriteFile.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateIrpExtension @ 0x1402D5250 (IopAllocateIrpExtension.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     IopProbeAndLockPages_0 @ 0x1402D55C4 (IopProbeAndLockPages_0.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1402D5878 (MmUpdateMdlTracker.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rax
  IRP *Irp; // rsi
  void *v9; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v11; // ecx
  PMDL *v12; // rax
  int v13; // edx
  _DWORD *v14; // rax
  unsigned int v16; // r12d
  ULONG v17; // edx
  int v18; // r8d
  struct _MDL *Mdl; // r12
  __int64 v20; // r13
  _OWORD *v21; // r15
  __int64 IrpExtension; // rax
  struct _IRP *Pool2; // rax
  struct _IO_STATUS_BLOCK *v24; // rdi
  PVOID *v25; // rdi
  void *v26; // rcx
  unsigned int v29; // [rsp+90h] [rbp+18h]
  UCHAR MajorFunction; // [rsp+90h] [rbp+18h]

  v4 = 0;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v5 + 80) & 0x4000000) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      v29 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v5 + 152), 7u) )
      {
        do
        {
          v16 = v29 + 1;
          v29 = v16;
          if ( (v16 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
          {
            HvlNotifyLongSpinWait(v16);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*(_DWORD *)(v5 + 152) & 0x80u) != 0
             || _interlockedbittestandset((volatile signed __int32 *)(v5 + 152), 7u) );
      }
      *(_DWORD *)(v5 + 156) = 0;
      _InterlockedAnd((volatile signed __int32 *)(v5 + 152), 0xFFFFFF7F);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
  LOBYTE(a3) = *(_BYTE *)(a1 + 9) == 0;
  v7 = IopAllocateIrpExReturn(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 76LL), a3);
  Irp = (IRP *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 192) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v7 + 152) = *(_QWORD *)a1;
    *(_QWORD *)(v7 + 160) = 0LL;
    *(_BYTE *)(v7 + 64) = *(_BYTE *)(a1 + 8);
    *(_BYTE *)(v7 + 65) = 0;
    *(_BYTE *)(v7 + 68) = 0;
    *(_QWORD *)(v7 + 104) = 0LL;
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 80) = *(_QWORD *)(a1 + 32);
    v9 = *(void **)(a1 + 96);
    if ( v9 )
    {
      v24 = *(struct _IO_STATUS_BLOCK **)(a1 + 104);
      ObfReferenceObjectWithTag(*(PVOID *)(a1 + 96), 0x49526F49u);
      Irp->Flags |= 0x200000u;
      Irp->UserIosb = v24;
    }
    else
    {
      *(_QWORD *)(v7 + 72) = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(v7 + 88) = *(_QWORD *)(a1 + 40);
      v9 = *(void **)(a1 + 48);
    }
    Irp->Overlay.AsynchronousParameters.UserApcContext = v9;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(a1 + 16);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 0x10) != 0 || (*(_DWORD *)(a1 + 112) & 1) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (v11 & 4) != 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( *(_QWORD *)(a1 + 128) )
        {
          Irp->AssociatedIrp.MasterIrp = *(struct _IRP **)(a1 + 64);
          Irp->Flags |= 0x10u;
          Irp->UserBuffer = *(PVOID *)(a1 + 64);
        }
        else
        {
          Pool2 = (struct _IRP *)ExAllocatePool2(0x69uLL);
          Irp->AssociatedIrp.MasterIrp = Pool2;
          memmove(Pool2, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 72));
          Irp->Flags |= 0x30u;
        }
      }
      else
      {
        Irp->Flags |= 0x10u;
      }
    }
    else if ( (v11 & 0x10) != 0 )
    {
      v17 = *(_DWORD *)(a1 + 72);
      if ( v17 )
      {
        Mdl = IoAllocateMdl(*(PVOID *)(a1 + 64), v17, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        MajorFunction = CurrentStackLocation[-1].MajorFunction;
        v20 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 128) )
        {
          IopProbeAndLockPages_0((_DWORD)Mdl, 0, v18, v20, CurrentStackLocation[-1].MajorFunction);
        }
        else
        {
          MmProbeAndLockPages(Mdl, *(_BYTE *)(a1 + 8), IoReadAccess);
          if ( (MmTrackLockedPages & 1) != 0 )
            MmUpdateMdlTracker(Mdl, *(_QWORD *)(*(_QWORD *)(v20 + 8) + 8LL * MajorFunction + 112), v20);
        }
      }
    }
    else
    {
      Irp->UserBuffer = *(PVOID *)(a1 + 64);
      v12 = *(PMDL **)(a1 + 120);
      if ( v12 )
      {
        if ( *v12 )
        {
          Irp->MdlAddress = *v12;
          **(_QWORD **)(a1 + 120) = 0LL;
          if ( *(_QWORD *)(a1 + 96) )
            Irp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext | 1);
        }
      }
    }
    v13 = Irp->Flags | 0x200;
    Irp->Flags = v13;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
    {
      v13 |= 1u;
      Irp->Flags = v13;
    }
    if ( *(_BYTE *)(a1 + 10) )
      Irp->Flags = v13 | 0x800;
    if ( !*(_QWORD *)(a1 + 128) )
      goto LABEL_22;
    Irp->RequestorMode = 0;
    Irp->UserBuffer = *(PVOID *)(a1 + 64);
    v21 = *(_OWORD **)(a1 + 128);
    IrpExtension = IopAllocateIrpExtension(Irp, 9LL);
    if ( IrpExtension )
    {
      *(_OWORD *)(IrpExtension + 64) = *v21;
      v4 = 0;
LABEL_22:
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v14 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 208LL);
      if ( v14 && (*v14 & 0x10) != 0 )
        CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      *a2 = Irp;
      return v4;
    }
    v4 = -1073741670;
  }
  else
  {
    v4 = -1073741670;
  }
  if ( Irp )
  {
    IopExceptionCleanupEx(*(_QWORD *)(a1 + 16), Irp, *(PVOID *)(a1 + 32), 0LL, *(_BYTE *)(a1 + 9));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 9) )
    {
      v25 = (PVOID *)(a1 + 16);
      IopReleaseFileObjectLock(*(_QWORD *)(a1 + 16));
    }
    else
    {
      v25 = (PVOID *)(a1 + 16);
    }
    v26 = *(void **)(a1 + 32);
    if ( v26 )
    {
      ObfDereferenceObjectWithTag(v26, 0x746C6644u);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    ObfDereferenceObjectWithTag(*v25, 0x746C6644u);
    *v25 = 0LL;
  }
  return v4;
}
