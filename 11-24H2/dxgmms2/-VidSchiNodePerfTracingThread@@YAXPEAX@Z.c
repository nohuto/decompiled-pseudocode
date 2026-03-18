/*
 * XREFs of ?VidSchiNodePerfTracingThread@@YAXPEAX@Z @ 0x14004EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiGpuPerfTracing@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004ECF4 (-VidSchiGpuPerfTracing@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiNodePerfTracingThread(struct _VIDSCH_NODE *a1)
{
  VidSchiGpuPerfTracing(a1);
  *((_DWORD *)a1 + 768) = 0;
}
