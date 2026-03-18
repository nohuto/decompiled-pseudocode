/*
 * XREFs of EtwpCovSampModuleNameInfoCleanup @ 0x1409F53E0
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x14090D0F0 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleCleanup @ 0x1409F5390 (EtwpCovSampModuleCleanup.c)
 * Callees:
 *     FsRtlReleaseFileNameInformation @ 0x1409F5600 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
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
