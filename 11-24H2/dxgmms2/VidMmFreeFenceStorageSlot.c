/*
 * XREFs of VidMmFreeFenceStorageSlot @ 0x14001CEF0
 * Callers:
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 * Callees:
 *     ?FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14001CF2C (-FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@.c)
 *     ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14001CFEC (-FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 */

void __fastcall VidMmFreeFenceStorageSlot(struct VIDMM_MONITORED_FENCE_STORAGE *a1, char a2)
{
  __int64 v4; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v5; // rcx

  v4 = *(_QWORD *)a1;
  if ( v4 )
  {
    v5 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v4 + 168);
    if ( a2 || *((_BYTE *)v5 + 128) )
      VIDMM_PROCESS_FENCE_STORAGE::FreeSharedFenceStorageSlot(v5, a1);
    else
      VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot(v5, a1);
  }
}
