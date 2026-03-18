/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A2DA0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18003EBA0 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A0C10 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800A2CC0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 *a3,
        CPreComputeContext *a4,
        bool a5)
{
  unsigned int v5; // esi
  _BYTE *v8; // r15
  _QWORD *Value; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 i; // rdx
  __int64 *v14; // rcx
  int v15; // eax
  int v16; // edi
  unsigned __int64 **v17; // r12
  _BYTE *v18; // r14
  void **v19; // rdi
  char v20; // al
  int **v21; // r8
  _BYTE *v22; // rax
  unsigned int **v23; // rcx
  int v24; // eax
  _BYTE **v25; // rcx
  bool v26; // al
  int v27; // eax
  int v28; // r8d
  _BYTE *v29; // rax
  int v30; // edx
  __int64 v31; // rcx
  __m128i v32; // xmm1
  int v33; // r12d
  _QWORD *v34; // rbp
  __int64 v35; // rdi
  unsigned __int64 *v36; // r15
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // r9
  __int64 v39; // rcx
  void *v40; // rdi
  unsigned int v41; // edi
  int v42; // eax
  unsigned __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rdi
  unsigned __int64 *v49; // r11
  __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 *v52; // rax
  unsigned __int64 v53; // r9
  _BYTE *v54; // r14
  int v55; // r8d
  int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // r14
  unsigned int v59; // eax
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __int64 v62; // r8
  unsigned __int64 v63; // r9
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
  unsigned int v75; // eax
  _BYTE *v76; // rcx
  void ****v77; // rcx
  void ***v78; // rcx
  __int64 v79; // rax
  void **v80; // rax
  void (__fastcall *v81)(CVisualTreeData *, struct CVisualTree *, struct CVisual *); // rax
  HANDLE ProcessHeap; // rax
  CTreeData *v83; // rcx
  HANDLE v84; // rax
  unsigned __int64 v85; // r14
  __int64 v86; // r15
  __int64 v87; // r9
  __int64 v88; // rdx
  unsigned int v89; // esi
  __int64 v90; // rdx
  HANDLE v91; // rax
  LPVOID v92; // rsi
  __int64 v93; // rdx
  unsigned int v94; // ebp
  HANDLE v95; // rax
  void *v96; // rax
  void *v97; // r15
  unsigned __int64 v98; // rdi
  CThreadContext *v99; // rax
  CThreadContext *v100; // rax
  CThreadContext *v101; // rax
  CThreadContext *v102; // rax
  void *v103; // rbp
  HANDLE v104; // rax
  __int128 v105; // [rsp+38h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  bool v107; // [rsp+A0h] [rbp+8h] BYREF
  _BYTE *v108; // [rsp+A8h] [rbp+10h]
  unsigned __int64 *v109; // [rsp+B0h] [rbp+18h]

  v109 = a3;
  v108 = a2;
  v5 = 0;
  *(_DWORD *)(a1 + 64) = 1;
  v8 = a2;
  if ( a3 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v101 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v101 || (v102 = CThreadContext::CThreadContext(v101), (Value = v102) == 0LL) )
      {
        v16 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        v87 = 2147942414LL;
        v88 = 76LL;
        goto LABEL_137;
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v102);
    }
    v11 = Value[4];
    if ( (v11 & 2) != 0 )
      v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v12 = Value[4] & 1LL;
    for ( i = 0LL; ; i = v93 + 1 )
    {
      v14 = Value + 4;
      if ( i >= v12 )
        break;
      if ( a3 == __A__CPtrArray___CBX__QEBAPEBX_K_Z(v14, i) )
      {
        v16 = -2147467260;
        v88 = 85LL;
        v87 = 2147500036LL;
        goto LABEL_137;
      }
    }
    v15 = CPtrArrayBase::InsertAt((CPtrArrayBase *)v14, (unsigned __int64)a3, v12);
    v16 = v15;
    if ( v15 < 0 )
    {
      v87 = (unsigned int)v15;
      v88 = 89LL;
LABEL_137:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v88,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)v87);
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
      goto LABEL_16;
    v19 = *(void ***)(a1 + 56);
    a5 = 0;
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
              v22 = k - 44;
              if ( (void **)k[4] == v19 )
                goto LABEL_13;
            }
          }
        }
LABEL_99:
        v71 = *v23;
        v72 = **v23;
        if ( (v72 & 0x10000000) == 0 )
          goto LABEL_118;
        v73 = v71[1];
        v74 = v71 + 2;
        v75 = 0;
        if ( (_DWORD)v73 )
        {
          v76 = v71 + 2;
          do
          {
            if ( *v76 == 4 )
              break;
            ++v75;
            ++v76;
          }
          while ( v75 < (unsigned int)v73 );
        }
        v77 = v75 >= (unsigned int)v73 ? 0LL : (void ****)((char *)v71 + 8LL * v75 - (((_BYTE)v73 + 15) & 7) + v73 + 15);
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
LABEL_118:
          ProcessHeap = GetProcessHeap();
          v83 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x188uLL);
          if ( !v83 )
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          CTreeData::CTreeData(v83);
          v80 = &CVisualTreeData::`vftable';
          v78[48] = 0LL;
          *v78 = &CVisualTreeData::`vftable';
        }
        v81 = (void (__fastcall *)(CVisualTreeData *, struct CVisualTree *, struct CVisual *))v80[1];
        if ( v81 == CVisualTreeData::Initialize )
        {
          v78[48] = v19;
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
        goto LABEL_99;
    }
