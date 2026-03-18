/*
 * XREFs of MiLockKernelScpSection @ 0x140C44778
 * Callers:
 *     MiInitializeKernelScp @ 0x140C44578 (MiInitializeKernelScp.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MmCreateMdl @ 0x14045B040 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 MiLockKernelScpSection()
{
  struct _MDL *Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140E2D4FC << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmProbeAndLockPages(Mdl, 0, IoReadAccess);
  qword_140E2D500 = v1;
  return 0LL;
}
