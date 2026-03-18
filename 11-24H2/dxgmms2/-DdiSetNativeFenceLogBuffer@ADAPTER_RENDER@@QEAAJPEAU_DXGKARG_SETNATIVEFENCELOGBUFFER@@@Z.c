/*
 * XREFs of ?DdiSetNativeFenceLogBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETNATIVEFENCELOGBUFFER@@@Z @ 0x14004B64C
 * Callers:
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x140020A74 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     VidSchiCreateNativeFenceLog @ 0x140024634 (VidSchiCreateNativeFenceLog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetNativeFenceLogBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETNATIVEFENCELOGBUFFER *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_SETNATIVEFENCELOGBUFFER *))DxgCoreInterface[103])(
           this,
           a2);
}
