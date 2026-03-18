/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401599AC
 * Callers:
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1400224D4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x140159920 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x1402A3910 (EditionPostDwmSpeedHitTest.c)
 * Callees:
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1400223EC (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x140159B58 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  struct tagPOINT v3; // rbx
  __int64 v5; // rcx
  unsigned __int8 v8; // r10
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const struct _D3DMATRIX *v13; // rdx
  const struct tagRECT *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct tagPOINT v18; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v5 = *((_QWORD *)a1 + 5);
  v18 = *a2;
  if ( (*(_BYTE *)(v5 + 31) & 0x10) == 0 )
    return 0LL;
  v8 = *(_BYTE *)(v5 + 233);
  v9 = (v8 >> 4) & 2 | 1u;
  if ( (v8 & 0x40) == 0 )
    v9 = (v8 >> 4) & 2;
  v10 = v9 | 1;
  if ( (v8 & 0x80u) == 0 )
    v10 = v9;
  if ( v10
    || *((_QWORD *)a1 + 3)
    && *(_DWORD *)(W32GetUserSessionState(v9, a2) + 66132)
    && *(_QWORD *)(W32GetUserSessionState(v12, v11) + 63016) != *((_QWORD *)a1 + 3)
    && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 2
    && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 3
    && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 14
    && (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) - 17) > 1 )
  {
    return 0LL;
  }
  v13 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 27);
  v14 = (const struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( !v13 )
  {
    if ( v3.x >= v14->left
      && v3.x < *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL)
      && v3.y >= *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)
      && v3.y < *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) )
    {
      goto LABEL_14;
    }
    return 0LL;
  }
  if ( !DCEHitTestWindow(v14, v13, &v18, a3) )
    return 0LL;
  v3 = v18;
LABEL_14:
  v15 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
  if ( v15 && !(unsigned int)GrePtInRegion(v15, (unsigned int)v3.x, (unsigned int)v18.y) )
    return 0LL;
  v16 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v16 + 26) & 8) != 0 && (*(_DWORD *)(v16 + 232) & 2) == 0 && !DCELayerHitTest(a1, v3) )
    return 0LL;
  if ( *((_QWORD *)a1 + 27) )
    *a2 = v3;
  return 1LL;
}
