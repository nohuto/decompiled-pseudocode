/*
 * XREFs of ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1400223EC
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1400F8500 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401599AC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x140221EF8 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1400226B0 (GrePtInSprite.c)
 */

bool __fastcall DCELayerHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned __int16 v6; // di
  int v7; // esi
  __int64 UserSessionState; // rax

  v4 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v4 + 24) & 0x20) != 0 )
    return 0;
  if ( a2.x < *(_DWORD *)(v4 + 88)
    || a2.x >= *(_DWORD *)(v4 + 96)
    || a2.y < *(_DWORD *)(v4 + 92)
    || a2.y >= *(_DWORD *)(v4 + 100)
    || (*(_BYTE *)(v4 + 27) & 0x20) != 0 && (*(_BYTE *)(v4 + 26) & 0x20) != 0 )
  {
    return 1;
  }
  v5 = IsWindowDesktopComposed(a1);
  v6 = *((_WORD *)a1 + 128);
  v7 = v5;
  UserSessionState = W32GetUserSessionState();
  return (unsigned int)GrePtInSprite(*(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), v6 >= 0x602u, v7) != 0;
}
