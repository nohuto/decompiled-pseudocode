/*
 * XREFs of ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180073644
 * Callers:
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18002EDE4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1800359D4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180037764 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___::_lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___ @ 0x18007D8C4 (wil--details--lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___--_lambda_call__lambda_4014.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOptions@CVisualProxy@@QEAAJ_N00@Z @ 0x1800736C4 (-SetOptions@CVisualProxy@@QEAAJ_N00@Z.c)
 */

__int64 __fastcall CVisual::SetIgnoreClipForHitTest(CVisual *this, char a2)
{
  unsigned int v2; // ebx
  char v3; // r8
  char v4; // dl
  CVisualProxy *v5; // rcx
  int v6; // eax

  v2 = 0;
  if ( a2 != ((*((_BYTE *)this + 36) & 0x40) != 0) )
  {
    v3 = a2 << 6;
    v4 = (a2 << 6) | *((_BYTE *)this + 36) & 0xBF;
    *((_BYTE *)this + 36) = v4;
    v5 = (CVisualProxy *)*((_QWORD *)this + 2);
    if ( v5 )
    {
      v6 = CVisualProxy::SetOptions(v5, (v4 & 0x20) != 0, v3, (v4 & 0x40) != 0);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3EFu, 0LL);
    }
  }
  return v2;
}
