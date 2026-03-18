/*
 * XREFs of TouchTargetingRankForRect @ 0x1401B5200
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1401B4C34 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401B5748 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1401B5F90 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     TouchTargetingRankForRegion @ 0x1402F24C4 (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     _TTPixelsToHm @ 0x1401B683C (_TTPixelsToHm.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1402F1FFC (-_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@.c)
 */

__int64 __fastcall TouchTargetingRankForRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned int a6)
{
  LONG right; // r10d
  int left; // r12d
  int top; // eax
  LONG bottom; // r11d
  struct tagRECT v15; // xmm1
  int v16; // r13d
  int v17; // r9d
  struct tagRECT v18; // xmm1
  struct tagRECT v19; // xmm1
  struct tagRECT v20; // xmm1
  LONG x; // r10d
  LONG y; // r12d
  int v23; // eax
  LONG v24; // r11d
  int v25; // r11d
  __int64 v26; // rcx
  int v27; // eax
  int v28; // r10d
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r10d
  int v32; // esi
  __int64 v33; // rcx
  __int64 v34; // rcx
  LONG v35; // edx
  BOOL v36; // r8d
  LONG v37; // r11d
  LONG v38; // eax
  LONG v39; // ecx
  int v40; // eax
  LONG v41; // ecx
  int v42; // ecx
  int v43; // edx
  int v44; // eax
  LONG *p_right; // r9
  LONG v46; // eax
  LONG v47; // r8d
  LONG v48; // esi
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  LONG v52; // esi
  int v53; // edx
  int v54; // eax
  __int64 v55; // rdx
  int v56; // r10d
  __int64 v57; // rcx
  int v58; // r12d
  unsigned __int16 v59[2]; // [rsp+58h] [rbp-19h] BYREF
  int v60; // [rsp+5Ch] [rbp-15h]
  LONG v61; // [rsp+60h] [rbp-11h]
  LONG v62; // [rsp+64h] [rbp-Dh]
  struct tagPOINT v63; // [rsp+68h] [rbp-9h] BYREF
  struct tagRECT v64; // [rsp+78h] [rbp+7h] BYREF
  struct tagRECT v65; // [rsp+88h] [rbp+17h] BYREF
  bool v66; // [rsp+D8h] [rbp+67h]

  v63 = 0LL;
  v59[0] = 4094;
  v64 = 0LL;
  if ( !a3[45] )
    return 4094LL;
  if ( a6 == 4 )
  {
    v66 = 1;
  }
  else
  {
    v66 = 0;
    if ( !(unsigned int)IntersectRect(&v64, &a1->left, a3) )
      return 4094LL;
  }
  if ( a4 && !(unsigned int)IntersectRect(a1, &a1->left, a4) )
    return 4094LL;
  if ( !(unsigned int)IntersectRect(a1, &a2->left, &a1->left) )
    return 4094LL;
  right = a1->right;
  left = a1->left;
  v61 = right;
  if ( left == right )
    return 4094LL;
  top = a1->top;
  bottom = a1->bottom;
  v60 = top;
  v62 = bottom;
  if ( top == bottom )
    return 4094LL;
  if ( a5 )
  {
    *a5 = 0;
    a5[1] = 0;
  }
  if ( !a6 )
  {
    v64 = *a2;
    if ( a4 && !(unsigned int)IntersectRect(&v64, &v64.left, a4) )
      return 4094LL;
    if ( (int)TTPixelsToHm((unsigned int)(v64.right - v64.left), (unsigned int)a3[46]) > 1400
      && (int)TTPixelsToHm((unsigned int)(v64.bottom - v64.top), (unsigned int)a3[47]) > 1400 )
    {
      return 4093LL;
    }
    top = v60;
  }
  v15 = *a2;
  v16 = bottom - 1;
  v17 = bottom - 1;
  if ( left == right - 1 )
  {
    v64 = *a1;
    v65 = v15;
    _TTUpdateRankWithSegment(
      left,
      top,
      left,
      v17,
      v66,
      &v63,
      v59,
      &v65,
      &v64,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
  }
  else
  {
    v65 = *a1;
    v64 = v15;
    if ( top == v16 )
    {
      _TTUpdateRankWithSegment(
        left,
        v16,
        right - 1,
        v17,
        v66,
        &v63,
        v59,
        &v64,
        &v65,
        (const struct tagTOUCHTARGETINGCONTACT *)a3);
    }
    else
    {
      _TTUpdateRankWithSegment(
        left,
        top,
        left,
        v17,
        v66,
        &v63,
        v59,
        &v64,
        &v65,
        (const struct tagTOUCHTARGETINGCONTACT *)a3);
      v18 = *a2;
      v65 = *a1;
      v64 = v18;
      _TTUpdateRankWithSegment(
        v61 - 1,
        v16,
        v61 - 1,
        v60,
        v66,
        &v63,
        v59,
        &v64,
        &v65,
        (const struct tagTOUCHTARGETINGCONTACT *)a3);
      v19 = *a2;
      v65 = *a1;
      v64 = v19;
      _TTUpdateRankWithSegment(
        left,
        v16,
        v61 - 1,
        v16,
        v66,
        &v63,
        v59,
        &v64,
        &v65,
        (const struct tagTOUCHTARGETINGCONTACT *)a3);
      v20 = *a2;
      v65 = *a1;
      v64 = v20;
      _TTUpdateRankWithSegment(
        v61 - 1,
        v60,
        left,
        v60,
        v66,
        &v63,
        v59,
        &v64,
        &v65,
        (const struct tagTOUCHTARGETINGCONTACT *)a3);
    }
  }
  if ( v59[0] == 4094 || !a5 )
    return v59[0];
  x = v63.x;
  y = v63.y;
  v23 = v63.x - a3[8];
  v24 = v63.y;
  *a5 = v23;
  v25 = v24 - a3[9];
  a5[1] = v25;
  if ( !a6 || (_WORD)a6 == 3 )
  {
    v32 = 200;
    if ( (_WORD)a6 == 3 )
      v32 = HIWORD(a6);
    if ( v23 )
    {
      v33 = (unsigned int)-v23;
      if ( v23 > 0 )
        v33 = (unsigned int)v23;
      if ( (int)TTPixelsToHm(v33, (unsigned int)a3[46]) > v32 )
        return 4094LL;
    }
    if ( v25 )
    {
      v34 = (unsigned int)-v25;
      if ( v25 > 0 )
        v34 = (unsigned int)v25;
      if ( (int)TTPixelsToHm(v34, (unsigned int)a3[47]) > v32 )
        return 4094LL;
    }
    if ( a6 )
      return v59[0];
    v35 = a3[8];
    v36 = 0;
    v37 = a2->left;
    if ( v35 >= a2->left )
    {
      p_right = &a2->right;
      v46 = a2->right;
      if ( v35 >= v46 )
      {
        v47 = a3[9];
        v48 = a2->top;
        if ( v47 >= v48 )
        {
          v52 = a2->bottom;
          if ( v47 < v52 )
            goto LABEL_74;
          v53 = v35 - v46 + 1;
          v50 = -v53;
          if ( v53 > 0 )
            v50 = v53;
          v51 = v47 - v52 + 1;
        }
        else
        {
          v49 = v35 - v46 + 1;
          v50 = -v49;
          if ( v49 > 0 )
            v50 = v49;
          v51 = v47 - v48;
        }
        v54 = -v51;
        if ( v51 > 0 )
          v54 = v51;
        v36 = v50 > v54;
      }
LABEL_73:
      if ( !v36 )
      {
        v55 = (unsigned int)a3[47];
        v58 = y - (a2->top + a2->bottom) / 2;
        v57 = (unsigned int)-v58;
        if ( v58 > 0 )
          v57 = (unsigned int)v58;
        goto LABEL_79;
      }
LABEL_74:
      v55 = (unsigned int)a3[46];
      v56 = x - (v37 + *p_right) / 2;
      v57 = (unsigned int)-v56;
      if ( v56 > 0 )
        v57 = (unsigned int)v56;
LABEL_79:
      v30 = TTPixelsToHm(v57, v55);
      v31 = 700;
      goto LABEL_80;
    }
    v38 = a3[9];
    v39 = a2->top;
    if ( v38 >= v39 )
    {
      v41 = a2->bottom;
      if ( v38 < v41 )
      {
        v36 = 1;
LABEL_60:
        p_right = &a2->right;
        goto LABEL_73;
      }
      v40 = v38 - v41 + 1;
    }
    else
    {
      v40 = v38 - v39;
    }
    v42 = -v40;
    if ( v40 > 0 )
      v42 = v40;
    v43 = v35 - v37;
    v44 = -v43;
    if ( v43 > 0 )
      v44 = v43;
    LOBYTE(v36) = v44 > v42;
    goto LABEL_60;
  }
  if ( a6 != 4 )
    return v59[0];
  if ( v23 )
  {
    v26 = (unsigned int)-v23;
    if ( v23 > 0 )
      v26 = (unsigned int)v23;
    v27 = TTPixelsToHm(v26, (unsigned int)a3[46]);
    if ( v27 > v28 )
      return 4094LL;
  }
  if ( !v25 )
    return v59[0];
  v29 = (unsigned int)-v25;
  if ( v25 > 0 )
    v29 = (unsigned int)v25;
  v30 = TTPixelsToHm(v29, (unsigned int)a3[47]);
LABEL_80:
  if ( v30 <= v31 )
    return v59[0];
  return 4094LL;
}
