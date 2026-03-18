/*
 * XREFs of PipForAllDeviceNodesCallback @ 0x140A3E4B0
 * Callers:
 *     PipForDeviceNodeSubtree @ 0x140A3E3F0 (PipForDeviceNodeSubtree.c)
 *     PipForAllChildDeviceNodes @ 0x140A3E470 (PipForAllChildDeviceNodes.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PipForAllChildDeviceNodes @ 0x140A3E470 (PipForAllChildDeviceNodes.c)
 */

__int64 __fastcall PipForAllDeviceNodesCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = guard_dispatch_icall_no_overrides(a1);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      return PipForAllChildDeviceNodes(a1, v5, a2);
  }
  return result;
}
