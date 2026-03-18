/*
 * XREFs of ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1400237B4
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x140021FC4 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchCreateHwQueue @ 0x1400224D0 (VidSchCreateHwQueue.c)
 *     ?VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOUT@@@Z @ 0x140051A20 (-VidSchiCollectTdrPayloadEngineTimeout@@YAXPEAU_VIDSCH_NODE@@PEAU_DXGK_TDR_PAYLOAD_ENGINE_TIMEOU.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementHwContextReference(struct VIDSCH_HW_CONTEXT *a1)
{
  if ( _InterlockedIncrement((volatile signed __int32 *)a1 + 10) == 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL));
}
