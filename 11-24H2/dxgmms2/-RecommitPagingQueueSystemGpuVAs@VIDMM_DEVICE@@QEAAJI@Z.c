/*
 * XREFs of ?RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x140097FDC
 * Callers:
 *     ?RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z @ 0x140098074 (-RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1400980C8 (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 */

int __fastcall VIDMM_DEVICE::RecommitPagingQueueSystemGpuVAs(VIDMM_DEVICE *this, unsigned int a2)
{
  __int64 v4; // rdi
  VIDMM_FENCE_STORAGE_PAGE **v5; // r8
  int result; // eax
  struct VIDMM_DEVICE *v7; // r8
  struct VIDMM_DEVICE *v8; // r8
  __int64 v9; // rcx

  v4 = 32LL * a2;
  v5 = *(VIDMM_FENCE_STORAGE_PAGE ***)(*((_QWORD *)this + 9) + v4 + 8);
  result = VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
             v5[8],
             *(struct VIDMM_GLOBAL **)this,
             (struct VIDMM_DEVICE *)v5,
             *((struct VIDMM_PROCESS **)this + 1),
             a2);
  if ( result >= 0 )
  {
    result = VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
               *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)(*((_QWORD *)this + 10) + v4 + 8) + 64LL),
               *(struct VIDMM_GLOBAL **)this,
               v7,
               *((struct VIDMM_PROCESS **)this + 1),
               a2);
    if ( result >= 0 )
    {
      v9 = *((_QWORD *)this + 11);
      if ( v9 )
        return VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
                 *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)(v9 + v4 + 8) + 64LL),
                 *(struct VIDMM_GLOBAL **)this,
                 v8,
                 *((struct VIDMM_PROCESS **)this + 1),
                 a2);
    }
  }
  return result;
}
