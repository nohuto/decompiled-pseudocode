/*
 * XREFs of ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018EF14
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018F084 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     TryFillRenderState @ 0x18005D724 (TryFillRenderState.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ @ 0x18018E73C (-GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18018ED14 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C4700 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1802189A4 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawLocal(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        const struct CVisualTree **a3,
        unsigned __int8 a4,
        bool *a5)
{
  struct IMonitorTarget *MonitorTarget; // rbx
  struct CSuperWetInkManager::SuperWetStroke *v10; // rax
  struct CSuperWetInkManager::SuperWetStroke *v11; // rsi
  int v12; // eax
  CVisual *CurrentVisual; // rax
  __int64 **TreeData; // rax
  const __m128i *v16; // rax
  __m128i v17; // xmm0

  *a5 = 0;
  if ( a2 == *(struct CSuperWetSource **)this )
  {
    MonitorTarget = CDrawingContext::GetMonitorTarget((CDrawingContext *)a3);
    if ( MonitorTarget )
    {
      v10 = CSuperWetInkManager::TryLookupDataForSource(this, a2);
      v11 = v10;
      if ( !*((_QWORD *)v10 + 1) )
      {
        *((_QWORD *)v10 + 1) = MonitorTarget;
        (*(void (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)MonitorTarget + 8LL))(MonitorTarget);
      }
      if ( *((struct IMonitorTarget **)v11 + 1) == MonitorTarget )
      {
        v12 = (*(__int64 (__fastcall **)(struct CSuperWetSource *))(*(_QWORD *)a2 + 360LL))(a2);
        if ( TryFillRenderState((CDrawingContext *)a3, a4, v12, 1, (__int64)v11 + 16) )
        {
          CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)a3);
          TreeData = CVisual::FindTreeData(CurrentVisual, a3[993]);
          if ( TreeData && (v16 = (const __m128i *)TreeData[34]) != 0LL )
            v17 = _mm_loadu_si128(v16);
          else
            v17 = (__m128i)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
          *(__m128i *)((char *)v11 + 72) = v17;
          if ( (int)CSuperWetInkManager::TryReadyForCurrentFrame(this, v11, a5) < 0 )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
              McTemplateU0t_EventWriteTransfer(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
                18LL);
            CSuperWetInkManager::DeactivateCurrentSource(this);
            *a5 = 0;
          }
        }
        else
        {
          CSuperWetInkManager::DeactivateCurrentSource(this);
        }
      }
    }
  }
  return 0LL;
}
