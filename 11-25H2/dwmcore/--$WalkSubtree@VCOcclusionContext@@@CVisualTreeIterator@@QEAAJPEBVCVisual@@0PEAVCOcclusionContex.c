/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800B8300
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800B7A78 (--0CTreeData@@IEAA@XZ.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800BA7D0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 *a3,
        COcclusionContext *a4,
        bool a5)
{
  unsigned int v5; // esi
  _BYTE *v8; // rbp
  _QWORD *Value; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 i; // rdx
  __int64 *v14; // rcx
  int v15; // eax
  int v16; // edi
  unsigned __int64 **v17; // r13
  _BYTE *v18; // r14
  void **v19; // rdi
  char v20; // al
  int **v21; // r8
  _BYTE *v22; // rax
  unsigned int **v23; // rcx
  int v24; // eax
  _BYTE **v25; // rcx
  bool v26; // zf
  bool v27; // al
  int v28; // eax
  int v29; // r8d
  _BYTE *v30; // rax
  int v31; // edx
  __int64 v32; // rcx
  __m128i v33; // xmm1
  int v34; // r12d
  _QWORD *v35; // rbp
  __int64 v36; // rdi
  unsigned __int64 *v37; // r15
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // r9
  __int64 v40; // rcx
  void *v41; // rdi
  unsigned int v42; // edi
  int v43; // eax
  unsigned __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rdi
  unsigned __int64 *v50; // r11
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned __int64 *v53; // rax
  unsigned __int64 v54; // r9
  int *v55; // r9
  __int64 v56; // rax
  _BYTE *v57; // rdx
  __int64 j; // rcx
  _QWORD **v59; // r9
  _QWORD *v60; // r9
  _QWORD *k; // rdx
  unsigned int *v62; // r8
  unsigned int v63; // r10d
  __int64 v64; // r9
  _BYTE *v65; // r11
  unsigned int v66; // eax
  _BYTE *v67; // rcx
  void ****v68; // rcx
  void ***v69; // rcx
  __int64 v70; // rax
  void **v71; // rax
  void (__fastcall *v72)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *); // rax
  HANDLE v73; // rax
  HANDLE ProcessHeap; // rax
  CTreeData *v75; // rcx
  unsigned __int64 v76; // r14
  __int64 v77; // r15
  __int64 v78; // r9
  __int64 v79; // rdx
  unsigned int v80; // esi
  __int64 v81; // rdx
  HANDLE v82; // rax
  LPVOID v83; // rsi
  __int64 v84; // rdx
  unsigned int v85; // r15d
  HANDLE v86; // rax
  void *v87; // rax
  void *v88; // rbp
  unsigned __int64 v89; // rdi
  CThreadContext *v90; // rax
  CThreadContext *v91; // rax
  CThreadContext *v92; // rax
  CThreadContext *v93; // rax
  void *v94; // rbp
  HANDLE v95; // rax
  _BYTE *v96; // r14
  int v97; // ecx
  int v98; // r8d
  __int64 v99; // rdx
  __int64 v100; // r14
  unsigned int v101; // eax
  __int64 v102; // r8
  unsigned __int64 v103; // rax
  __int64 v104; // rcx
  unsigned __int64 v105; // r9
  __int128 v106; // [rsp+30h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5 = 0;
  *(_DWORD *)(a1 + 64) = 2;
  v8 = a2;
  if ( a3 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v92 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v92 || (v93 = CThreadContext::CThreadContext(v92), (Value = v93) == 0LL) )
      {
        v16 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        v78 = 2147942414LL;
        v79 = 76LL;
        goto LABEL_111;
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v93);
    }
    v11 = Value[4];
    if ( (v11 & 2) != 0 )
      v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v12 = Value[4] & 1LL;
    for ( i = 0LL; ; i = v84 + 1 )
    {
      v14 = Value + 4;
      if ( i >= v12 )
        break;
      if ( a3 == __A__CPtrArray___CBX__QEBAPEBX_K_Z(v14, i) )
      {
        v16 = -2147467260;
        v79 = 85LL;
        v78 = 2147500036LL;
        goto LABEL_111;
      }
    }
    v15 = CPtrArrayBase::InsertAt((CPtrArrayBase *)v14, (unsigned __int64)a3, v12);
    v16 = v15;
    if ( v15 < 0 )
    {
      v78 = (unsigned int)v15;
      v79 = 89LL;
LABEL_111:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v79,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)v78);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3Eu, 0LL);
      v5 = v16;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xD6u, 0LL);
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
      goto LABEL_16;
    v19 = *(void ***)(a1 + 56);
    a5 = 0;
    if ( v19 )
    {
      v20 = (*((__int64 (__fastcall **)(void **))*v19 + 23))(v19);
      v21 = (int **)(v18 + 232);
      if ( !v20 )
      {
        v55 = *v21;
        if ( **v21 >= 0 )
        {
          v23 = (unsigned int **)(v18 + 232);
        }
        else
        {
          v56 = (unsigned int)v55[1];
          v57 = v55 + 2;
          for ( j = 0LL; (unsigned int)j < (unsigned int)v56; ++v57 )
          {
            if ( *v57 == 1 )
              break;
            j = (unsigned int)(j + 1);
          }
          if ( (unsigned int)j >= (unsigned int)v56 )
            v59 = 0LL;
          else
            v59 = (_QWORD **)((char *)v55 + v56 + 8 * j - (((_BYTE)v56 + 15) & 7) + 15);
          v60 = *v59;
          v23 = (unsigned int **)(v18 + 232);
          if ( v60 )
          {
            for ( k = (_QWORD *)*v60; ; k = (_QWORD *)*k )
            {
              v23 = (unsigned int **)(v18 + 232);
              if ( k == v60 )
                break;
              v22 = k - 43;
              if ( (void **)k[4] == v19 )
                goto LABEL_13;
            }
          }
        }
LABEL_75:
        v62 = *v23;
        v63 = **v23;
        if ( (v63 & 0x10000000) == 0 )
          goto LABEL_95;
        v64 = v62[1];
        v65 = v62 + 2;
        v66 = 0;
        if ( (_DWORD)v64 )
        {
          v67 = v62 + 2;
          do
          {
            if ( *v67 == 4 )
              break;
            ++v66;
            ++v67;
          }
          while ( v66 < (unsigned int)v64 );
        }
        v68 = v66 >= (unsigned int)v64 ? 0LL : (void ****)((char *)v62 + 8LL * v66 - (((_BYTE)v64 + 15) & 7) + v64 + 15);
        v69 = *v68;
        if ( v69 )
        {
          v70 = 0LL;
          for ( *v62 = v63 & 0xEFFFFFFF; (unsigned int)v70 < (unsigned int)v64; ++v65 )
          {
            if ( *v65 == 4 )
              break;
            v70 = (unsigned int)(v70 + 1);
          }
          if ( (unsigned int)v70 < (unsigned int)v64 )
            *((_BYTE *)v62 + v70 + 8) = 0;
          v71 = *v69;
        }
        else
        {
LABEL_95:
          ProcessHeap = GetProcessHeap();
          v75 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x180uLL);
          if ( !v75 )
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          CTreeData::CTreeData(v75);
          v71 = &CVisualTreeData::`vftable';
          v69[47] = 0LL;
          *v69 = &CVisualTreeData::`vftable';
        }
        v72 = (void (__fastcall *)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *))v71[1];
        if ( v72 == CVisualTreeData::Initialize )
        {
          v69[47] = v19;
          CTreeData::Initialize((CTreeData *)v69, 0LL, (struct CVisual *)v18);
        }
        else
        {
          v72((CVisualTreeData *)v69, (struct CVisualTree *)v19, (struct CVisual *)v18);
        }
        goto LABEL_14;
      }
      v22 = v18 + 328;
