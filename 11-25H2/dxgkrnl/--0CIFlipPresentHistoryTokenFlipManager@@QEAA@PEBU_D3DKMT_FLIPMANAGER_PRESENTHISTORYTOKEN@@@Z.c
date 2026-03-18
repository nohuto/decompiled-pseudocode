/*
 * XREFs of ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x14000AFA8
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1402871A0 (DxgkGetPresentHistoryInternal.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404233E0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x14000B3F8 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 */

CIFlipPresentHistoryTokenFlipManager *__fastcall CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
        CIFlipPresentHistoryTokenFlipManager *this,
        const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *a2)
{
  *(_QWORD *)this = &CIFlipPresentHistoryTokenFlipManager::`vftable';
  FlipManagerTokenObject::LockForWrite((PVOID)a2->hPrivateData, (struct CFlipManagerToken **)this + 1);
  return this;
}
