/*
 * XREFs of ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x140091128
 * Callers:
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400911C0 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     VidSchDestroySyncObject @ 0x1400BAF10 (VidSchDestroySyncObject.c)
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400BBB58 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyPagingFenceObjects(struct VIDMM_PROCESS **this)
{
  __int64 i; // rdi
  struct VIDMM_PROCESS *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1736); i = (unsigned int)(i + 1) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this[2] + 93) + 55LL) && this[i + 804] )
      VIDMM_GLOBAL::UnmapGpuVA(
        (VIDMM_GLOBAL *)this,
        this[5048],
        (struct VIDMM_PROCESS *)((char *)this[i + 740] + 64),
        i,
        1);
    v3 = this[i + 740];
    if ( v3 )
    {
      VidSchDestroySyncObject(v3);
      this[i + 740] = 0LL;
    }
  }
}