LABEL_14:
    v24 = CPreComputeContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 56), &a5);
    v5 = v24;
    if ( v24 < 0 )
      break;
    if ( !a5 )
      goto LABEL_16;
    v44 = (*v17)[10];
    if ( (v44 & 2) != 0 )
      v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v44) = v44 & 1;
    if ( !(_DWORD)v44 )
    {
      v5 = 1;
LABEL_16:
      v25 = (_BYTE **)(a1 + 16);
      while ( 2 )
      {
        v26 = 1;
        v107 = 1;
        if ( (v18[106] & 0x40) != 0 || v18 == v8 )
        {
          v27 = CPreComputeContext::PostSubgraph(a4, *(const struct CVisualTree **)(a1 + 56), &v107);
          v25 = (_BYTE **)(a1 + 16);
          v5 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x11Cu, 0LL);
            goto LABEL_123;
          }
          v26 = v107;
        }
        if ( !v26 )
        {
LABEL_21:
          if ( !*(_DWORD *)(a1 + 4) )
            goto LABEL_25;
          v28 = *(_DWORD *)(a1 + 40);
          v29 = 0LL;
          v30 = 0;
          if ( v28 )
          {
            v31 = (unsigned int)(v28 - 1);
            *(_DWORD *)(a1 + 40) = v31;
            v32 = *(__m128i *)(*(_QWORD *)(a1 + 32) + 16 * v31);
            v25 = (_BYTE **)(a1 + 16);
            v29 = (_BYTE *)v32.m128i_i64[0];
            v30 = _mm_cvtsi128_si32(_mm_srli_si128(v32, 8));
          }
          v18 = *v25;
          *v25 = v29;
          --*(_DWORD *)(a1 + 4);
          *v17 = (unsigned __int64 *)v18;
          *(_DWORD *)(a1 + 24) = v30;
          if ( !v18 )
          {
LABEL_25:
            v33 = -2147024882;
            if ( v5 == 1 )
              v5 = 0;
            goto LABEL_27;
          }
          continue;
        }
        break;
      }
      v54 = *v25;
      if ( !*v25 )
        goto LABEL_81;
      v55 = *(_DWORD *)(a1 + 28);
      if ( v55 != 1 )
        goto LABEL_79;
      v56 = *(_DWORD *)(a1 + 24);
      if ( v56 == -1 )
        goto LABEL_81;
      v57 = *((_QWORD *)v54 + 10);
      if ( (v57 & 2) != 0 )
        v57 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v57) = v57 & 1;
      if ( v56 + 1 < (unsigned int)v57 )
        goto LABEL_69;
LABEL_79:
      if ( !v55 && (v56 = *(_DWORD *)(a1 + 24)) != 0 )
      {
LABEL_69:
        v58 = *((_QWORD *)v54 + 10);
        v59 = v56 - 1;
        v60 = (unsigned int)(v56 + 1);
        if ( v55 != 1 )
          v60 = v59;
        v61 = v58 & 1;
        v62 = v58 & 2;
        v18 = (_BYTE *)(v58 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v62 )
          v63 = *(_QWORD *)v18;
        else
          v63 = v61;
        if ( v63 <= (unsigned int)v60 )
          goto LABEL_85;
        if ( v62 )
          v61 = *(_QWORD *)v18;
        if ( (unsigned int)v60 >= v61 )
        {
LABEL_85:
          v18 = 0LL;
        }
        else if ( v61 != 1 )
        {
          v18 = *(_BYTE **)&v18[8 * v60 + 16];
        }
        v5 = 0;
        *v17 = (unsigned __int64 *)v18;
        *(_DWORD *)(a1 + 24) = v60;
        if ( v18 )
          continue;
      }
      else
      {
LABEL_81:
        v5 = 1;
      }
      v25 = (_BYTE **)(a1 + 16);
      goto LABEL_21;
    }
    v45 = *(unsigned int *)(a1 + 40);
    *(_QWORD *)&v105 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v105 + 1) = *(unsigned int *)(a1 + 24);
    v46 = *(unsigned int *)(a1 + 44);
    if ( (_DWORD)v45 == (_DWORD)v46 )
    {
      v89 = 2 * v46;
      if ( (unsigned __int64)(2 * v46) > 0xFFFFFFFF )
      {
        v90 = 98LL;
        goto LABEL_143;
      }
      if ( v89 <= 0x40 )
        v89 = 64;
      v94 = 16 * v45;
      if ( (unsigned __int64)(16 * v45) > 0xFFFFFFFF )
      {
        v90 = 101LL;
LABEL_143:
        v5 = -2147024362;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v90,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)0x80070216LL);
        v33 = -2147024882;
