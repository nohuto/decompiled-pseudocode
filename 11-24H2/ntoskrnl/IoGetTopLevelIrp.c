/*
 * XREFs of IoGetTopLevelIrp @ 0x14041CFD0
 * Callers:
 *     FsRtlMdlReadDev @ 0x14070A280 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14070A4B0 (FsRtlPrepareMdlWriteDev.c)
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140A265F0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
