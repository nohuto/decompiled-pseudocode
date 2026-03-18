/*
 * XREFs of ?VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT_DATA@@@Z @ 0x140051854
 * Callers:
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1402E1360 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x14032C6B0 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403367F0 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VIDSCH_EXPORT::VidSchCreateContext(
        VIDSCH_EXPORT *this,
        struct DXGCONTEXT *a2,
        struct _VIDSCH_CONTEXT_DATA *a3)
{
  return (struct _VIDSCH_CONTEXT *)(*(__int64 (__fastcall **)(struct DXGCONTEXT *, struct _VIDSCH_CONTEXT_DATA *))(*((_QWORD *)this + 1) + 216LL))(
                                     a2,
                                     a3);
}
