/*
 * XREFs of ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E4BE4
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E56D0 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C0062FAC (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0072F90 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0073520 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C01226C0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0154DA2 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01E3580 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01E3964 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01E40A0 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01E41C0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E49A0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E56D0 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     SizeBoxHwnd @ 0x1C024AF20 (SizeBoxHwnd.c)
 *     TouchTargetingRankForRect @ 0x1C024DBBC (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C024E108 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall xxxTargetingHitTest(
        __int64 a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        __int64 a4,
        _DWORD *a5,
        struct tagRECT *a6,
        unsigned int a7,
        int a8)
{
  _DWORD *v8; // r11
  bool v9; // zf
  unsigned int v10; // r13d
  unsigned __int64 v11; // r10
  struct tagRECT *v12; // r8
  int v14; // edi
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // cf
  int v25; // eax
  __int64 v26; // rdx
  LONG x; // edi
  struct tagRECT *v28; // rcx
  struct tagPOINT v29; // r8
  __int64 v30; // r8
  HWND v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  HWND v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // r15d
  struct tagPOINT v41; // r8
  int *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // r15d
  __int64 v48; // rdx
  unsigned __int8 *v49; // rdx
  __int64 v50; // rax
  int v52; // [rsp+50h] [rbp-A1h] BYREF
  unsigned int v53; // [rsp+54h] [rbp-9Dh] BYREF
  struct tagRECT *v54; // [rsp+58h] [rbp-99h] BYREF
  struct tagPOINT v55; // [rsp+60h] [rbp-91h] BYREF
  struct tagRECT *v56; // [rsp+68h] [rbp-89h]
  struct tagPOINT v57; // [rsp+70h] [rbp-81h] BYREF
  struct tagPOINT v58[2]; // [rsp+80h] [rbp-71h] BYREF
  struct tagPOINT v59; // [rsp+90h] [rbp-61h] BYREF
  struct tagRECT v60; // [rsp+A0h] [rbp-51h] BYREF
  _DWORD *v61; // [rsp+B0h] [rbp-41h]
  __int128 v62; // [rsp+B8h] [rbp-39h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-29h]
  struct tagRECT v64; // [rsp+D0h] [rbp-21h] BYREF

  v8 = a5;
  v9 = *(_DWORD *)(a4 + 88) == 1;
  v10 = -2;
  v11 = (unsigned __int64)a3;
  v55 = a3;
  v12 = a6;
  v14 = 17;
  v61 = a5;
  v56 = a6;
  v16 = a1;
  v54 = (struct tagRECT *)a7;
  v52 = -2;
  v17 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v57 = 0LL;
  v53 = 0;
  if ( v9
    && !PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v11)
    && (_WORD)a7 != 3
    && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    return v17;
  }
  v64 = *v12;
  if ( !(unsigned int)BasicTargetingWindowHitTest(
                        (const struct tagWND *)v16,
                        v11,
                        a4,
                        v8,
                        &v64,
                        (_DWORD *)&v54 + 1,
                        &v53,
                        (__int64)&v57,
                        a8,
                        a7) )
    return v17;
  if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v16, v19, v20, v21) )
  {
    v24 = (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v16) != 0;
    v25 = 1;
    v10 = v24 ? -2 : 1;
    v52 = v10;
  }
  else
  {
    v25 = HIDWORD(v54);
  }
  HIDWORD(v54) = v25;
  if ( v25 )
  {
    v47 = v53;
    goto LABEL_59;
  }
  v26 = *(_QWORD *)(v16 + 40);
  x = v57.x;
  if ( (*(_BYTE *)(v26 + 31) & 0x20) != 0 )
    goto LABEL_45;
  v59.y = v55.y + v57.y;
  v59.x = v55.x + v57.x;
  if ( !PtInRect((_DWORD *)(v26 + 104), *(_QWORD *)&v59) )
  {
    if ( *(_DWORD *)(a4 + 88) == 1 )
      goto LABEL_45;
    v30 = *(_QWORD *)(a4 + 40);
    v64 = *v28;
    *(struct tagRECT *)&v58[0].x = v64;
    if ( (unsigned __int16)TouchTargetingRankForRect(v58, &v64, v30, 0LL, 0LL, a7) > 0xFFDu )
      goto LABEL_45;
    v29 = v55;
  }
  if ( *(_DWORD *)(a4 + 88) == 1 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)(a4 + 40) + 176LL)
      || (xxxSendNCHitTest((unsigned __int64 *)v16, a2, v29, &v57, &v52, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
          v10 = v52,
          ((v52 + 1) & 0xFFFFFFFD) == 0) )
    {
      v64 = *v56;
      xxxPointerInsideNCTargeting((struct tagWND *)v16, a2, (struct tagPNTRWINDOWHITTTESTARGS *)a4, &v64, a7);
    }
  }
  if ( v10 != -2 && v10 != 1 )
  {
    ThreadLock(*(_QWORD *)(v16 + 112), &v62);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v58[0] = v55;
      LogicalToPhysicalDPIPoint(v58, &v55, *(unsigned int *)(*(_QWORD *)(v16 + 40) + 288LL), 0LL);
      v31 = xxxDCEWindowHitTest(
              *(struct tagWND **)(v16 + 112),
              *(_DWORD *)a4,
              *(_QWORD *)(a4 + 8),
              *(_QWORD *)(a4 + 16),
              v58[0],
              (int *)(a4 + 32),
              *(_DWORD *)(a4 + 36));
    }
    else
    {
      v31 = xxxWindowHitTest(*(struct tagWND **)(v16 + 112), v55, (int *)(a4 + 32), *(_DWORD *)(a4 + 36));
    }
    v17 = (__int64)v31;
    if ( v31 )
    {
      v35 = ValidateHwnd(v31);
      v58[0] = (struct tagPOINT)v35;
      v33 = v35;
      if ( v35 )
      {
        *v61 = 1;
        v64 = *v56;
        TransformRectBetweenCoordinateSpaces(&v64, v56, v35, v16);
        v60 = v64;
        _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a4, *(struct tagWND **)v58, 0LL, 0LL, 0LL, 0, &v60, a7);
      }
    }
    ThreadUnlock1(v33, v32, v34);
    goto LABEL_42;
  }
  if ( a7 != 2 )
  {
    v42 = (int *)(*(_QWORD *)(v16 + 40) + 104LL);
    v64 = 0LL;
    if ( (unsigned int)IntersectRect(&v64, v42, &v56->left) )
    {
      ++*(_DWORD *)(a4 + 88);
      ThreadLock(*(_QWORD *)(v16 + 112), &v62);
      v43 = *(_QWORD *)(v16 + 112);
      v60 = v64;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(
              v43,
              v55,
              a4,
              &v60,
              (unsigned __int16)a7);
      ThreadUnlock1(v45, v44, v46);
      --*(_DWORD *)(a4 + 88);
LABEL_42:
      v40 = v53;
      goto LABEL_43;
    }
LABEL_45:
    v40 = v53;
LABEL_46:
    if ( v40 == 4093 )
      return 0LL;
    v47 = _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v40) + v40;
    if ( !(unsigned int)TTBetterTarget(
                          (struct tagWND *)v16,
                          v47,
                          (struct tagPNTRWINDOWHITTTESTARGS *)a4,
                          v56,
                          (__int16)v54) )
      return *(_QWORD *)v16;
    if ( v10 == -2 || x || v57.y )
    {
      xxxSendNCHitTest((unsigned __int64 *)v16, a2, v55, &v57, &v52, (struct tagPNTRWINDOWHITTTESTARGS *)a4);
      v10 = v52;
    }
    if ( v10 == -1 )
    {
      v48 = *(_QWORD *)(a4 + 40);
      v60 = *(struct tagRECT *)(*(_QWORD *)(v16 + 40) + 88LL);
      v47 = (unsigned __int16)TouchTargetingRankForRectDeep(&v60, v48, v56, &v57, a8);
      if ( !(unsigned int)TTBetterTarget(
                            (struct tagWND *)v16,
                            v47,
                            (struct tagPNTRWINDOWHITTTESTARGS *)a4,
                            v56,
                            (__int16)v54)
        || (xxxSendNCHitTest((unsigned __int64 *)v16, a2, v55, &v57, &v52, (struct tagPNTRWINDOWHITTTESTARGS *)a4),
            v10 = v52,
            v52 == -1) )
      {
        *v61 = 0;
        return v17;
      }
    }
    v14 = 17;
LABEL_59:
    *(_DWORD *)(a4 + 32) = v10;
    v49 = *(unsigned __int8 **)(v16 + 40);
    if ( *(_DWORD *)(a4 + 84) )
    {
      v14 = (((v49[26] & 0x40) == 0) ^ (v49[25] >> 6) & 1) + 16;
    }
    else if ( (v49[26] & 0x40) != 0 )
    {
      v14 = 16;
    }
    if ( v10 == v14 && (v49[30] & 4) == 0 )
    {
      v50 = SizeBoxHwnd(v16);
      if ( v50 )
        v16 = v50;
    }
    if ( HIDWORD(v54) )
      v47 += _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v47);
    if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v16, (__int64)v49, v22, v23)
      || (unsigned int)TTBetterTarget(
                         (struct tagWND *)v16,
                         v47,
                         (struct tagPNTRWINDOWHITTTESTARGS *)a4,
                         v56,
                         (__int16)v54) )
    {
      v60 = *v56;
      _TTUpdateBestTarget(
        (struct tagPNTRWINDOWHITTTESTARGS *)a4,
        (struct tagWND *)v16,
        v47,
        &v57,
        0LL,
        0,
        &v60,
        (__int16)v54);
    }
    return *(_QWORD *)v16;
  }
  ThreadLock(*(_QWORD *)(v16 + 112), &v62);
  if ( *(_DWORD *)(a4 + 84) )
  {
    v58[0] = v59;
    LogicalToPhysicalDPIPoint(v58, &v59, *(unsigned int *)(*(_QWORD *)(v16 + 40) + 288LL), 0LL);
    v36 = xxxDCEWindowHitTest(
            *(struct tagWND **)(v16 + 112),
            *(_DWORD *)a4,
            *(_QWORD *)(a4 + 8),
            *(_QWORD *)(a4 + 16),
            v58[0],
            (int *)(a4 + 32),
            *(_DWORD *)(a4 + 36));
  }
  else
  {
    v36 = xxxWindowHitTest(*(struct tagWND **)(v16 + 112), v59, (int *)(a4 + 32), *(_DWORD *)(a4 + 36));
  }
  v17 = (__int64)v36;
  if ( v36 && (v58[0] = (struct tagPOINT)ValidateHwnd(v36)) != 0LL )
  {
    v40 = v53;
    if ( v53 )
      v40 += _TTWindowPenalty((struct tagWND *)v16, (struct tagPNTRWINDOWHITTTESTARGS *)a4, v53);
    if ( (unsigned int)TTBetterTarget(
                         *(struct tagWND **)v58,
                         v40,
                         (struct tagPNTRWINDOWHITTTESTARGS *)a4,
                         v56,
                         (__int16)v54) )
    {
      v41 = v58[0];
      *v61 = 1;
      v64 = *v56;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TransformRectBetweenCoordinateSpaces)(&v64, v56, v41, v16);
      v60 = v64;
      _TTUpdateBestTarget(
        (struct tagPNTRWINDOWHITTTESTARGS *)a4,
        *(struct tagWND **)v58,
        v40,
        0LL,
        0LL,
        0,
        &v60,
        (__int16)v54);
    }
  }
  else
  {
    v40 = v53;
  }
  ThreadUnlock1(v38, v37, v39);
LABEL_43:
  if ( !v17 )
    goto LABEL_46;
  return v17;
}
