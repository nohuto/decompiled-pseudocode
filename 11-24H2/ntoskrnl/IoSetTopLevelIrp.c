/*
 * XREFs of IoSetTopLevelIrp @ 0x140418300
 * Callers:
 *     FsRtlMdlReadDev @ 0x140707E40 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140708070 (FsRtlPrepareMdlWriteDev.c)
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x14098C830 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x140A1B070 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
