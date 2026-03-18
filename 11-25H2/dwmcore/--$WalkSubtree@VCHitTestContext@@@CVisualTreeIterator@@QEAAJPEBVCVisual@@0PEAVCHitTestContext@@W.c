/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800B4E20
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1801362F0 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x1801AD80C (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B42D0 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800B7A78 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800BA7D0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x18018C550 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<CHitTestContext>(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        CHitTestContext *a4,
        ...)
{
  unsigned int v4; // r14d
  CHitTestContext *v5; // r12
  __int64 *v7; // rsi
  _QWORD *Value; // rbx
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 i; // rdx
  __int64 *v13; // rcx
  int v14; // eax
  int v15; // ebx
  __int64 **v16; // r15
  __int64 *v17; // rdi
  void **v18; // rbx
  char v19; // al
  int **v20; // r8
  _BYTE *v21; // rax
  unsigned int **v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rbx
  __int64 *v29; // r11
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 *v32; // rax
  unsigned __int64 v33; // r9
  bool v34; // zf
  char v35; // al
  int v36; // r8d
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rax
  int v40; // r12d
  _QWORD *v41; // rsi
  unsigned __int64 v42; // rdi
  unsigned __int64 *v43; // rbx
  unsigned __int64 v44; // r9
  __int64 v45; // rcx
  int v46; // eax
  HANDLE v48; // rax
  int v49; // eax
  int *v50; // r9
  __int64 v51; // rax
  _BYTE *v52; // rdx
  __int64 j; // rcx
  _QWORD **v54; // r9
  _QWORD *v55; // r9
  _QWORD *k; // rdx
  unsigned int *v57; // r8
  unsigned int v58; // r10d
  __int64 v59; // r9
  _BYTE *v60; // r11
  unsigned int v61; // eax
  _BYTE *v62; // rcx
  void ****v63; // rcx
  void ***v64; // rcx
  __int64 v65; // rax
  void **v66; // rax
  void (__fastcall *v67)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *); // rax
  unsigned __int64 v68; // rdi
  __int64 v69; // r15
  __int64 v70; // r9
  __int64 v71; // rdx
  HANDLE v72; // rax
  LPVOID v73; // rdi
  __int64 v74; // rdx
  unsigned __int64 v75; // rdi
  HANDLE ProcessHeap; // rax
  CTreeData *v77; // rcx
  CThreadContext *v78; // rax
  CThreadContext *v79; // rax
  CThreadContext *v80; // rax
  CThreadContext *v81; // rax
  unsigned int v82; // esi
  __int64 v83; // rdx
  unsigned int v84; // r12d
  void *v85; // rax
  void *v86; // r14
  void *v87; // rsi
  HANDLE v88; // rax
  int v89; // eax
  __int128 v90; // [rsp+30h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 *v93; // [rsp+B0h] [rbp+18h] BYREF
  CHitTestContext *v94; // [rsp+B8h] [rbp+20h]
  __int64 v95; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v95 = va_arg(va1, _QWORD);
  v94 = a4;
  v4 = 0;
  *(_DWORD *)(a1 + 64) = 4;
  v5 = a4;
  v7 = a2;
  if ( a3 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v80 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v80 || (v81 = CThreadContext::CThreadContext(v80), (Value = v81) == 0LL) )
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        v70 = 2147942414LL;
        v71 = 76LL;
        goto LABEL_103;
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v81);
    }
    v10 = Value[4];
    if ( (v10 & 2) != 0 )
      v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v11 = Value[4] & 1LL;
    for ( i = 0LL; ; i = v74 + 1 )
    {
      v13 = Value + 4;
      if ( i >= v11 )
        break;
      if ( a3 == __A__CPtrArray___CBX__QEBAPEBX_K_Z(v13, i) )
      {
        v15 = -2147467260;
        v71 = 85LL;
        v70 = 2147500036LL;
        goto LABEL_103;
      }
    }
    v14 = CPtrArrayBase::InsertAt((CPtrArrayBase *)v13, (unsigned __int64)a3, v11);
    v15 = v14;
    if ( v14 < 0 )
    {
      v70 = (unsigned int)v14;
      v71 = 89LL;
LABEL_103:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v71,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)v70);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x3Eu, 0LL);
      v4 = v15;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xD6u, 0LL);
      return v4;
    }
  }
  v16 = (__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = v7;
  v17 = v7;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  while ( 1 )
  {
LABEL_9:
    if ( (*((_BYTE *)v17 + 106) & 0x40) == 0 && v17 != v7 )
      goto LABEL_36;
    v18 = *(void ***)(a1 + 56);
    LOBYTE(v95) = 0;
    if ( v18 )
    {
      v19 = (*((__int64 (__fastcall **)(void **))*v18 + 23))(v18);
      v20 = (int **)(v17 + 29);
      if ( !v19 )
      {
        v50 = *v20;
        if ( **v20 >= 0 )
        {
          v22 = (unsigned int **)(v17 + 29);
        }
        else
        {
          v51 = (unsigned int)v50[1];
          v52 = v50 + 2;
          for ( j = 0LL; (unsigned int)j < (unsigned int)v51; ++v52 )
          {
            if ( *v52 == 1 )
              break;
            j = (unsigned int)(j + 1);
          }
          if ( (unsigned int)j >= (unsigned int)v51 )
            v54 = 0LL;
          else
            v54 = (_QWORD **)((char *)v50 + v51 + 8 * j - (((_BYTE)v51 + 15) & 7) + 15);
          v55 = *v54;
          v22 = (unsigned int **)(v17 + 29);
          if ( v55 )
          {
            for ( k = (_QWORD *)*v55; ; k = (_QWORD *)*k )
            {
              v22 = (unsigned int **)(v17 + 29);
              if ( k == v55 )
                break;
              v21 = k - 43;
              if ( (void **)k[4] == v18 )
                goto LABEL_13;
            }
          }
        }
LABEL_77:
        v57 = *v22;
        v58 = **v22;
        if ( (v58 & 0x10000000) == 0 )
          goto LABEL_114;
        v59 = v57[1];
        v60 = v57 + 2;
        v61 = 0;
        if ( (_DWORD)v59 )
        {
          v62 = v57 + 2;
          do
          {
            if ( *v62 == 4 )
              break;
            ++v61;
            ++v62;
          }
          while ( v61 < (unsigned int)v59 );
        }
        v63 = v61 >= (unsigned int)v59 ? 0LL : (void ****)((char *)v57 + 8LL * v61 - (((_BYTE)v59 + 15) & 7) + v59 + 15);
        v64 = *v63;
        if ( v64 )
        {
          v65 = 0LL;
          for ( *v57 = v58 & 0xEFFFFFFF; (unsigned int)v65 < (unsigned int)v59; ++v60 )
          {
            if ( *v60 == 4 )
              break;
            v65 = (unsigned int)(v65 + 1);
          }
          if ( (unsigned int)v65 < (unsigned int)v59 )
            *((_BYTE *)v57 + v65 + 8) = 0;
          v66 = *v64;
        }
        else
        {
LABEL_114:
          ProcessHeap = GetProcessHeap();
          v77 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x180uLL);
          if ( !v77 )
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          CTreeData::CTreeData(v77);
          v66 = &CVisualTreeData::`vftable';
          v64[47] = 0LL;
          *v64 = &CVisualTreeData::`vftable';
        }
        v67 = (void (__fastcall *)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *))v66[1];
        if ( v67 == CVisualTreeData::Initialize )
        {
          v64[47] = v18;
          CTreeData::Initialize((CTreeData *)v64, 0LL, (struct CVisual *)v17);
        }
        else
        {
          v67((CVisualTreeData *)v64, (struct CVisualTree *)v18, (struct CVisual *)v17);
        }
        goto LABEL_14;
      }
      v21 = v17 + 41;
LABEL_13:
      v22 = (unsigned int **)(v17 + 29);
      if ( !v21 )
        goto LABEL_77;
    }
