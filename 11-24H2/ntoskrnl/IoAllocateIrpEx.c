/*
 * XREFs of IoAllocateIrpEx @ 0x1402841C0
 * Callers:
 *     FsRtlGetFileExtents @ 0x14057CC20 (FsRtlGetFileExtents.c)
 *     FsRtlSetFileSize @ 0x14098A000 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x14098C9D0 (FsRtlGetFileSize.c)
 *     FsRtlQueryKernelEaFile @ 0x1409F5D70 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1409F5FA0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409F6160 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryInformationFile @ 0x140A23950 (FsRtlQueryInformationFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AACB00 (FsRtlGetDirectImageOriginalBase.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8FF00 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14025E1EC (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x140284420 (IopAllocateIrpPrivate.c)
 *     VfTargetDriversIsEnabled @ 0x140BA9F30 (VfTargetDriversIsEnabled.c)
 *     IovAllocateIrp @ 0x140BAB550 (IovAllocateIrp.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // di
  int IsEnabled; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  if ( ViVerifyAllDrivers == 1 )
    return IovAllocateIrp(a1, a2, a3, retaddr);
  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  a3 = v3;
  a2 = v4;
  if ( !IsEnabled )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  else
    return IovAllocateIrp(a1, v4, v3, retaddr);
}
