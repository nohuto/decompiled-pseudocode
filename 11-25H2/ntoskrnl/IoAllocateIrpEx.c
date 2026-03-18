/*
 * XREFs of IoAllocateIrpEx @ 0x140253CC0
 * Callers:
 *     FsRtlGetFileExtents @ 0x14057C4C0 (FsRtlGetFileExtents.c)
 *     FsRtlSetFileSize @ 0x14093A4A0 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x14093DE60 (FsRtlGetFileSize.c)
 *     FsRtlQueryKernelEaFile @ 0x140A00250 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x140A00480 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryInformationFile @ 0x140A2B210 (FsRtlQueryInformationFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AAC920 (FsRtlGetDirectImageOriginalBase.c)
 *     VfIrpSendSynchronousIrp @ 0x140B7DF20 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140253800 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14048ADBC (IopAllocateIrpWithExtension.c)
 *     VfTargetDriversIsEnabled @ 0x140B97F50 (VfTargetDriversIsEnabled.c)
 *     IovAllocateIrp @ 0x140B99570 (IovAllocateIrp.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // di
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension();
  if ( ViVerifyAllDrivers == 1 )
    return IovAllocateIrp(a1, a2, a3, retaddr);
  if ( !(unsigned int)VfTargetDriversIsEnabled(retaddr) )
    return IopAllocateIrpWithExtension();
  else
    return IovAllocateIrp(a1, v4, v3, retaddr);
}