LABEL_13:
      v23 = (unsigned int **)(v18 + 232);
      if ( !v22 )
        goto LABEL_75;
    }
LABEL_14:
    v24 = COcclusionContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 56), &a5);
    v5 = v24;
    if ( v24 < 0 )
      break;
    if ( !a5 )
      goto LABEL_16;
    v45 = (*v17)[10];
    if ( (v45 & 2) != 0 )
      v45 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v45) = v45 & 1;
    if ( !(_DWORD)v45 )
    {
      v5 = 1;
LABEL_16:
      v25 = (_BYTE **)(a1 + 16);
      while ( 2 )
      {
        v26 = (v18[106] & 0x40) == 0;
        v27 = 1;
        a5 = 1;
        if ( !v26 || v18 == v8 )
        {
          v28 = COcclusionContext::PostSubgraph(a4, *(const struct CVisualTree **)(a1 + 56), &a5);
          v25 = (_BYTE **)(a1 + 16);
          v5 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x11Cu, 0LL);
            goto LABEL_94;
          }
          v27 = a5;
        }
        if ( !v27 )
        {
LABEL_21:
          if ( !*(_DWORD *)(a1 + 4) )
            goto LABEL_25;
          v29 = *(_DWORD *)(a1 + 40);
          v30 = 0LL;
          v31 = 0;
          if ( v29 )
          {
            v32 = (unsigned int)(v29 - 1);
            *(_DWORD *)(a1 + 40) = v32;
            v33 = *(__m128i *)(*(_QWORD *)(a1 + 32) + 16 * v32);
            v25 = (_BYTE **)(a1 + 16);
            v30 = (_BYTE *)v33.m128i_i64[0];
            v31 = _mm_cvtsi128_si32(_mm_srli_si128(v33, 8));
          }
          v18 = *v25;
          *v25 = v30;
          --*(_DWORD *)(a1 + 4);
          *v17 = (unsigned __int64 *)v18;
          *(_DWORD *)(a1 + 24) = v31;
          if ( !v18 )
          {
LABEL_25:
            v34 = -2147024882;
            if ( v5 == 1 )
              v5 = 0;
            goto LABEL_27;
          }
          continue;
        }
        break;
      }
      v96 = *v25;
      if ( !*v25 )
        goto LABEL_178;
      v97 = *(_DWORD *)(a1 + 28);
      if ( v97 != 1 )
        goto LABEL_176;
      v98 = *(_DWORD *)(a1 + 24);
      if ( v98 == -1 )
        goto LABEL_178;
      v99 = *((_QWORD *)v96 + 10);
      if ( (v99 & 2) != 0 )
        v99 = *(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v99) = v99 & 1;
      if ( v98 + 1 < (unsigned int)v99 )
        goto LABEL_166;
