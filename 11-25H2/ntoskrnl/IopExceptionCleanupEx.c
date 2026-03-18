/*
 * XREFs of IopExceptionCleanupEx @ 0x1409887B0
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1402D4D60 (IopAllocateAndPopulateWriteIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x140484034 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14070C280 (NtSetVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     NtQueryEaFile @ 0x140935870 (NtQueryEaFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x140936F60 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A5F1F0 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall IopExceptionCleanupEx(ULONG_PTR BugCheckParameter2, PIRP Irp, PVOID Object, PVOID P, char a5)
{
  struct _IRP *MasterIrp; // rcx
  struct _MDL *MdlAddress; // rcx

  if ( Irp )
  {
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( MasterIrp )
      ExFreePoolWithTag(MasterIrp, 0);
    MdlAddress = Irp->MdlAddress;
    if ( MdlAddress )
      IoFreeMdl(MdlAddress);
    if ( (Irp->Flags & 0x200000) != 0 )
    {
      ObfDereferenceObjectWithTag(
        (PVOID)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext & 0xFFFFFFFFFFFFFFF8uLL),
        0x49526F49u);
      Irp->Flags &= ~0x200000u;
    }
    IoFreeIrp(Irp);
  }
  if ( a5 )
    IopReleaseFileObjectLock(BugCheckParameter2);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ObfDereferenceObject((PVOID)BugCheckParameter2);
}
