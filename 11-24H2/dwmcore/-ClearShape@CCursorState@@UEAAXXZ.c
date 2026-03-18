/*
 * XREFs of ?ClearShape@CCursorState@@UEAAXXZ @ 0x1802B2320
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ @ 0x1802687EC (--1-$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ @ 0x1802B16B8 (--0-$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802B3C48 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::ClearShape(CCursorState *this)
{
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCriticalSection(&g_CursorManager);
  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)this + 22) )
  {
    std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v2);
    std::shared_ptr<CRegion>::operator=((_QWORD *)this + 5, v2);
    std::shared_ptr<CCursorState::ShapeData>::~shared_ptr<CCursorState::ShapeData>((__int64)v2);
    *((_BYTE *)this + 23) = 1;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
