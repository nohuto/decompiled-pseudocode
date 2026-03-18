/*
 * XREFs of MiProcessKernelCfgAddressTakenImports @ 0x140AB735C
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1404C8628 (MiProcessKernelCfgImage.c)
 *     MiInitializeKernelCfg @ 0x140C485AC (MiInitializeKernelCfg.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140A85AE4 (MiMarkKernelCfgAddressTakenImports.c)
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
