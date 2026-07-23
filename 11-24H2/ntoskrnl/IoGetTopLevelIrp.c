/*
 * XREFs of IoGetTopLevelIrp @ 0x1404118C0
 * Callers:
 *     FsRtlMdlReadDev @ 0x140707E40 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140708070 (FsRtlPrepareMdlWriteDev.c)
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140A1B070 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
