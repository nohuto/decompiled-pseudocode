/*
 * XREFs of MiLockKernelScpSection @ 0x140C55A58
 * Callers:
 *     MiInitializeKernelScp @ 0x140C55860 (MiInitializeKernelScp.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmCreateMdl @ 0x14045AB70 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 MiLockKernelScpSection()
{
  struct _MDL *Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, qword_140E2D730, (unsigned int)(dword_140E2D73C << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmProbeAndLockPages(Mdl, 0, IoReadAccess);
  qword_140E2D740 = v1;
  return 0LL;
}
