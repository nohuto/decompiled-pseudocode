/*
 * XREFs of ?GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ @ 0x1801ACA1C
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801AD1D0 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     <none>
 */

struct IMonitorTarget *__fastcall CDrawingContext::GetMonitorTarget(CDrawingContext *this)
{
  __int64 v1; // rdx
  struct IMonitorTarget *result; // rax

  v1 = *((_QWORD *)this + 6);
  result = 0LL;
  if ( v1 )
    return *(struct IMonitorTarget **)v1;
  return result;
}
