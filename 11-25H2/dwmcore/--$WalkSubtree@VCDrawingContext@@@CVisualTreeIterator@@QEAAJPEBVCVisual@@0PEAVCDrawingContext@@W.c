/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800E8820
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800B7A78 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800BA7D0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E7AF0 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CDrawingContext>(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 *a3,
        CDrawingContext *a4,
        int a5)
{
  unsigned int v5; // esi
  _BYTE *v8; // r14
  _QWORD *Value; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 i; // rdx
  __int64 *v14; // rcx
  int v15; // eax
  int v16; // edi
  unsigned __int64 **v17; // r12
  _BYTE *v18; // rdi
  void **v19; // rsi
  char v20; // al
  int **v21; // r8
  _BYTE *v22; // rax
  unsigned int **v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rsi
  unsigned __int64 *v30; // r11
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // r9
  __int64 *v35; // rcx
  bool v36; // zf
  bool v37; // al
  int v38; // eax
  _BYTE *v39; // rdi
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // r8
  int v48; // r8d
  __int64 v49; // rax
  int v50; // edx
  __int64 v51; // rcx
  __m128i v52; // xmm1
  int v53; // r12d
  _QWORD *v54; // rbp
  __int64 v55; // rdi
  unsigned __int64 *v56; // r15
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // r9
  __int64 v59; // rcx
  void *v60; // rdi
  unsigned int v61; // edi
  int v62; // eax
  int *v64; // r9
  __int64 v65; // rax
  _BYTE *v66; // rdx
  __int64 j; // rcx
  _QWORD **v68; // r9
  _QWORD *v69; // r9
  _QWORD *k; // rdx
  unsigned int *v71; // r8
  unsigned int v72; // r10d
  __int64 v73; // r9
  _BYTE *v74; // r11
  __int64 v75; // rcx
  _BYTE *v76; // rax
  void ****v77; // rcx
  void ***v78; // rcx
  __int64 v79; // rax
  void **v80; // rax
  void (__fastcall *v81)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *); // rax
  HANDLE v82; // rax
  unsigned __int64 v83; // r14
  __int64 v84; // r15
  __int64 v85; // r9
  __int64 v86; // rdx
  HANDLE ProcessHeap; // rax
  CTreeData *v88; // rcx
  HANDLE v89; // rax
  LPVOID v90; // rsi
  __int64 v91; // rdx
  unsigned int v92; // ebp
  __int64 v93; // rdx
  unsigned __int64 v94; // rdi
  unsigned int v95; // r15d
  CThreadContext *v96; // rax
  CThreadContext *v97; // rax
  void *v98; // rax
  void *v99; // r14
  CThreadContext *v100; // rax
  CThreadContext *v101; // rax
  void *v102; // rbp
  HANDLE v103; // rax
  __int128 v104; // [rsp+38h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  bool v106; // [rsp+A0h] [rbp+8h] BYREF
  _BYTE *v107; // [rsp+A8h] [rbp+10h]
  unsigned __int64 *v108; // [rsp+B0h] [rbp+18h]

  v108 = a3;
  v107 = a2;
  v5 = 0;
  *(_DWORD *)(a1 + 64) = a5;
  v8 = a2;
  if ( a3 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v100 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v100 || (v101 = CThreadContext::CThreadContext(v100), (Value = v101) == 0LL) )
      {
        v16 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        v85 = 2147942414LL;
        v86 = 76LL;
        goto LABEL_129;
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v101);
    }
    v11 = Value[4];
    if ( (v11 & 2) != 0 )
      v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v12 = Value[4] & 1LL;
    for ( i = 0LL; ; i = v91 + 1 )
    {
      v14 = Value + 4;
      if ( i >= v12 )
        break;
      if ( a3 == __A__CPtrArray___CBX__QEBAPEBX_K_Z(v14, i) )
      {
        v16 = -2147467260;
        v86 = 85LL;
        v85 = 2147500036LL;
        goto LABEL_129;
      }
    }
    v15 = CPtrArrayBase::InsertAt((CPtrArrayBase *)v14, (unsigned __int64)a3, v12);
    v16 = v15;
    if ( v15 < 0 )
    {
      v85 = (unsigned int)v15;
      v86 = 89LL;
LABEL_129:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v86,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)v85);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x3Eu, 0LL);
      v5 = v16;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xD6u, 0LL);
      return v5;
    }
  }
  v17 = (unsigned __int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = v8;
  v18 = v8;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  while ( 1 )
  {
    if ( (v18[106] & 0x40) == 0 && v18 != v8 )
      goto LABEL_33;
    v19 = *(void ***)(a1 + 56);
    LOBYTE(a5) = 0;
    if ( v19 )
    {
      v20 = (*((__int64 (__fastcall **)(void **))*v19 + 23))(v19);
      v21 = (int **)(v18 + 232);
      if ( !v20 )
      {
        v64 = *v21;
        if ( **v21 >= 0 )
        {
          v23 = (unsigned int **)(v18 + 232);
        }
        else
        {
          v65 = (unsigned int)v64[1];
          v66 = v64 + 2;
          for ( j = 0LL; (unsigned int)j < (unsigned int)v65; ++v66 )
          {
            if ( *v66 == 1 )
              break;
            j = (unsigned int)(j + 1);
          }
          if ( (unsigned int)j >= (unsigned int)v65 )
            v68 = 0LL;
          else
            v68 = (_QWORD **)((char *)v64 + v65 + 8 * j - (((_BYTE)v65 + 15) & 7) + 15);
          v69 = *v68;
          v23 = (unsigned int **)(v18 + 232);
          if ( v69 )
          {
            for ( k = (_QWORD *)*v69; ; k = (_QWORD *)*k )
            {
              v23 = (unsigned int **)(v18 + 232);
              if ( k == v69 )
                break;
              v22 = k - 43;
              if ( (void **)k[4] == v19 )
                goto LABEL_13;
            }
          }
        }
LABEL_101:
        v71 = *v23;
        v72 = **v23;
        if ( (v72 & 0x10000000) == 0 )
          goto LABEL_132;
        v73 = v71[1];
        v74 = v71 + 2;
        v75 = 0LL;
        if ( (_DWORD)v73 )
        {
          v76 = v71 + 2;
          do
          {
            if ( *v76 == 4 )
              break;
            v75 = (unsigned int)(v75 + 1);
            ++v76;
          }
          while ( (unsigned int)v75 < (unsigned int)v73 );
        }
        v77 = (unsigned int)v75 >= (unsigned int)v73
            ? 0LL
            : (void ****)((char *)v71 + 8 * v75 - (((_BYTE)v73 + 15) & 7) + v73 + 15);
        v78 = *v77;
        if ( v78 )
        {
          v79 = 0LL;
          for ( *v71 = v72 & 0xEFFFFFFF; (unsigned int)v79 < (unsigned int)v73; ++v74 )
          {
            if ( *v74 == 4 )
              break;
            v79 = (unsigned int)(v79 + 1);
          }
          if ( (unsigned int)v79 < (unsigned int)v73 )
            *((_BYTE *)v71 + v79 + 8) = 0;
          v80 = *v78;
        }
        else
        {
LABEL_132:
          ProcessHeap = GetProcessHeap();
          v88 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x180uLL);
          if ( !v88 )
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          CTreeData::CTreeData(v88);
          v80 = &CVisualTreeData::`vftable';
          v78[47] = 0LL;
          *v78 = &CVisualTreeData::`vftable';
        }
        v81 = (void (__fastcall *)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *))v80[1];
        if ( v81 == CVisualTreeData::Initialize )
        {
          v78[47] = v19;
          CTreeData::Initialize((CTreeData *)v78, 0LL, (struct CVisual *)v18);
        }
        else
        {
          v81((CVisualTreeData *)v78, (struct CVisualTree *)v19, (struct CVisual *)v18);
        }
        goto LABEL_14;
      }
      v22 = v18 + 328;
LABEL_13:
      v23 = (unsigned int **)(v18 + 232);
      if ( !v22 )
        goto LABEL_101;
    }
