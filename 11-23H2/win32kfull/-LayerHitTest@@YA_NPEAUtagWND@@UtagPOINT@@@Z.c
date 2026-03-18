/*
 * XREFs of ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C001277C
 * Callers:
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00126F8 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0072DBC (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00AEFD0 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     _ChildWindowFromPointEx @ 0x1C0154E3A (_ChildWindowFromPointEx.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E3E3C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1C00F8458 (GrePtInSprite.c)
 */

bool __fastcall LayerHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  _BYTE *v3; // rdx
  int v5; // eax

  v3 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v3[24] & 0x20) != 0 )
    return 0;
  if ( (v3[27] & 0x20) != 0 && (v3[26] & 0x20) != 0 )
    return 1;
  v5 = IsWindowDesktopComposed(a1);
  return (unsigned int)GrePtInSprite(*(HDEV *)(gpDispInfo + 40LL), *((_WORD *)a1 + 128) >= 0x602u, v5) != 0;
}
