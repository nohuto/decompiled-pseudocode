/*
 * XREFs of ?VidMmGetCurrentPagingQueueFenceId@@YA_KPEBUVIDMM_PAGING_QUEUE@@@Z @ 0x140101F28
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x140003F10 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidMmGetCurrentPagingQueueFenceId(const struct VIDMM_PAGING_QUEUE *a1)
{
  return *((_QWORD *)a1 + 8);
}
