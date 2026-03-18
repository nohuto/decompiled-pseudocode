/*
 * XREFs of PopAllocatePages @ 0x140B5F2A0
 * Callers:
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     PopBuildMemoryImageHeader @ 0x140B54810 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     PopGenerateMdl @ 0x1404D4298 (PopGenerateMdl.c)
 */

PVOID __fastcall PopAllocatePages(__int64 a1)
{
  PVOID v1; // rbx
  struct _MDL *Mdl; // rax

  PopNumberOfPagesForHibernateProcess += a1;
  v1 = 0LL;
  Mdl = PopGenerateMdl(a1);
  if ( !Mdl
    || (v1 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 1u, 0x40000020u)) == 0LL
    || *(int *)(BugCheckParameter4 + 204) < 0 )
  {
    *(_DWORD *)(BugCheckParameter4 + 204) = -1073741670;
  }
  return v1;
}
