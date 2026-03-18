/*
 * XREFs of ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x14008FA50
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x14008FAD8 (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 *     ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400F6C30 (-ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ProcessUnblockMemoryRanges(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  VIDMM_CPU_HOST_APERTURE *v7; // rbx

  v5 = a2;
  if ( (*(_DWORD *)(a1 + 104) & 0x2000) != 0 && (_BYTE)a2 == 7 && *(_DWORD *)(a1 + 144) != -1 )
  {
    v7 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 552);
    VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(v7, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(a1 + 120));
    *((_DWORD *)v7 + 17) = 0;
    *(_DWORD *)(a1 + 144) = -1;
    *(_DWORD *)(a1 + 148) = -1;
  }
  LOBYTE(a2) = v5;
  return VIDMM_LINEAR_POOL::FreeMemoryBlocks(*(_QWORD *)(a1 + 208), a2, a3, a4);
}
