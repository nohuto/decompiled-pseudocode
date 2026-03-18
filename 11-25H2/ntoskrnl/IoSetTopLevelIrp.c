/*
 * XREFs of IoSetTopLevelIrp @ 0x14042A720
 * Callers:
 *     FsRtlMdlReadDev @ 0x1406FE3A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406FE5D0 (FsRtlPrepareMdlWriteDev.c)
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x14093DCC0 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x140A1D340 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140A34DE0 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