LABEL_14:
    v23 = CHitTestContext::PreSubgraph(v5, *(const struct CVisualTree **)(a1 + 56), (bool *)va);
    v4 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xF1u, 0LL);
LABEL_46:
      v40 = -2147024882;
      goto LABEL_47;
    }
    if ( !(_BYTE)v95 )
      goto LABEL_36;
    v24 = (*v16)[10];
    if ( (v24 & 2) != 0 )
      v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v24) = v24 & 1;
    if ( !(_DWORD)v24 )
    {
      v4 = 1;
      goto LABEL_36;
    }
    v25 = *(unsigned int *)(a1 + 40);
    *(_QWORD *)&v90 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v90 + 1) = *(unsigned int *)(a1 + 24);
    v26 = *(unsigned int *)(a1 + 44);
    if ( (_DWORD)v25 == (_DWORD)v26 )
    {
      v82 = 2 * v26;
      if ( (unsigned __int64)(2 * v26) > 0xFFFFFFFF )
      {
        v83 = 98LL;
        goto LABEL_127;
      }
      if ( v82 <= 0x40 )
        v82 = 64;
      v84 = 16 * v25;
      if ( (unsigned __int64)(16 * v25) > 0xFFFFFFFF )
      {
        v83 = 101LL;
LABEL_127:
        v4 = -2147024362;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)0x80070216LL);
        v40 = -2147024882;
