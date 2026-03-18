/*
 * XREFs of IoAllocateIrpEx @ 0x140253BB0
 * Callers:
 *     FsRtlGetFileExtents @ 0x14057F7E0 (FsRtlGetFileExtents.c)
 *     FsRtlGetFileSize @ 0x140942760 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x14094588C (FsRtlSetFileSize.c)
 *     FsRtlQueryKernelEaFile @ 0x1409FD030 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409FD260 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409FD420 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryInformationFile @ 0x140A2EF10 (FsRtlQueryInformationFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AB1B90 (FsRtlGetDirectImageOriginalBase.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8DF00 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140253E10 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14037592C (IopAllocateIrpWithExtension.c)
 *     VfTargetDriversIsEnabled @ 0x140BA7F30 (VfTargetDriversIsEnabled.c)
 *     IovAllocateIrp @ 0x140BA9550 (IovAllocateIrp.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // di
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate();
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension();
  if ( ViVerifyAllDrivers == 1 )
    return IovAllocateIrp(a1, a2, a3, retaddr);
  if ( !(unsigned int)VfTargetDriversIsEnabled(retaddr) )
    return IopAllocateIrpWithExtension();
  else
    return IovAllocateIrp(a1, v4, v3, retaddr);
}
