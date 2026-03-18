/*
 * XREFs of xxxDrawState @ 0x14003A7F0
 * Callers:
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1400379A0 (GreSetBkMode.c)
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x14003BFF0 (BltColor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     GreSetViewportOrg @ 0x1401DA5E8 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     GreGetHFONT @ 0x140217A08 (GreGetHFONT.c)
 *     GreGetTextColor @ 0x14021820C (GreGetTextColor.c)
 *     GetDpiServerInfoForCurrentThread @ 0x1402F189C (GetDpiServerInfoForCurrentThread.c)
 *     GreGetTextCharacterExtra @ 0x140310A74 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140310ABC (GreSetTextCharacterExtra.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxDrawState(
        HDC a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned int a8)
{
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r14d
  int v13; // r13d
  int v14; // esi
  int v15; // ebx
  HDC v16; // r15
  unsigned int Layout; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  signed int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 Bitmap; // rdi
  __int64 UserSessionState; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int16 v55; // ax
  HFONT v56; // rbx
  HFONT v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v64; // rax
  __int64 v65; // rdx
  ULONG_PTR v66; // rcx
  struct tagTHREADINFO *v67; // rax
  int v68; // ebx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r10
  Gre::Base *v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  unsigned int v102; // ebx
  BOOL v104; // [rsp+50h] [rbp-B0h]
  struct _POINTL v105; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+64h] [rbp-9Ch]
  int TextAlign; // [rsp+68h] [rbp-98h]
  unsigned int v109; // [rsp+6Ch] [rbp-94h]
  _QWORD *v110; // [rsp+70h] [rbp-90h]
  __int64 v111; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v113; // [rsp+90h] [rbp-70h]
  HFONT v114; // [rsp+98h] [rbp-68h]
  __int64 v115; // [rsp+A0h] [rbp-60h] BYREF
  int v116; // [rsp+A8h] [rbp-58h]
  int v117; // [rsp+ACh] [rbp-54h]
  __int64 v118; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+B8h] [rbp-48h] BYREF
  _WORD v120[24]; // [rsp+D0h] [rbp-30h] BYREF
  int v121; // [rsp+100h] [rbp+0h]

  v8 = a8;
  v110 = a3;
  v111 = a2;
  v114 = 0LL;
  v105 = 0LL;
  v106 = 0;
  TextAlign = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( (a8 & 0x20) != 0 )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(1LL, a2) + 19928);
    if ( *(_WORD *)(v11 + 6996) == 1 || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928) + 2188LL) )
      v8 = a8 & 0xFFFFFFCF | 0x10;
  }
  v12 = a6;
  v13 = v8 | 0x80;
  if ( (v8 & 0x170) == 0 )
    v13 = v8;
  if ( !a6 )
    return 1LL;
  v14 = a7;
  if ( !a7 )
    return 1LL;
  v118 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v113 = -1LL;
  v15 = v13 & 0x80;
  v107 = v15;
  if ( (v13 & 0x80) != 0 )
  {
    v16 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(1LL, 128LL) + 57008) + 80LL);
    GreSetLayout(v16, 0xFFFFFFFFLL, 0LL);
    Layout = GreGetLayout(a1);
    if ( Layout != -1 )
      GreSetLayout(v16, a6, Layout);
    v20 = a6 + 1;
    v22 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 57008);
    if ( *(_DWORD *)(v22 + 96) < (signed int)(a6 + 1)
      || (v22 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 57008), *(_DWORD *)(v22 + 100) < a7) )
    {
      v24 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 57008);
      if ( *(_DWORD *)(v24 + 100) <= a7 )
      {
        v25 = a7;
      }
      else
      {
        v24 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 57008);
        v25 = *(_DWORD *)(v24 + 100);
      }
      v27 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 57008);
      if ( *(_DWORD *)(v27 + 96) <= v20 )
        v28 = (unsigned int)v20;
      else
        v28 = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v27, v26) + 57008) + 96LL);
      Bitmap = GreCreateBitmap(v28, v25, 1LL);
      if ( Bitmap )
      {
        UserSessionState = W32GetUserSessionState(v30, v29);
        v33 = GreSelectBitmap(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 80LL), Bitmap);
        GreDeleteObject(v33);
        GreSetBitmapOwner(Bitmap, 0LL);
        v37 = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 57008);
        if ( *(_DWORD *)(v37 + 96) > v20 )
        {
          v37 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 57008);
          v20 = *(_DWORD *)(v37 + 96);
        }
        v38 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 57008);
        *(_DWORD *)(v38 + 96) = v20;
        v41 = *(_QWORD *)(W32GetUserSessionState(v38, v39) + 57008);
        if ( *(_DWORD *)(v41 + 100) <= a7 )
        {
          v42 = a7;
        }
        else
        {
          v41 = *(_QWORD *)(W32GetUserSessionState(v41, v40) + 57008);
          v42 = *(_DWORD *)(v41 + 100);
        }
        v22 = *(_QWORD *)(W32GetUserSessionState(v41, v40) + 57008);
        *(_DWORD *)(v22 + 100) = v42;
      }
      else
      {
        v43 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 57008);
        v12 = *(_DWORD *)(v43 + 96) - 1;
        v22 = *(_QWORD *)(W32GetUserSessionState(v43, v44) + 57008);
        v14 = *(_DWORD *)(v22 + 100);
      }
    }
    v45 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 57008);
    v46 = *(_DWORD *)(v45 + 100);
    v48 = *(_QWORD *)(W32GetUserSessionState(v45, v47) + 57008);
    v49 = *(_DWORD *)(v48 + 96);
    v51 = W32GetUserSessionState(v48, v50);
    GrePatBlt(*(HDC *)(*(_QWORD *)(v51 + 57008) + 80LL), 0, 0, v49, v46, 16711778);
    GreGetTextCharacterExtra(a1);
    v54 = W32GetUserSessionState(v53, v52);
    GreSetTextCharacterExtra(*(HDC *)(*(_QWORD *)(v54 + 57008) + 80LL));
    TextAlign = GreGetTextAlign(v16);
    v55 = GreGetTextAlign(a1);
    GreSetTextAlign(v16, TextAlign ^ ((unsigned __int16)TextAlign ^ v55) & 0x106);
    v56 = *(HFONT *)(GetDpiServerInfoForCurrentThread() + 24);
    if ( (HFONT)GreGetHFONT(a1) != v56 )
    {
      v57 = GreSelectFont(a1, v56);
      GreSelectFont(a1, v57);
      v60 = W32GetUserSessionState(v59, v58);
      v114 = GreSelectFont(*(HDC *)(*(_QWORD *)(v60 + 57008) + 80LL), v57);
      BugCheckParameter3[0] = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v62, v61) + 57008) + 80LL);
      BugCheckParameter3[1] = (ULONG_PTR)v114;
      if ( v113 != -1 )
      {
        BugCheckParameter4 = PtiCurrent();
        KeBugCheckEx(
          0x164u,
          0x12uLL,
          (ULONG_PTR)BugCheckParameter2,
          (ULONG_PTR)BugCheckParameter3,
          (ULONG_PTR)BugCheckParameter4);
      }
      v64 = PtiCurrent();
      BugCheckParameter2[0] = *((_QWORD *)v64 + 48);
      *((_QWORD *)v64 + 48) = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter3;
      v113 = (__int64)SelectFont;
    }
    v15 = v107;
  }
  else
  {
    v16 = a1;
    GreGetDCPoint(a1, 4u, &v105);
    GreSetViewportOrg(a1);
  }
  v109 = xxxRealDrawMenuItem((_DWORD)v16, (_DWORD)v110, v12, v14, 0, v13);
  if ( v113 != -1 )
  {
    v67 = PtiCurrent();
    v66 = BugCheckParameter2[0];
    *((_QWORD *)v67 + 48) = BugCheckParameter2[0];
    v113 = -1LL;
  }
  v104 = 1;
  if ( !v15 )
  {
    v68 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v66, v65) + 19928) + 4636LL);
    if ( (unsigned int)GreGetTextColor(v16) != v68 )
      v104 = 0;
  }
  if ( (unsigned __int8)MNIspItemValid(*v110, v110[1]) )
  {
    v72 = *(Gre::Base **)(*(_QWORD *)v71 + 96LL);
    if ( v72 )
    {
      memset_0(v120, 0, 0x68uLL);
      v106 = (unsigned int)GreExtGetObjectW(v72, 104LL, v120) == 104 && v120[23] == 32 && !v121;
    }
  }
  v74 = *(_QWORD *)(W32GetUserSessionState(v70, v69) + 57008);
  if ( v16 == *(HDC *)(v74 + 80) )
  {
    v75 = W32GetUserSessionState(v74, v73);
    GreSetBkColor(*(HDC *)(*(_QWORD *)(v75 + 57008) + 80LL));
    v78 = W32GetUserSessionState(v77, v76);
    GreSetTextColor(*(HDC *)(*(_QWORD *)(v78 + 57008) + 80LL));
    v81 = *(_QWORD *)(W32GetUserSessionState(v80, v79) + 43096);
    v84 = W32GetUserSessionState(v83, v82);
    GreSelectBrush(*(_QWORD *)(*(_QWORD *)(v84 + 57008) + 80LL), v81, v85);
    v88 = W32GetUserSessionState(v87, v86);
    GreSetBkMode(*(HDC *)(*(_QWORD *)(v88 + 57008) + 80LL), 2);
  }
  if ( v107 )
  {
    if ( v114 )
      GreSelectFont(v16, v114);
    GreSetTextAlign(v16, TextAlign);
    if ( (v13 & 0x10) != 0 )
    {
      v115 = 0LL;
      v116 = v12;
      v117 = v14;
      v91 = *(_QWORD *)(W32GetUserSessionState(v90, v89) + 19928);
      v118 = *(_QWORD *)(v91 + 4944);
      v93 = W32GetUserSessionState(v91, v92);
      GrePolyPatBlt(*(HDC *)(*(_QWORD *)(v93 + 57008) + 80LL), 16384137, (struct _POLYPATBLT *)&v115, 1);
    }
    v94 = W32GetUserSessionState(v90, v89);
    if ( (v13 & 0x100) != 0 )
    {
      W32GetUserSessionState(*(_QWORD *)(v94 + 57008), v95);
    }
    else if ( (v13 & 0x20) != 0 )
    {
      W32GetUserSessionState(*(_QWORD *)(v94 + 57008), v95);
      BltColor(a1, a5 + 1, v12, v14, 0, 0, 1);
      v98 = *(_QWORD *)(W32GetUserSessionState(v97, v96) + 57008);
      W32GetUserSessionState(v98, v99);
    }
    else if ( (v13 & 0x40) != 0 )
    {
      BltColor(a1, a5, v12, v14, 0, 0, 1);
      W32GetUserSessionState(v101, v100);
    }
    BltColor(a1, a5, v12, v14, 0, 0, 1);
    GreSetLayout(v16, 0xFFFFFFFFLL, 0LL);
    if ( v106 )
    {
      GreGetDCPoint(a1, 4u, &v105);
      GreSetViewportOrg(a1);
      v102 = xxxRealDrawMenuItem((_DWORD)a1, (_DWORD)v110, v12, v14, 1, v104) & v109;
      GreSetViewportOrg(a1);
    }
    else
    {
      return v109;
    }
    return v102;
  }
  else
  {
    if ( v106 )
      xxxRealDrawMenuItem((_DWORD)v16, (_DWORD)v110, v12, v14, 1, v104);
    GreSetViewportOrg(v16);
    return 1LL;
  }
}