LABEL_144:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v5);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x87u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xFFu, 0LL);
        goto LABEL_27;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v89 <= 0x10 )
      {
        v33 = -2147024882;
        v5 = -2147024809;
        goto LABEL_162;
      }
      v95 = GetProcessHeap();
      v96 = HeapAlloc(v95, 0, 16LL * v89);
      v97 = v96;
      if ( !v96 )
      {
        v33 = -2147024882;
        v5 = -2147024882;
LABEL_162:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v5);
        goto LABEL_144;
      }
      memcpy_0(v96, *(const void **)(a1 + 32), v94);
      operator delete(*(void **)(a1 + 32));
      *(_QWORD *)(a1 + 32) = v97;
      v8 = v108;
      *(_DWORD *)(a1 + 44) = v89;
    }
    *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v105;
    v47 = *(_DWORD *)(a1 + 52);
    if ( v47 <= *(_DWORD *)(a1 + 40) )
      v47 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 52) = v47;
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v48 = 0LL;
    else
      v48 = (unsigned int)(v44 - 1);
    *(_DWORD *)(a1 + 24) = v48;
    v49 = *v17;
    v50 = (*v17)[10] & 2;
    v51 = (*v17)[10] & 1;
    v52 = (unsigned __int64 *)((*v17)[10] & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v50 )
      v53 = *v52;
    else
      v53 = (*v17)[10] & 1;
    if ( v53 <= (unsigned int)v48 )
      goto LABEL_60;
    if ( v50 )
      v51 = *v52;
    if ( (unsigned int)v48 >= v51 )
    {
LABEL_60:
      v52 = 0LL;
    }
    else if ( v51 != 1 )
    {
      v52 = (unsigned __int64 *)v52[v48 + 2];
    }
    ++*(_DWORD *)(a1 + 4);
    v5 = 0;
    *(_QWORD *)(a1 + 16) = v49;
    *v17 = v52;
    if ( !v52 )
      goto LABEL_16;
    v18 = v52;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xF1u, 0LL);
LABEL_123:
  v33 = -2147024882;
LABEL_27:
  if ( v109 )
  {
    v34 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v34 )
    {
LABEL_29:
      v35 = v34[4];
      v36 = (unsigned __int64 *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (v35 & 2) != 0 )
      {
        v37 = *v36;
        v38 = *v36 - 1;
      }
      else
      {
        v37 = v35 & 1;
        v38 = v37 - 1;
      }
      if ( v38 < v37 )
      {
        v39 = v37 - v38;
        if ( v37 - v38 > 1 )
          v39 = 1LL;
        if ( v37 == v39 )
        {
          if ( v37 > 1 )
          {
            v40 = (void *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( v40 )
            {
              v84 = GetProcessHeap();
              HeapFree(v84, 0, v40);
            }
          }
          v34[4] = 0LL;
        }
        else
        {
          v85 = v37 - v39;
          if ( v85 == 1 )
          {
            v98 = v36[(v39 & (v38 - 1)) + 2];
            operator delete((void *)(v34[4] & 0xFFFFFFFFFFFFFFFCuLL));
            v34[4] = v98 | 1;
          }
          else
          {
            if ( v38 < v85 )
              memmove_0(&v36[v38 + 2], &v36[v38 + 2 + v39], 8 * (v85 - v38));
            *v36 = v85;
          }
        }
      }
    }
    else
    {
      v99 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( v99 )
      {
        v100 = CThreadContext::CThreadContext(v99);
        v34 = v100;
        if ( v100 )
        {
          TlsSetValue(CThreadContext::s_dwTlsIndex, v100);
          goto LABEL_29;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  v41 = v5;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v42 = *(_DWORD *)(a1 + 48);
  if ( v42 != 10 )
  {
    *(_DWORD *)(a1 + 48) = v42 + 1;
    return v5;
  }
  v86 = 64LL;
  if ( *(_DWORD *)(a1 + 52) > 0x40u )
    v86 = *(unsigned int *)(a1 + 52);
  if ( (unsigned __int64)(3 * v86) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
LABEL_135:
    *(_QWORD *)(a1 + 48) = 0LL;
    return v5;
  }
  if ( (unsigned int)(3 * v86) > *(_DWORD *)(a1 + 44) )
    goto LABEL_135;
  if ( !(_DWORD)v86 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v86 <= 0x10 )
  {
    v33 = -2147024809;
    goto LABEL_152;
  }
  v91 = GetProcessHeap();
  v92 = HeapAlloc(v91, 0, 16LL * (unsigned int)v86);
  if ( !v92 )
  {
    v5 = v41;
LABEL_152:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x11Eu, 0LL);
    goto LABEL_135;
  }
  v103 = *(void **)(a1 + 32);
  if ( v103 )
  {
    v104 = GetProcessHeap();
    HeapFree(v104, 0, v103);
  }
  *(_QWORD *)(a1 + 32) = v92;
  v5 = v41;
  *(_DWORD *)(a1 + 44) = v86;
  *(_QWORD *)(a1 + 48) = 0LL;
  return v5;
}
