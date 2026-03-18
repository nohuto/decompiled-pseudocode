/*
 * XREFs of EngDeletePath @ 0x1400DA170
 * Callers:
 *     EngLineTo @ 0x140007EE0 (EngLineTo.c)
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x1400D8B68 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
 *     NtGdiEngDeletePath @ 0x1400D9A50 (NtGdiEngDeletePath.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400DA6A4 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
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
