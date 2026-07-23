/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140977BD0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x1403CD800 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST **ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741811;
  *ExtraCreateParameter = (struct _ECP_LIST *)Irp->UserBuffer;
  return 0;
}