LABEL_128:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v4);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x87u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xFFu, 0LL);
        goto LABEL_47;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / v82 <= 0x10 )
      {
        v40 = -2147024882;
        v4 = -2147024809;
        goto LABEL_143;
      }
      v85 = MIDL_user_allocate(16LL * v82);
      v86 = v85;
      if ( !v85 )
      {
        v40 = -2147024882;
        v4 = -2147024882;
LABEL_143:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v4);
        goto LABEL_128;
      }
      memcpy_0(v85, *(const void **)(a1 + 32), v84);
      operator delete(*(void **)(a1 + 32));
      v5 = v94;
      *(_QWORD *)(a1 + 32) = v86;
      *(_DWORD *)(a1 + 44) = v82;
      v7 = a2;
    }
    *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v90;
    v27 = *(_DWORD *)(a1 + 52);
    if ( v27 <= *(_DWORD *)(a1 + 40) )
      v27 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 52) = v27;
    v28 = *(_DWORD *)(a1 + 28) == 1 ? 0LL : (unsigned int)(v24 - 1);
    *(_DWORD *)(a1 + 24) = v28;
    v29 = *v16;
    v30 = (*v16)[10] & 2;
    v31 = (*v16)[10] & 1;
    v32 = (__int64 *)((*v16)[10] & 0xFFFFFFFFFFFFFFFCuLL);
    v33 = v30 ? *v32 : (*v16)[10] & 1;
    if ( v33 <= (unsigned int)v28 )
      goto LABEL_32;
    if ( v30 )
      v31 = *v32;
    if ( (unsigned int)v28 >= v31 )
    {
LABEL_32:
      v32 = 0LL;
    }
    else if ( v31 != 1 )
    {
      v32 = (__int64 *)v32[v28 + 2];
    }
    ++*(_DWORD *)(a1 + 4);
    v4 = 0;
    *(_QWORD *)(a1 + 16) = v29;
    *v16 = v32;
    if ( !v32 )
      break;
    v17 = v32;
  }
  do
  {
LABEL_36:
    v34 = (*((_BYTE *)v17 + 106) & 0x40) == 0;
    v35 = 1;
    LOBYTE(v95) = 1;
    if ( !v34 || v17 == v7 )
    {
      v49 = CHitTestContext::PostSubgraph(v5, *(const struct CVisualTree **)(a1 + 56), (bool *)va);
      v4 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x11Cu, 0LL);
        goto LABEL_46;
      }
      v35 = v95;
    }
    v93 = 0LL;
    if ( v35 )
    {
      v89 = CGraphWalker<CVisual>::GotoSibling(a1, &v93);
      v4 = v89;
      if ( v89 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v89, 0x125u, 0LL);
        goto LABEL_46;
      }
      v17 = v93;
      if ( v93 )
        goto LABEL_9;
    }
    if ( !*(_DWORD *)(a1 + 4) )
      break;
    v36 = *(_DWORD *)(a1 + 40);
    v37 = 0LL;
    v38 = 0;
    if ( v36 )
    {
      *(_DWORD *)(a1 + 40) = v36 - 1;
      v39 = *(_QWORD *)(a1 + 32);
      v38 = *(_DWORD *)(v39 + 16LL * (unsigned int)(v36 - 1) + 8);
      v37 = *(_QWORD *)(v39 + 16LL * (unsigned int)(v36 - 1));
    }
    v17 = *(__int64 **)(a1 + 16);
    --*(_DWORD *)(a1 + 4);
    *v16 = v17;
    *(_QWORD *)(a1 + 16) = v37;
    *(_DWORD *)(a1 + 24) = v38;
  }
  while ( v17 );
  v40 = -2147024882;
  if ( v4 == 1 )
    v4 = 0;
