/*
 * XREFs of ?VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREATEHWQUEUE@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051500
 * Callers:
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401D54A0 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x140321478 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403367F0 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchCreateHwQueue(
        VIDSCH_EXPORT *this,
        struct DXGHWQUEUE *a2,
        struct VIDSCH_HW_CONTEXT *a3,
        struct _D3DKMT_CREATEHWQUEUE *a4,
        struct VIDSCH_HW_QUEUE **a5)
{
  return (*(__int64 (__fastcall **)(struct DXGHWQUEUE *, struct VIDSCH_HW_CONTEXT *, struct _D3DKMT_CREATEHWQUEUE *, struct VIDSCH_HW_QUEUE **))(*((_QWORD *)this + 1) + 232LL))(
           a2,
           a3,
           a4,
           a5);
}
