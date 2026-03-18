/*
 * XREFs of ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180045A90
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     PrimitiveStorage::Alloc_16_ @ 0x180047690 (PrimitiveStorage--Alloc_16_.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasDrawListEntry::Create(__int64 a1, __int64 *a2, _QWORD *a3)
{
  float v4; // xmm2_4
  __int64 v6; // r14
  float v8; // xmm0_4
  __int64 v9; // r14
  float v10; // xmm0_4
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  float v15; // xmm0_4
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm11_4
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  float v25; // xmm0_4
  float v26; // xmm3_4
  unsigned int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  char v30; // r14
  __int64 v31; // rbx
  char v32; // r15
  __int64 v33; // rax
  void (__fastcall ***v34)(_QWORD, __int64); // rdi
  __int128 v35; // xmm0
  _DWORD *Value; // r14
  int v37; // ecx
  char *v38; // rbx
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v40; // rcx
  void (*v41)(void); // rax
  int v42; // et0
  __int64 v43; // rcx
  int v44; // eax
  _OWORD *v45; // rcx
  _QWORD *v46; // rcx
  __int64 v47; // rax
  CMILRefCountImpl *v48; // rcx
  char v49; // of
  void (*v50)(void); // rax
  int v51; // et0
  __int64 v53; // rdx
  unsigned int v54; // r8d
  unsigned __int64 v55; // rcx
  float v56; // xmm2_4
  float v57; // xmm1_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  CThreadContext *v61; // rax
  CThreadContext *v62; // rax
  unsigned __int64 v63; // rax
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  int v68; // [rsp+28h] [rbp-79h]
  int v69; // [rsp+28h] [rbp-79h]
  float v70[4]; // [rsp+38h] [rbp-69h] BYREF
  __int128 v71; // [rsp+48h] [rbp-59h]
  __int64 v72; // [rsp+58h] [rbp-49h] BYREF
  int v73; // [rsp+60h] [rbp-41h]
  int v74; // [rsp+64h] [rbp-3Dh]
  void *retaddr; // [rsp+100h] [rbp+5Fh]
  float Y; // [rsp+108h] [rbp+67h] BYREF
  float v77; // [rsp+120h] [rbp+7Fh] BYREF

  v4 = *(float *)(a1 + 60);
  v6 = *(_QWORD *)(a1 + 48);
  v71 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  v8 = *(float *)(a1 + 64);
  if ( v4 < v8 )
  {
    v9 = *(_QWORD *)(v6 + 40);
    Y = 0.0;
    v10 = modff(v8, &Y);
    v11 = (int)Y - 1;
    if ( COERCE_FLOAT(LODWORD(v10) & _xmm) >= 0.000081380211 )
      v11 = (int)Y;
    v12 = v11 - (unsigned __int16)(int)v4 + 1;
    v13 = 2 * v12 + 2;
    v14 = *(_QWORD *)(v9 + 40) + 8LL * (unsigned __int16)(2 * (int)v4);
    if ( !v14 && 2 * v12 != -2 || !*(_QWORD *)(v9 + 48) && 6 * v12 )
      goto LABEL_15;
    v15 = *(float *)(a1 + 60);
    v77 = 0.0;
    v16 = modff(v15, &v77);
    v17 = 0LL;
    if ( v16 > 0.000081380211 )
    {
      v22 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v71 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
      v18 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
      v19 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
      v20 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
      LODWORD(v21) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
      while ( (unsigned int)v17 < v13 )
      {
        v63 = (unsigned int)(v17 + 2);
        if ( v63 >= v13 )
          break;
        v64 = (float)(1.0 - v16) * *(float *)(v14 + 8 * v17 + 4);
        v65 = (float)(1.0 - v16) * *(float *)(v14 + 8 * v17);
        v17 = (unsigned int)(v17 + 1);
        v66 = v65 + (float)(v16 * *(float *)(v14 + 8 * v63));
        v67 = v64 + (float)(v16 * *(float *)(v14 + 8 * v63 + 4));
        v21 = fminf(v21, v66);
        v19 = fmaxf(v19, v66);
        v20 = fminf(v20, v67);
        *(float *)&v71 = v21;
        v18 = fmaxf(v18, v67);
        *(_QWORD *)((char *)&v71 + 4) = __PAIR64__(LODWORD(v19), LODWORD(v20));
        *((float *)&v71 + 3) = v18;
        if ( (unsigned int)v17 >= 2 )
          goto LABEL_12;
      }
LABEL_15:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v71 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v18 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
    v19 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
    v20 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
    LODWORD(v21) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    do
    {
      if ( (unsigned int)v17 >= v13 )
        goto LABEL_15;
      v21 = fminf(v21, *(float *)(v14 + 8 * v17));
      v20 = fminf(v20, *(float *)(v14 + 8 * v17 + 4));
      v19 = fmaxf(v19, *(float *)(v14 + 8 * v17));
      v18 = fmaxf(v18, *(float *)(v14 + 8 * v17 + 4));
      v17 = (unsigned int)(v17 + 1);
      *(_QWORD *)&v71 = __PAIR64__(LODWORD(v20), LODWORD(v21));
      *((_QWORD *)&v71 + 1) = __PAIR64__(LODWORD(v18), LODWORD(v19));
    }
    while ( (unsigned int)v17 < 2 );
    v22 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
LABEL_12:
    v23 = 2;
    if ( v13 - 2 > 2 )
    {
      v24 = 2LL;
      while ( v24 < v13 )
      {
        v21 = fminf(v21, *(float *)(v14 + 8 * v24));
        v20 = fminf(v20, *(float *)(v14 + 8 * v24 + 4));
        v19 = fmaxf(v19, *(float *)(v14 + 8 * v24));
        v18 = fmaxf(v18, *(float *)(v14 + 8 * v24 + 4));
        v24 = ++v23;
        *(_QWORD *)&v71 = __PAIR64__(LODWORD(v20), LODWORD(v21));
        *((_QWORD *)&v71 + 1) = __PAIR64__(LODWORD(v18), LODWORD(v19));
        if ( v23 >= v13 - 2 )
          goto LABEL_17;
      }
      goto LABEL_15;
    }
LABEL_17:
    v25 = *(float *)(a1 + 64);
    v70[0] = 0.0;
    v26 = modff(v25, v70);
    if ( v26 > 0.000081380211 )
    {
      v53 = (unsigned int)(v13 - 4);
      v54 = v53 + 2;
      v55 = (unsigned int)(v53 + 2);
      if ( v55 < v13 )
      {
        while ( (unsigned int)v53 < v13 && v55 < v13 )
        {
          ++v54;
          v56 = (float)(v22 - v26) * *(float *)(v14 + 8 * v53 + 4);
          v57 = (float)(v22 - v26) * *(float *)(v14 + 8 * v53);
          v53 = (unsigned int)(v53 + 1);
          v58 = v57 + (float)(v26 * *(float *)(v14 + 8 * v55));
          v59 = v26 * *(float *)(v14 + 8 * v55 + 4);
          v55 = v54;
          v60 = v56 + v59;
          v21 = fminf(v21, v58);
          v19 = fmaxf(v19, v58);
          v20 = fminf(v20, v60);
          *(float *)&v71 = v21;
          v18 = fmaxf(v18, v60);
          *(_QWORD *)((char *)&v71 + 4) = __PAIR64__(LODWORD(v19), LODWORD(v20));
          *((float *)&v71 + 3) = v18;
          if ( v54 >= v13 )
            goto LABEL_20;
        }
        goto LABEL_15;
      }
    }
    else
    {
      v27 = v13 - 2;
      v28 = (unsigned int)(v13 - 2);
      if ( v28 < v13 )
      {
        do
        {
          v21 = fminf(v21, *(float *)(v14 + 8 * v28));
          v20 = fminf(v20, *(float *)(v14 + 8 * v28 + 4));
          v19 = fmaxf(v19, *(float *)(v14 + 8 * v28));
          v18 = fmaxf(v18, *(float *)(v14 + 8 * v28 + 4));
          v28 = ++v27;
          *(_QWORD *)&v71 = __PAIR64__(LODWORD(v20), LODWORD(v21));
          *((_QWORD *)&v71 + 1) = __PAIR64__(LODWORD(v18), LODWORD(v19));
        }
        while ( v27 < v13 );
      }
    }
  }
LABEL_20:
  v29 = *(_QWORD *)(a1 + 48);
  v30 = *(_BYTE *)(a1 + 80);
  v72 = 0LL;
  v74 = 0;
  v31 = *(_QWORD *)(v29 + 40);
  v73 = *(_DWORD *)(a1 + 72);
  v32 = *(_BYTE *)(v31 + 80);
  v33 = PrimitiveStorage::Alloc_16_(&v72);
  v34 = (void (__fastcall ***)(_QWORD, __int64))v33;
  if ( v33 )
  {
    v35 = v71;
    *(_BYTE *)(v33 + 80) = v32;
    *(_BYTE *)(v33 + 81) = v30;
    *(_OWORD *)(v33 + 56) = v35;
    *(_QWORD *)(v33 + 72) = *(_QWORD *)(v31 + 72);
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v61 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v61 || (v62 = CThreadContext::CThreadContext(v61), (Value = v62) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v62);
    }
    v37 = Value[41];
    v38 = 0LL;
    if ( v37 )
    {
      v38 = (char *)*((_QWORD *)Value + 21);
      *((_QWORD *)Value + 21) = *(_QWORD *)v38;
      Value[41] = v37 - 1;
    }
    if ( v38 || (ProcessHeap = GetProcessHeap(), (v38 = (char *)HeapAlloc(ProcessHeap, 0, 0x70uLL)) != 0LL) )
    {
      *((_DWORD *)v38 + 2) = 0;
      *(_QWORD *)v38 = &CDrawListEntry::`vftable';
      *((_QWORD *)v38 + 2) = v34;
      v40 = *(volatile signed __int32 **)a1;
      *((_QWORD *)v38 + 3) = *(_QWORD *)a1;
      if ( v40 )
      {
        v41 = **(void (***)(void))v40;
        if ( (char *)v41 == (char *)CMILRefCountImpl::AddReference )
        {
          v42 = _InterlockedAdd(v40, 1u);
          if ( (v42 < 0) ^ __OFSUB__(v41, CMILRefCountImpl::AddReference) | (v42 == 0) )
            wil::details::in1diag3::Log_Hr(
              (wil::details::in1diag3 *)retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v68);
        }
        else
        {
          v41();
        }
      }
      v43 = *(_QWORD *)(a1 + 16);
      *((_QWORD *)v38 + 4) = v43;
      if ( v43 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
      *((_QWORD *)v38 + 5) = *(_QWORD *)(a1 + 24);
      *((_DWORD *)v38 + 12) = 1065353216;
      *((_DWORD *)v38 + 13) = 1065353216;
      *((_DWORD *)v38 + 14) = 1065353216;
      *((_DWORD *)v38 + 15) = 1065353216;
      v44 = *(_DWORD *)(a1 + 8);
      *((_DWORD *)v38 + 16) = v44;
      v45 = *(_OWORD **)(a1 + 32);
      if ( v45 )
        *((_OWORD *)v38 + 3) = *v45;
      v46 = *(_QWORD **)(a1 + 40);
      if ( v46 )
      {
        *(_QWORD *)(v38 + 68) = *v46;
        *((_DWORD *)v38 + 16) = v44 | 0x100;
      }
      *(_QWORD *)v38 = &CCpuClipAntialiasDrawListEntry::`vftable';
      v47 = *a2;
      *a2 = 0LL;
      *((_QWORD *)v38 + 10) = v47;
      v48 = *(CMILRefCountImpl **)(a1 + 48);
      *((_QWORD *)v38 + 11) = v48;
      v49 = 0;
      if ( v48 )
      {
        v50 = **(void (***)(void))v48;
        if ( (char *)v50 == (char *)CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v48);
        else
          v50();
      }
      *((_QWORD *)v38 + 12) = *(_QWORD *)(a1 + 56);
      *((_DWORD *)v38 + 26) = *(_DWORD *)(a1 + 64);
      v38[108] = *(_BYTE *)(a1 + 81);
      v38[109] = *(_BYTE *)(a1 + 82);
      v51 = _InterlockedAdd((volatile signed __int32 *)v38 + 2, 1u);
      if ( (v51 < 0) ^ v49 | (v51 == 0) )
        wil::details::in1diag3::Log_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v68);
      *a3 = v38;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
        (const char *)0x8007000ELL,
        v68);
      (**v34)(v34, 1LL);
      return 2147942414LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Cu, 0LL);
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x1E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
      (const char *)0x8007000ELL,
      v69);
    return 2147942414LL;
  }
}
