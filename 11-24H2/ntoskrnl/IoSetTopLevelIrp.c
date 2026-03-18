/*
 * XREFs of IoSetTopLevelIrp @ 0x140424450
 * Callers:
 *     FsRtlMdlReadDev @ 0x14070A280 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14070A4B0 (FsRtlPrepareMdlWriteDev.c)
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x1409425C0 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x140A265F0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
