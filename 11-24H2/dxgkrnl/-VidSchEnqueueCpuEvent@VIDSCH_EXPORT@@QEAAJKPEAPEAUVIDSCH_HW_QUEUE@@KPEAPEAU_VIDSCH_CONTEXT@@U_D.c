/*
 * XREFs of ?VidSchEnqueueCpuEvent@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@U_D3DDDICB_SIGNALFLAGS@@PEAX@Z @ 0x14004DF94
 * Callers:
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401F65B0 (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchEnqueueCpuEvent(
        VIDSCH_EXPORT *this,
        unsigned int a2,
        struct VIDSCH_HW_QUEUE **a3,
        unsigned int a4,
        struct _VIDSCH_CONTEXT **a5,
        struct _D3DDDICB_SIGNALFLAGS a6,
        void *a7)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_HW_QUEUE **, _QWORD, struct _VIDSCH_CONTEXT **, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void *))(*((_QWORD *)this + 1) + 840LL))(
           a2,
           a3,
           a4,
           a5,
           a6.0,
           a7);
}
