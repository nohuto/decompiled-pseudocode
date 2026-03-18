/*
 * XREFs of MiProcessKernelCfgAddressTakenImports @ 0x140ABB69C
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1404C91B8 (MiProcessKernelCfgImage.c)
 *     MiInitializeKernelCfg @ 0x140C598DC (MiInitializeKernelCfg.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A8A44C (MiMarkKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgAddressTakenImports(PVOID *a1)
{
  struct _KTHREAD *Lock; // rdi
  int v3; // ecx
  __int64 result; // rax

  Lock = MiAcquireLoadLock(1);
  if ( !a1 )
    a1 = (PVOID *)PsLoadedModuleList;
  while ( 1 )
  {
    v3 = *((_DWORD *)a1 + 26);
    if ( (v3 & 0x2000) != 0 && (v3 & 0x100) == 0 )
    {
      result = MiMarkKernelCfgAddressTakenImports((__int64)a1);
      if ( (int)result < 0 )
        break;
    }
    a1 = (PVOID *)*a1;
    if ( a1 == &PsLoadedModuleList )
    {
      MmReleaseLoadLock(Lock);
      return 0LL;
    }
  }
  return result;
}