LABEL_14:
    v24 = CDrawingContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 56), (bool *)&a5);
    v5 = v24;
    if ( v24 < 0 )
      break;
    if ( !(_BYTE)a5 )
      goto LABEL_33;
    v25 = (*v17)[10];
    if ( (v25 & 2) != 0 )
      v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v25) = v25 & 1;
    if ( !(_DWORD)v25 )
    {
      v5 = 1;
LABEL_33:
      v35 = (__int64 *)(a1 + 16);
LABEL_34:
      v36 = (v18[106] & 0x40) == 0;
      v37 = 1;
      v106 = 1;
      if ( !v36 || v18 == v8 )
      {
        v38 = CDrawingContext::PostSubgraph(a4, *(const struct CVisualTree **)(a1 + 56), &v106);
        v35 = (__int64 *)(a1 + 16);
        v5 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x11Cu, 0LL);
          goto LABEL_118;
        }
        v37 = v106;
      }
      if ( v37 )
      {
        v39 = (_BYTE *)*v35;
        if ( !*v35 )
          goto LABEL_56;
        v40 = *(_DWORD *)(a1 + 28);
        if ( v40 != 1 )
          goto LABEL_54;
        v41 = *(_DWORD *)(a1 + 24);
        if ( v41 == -1 )
          goto LABEL_56;
        v42 = *((_QWORD *)v39 + 10);
        if ( (v42 & 2) != 0 )
          v42 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v42) = v42 & 1;
        if ( v41 + 1 < (unsigned int)v42 )
          goto LABEL_44;
