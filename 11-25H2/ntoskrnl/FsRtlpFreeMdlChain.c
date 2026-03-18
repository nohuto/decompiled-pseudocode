/*
 * XREFs of FsRtlpFreeMdlChain @ 0x140701224
 * Callers:
 *     FsRtlQueryKernelEaFile @ 0x140A00250 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x140A00480 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A00640 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryInformationFile @ 0x140A2B210 (FsRtlQueryInformationFile.c)
 * Callees:
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 */

void __fastcall FsRtlpFreeMdlChain(PMDL Mdl)
{
  PMDL v1; // rbx
  struct _MDL *Next; // rdi

  if ( Mdl )
  {
    v1 = Mdl;
    do
    {
      Next = v1->Next;
      if ( (v1->MdlFlags & 2) != 0 )
        MmUnlockPages(v1);
      IoFreeMdl(v1);
      v1 = Next;
    }
    while ( Next );
  }
}
