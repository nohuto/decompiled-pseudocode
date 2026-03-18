/*
 * XREFs of ?VidSchResumeSchedulerForSource@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004E5C4
 * Callers:
 *     ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1403140E4 (-ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall VIDSCH_EXPORT::VidSchResumeSchedulerForSource(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3)
{
  (*(void (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD))(*((_QWORD *)this + 1) + 1008LL))(a2, a3);
}