LABEL_54:
        if ( !v40 && (v41 = *(_DWORD *)(a1 + 24)) != 0 )
        {
LABEL_44:
          v43 = *((_QWORD *)v39 + 10);
          v44 = (unsigned int)(v41 + 1);
          if ( v40 != 1 )
            v44 = (unsigned int)(v41 - 1);
          v45 = v43 & 1;
          v46 = v43 & 2;
          v18 = (_BYTE *)(v43 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v46 )
            v47 = *(_QWORD *)v18;
          else
            v47 = v45;
          if ( v47 <= (unsigned int)v44 )
            goto LABEL_85;
          if ( v46 )
            v45 = *(_QWORD *)v18;
          if ( (unsigned int)v44 >= v45 )
          {
LABEL_85:
            v18 = 0LL;
          }
          else if ( v45 != 1 )
          {
            v18 = *(_BYTE **)&v18[8 * v44 + 16];
          }
          v5 = 0;
          *v17 = (unsigned __int64 *)v18;
          *(_DWORD *)(a1 + 24) = v44;
          if ( v18 )
            continue;
        }
        else
        {
LABEL_56:
          v5 = 1;
        }
        v35 = (__int64 *)(a1 + 16);
      }
      if ( !*(_DWORD *)(a1 + 4) )
        goto LABEL_62;
      v48 = *(_DWORD *)(a1 + 40);
      v49 = 0LL;
      v50 = 0;
      if ( v48 )
      {
        v51 = (unsigned int)(v48 - 1);
        *(_DWORD *)(a1 + 40) = v51;
        v52 = *(__m128i *)(*(_QWORD *)(a1 + 32) + 16 * v51);
        v35 = (__int64 *)(a1 + 16);
        v49 = v52.m128i_i64[0];
        v50 = _mm_cvtsi128_si32(_mm_srli_si128(v52, 8));
      }
      v18 = (_BYTE *)*v35;
      *v35 = v49;
      --*(_DWORD *)(a1 + 4);
      *v17 = (unsigned __int64 *)v18;
      *(_DWORD *)(a1 + 24) = v50;
      if ( !v18 )
      {
LABEL_62:
        v53 = -2147024882;
        if ( v5 == 1 )
          v5 = 0;
        goto LABEL_64;
      }
      goto LABEL_34;
    }
    v26 = *(unsigned int *)(a1 + 40);
    *(_QWORD *)&v104 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v104 + 1) = *(unsigned int *)(a1 + 24);
    v27 = *(unsigned int *)(a1 + 44);
    if ( (_DWORD)v26 == (_DWORD)v27 )
    {
      v92 = 2 * v27;
      if ( (unsigned __int64)(2 * v27) > 0xFFFFFFFF )
      {
        v93 = 98LL;
        goto LABEL_147;
      }
      if ( v92 <= 0x40 )
        v92 = 64;
      v95 = 16 * v26;
      if ( (unsigned __int64)(16 * v26) > 0xFFFFFFFF )
      {
        v93 = 101LL;
LABEL_147:
        v5 = -2147024362;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v93,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)0x80070216LL);
        v53 = -2147024882;
