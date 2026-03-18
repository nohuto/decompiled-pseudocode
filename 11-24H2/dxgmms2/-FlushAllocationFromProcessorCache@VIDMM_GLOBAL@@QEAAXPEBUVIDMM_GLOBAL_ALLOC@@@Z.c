/*
 * XREFs of ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140093C18
 * Callers:
 *     ?FlushPendingCPUAccess@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FA010 (-FlushPendingCPUAccess@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPendingGPUAccess@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FED90 (-FlushPendingGPUAccess@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     VidMmFlushCpuCacheWorker @ 0x140096A3C (VidMmFlushCpuCacheWorker.c)
 */

void __fastcall VIDMM_GLOBAL::FlushAllocationFromProcessorCache(
        VIDMM_GLOBAL *this,
        const struct VIDMM_GLOBAL_ALLOC *a2)
{
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  char v5; // si
  void *v6; // rbx
  _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_DWORD *)*((_QWORD *)a2 + 49);
  if ( (*v3 & 4) != 0 && (*v3 & 0x800000) == 0 )
  {
    v4 = *((_QWORD *)a2 + 6);
    v5 = 1;
    memset(&ApcState, 0, sizeof(ApcState));
    if ( !v4 || (*v3 & 8) != 0 )
    {
      v6 = (void *)*((_QWORD *)a2 + 29);
      v5 = 0;
    }
    else
    {
      v6 = *(void **)(v4 + 16);
    }
    if ( v6 )
    {
      if ( v5 )
        KeStackAttachProcess(**(PRKPROCESS **)(v4 + 8), &ApcState);
      VidMmFlushCpuCacheWorker(v6, *(_QWORD *)(*(_QWORD *)a2 + 16LL));
      if ( v5 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}
