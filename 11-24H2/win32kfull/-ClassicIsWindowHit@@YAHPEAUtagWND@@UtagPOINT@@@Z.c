/*
 * XREFs of ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1400222C0
 * Callers:
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401598B0 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1401B6C08 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 * Callees:
 *     GrePtInSprite @ 0x1400226B0 (GrePtInSprite.c)
 */

_BOOL8 __fastcall ClassicIsWindowHit(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE *v6; // rcx
  unsigned __int8 v7; // dl
  _BOOL8 result; // rax
  int v9; // eax
  unsigned __int16 v10; // di
  int v11; // esi
  __int64 UserSessionState; // rax

  v4 = *((_QWORD *)a1 + 5);
  result = 0;
  if ( (*(_BYTE *)(v4 + 31) & 0x10) != 0
    && a2.x >= *(_DWORD *)(v4 + 88)
    && a2.x < *(_DWORD *)(v4 + 96)
    && a2.y >= *(_DWORD *)(v4 + 92)
    && a2.y < *(_DWORD *)(v4 + 100) )
  {
    v5 = *(_QWORD *)(v4 + 168);
    if ( !v5 || (unsigned int)GrePtInRegion(v5, (unsigned int)a2.x, HIDWORD(*(unsigned __int64 *)&a2)) )
    {
      v6 = (_BYTE *)*((_QWORD *)a1 + 5);
      v7 = v6[26];
      if ( (v7 & 8) == 0 )
        return 1;
      if ( (v6[24] & 0x20) == 0 )
      {
        if ( (v7 & v6[27] & 0x20) != 0 )
          return 1;
        v9 = IsWindowDesktopComposed(a1);
        v10 = *((_WORD *)a1 + 128);
        v11 = v9;
        UserSessionState = W32GetUserSessionState();
        if ( (unsigned int)GrePtInSprite(*(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), v10 >= 0x602u, v11) )
          return 1;
      }
    }
  }
  return result;
}
