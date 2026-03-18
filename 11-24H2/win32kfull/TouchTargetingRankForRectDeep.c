/*
 * XREFs of TouchTargetingRankForRectDeep @ 0x1401B6CF0
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401B5748 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x140221EF8 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     TouchTargetingRank @ 0x140227624 (TouchTargetingRank.c)
 *     ?_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z @ 0x1402F1E64 (-_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1402F1FA0 (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 *     TouchTargetingSnapToSegment @ 0x1402F25EC (TouchTargetingSnapToSegment.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall TouchTargetingRankForRectDeep(_OWORD *a1, __int64 a2, int *a3, int *a4, int a5)
{
  __int128 v5; // xmm0
  _DWORD *v8; // rdi
  unsigned __int16 v9; // r12
  struct tagPOINT v10; // rcx
  int v11; // esi
  int v12; // r14d
  int v13; // ebx
  int v14; // edi
  struct tagPOINT v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  int v19; // ebx
  struct tagPOINT v21; // [rsp+30h] [rbp-40h] BYREF
  struct tagPOINT v22; // [rsp+38h] [rbp-38h] BYREF
  struct tagPOINT v23; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v24; // [rsp+48h] [rbp-28h]
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF

  v5 = *a1;
  v8 = a1;
  v24 = a1;
  v9 = 4094;
  v23 = 0LL;
  v25 = v5;
  v22 = 0LL;
  if ( *(_DWORD *)(a2 + 180)
    && (!a3 || (unsigned int)IntersectRect(&v25, (int *)&v25, a3))
    && (_DWORD)v25 != DWORD2(v25)
    && DWORD1(v25) != HIDWORD(v25) )
  {
    v10 = *(struct tagPOINT *)(a2 + 32);
    v21.x = *(_DWORD *)(a2 + 32) + *a4;
    v21.y = a4[1] + *(_DWORD *)(a2 + 36);
    if ( (unsigned int)_TTIntersectLine(v10, v21, (const struct tagTOUCHTARGETINGCONTACT *)a2, &v23, &v22) )
    {
      v21 = 0LL;
      if ( !a5 )
      {
        v11 = *(_DWORD *)(a2 + 184);
        v12 = *(_DWORD *)(a2 + 32);
        _TTLimitDeepTargetingPoint(v12, v11, (int *)&v23);
        v13 = *(_DWORD *)(a2 + 188);
        v14 = *(_DWORD *)(a2 + 36);
        _TTLimitDeepTargetingPoint(v14, v13, &v23.y);
        _TTLimitDeepTargetingPoint(v12, v11, (int *)&v22);
        _TTLimitDeepTargetingPoint(v14, v13, &v22.y);
        v8 = v24;
      }
      LODWORD(v24) = (*v8 + v8[2]) / 2;
      HIDWORD(v24) = (v8[1] + v8[3]) / 2;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TouchTargetingSnapToSegment)(v23, v22, v24, &v21);
      v15 = v21;
      if ( PtInRect(&v25, *(_QWORD *)&v21) )
      {
        v17 = *(_QWORD *)(a2 + 32);
        v25 = *(_OWORD *)v8;
        v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TouchTargetingRank)(v17, v15, &v25, v16);
        v19 = v15.x - *(_DWORD *)(a2 + 32);
        v9 = v18;
        a4[1] = v21.y - *(_DWORD *)(a2 + 36);
        *a4 = v19;
      }
    }
  }
  return v9;
}
