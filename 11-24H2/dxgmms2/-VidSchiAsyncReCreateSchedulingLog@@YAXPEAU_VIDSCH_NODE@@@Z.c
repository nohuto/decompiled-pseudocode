/*
 * XREFs of ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140051968
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 *     VidSchCaptureLogs @ 0x1400A6C10 (VidSchCaptureLogs.c)
 * Callees:
 *     ?VidSchiQueueAsyncOperation@@YAJPEAU_VIDSCH_NODE@@W4VIDSCH_ASYNC_OPERATION_TYPE@@PEATVIDSCH_ASYNC_OPERATION_DATA@@@Z @ 0x140051D74 (-VidSchiQueueAsyncOperation@@YAJPEAU_VIDSCH_NODE@@W4VIDSCH_ASYNC_OPERATION_TYPE@@PEATVIDSCH_ASYN.c)
 */

void __fastcall VidSchiAsyncReCreateSchedulingLog(struct _VIDSCH_NODE *a1)
{
  struct _VIDSCH_NODE *v1; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v1 = a1;
  v2 = (byte_140081243 & 8) != 0 ? 0x2000 : 2048;
  VidSchiQueueAsyncOperation(a1, v2, &v1);
}