LABEL_176:
      if ( !v97 && (v98 = *(_DWORD *)(a1 + 24)) != 0 )
      {
LABEL_166:
        v100 = *((_QWORD *)v96 + 10);
        v101 = v98 - 1;
        v102 = (unsigned int)(v98 + 1);
        if ( v97 != 1 )
          v102 = v101;
        v103 = v100 & 1;
        v104 = v100 & 2;
        v18 = (_BYTE *)(v100 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v104 )
          v105 = *(_QWORD *)v18;
        else
          v105 = v103;
        if ( v105 <= (unsigned int)v102 )
          goto LABEL_157;
        if ( v104 )
          v103 = *(_QWORD *)v18;
        if ( (unsigned int)v102 >= v103 )
        {
LABEL_157:
          v18 = 0LL;
        }
        else if ( v103 != 1 )
        {
          v18 = *(_BYTE **)&v18[8 * v102 + 16];
        }
        v5 = 0;
        *v17 = (unsigned __int64 *)v18;
        *(_DWORD *)(a1 + 24) = v102;
        if ( v18 )
          continue;
      }
      else
      {
LABEL_178:
        v5 = 1;
      }
      v25 = (_BYTE **)(a1 + 16);
      goto LABEL_21;
    }
    v46 = *(unsigned int *)(a1 + 40);
    *(_QWORD *)&v106 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v106 + 1) = *(unsigned int *)(a1 + 24);
    v47 = *(unsigned int *)(a1 + 44);
    if ( (_DWORD)v46 == (_DWORD)v47 )
    {
      v80 = 2 * v47;
      if ( (unsigned __int64)(2 * v47) > 0xFFFFFFFF )
      {
        v81 = 98LL;
        goto LABEL_114;
      }
      if ( v80 <= 0x40 )
        v80 = 64;
      v85 = 16 * v46;
      if ( (unsigned __int64)(16 * v46) > 0xFFFFFFFF )
      {
        v81 = 101LL;
LABEL_114:
        v5 = -2147024362;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v81,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)0x80070216LL);
        v34 = -2147024882;
