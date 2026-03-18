/*
 * XREFs of EngDeletePath @ 0x1C0159F50
 * Callers:
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C015A1B8 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     EngLineTo @ 0x1C028CCA0 (EngLineTo.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0298F2C (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     NtGdiEngDeletePath @ 0x1C02C9090 (NtGdiEngDeletePath.c)
 * Callees:
 *     <none>
 */

void __stdcall EngDeletePath(PATHOBJ *ppo)
{
  if ( ppo )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)ppo);
    Win32FreePool(ppo);
  }
}
