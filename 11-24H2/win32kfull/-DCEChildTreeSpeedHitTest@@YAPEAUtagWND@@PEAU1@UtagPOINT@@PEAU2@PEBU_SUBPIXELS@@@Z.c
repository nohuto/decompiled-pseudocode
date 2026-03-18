/*
 * XREFs of ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1400224D4
 * Callers:
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1400224D4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x1402A3910 (EditionPostDwmSpeedHitTest.c)
 * Callees:
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1400224D4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     GrePtInSprite @ 0x1400226B0 (GrePtInSprite.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401599AC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

struct tagWND *__fastcall DCEChildTreeSpeedHitTest(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  __int64 v4; // r15
  struct _SUBPIXELS *v5; // rbx
  __int64 v9; // rcx
  struct tagPOINT v10; // rbx
  __int64 v11; // rcx
  _BYTE *v12; // rcx
  unsigned __int8 v13; // dl
  _DWORD *v14; // rcx
  struct tagPOINT v15; // rax
  unsigned __int64 v16; // rax
  struct tagWND *v17; // rax
  int v19; // eax
  unsigned __int16 v20; // si
  int v21; // ebp
  __int64 UserSessionState; // rax
  struct tagPOINT v23; // [rsp+70h] [rbp+8h] BYREF
  struct _SUBPIXELS *v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v4 = *((_QWORD *)a1 + 14);
  v5 = a4;
  while ( 1 )
  {
    if ( !v4 )
      return a1;
    if ( *(_QWORD *)(v4 + 216) )
      break;
    v9 = *(_QWORD *)(v4 + 40);
    v10 = *a3;
    v23 = *a3;
    if ( (*(_BYTE *)(v9 + 31) & 0x10) != 0
      && v10.x >= *(_DWORD *)(v9 + 88)
      && v10.x < *(_DWORD *)(v9 + 96)
      && v10.y >= *(_DWORD *)(v9 + 92)
      && v10.y < *(_DWORD *)(v9 + 100) )
    {
      v11 = *(_QWORD *)(v9 + 168);
      if ( !v11 || (unsigned int)GrePtInRegion(v11, (unsigned int)v10.x, HIDWORD(*(unsigned __int64 *)&v10)) )
      {
        v12 = *(_BYTE **)(v4 + 40);
        v13 = v12[26];
        if ( (v13 & 8) == 0
          || (v12[24] & 0x20) == 0
          && ((v13 & v12[27] & 0x20) != 0
           || (v19 = IsWindowDesktopComposed(v4),
               v20 = *(_WORD *)(v4 + 256),
               v21 = v19,
               UserSessionState = W32GetUserSessionState(),
               (unsigned int)GrePtInSprite(*(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), v20 >= 0x602u, v21))) )
        {
          v5 = v24;
          goto LABEL_12;
        }
      }
    }
    v5 = v24;
LABEL_25:
    v4 = *(_QWORD *)(v4 + 88);
  }
  v23 = a2;
  if ( !(unsigned int)DCEIsWindowHit((struct tagWND *)v4, &v23, v5) )
    goto LABEL_25;
  *a3 = v23;
LABEL_12:
  if ( *(_QWORD *)(v4 + 112) )
  {
    v14 = *(_DWORD **)(v4 + 40);
    v15 = *a3;
    if ( a3->x >= v14[26] && v15.x < v14[28] )
    {
      v16 = HIDWORD(*(unsigned __int64 *)&v15);
      if ( (int)v16 >= v14[27] && (int)v16 < v14[29] )
      {
        v17 = DCEChildTreeSpeedHitTest((struct tagWND *)v4, a2, a3, v5);
        if ( v17 )
        {
          if ( v17 != (struct tagWND *)v4 )
            return v17;
        }
      }
    }
  }
  return (struct tagWND *)v4;
}
