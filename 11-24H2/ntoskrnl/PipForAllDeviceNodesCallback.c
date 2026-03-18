/*
 * XREFs of PipForAllDeviceNodesCallback @ 0x140A439A0
 * Callers:
 *     PipForDeviceNodeSubtree @ 0x140A438E0 (PipForDeviceNodeSubtree.c)
 *     PipForAllChildDeviceNodes @ 0x140A43960 (PipForAllChildDeviceNodes.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PipForAllChildDeviceNodes @ 0x140A43960 (PipForAllChildDeviceNodes.c)
 */

__int64 __fastcall PipForAllDeviceNodesCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx

  result = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      return PipForAllChildDeviceNodes(a1, v7, a2);
  }
  return result;
}
