/*
 * XREFs of MiLockKernelScpSection @ 0x140C57BE8
 * Callers:
 *     MiInitializeKernelScp @ 0x140C579F0 (MiInitializeKernelScp.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmCreateMdl @ 0x14044FFA0 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 MiLockKernelScpSection()
{
  struct _MDL *Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140E2D87C << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmProbeAndLockPages(Mdl, 0, IoReadAccess);
  qword_140E2D880 = v1;
  return 0LL;
}
