/*
 * XREFs of EtwpCovSampModuleNameInfoCleanup @ 0x140A0C358
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140923930 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleCleanup @ 0x140A0C308 (EtwpCovSampModuleCleanup.c)
 * Callees:
 *     FsRtlReleaseFileNameInformation @ 0x140A0C580 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

void __fastcall EtwpCovSampModuleNameInfoCleanup(__int64 *a1)
{
  __int64 v1; // rax
  void *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = (void *)(v1 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v1 & 1) != 0 )
    {
      FsRtlReleaseFileNameInformation(v3);
    }
    else if ( v3 )
    {
      ExFreePool(v3);
    }
    *a1 = 0LL;
  }
}
