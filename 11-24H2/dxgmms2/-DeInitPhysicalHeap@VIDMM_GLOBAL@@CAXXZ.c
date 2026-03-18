/*
 * XREFs of ?DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x140093014
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x140092EEC (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 *     ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x140094C64 (-InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 * Callees:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x14004C210 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 */

void VIDMM_GLOBAL::DeInitPhysicalHeap(void)
{
  if ( VIDMM_GLOBAL::m_pPhysicalPool )
  {
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(VIDMM_GLOBAL::m_pPhysicalPool);
    VIDMM_GLOBAL::m_pPhysicalPool = 0LL;
  }
  if ( VIDMM_GLOBAL::m_PhysicalBlock )
  {
    MmFreeContiguousMemorySpecifyCache(VIDMM_GLOBAL::m_PhysicalBlock, VIDMM_GLOBAL::m_PhysicalBlockSize, MmCached);
    VIDMM_GLOBAL::m_PhysicalBlock = 0LL;
  }
}
