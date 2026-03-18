/*
 * XREFs of ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400A2114
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x140009818 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400A19F0 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1400A1650 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1400A340C (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bFindFirstSegment(XCLIPOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  int v5; // edi
  struct _POINTL *v6; // r8
  int y; // edx
  struct _POINTL *v8; // r8
  int v9; // r9d
  int x; // edx
  _DWORD *v11; // r9
  int v12; // r11d
  int v13; // r8d
  int v14; // r10d
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // esi
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // r8d
  int *v23; // r10
  int *v24; // r9
  struct _POINTL *v25; // r8
  int v26; // ecx
  struct _POINTL *v27; // rsi
  int v28; // r11d
  LONG v29; // edx
  int i; // ebp
  int v31; // ecx
  LONG v32; // edx
  int v34; // ecx
  int v35; // edx
  int v36; // ecx
  LONG v37; // edx

  *(_QWORD *)(*((_QWORD *)this + 18) + 128LL) = *(_QWORD *)(*((_QWORD *)this + 18) + 152LL);
  v2 = *((_QWORD *)this + 18);
  v3 = *((_QWORD *)this + 10);
  if ( (*(_DWORD *)(v2 + 24) & 0x800000) != 0 )
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 4);
    v4 = *(_DWORD *)(*((_QWORD *)this + 10) + 8LL);
  }
  else
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 8);
    v4 = *(_DWORD *)(*((_QWORD *)this + 10) + 4LL);
  }
  v5 = 0;
  *(_DWORD *)(*((_QWORD *)this + 18) + 168LL) = v4;
  v6 = (struct _POINTL *)*((_QWORD *)this + 18);
  y = v6[20].y;
  if ( (((unsigned int)v6[3].x >> 23) & 1) == v6[16].y < y )
  {
    XCLIPOBJ::vIntersectScan(this, y, 0LL, v6 + 16, &v6[3].y);
  }
  else
  {
    v6[3].y = v6[20].x;
    *(_DWORD *)(*((_QWORD *)this + 18) + 164LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 132LL);
  }
  v8 = (struct _POINTL *)*((_QWORD *)this + 18);
  v9 = v8[15].y;
  x = v8[21].x;
  if ( (((unsigned int)v8[3].x >> 23) & 1) == v9 >= x )
  {
    XCLIPOBJ::vIntersectScan(this, x, v8 + 18, v8 + 19, (int *)&v8[20]);
  }
  else
  {
    v8[18].y = v9;
    *(_DWORD *)(*((_QWORD *)this + 18) + 144LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 120LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 168LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) + 1;
    v11 = (_DWORD *)*((_QWORD *)this + 18);
    v12 = v11[16];
    v13 = v11[24];
    v14 = v11[25];
    v15 = v14;
    if ( (v12 & 5) != 0 )
    {
      v13 = v11[25];
      v15 = v11[24];
    }
    v16 = v11[24];
    if ( (v11[16] & 5) == 0 )
    {
      v16 = v11[25];
      v14 = v11[24];
    }
    v17 = -v16;
    if ( (v12 & 8) == 0 )
      v17 = v15;
    v18 = -v16;
    if ( (v12 & 8) == 0 )
      v18 = v16;
    if ( (v12 & 0x20) != 0 )
      v13 = -v14;
    v19 = -v14;
    if ( (v12 & 0x20) == 0 )
      v19 = v14;
    if ( (v12 & 5) != 0 )
    {
      v34 = v11[31];
      if ( v34 - v18 >= 0 )
        v35 = v34 - v17;
      else
        v35 = v17 - v34;
      v11[40] = v35;
    }
    else
    {
      v20 = v11[30] - v19;
      v21 = v11[30] - v13;
      v22 = v13 - v11[30];
      if ( v20 >= 0 )
        v22 = v21;
      v11[40] = v22;
    }
  }
  v23 = (int *)*((_QWORD *)this + 10);
  v24 = (int *)((char *)this + 96);
  v25 = (struct _POINTL *)*((_QWORD *)this + 18);
  v26 = *v23;
  *((_DWORD *)this + 24) = 0;
  v27 = v25 + 16;
  v28 = v26 - 1;
  *((_DWORD *)this + 26) = v26 - 1;
  v29 = v25[16].x;
  if ( v29 >= v23[v26 + 2] )
  {
    *v24 = v28;
    if ( (v25[3].x & 0x400000) != 0 )
      return 0LL;
  }
  else if ( v29 < v23[3] )
  {
    if ( (v25[3].x & 0x400000) == 0 )
      return 0LL;
    v26 = -1;
  }
  else
  {
    for ( i = 0; ; i = v31 )
    {
      while ( 1 )
      {
        v31 = (v28 + i) / 2;
        *v24 = v31;
        v32 = v27->x;
        if ( v27->x >= v23[v31 + 3] )
          break;
        v28 = v31 - 1;
        if ( v32 >= v23[v31 + 2] )
          goto LABEL_28;
      }
      if ( v32 < v23[++v31 + 3] )
        break;
    }
    *((_DWORD *)this + 24) = v31;
LABEL_28:
    v24 = (int *)((char *)this + 96);
    v26 = v31 - (((unsigned int)v25[3].x >> 22) & 1);
  }
  *v24 = v26;
  if ( (((unsigned __int8)v26 ^ (unsigned __int8)((unsigned int)v25[3].x >> 22)) & 1) != 0 )
    return 1LL;
  v36 = *((_DWORD *)this + 25) + v26;
  *((_DWORD *)this + 24) = v36;
  v37 = v23[v36 + 3];
  LOBYTE(v5) = v37 > v25[18].x;
  if ( (((unsigned int)v25[3].x >> 22) & 1) != v5 )
  {
    XCLIPOBJ::bIntersectWall(this, v37, 0LL, v25 + 16, &v25[3].y);
    return 1LL;
  }
  return 0LL;
}
