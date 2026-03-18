/*
 * XREFs of ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1401B4C34
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401B5748 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     TouchTargetingRankForRect @ 0x1401B5200 (TouchTargetingRankForRect.c)
 *     _TTHmToPixels @ 0x1401B6728 (_TTHmToPixels.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1401B6EC0 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1401B703C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1402A3594 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxPointerInsideNCTargeting(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  _DWORD *v6; // rcx
  unsigned int v7; // r15d
  unsigned __int16 v11; // r14
  LONG v12; // edx
  int v13; // r8d
  __int64 v14; // rdi
  unsigned int v15; // r11d
  int v16; // eax
  unsigned int v17; // r10d
  unsigned int v18; // r11d
  int v19; // r9d
  unsigned int v20; // r15d
  unsigned __int16 v21; // ax
  LONG v22; // edi
  struct tagRECT v23; // xmm6
  __int64 v24; // r8
  unsigned __int16 v25; // ax
  _DWORD *v26; // rax
  int v27; // ecx
  unsigned int v28; // edx
  LONG v29; // r8d
  unsigned __int16 v30; // ax
  struct tagRECT v31; // xmm7
  int v32; // edx
  _DWORD *v33; // rax
  LONG v34; // ecx
  int v35; // edx
  LONG v36; // r8d
  unsigned __int16 v37; // ax
  int v38; // edx
  _DWORD *v39; // rcx
  int v40; // r8d
  int v41; // eax
  LONG v42; // edx
  __int64 v43; // r8
  unsigned __int16 v44; // ax
  int v45; // r8d
  struct tagPOINT *v46; // r8
  int v47; // ebx
  int v48; // eax
  unsigned __int16 v49; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v50; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v51; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v52; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v53; // [rsp+48h] [rbp-C0h]
  int v54[3]; // [rsp+4Ch] [rbp-BCh] BYREF
  LONG v55; // [rsp+58h] [rbp-B0h]
  __int64 v56; // [rsp+68h] [rbp-A0h]
  __int64 v57; // [rsp+70h] [rbp-98h] BYREF
  struct tagPOINT v58; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v59; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v60; // [rsp+98h] [rbp-70h] BYREF
  int v61; // [rsp+A8h] [rbp-60h]
  struct tagPOINT v62; // [rsp+B8h] [rbp-50h] BYREF
  int v63; // [rsp+C0h] [rbp-48h]
  int v64; // [rsp+C4h] [rbp-44h]
  struct tagRECT v65; // [rsp+C8h] [rbp-40h] BYREF
  signed int v66; // [rsp+D8h] [rbp-30h]
  struct tagRECT v67; // [rsp+E8h] [rbp-20h] BYREF

  v58 = 0LL;
  v6 = (_DWORD *)*((_QWORD *)a1 + 5);
  v7 = 120;
  v11 = 4095;
  v12 = v6[29];
  v13 = v6[25];
  v59.left = v6[22];
  v66 = v6[26];
  v55 = v6[28];
  v60.left = v55;
  LODWORD(v56) = v6[24];
  v60.right = v56;
  HIDWORD(v56) = v12;
  *(_QWORD *)&v59.top = __PAIR64__(v66, v12);
  v54[0] = v13;
  v59.bottom = v13;
  v60.top = v12;
  v60.bottom = v13;
  v67 = 0LL;
  if ( (_WORD)a5 == 3 && HIWORD(a5) >= 0x78u )
    v7 = HIWORD(a5);
  v14 = *((_QWORD *)a3 + 5);
  TTHmToPixels(v7, *(unsigned int *)(v14 + 184));
  v16 = TTHmToPixels(v7, v15);
  if ( v19 <= v16 )
    v17 = v18;
  v57 = 0LL;
  v61 = TTHmToPixels(v7, v17);
  v62 = (struct tagPOINT)__PAIR64__(HIDWORD(v56), v55);
  v63 = v56;
  v64 = v54[0];
  *(_QWORD *)&v65.left = __PAIR64__(HIDWORD(v56), v55);
  *(_QWORD *)&v65.right = __PAIR64__(v54[0], v56);
  v20 = (v7 << 16) + 3;
  v21 = TouchTargetingRankForRect(&v65, &v62, v14, a4, &v57, v20);
  v49 = v21;
  if ( v21 > 0xFFCu )
  {
    v22 = v55;
  }
  else
  {
    v22 = v55;
    if ( (unsigned int)TTBetterTarget(a1, v21, a3, a4, v20) )
    {
      v11 = v49;
      v67.top = HIDWORD(v56);
      v67.right = v56;
      v67.bottom = v54[0];
      v58 = (struct tagPOINT)v57;
      v67.left = v55;
    }
  }
  v23 = v59;
  v24 = *((_QWORD *)a3 + 5);
  v57 = 0LL;
  v65 = v59;
  v25 = TouchTargetingRankForRect(&v65, &v59, v24, a4, &v57, v20);
  v50 = v25;
  if ( v25 < v11 && v25 < 0xFFDu && (unsigned int)TTBetterTarget(a1, v25, a3, a4, v20) )
  {
    v11 = v50;
    v58 = (struct tagPOINT)v57;
    v67 = v23;
  }
  v26 = (_DWORD *)*((_QWORD *)a1 + 5);
  v62 = 0LL;
  v27 = v26[28];
  v28 = v26[23];
  v29 = v26[24];
  LODWORD(v26) = v26[29] - 1;
  v54[0] = v27;
  LODWORD(v57) = (_DWORD)v26;
  LODWORD(v56) = v28;
  v55 = v29;
  *(_QWORD *)&v59.left = __PAIR64__(v28, v27);
  *(_QWORD *)&v59.right = __PAIR64__((unsigned int)v26, v29);
  *(_QWORD *)&v65.left = __PAIR64__(v28, v27);
  *(_QWORD *)&v65.right = __PAIR64__((unsigned int)v26, v29);
  v30 = TouchTargetingRankForRect(&v65, &v59, *((_QWORD *)a3 + 5), a4, &v62, v20);
  v31 = v60;
  v51 = v30;
  if ( v30 < v11 && v30 < 0xFFDu )
  {
    if ( (unsigned int)TTBetterTarget(a1, v30, a3, a4, v20) )
    {
      v67.left = v54[0];
      v11 = v51;
      v67.top = v56;
      v67.right = v55;
      v67.bottom = v57;
      v58 = v62;
      v32 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
      if ( v32 + v61 >= SHIDWORD(v56) )
      {
        v67 = v31;
        v58.y = v31.top - v32 + 1;
      }
    }
  }
  v33 = (_DWORD *)*((_QWORD *)a1 + 5);
  v62 = 0LL;
  v34 = v33[22];
  v35 = v33[23];
  v36 = v33[26];
  LODWORD(v33) = v33[29] - 1;
  LODWORD(v57) = v34;
  v55 = (int)v33;
  v60.bottom = (int)v33;
  v54[0] = v35;
  LODWORD(v56) = v36;
  v60.left = v34;
  v60.top = v35;
  v60.right = v36;
  *(_QWORD *)&v59.left = __PAIR64__(v35, v34);
  *(_QWORD *)&v59.right = __PAIR64__((unsigned int)v33, v36);
  v37 = TouchTargetingRankForRect(&v59, &v60, *((_QWORD *)a3 + 5), a4, &v62, v20);
  v52 = v37;
  if ( v37 < v11 && v37 < 0xFFDu )
  {
    if ( (unsigned int)TTBetterTarget(a1, v37, a3, a4, v20) )
    {
      v67.left = v57;
      v11 = v52;
      v67.top = v54[0];
      v67.right = v56;
      v67.bottom = v55;
      v58 = v62;
      v38 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
      if ( v38 + v61 >= SHIDWORD(v56) )
      {
        v67 = v23;
        v58.y = v23.top - v38 + 1;
      }
    }
  }
  v39 = (_DWORD *)*((_QWORD *)a1 + 5);
  v62 = 0LL;
  v40 = v39[29];
  v41 = v39[28];
  v42 = v39[26] + 1;
  LODWORD(v39) = v39[25];
  LODWORD(v56) = v41 - 1;
  v60.right = v41 - 1;
  v59.right = v41 - 1;
  LODWORD(v57) = v42;
  v54[0] = v40;
  HIDWORD(v56) = (_DWORD)v39;
  v60.left = v42;
  v60.top = v40;
  v60.bottom = (int)v39;
  *(_QWORD *)&v59.left = __PAIR64__(v40, v42);
  v43 = *((_QWORD *)a3 + 5);
  v59.bottom = (int)v39;
  v44 = TouchTargetingRankForRect(&v59, &v60, v43, a4, &v62, v20);
  v53 = v44;
  if ( v44 < v11 && v44 < 0xFFDu && (unsigned int)TTBetterTarget(a1, v44, a3, a4, v20) )
  {
    v67.left = v57;
    v67.top = v54[0];
    *(_QWORD *)&v67.right = v56;
    v58 = v62;
    v45 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 32LL);
    if ( v61 + v45 < v22 )
    {
      v11 = v53;
      if ( v45 - v61 <= v66 )
      {
        v67 = v23;
        v58.x = v66 - v45 - 1;
      }
    }
    else
    {
      v11 = v53;
      v67 = v31;
      v58.x = v22 - v45 + 1;
    }
  }
  else if ( v11 >= 0xFFDu )
  {
    return;
  }
  v46 = (struct tagPOINT *)*((_QWORD *)a3 + 5);
  v54[0] = 0;
  xxxSendNCHitTest(a1, a2, v46[4], &v58, v54, a3);
  v47 = v54[0];
  if ( v54[0] <= 0x11u )
  {
    v48 = 232656;
    if ( _bittest(&v48, v54[0]) )
    {
      v60 = *a4;
      _TTUpdateBestTarget(a3, a1, v11, &v58, &v67, 0, &v60, v20);
      *((_DWORD *)a3 + 8) = v47;
    }
  }
}
