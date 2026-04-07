/*
 * XREFs of ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800C01D8
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800CAE58 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x1800C03C0 (-UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopColorEffect(
        CFullScreenMagnifier *this,
        const struct MilColorTransform *a2)
{
  int updated; // eax
  unsigned int v3; // ebx

  *(_OWORD *)((char *)this + 52) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 68) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 84) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 5);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 24);
  updated = CFullScreenMagnifier::UpdateColorTransform(this);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xEBu);
  return v3;
}
