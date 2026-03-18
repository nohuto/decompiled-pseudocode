/*
 * XREFs of ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x1801571A8
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x180156CE4 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x180156F18 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x180157F8C (--$_Destroy_range@V-$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInf.c)
 */

__int64 __fastcall std::vector<CGlobalSurfaceManager::AdapterInfo>::clear(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 != a1[1] )
  {
    std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(*a1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
