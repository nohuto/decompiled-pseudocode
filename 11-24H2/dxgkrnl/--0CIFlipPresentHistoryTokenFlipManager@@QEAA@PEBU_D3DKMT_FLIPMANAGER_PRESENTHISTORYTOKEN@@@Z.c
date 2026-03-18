/*
 * XREFs of ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x14001A4D8
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x140293760 (DxgkGetPresentHistoryInternal.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404201A0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x14001A928 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 */

CIFlipPresentHistoryTokenFlipManager *__fastcall CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
        CIFlipPresentHistoryTokenFlipManager *this,
        const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *a2)
{
  *(_QWORD *)this = &CIFlipPresentHistoryTokenFlipManager::`vftable';
  FlipManagerTokenObject::LockForWrite((PVOID)a2->hPrivateData, (struct CFlipManagerToken **)this + 1);
  return this;
}
