/*
 * XREFs of ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801AD1D0
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801AD340 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800CC200 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x180175B0C (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     TryFillRenderState @ 0x180177164 (TryFillRenderState.c)
 *     ?GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ @ 0x1801ACA1C (-GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801ACFF4 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x180224664 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
          if ( TreeData && (v16 = (const __m128i *)TreeData[33]) != 0LL )
            v17 = _mm_loadu_si128(v16);
          else
            v17 = (__m128i)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
          *(__m128i *)((char *)v11 + 72) = v17;
          if ( (int)CSuperWetInkManager::TryReadyForCurrentFrame(this, v11, a5) < 0 )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
              McTemplateU0t_EventWriteTransfer(
                (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
                (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
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