LABEL_148:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v5);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x87u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xFFu, 0LL);
        goto LABEL_64;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v92 <= 0x10 )
      {
        v53 = -2147024882;
        v5 = -2147024809;
        goto LABEL_166;
      }
      v98 = MIDL_user_allocate(16LL * v92);
      v99 = v98;
      if ( !v98 )
      {
        v53 = -2147024882;
        v5 = -2147024882;
LABEL_166:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v5);
        goto LABEL_148;
      }
      memcpy_0(v98, *(const void **)(a1 + 32), v95);
      operator delete(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = v99;
      v8 = v107;
      *(_DWORD *)(a1 + 44) = v92;
    }
    *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v104;
    v28 = *(_DWORD *)(a1 + 52);
    if ( v28 <= *(_DWORD *)(a1 + 40) )
      v28 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 52) = v28;
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v29 = 0LL;
    else
      v29 = (unsigned int)(v25 - 1);
    *(_DWORD *)(a1 + 24) = v29;
    v30 = *v17;
    v31 = (*v17)[10] & 2;
    v32 = (*v17)[10] & 1;
    v33 = (unsigned __int64 *)((*v17)[10] & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v31 )
      v34 = *v33;
    else
      v34 = (*v17)[10] & 1;
    if ( v34 <= (unsigned int)v29 )
      goto LABEL_81;
    if ( v31 )
      v32 = *v33;
    if ( (unsigned int)v29 >= v32 )
    {
LABEL_81:
      v33 = 0LL;
    }
    else if ( v32 != 1 )
    {
      v33 = (unsigned __int64 *)v33[v29 + 2];
    }
    ++*(_DWORD *)(a1 + 4);
    v5 = 0;
    *(_QWORD *)(a1 + 16) = v30;
    *v17 = v33;
    if ( !v33 )
      goto LABEL_33;
    v18 = v33;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xF1u, 0LL);
LABEL_118:
  v53 = -2147024882;
LABEL_64:
  if ( v108 )
  {
    v54 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v54 )
    {
LABEL_66:
      v55 = v54[4];
      v56 = (unsigned __int64 *)(v55 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (v55 & 2) != 0 )
      {
        v57 = *v56;
        v58 = *v56 - 1;
      }
      else
      {
        v57 = v55 & 1;
        v58 = v57 - 1;
      }
      if ( v58 < v57 )
      {
        v59 = v57 - v58;
        if ( v57 - v58 > 1 )
          v59 = 1LL;
        if ( v57 == v59 )
        {
          if ( v57 > 1 )
          {
            v60 = (void *)(v55 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( v60 )
            {
              v82 = GetProcessHeap();
              HeapFree(v82, 0, v60);
            }
          }
          v54[4] = 0LL;
        }
        else
        {
          v83 = v57 - v59;
          if ( v83 == 1 )
          {
            v94 = v56[(v59 & (v58 - 1)) + 2];
            operator delete((void *)(v54[4] & 0xFFFFFFFFFFFFFFFCuLL));
            v54[4] = v94 | 1;
          }
          else
          {
            if ( v58 < v83 )
              memmove_0(&v56[v58 + 2], &v56[v58 + 2 + v59], 8 * (v83 - v58));
            *v56 = v83;
          }
        }
      }
    }
    else
    {
      v96 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( v96 )
      {
        v97 = CThreadContext::CThreadContext(v96);
        v54 = v97;
        if ( v97 )
        {
          TlsSetValue(CThreadContext::s_dwTlsIndex, v97);
          goto LABEL_66;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  v61 = v5;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v62 = *(_DWORD *)(a1 + 48);
  if ( v62 != 10 )
  {
    *(_DWORD *)(a1 + 48) = v62 + 1;
    return v5;
  }
  v84 = 64LL;
  if ( *(_DWORD *)(a1 + 52) > 0x40u )
    v84 = *(unsigned int *)(a1 + 52);
  if ( (unsigned __int64)(3 * v84) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
LABEL_127:
    *(_QWORD *)(a1 + 48) = 0LL;
    return v5;
  }
  if ( (unsigned int)(3 * v84) > *(_DWORD *)(a1 + 44) )
    goto LABEL_127;
  if ( !(_DWORD)v84 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v84 <= 0x10 )
  {
    v53 = -2147024809;
    goto LABEL_142;
  }
  v89 = GetProcessHeap();
  v90 = HeapAlloc(v89, 0, 16LL * (unsigned int)v84);
  if ( !v90 )
  {
    v5 = v61;
LABEL_142:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x11Eu, 0LL);
    goto LABEL_127;
  }
  v102 = *(void **)(a1 + 32);
  if ( v102 )
  {
    v103 = GetProcessHeap();
    HeapFree(v103, 0, v102);
  }
  *(_QWORD *)(a1 + 32) = v90;
  v5 = v61;
  *(_DWORD *)(a1 + 44) = v84;
  *(_QWORD *)(a1 + 48) = 0LL;
  return v5;
}