LABEL_47:
  if ( a3 )
  {
    v41 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v41 )
    {
LABEL_49:
      v42 = v41[4] & 1LL;
      v43 = (unsigned __int64 *)(v41[4] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (v41[4] & 2) != 0 )
      {
        v42 = *v43;
        v44 = *v43 - 1;
      }
      else
      {
        v44 = v42 - 1;
      }
      if ( v44 < v42 )
      {
        v45 = v42 - v44;
        if ( v42 - v44 > 1 )
          v45 = 1LL;
        if ( v42 == v45 )
        {
          if ( v42 > 1 && v43 )
          {
            v48 = GetProcessHeap();
            HeapFree(v48, 0, v43);
          }
          v41[4] = 0LL;
        }
        else
        {
          v68 = v42 - v45;
          if ( v68 == 1 )
          {
            v75 = v43[(v45 & (v44 - 1)) + 2];
            operator delete((void *)(v41[4] & 0xFFFFFFFFFFFFFFFCuLL));
            v41[4] = v75 | 1;
          }
          else
          {
            if ( v44 < v68 )
              memmove_0(&v43[v44 + 2], &v43[v44 + 2 + v45], 8 * (v68 - v44));
            *v43 = v68;
          }
        }
      }
    }
    else
    {
      v78 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( v78 )
      {
        v79 = CThreadContext::CThreadContext(v78);
        v41 = v79;
        if ( v79 )
        {
          TlsSetValue(CThreadContext::s_dwTlsIndex, v79);
          goto LABEL_49;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *v16 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v46 = *(_DWORD *)(a1 + 48);
  if ( v46 != 10 )
  {
    *(_DWORD *)(a1 + 48) = v46 + 1;
    return v4;
  }
  v69 = 64LL;
  if ( *(_DWORD *)(a1 + 52) > 0x40u )
    v69 = *(unsigned int *)(a1 + 52);
  if ( (unsigned __int64)(3 * v69) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
LABEL_101:
    *(_QWORD *)(a1 + 48) = 0LL;
    return v4;
  }
  if ( (unsigned int)(3 * v69) > *(_DWORD *)(a1 + 44) )
    goto LABEL_101;
  if ( !(_DWORD)v69 || 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v69 <= 0x10 )
  {
    v40 = -2147024809;
    goto LABEL_110;
  }
  v72 = GetProcessHeap();
  v73 = HeapAlloc(v72, 0, 16LL * (unsigned int)v69);
  if ( !v73 )
  {
LABEL_110:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x11Eu, 0LL);
    goto LABEL_101;
  }
  v87 = *(void **)(a1 + 32);
  if ( v87 )
  {
    v88 = GetProcessHeap();
    HeapFree(v88, 0, v87);
  }
  *(_QWORD *)(a1 + 32) = v73;
  *(_DWORD *)(a1 + 44) = v69;
  *(_QWORD *)(a1 + 48) = 0LL;
  return v4;
}