LABEL_115:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v5);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x87u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xFFu, 0LL);
        goto LABEL_27;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v80 <= 0x10 )
      {
        v34 = -2147024882;
        v5 = -2147024809;
        goto LABEL_136;
      }
      v86 = GetProcessHeap();
      v87 = HeapAlloc(v86, 0, 16LL * v80);
      v88 = v87;
      if ( !v87 )
      {
        v34 = -2147024882;
        v5 = -2147024882;
LABEL_136:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v5);
        goto LABEL_115;
      }
      memcpy_0(v87, *(const void **)(a1 + 32), v85);
      operator delete(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = v88;
      v8 = a2;
      *(_DWORD *)(a1 + 44) = v80;
    }
    *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v106;
    v48 = *(_DWORD *)(a1 + 52);
    if ( v48 <= *(_DWORD *)(a1 + 40) )
      v48 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 52) = v48;
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v49 = 0LL;
    else
      v49 = (unsigned int)(v45 - 1);
    *(_DWORD *)(a1 + 24) = v49;
    v50 = *v17;
    v51 = (*v17)[10] & 2;
    v52 = (*v17)[10] & 1;
    v53 = (unsigned __int64 *)((*v17)[10] & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v51 )
      v54 = *v53;
    else
      v54 = (*v17)[10] & 1;
    if ( v54 <= (unsigned int)v49 )
      goto LABEL_58;
    if ( v51 )
      v52 = *v53;
    if ( (unsigned int)v49 >= v52 )
    {
LABEL_58:
      v53 = 0LL;
    }
    else if ( v52 != 1 )
    {
      v53 = (unsigned __int64 *)v53[v49 + 2];
    }
    ++*(_DWORD *)(a1 + 4);
    v5 = 0;
    *(_QWORD *)(a1 + 16) = v50;
    *v17 = v53;
    if ( !v53 )
      goto LABEL_16;
    v18 = v53;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xF1u, 0LL);
LABEL_94:
  v34 = -2147024882;
LABEL_27:
  if ( a3 )
  {
    v35 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v35 )
    {
LABEL_29:
      v36 = v35[4];
      v37 = (unsigned __int64 *)(v36 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (v36 & 2) != 0 )
      {
        v38 = *v37;
        v39 = *v37 - 1;
      }
      else
      {
        v38 = v36 & 1;
        v39 = v38 - 1;
      }
      if ( v39 < v38 )
      {
        v40 = v38 - v39;
        if ( v38 - v39 > 1 )
          v40 = 1LL;
        if ( v38 == v40 )
        {
          if ( v38 > 1 )
          {
            v41 = (void *)(v36 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( v41 )
            {
              v73 = GetProcessHeap();
              HeapFree(v73, 0, v41);
            }
          }
          v35[4] = 0LL;
        }
        else
        {
          v76 = v38 - v40;
          if ( v76 == 1 )
          {
            v89 = v37[(v40 & (v39 - 1)) + 2];
            operator delete((void *)(v35[4] & 0xFFFFFFFFFFFFFFFCuLL));
            v35[4] = v89 | 1;
          }
          else
          {
            if ( v39 < v76 )
              memmove_0(&v37[v39 + 2], &v37[v39 + 2 + v40], 8 * (v76 - v39));
            *v37 = v76;
          }
        }
      }
    }
    else
    {
      v90 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( v90 )
      {
        v91 = CThreadContext::CThreadContext(v90);
        v35 = v91;
        if ( v91 )
        {
          TlsSetValue(CThreadContext::s_dwTlsIndex, v91);
          goto LABEL_29;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  v42 = v5;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v43 = *(_DWORD *)(a1 + 48);
  if ( v43 != 10 )
  {
    *(_DWORD *)(a1 + 48) = v43 + 1;
    return v5;
  }
  v77 = 64LL;
  if ( *(_DWORD *)(a1 + 52) > 0x40u )
    v77 = *(unsigned int *)(a1 + 52);
  if ( (unsigned __int64)(3 * v77) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
LABEL_109:
    *(_QWORD *)(a1 + 48) = 0LL;
    return v5;
  }
  if ( (unsigned int)(3 * v77) > *(_DWORD *)(a1 + 44) )
    goto LABEL_109;
  if ( !(_DWORD)v77 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v77 <= 0x10 )
  {
    v34 = -2147024809;
    goto LABEL_126;
  }
  v82 = GetProcessHeap();
  v83 = HeapAlloc(v82, 0, 16LL * (unsigned int)v77);
  if ( !v83 )
  {
    v5 = v42;
LABEL_126:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x11Eu, 0LL);
    goto LABEL_109;
  }
  v94 = *(void **)(a1 + 32);
  if ( v94 )
  {
    v95 = GetProcessHeap();
    HeapFree(v95, 0, v94);
  }
  *(_QWORD *)(a1 + 32) = v83;
  v5 = v42;
  *(_DWORD *)(a1 + 44) = v77;
  *(_QWORD *)(a1 + 48) = 0LL;
  return v5;
}
