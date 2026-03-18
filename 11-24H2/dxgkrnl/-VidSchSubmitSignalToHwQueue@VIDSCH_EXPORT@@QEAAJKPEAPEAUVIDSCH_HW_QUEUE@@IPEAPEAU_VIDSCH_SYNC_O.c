/*
 * XREFs of ?VidSchSubmitSignalToHwQueue@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x140039410
 * Callers:
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1401EB208 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1403E7E60 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSubmitSignalToHwQueue(
        VIDSCH_EXPORT *this,
        unsigned int a2,
        struct VIDSCH_HW_QUEUE **a3,
        unsigned int a4,
        struct _VIDSCH_SYNC_OBJECT **a5,
        struct _D3DDDICB_SIGNALFLAGS a6,
        const unsigned __int64 *a7)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_HW_QUEUE **, _QWORD, struct _VIDSCH_SYNC_OBJECT **, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, const unsigned __int64 *))(*((_QWORD *)this + 1) + 656LL))(
           a2,
           a3,
           a4,
           a5,
           a6.0,
           a7);
}
