/*
 * XREFs of ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14019CE40
 * Callers:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x1400678B8 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     _ChildWindowFromPointEx @ 0x140067D2C (_ChildWindowFromPointEx.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x140221EF8 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1400226B0 (GrePtInSprite.c)
 */

bool __fastcall LayerHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  _BYTE *v4; // rdx
  int v5; // eax
  unsigned __int16 v6; // di
  int v7; // esi
  HWND v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  v4 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v4[24] & 0x20) != 0 )
    return 0;
  if ( (v4[27] & 0x20) != 0 && (v4[26] & 0x20) != 0 )
    return 1;
  v5 = IsWindowDesktopComposed(a1);
  v6 = *((_WORD *)a1 + 128);
  v7 = v5;
  v8 = *(HWND *)a1;
  UserSessionState = W32GetUserSessionState(v10, v9);
  return (unsigned int)GrePtInSprite(
                         *(SURFOBJ ***)(*(_QWORD *)(UserSessionState + 57008) + 48LL),
                         v8,
                         x,
                         y,
                         v6 >= 0x602u,
                         v7) != 0;
}
