/*
 * XREFs of ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800D6A50
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800D6F60 (-AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800D73D0 (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800D7540 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x18018DC50 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x18018D2A8 (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18018D450 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchOptimizer::FlushBottomLayer(CBatchOptimizer *this)
{
  __int64 v1; // rbx
  char *v3; // rsi
  char *v4; // r14
  unsigned int v5; // r15d
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rbp
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  bool v13; // zf
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // r15d
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rbp
  unsigned int v22; // eax
  _DWORD *v23; // rax
  volatile signed __int32 *v24; // rcx
  unsigned int (__fastcall *v25)(CMILRefCountImpl *__hidden); // rdx
  int v26; // et0
  __int64 v27; // r10
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  __int64 v30; // r14
  unsigned int (__fastcall *v31)(CMILRefCountImpl *__hidden); // rdx
  int v32; // et0
  _DWORD *v33; // rax
  _DWORD *v34; // r13
  int v35; // eax
  int v36; // ebp
  __int64 v37; // rcx
  int v38; // r13d
  unsigned int v39; // eax
  int v40; // r9d
  int v41; // r13d
  unsigned int v42; // eax
  int v43; // r9d
  int v44; // r13d
  unsigned int v45; // eax
  int v46; // r9d
  unsigned int v47; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _DWORD *v49; // [rsp+60h] [rbp+8h] BYREF

  v1 = 520LL * *((int *)this + 12);
  v3 = (char *)this + v1 + 120;
  v4 = v3;
  v5 = *(_DWORD *)((char *)this + v1 + 96);
  v6 = *(volatile signed __int32 **)((char *)this + v1 + 112);
  if ( !v6 )
    goto LABEL_7;
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    v30 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 8) = v6;
    v31 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v6;
    if ( v31 == CMILRefCountImpl::AddReference )
    {
      v32 = _InterlockedAdd(v6, 1u);
      if ( (v32 < 0) ^ __OFSUB__(v31, CMILRefCountImpl::AddReference) | (v32 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v47);
    }
    else
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
    }
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
    v4 = v3;
    *(_DWORD *)(v7 + 24) += *(_DWORD *)((char *)this + v1 + 100);
    goto LABEL_5;
  }
  v8 = *(_DWORD *)((char *)this + v1 + 100);
  if ( v8 <= 1 && !*(_DWORD *)((char *)this + v1 + 104) )
    goto LABEL_5;
  v4 = v3;
  v14 = v5 - v8;
  if ( v5 != v8 )
  {
    v15 = *((_QWORD *)this + 1);
    v16 = (int)v14;
    if ( (int)v14 == -1LL || !v3 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v17 = *(_DWORD *)(v15 + 24);
    v18 = v14 + v17;
    if ( (unsigned int)v14 + v17 < v17 )
    {
      v44 = -2147024362;
      v45 = 181;
      v46 = -2147024362;
    }
    else
    {
      if ( v18 <= *(_DWORD *)(v15 + 20) )
      {
        memcpy_0((void *)(*(_QWORD *)v15 + 8LL * v17), v3, 8 * v14);
        *(_DWORD *)(v15 + 24) = v18;
LABEL_20:
        v4 = &v3[8 * v16];
        v5 = v8;
        goto LABEL_21;
      }
      v44 = DynArrayImpl<0>::AddMultipleAndSet(*((_QWORD *)this + 1), 8, v14, v3);
      v46 = v44;
      if ( v44 >= 0 )
        goto LABEL_20;
      v45 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, v45, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0xA1u, 0LL);
    ModuleFailFastForHRESULT(v44, retaddr);
  }
LABEL_21:
  v19 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v19 + 64) )
    goto LABEL_22;
  v33 = MIDL_user_allocate(0xB8uLL);
  v34 = v33;
  if ( !v33 )
  {
    v36 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x15Eu, 0LL);
LABEL_45:
    ModuleFailFastForHRESULT(v36, retaddr);
  }
  *v33 = 0;
  v49 = v33;
  v35 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v19 + 40, &v49, 1LL);
  v36 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x160u, 0LL);
    std::default_delete<CBatchCommand>::operator()(v37, v34);
    goto LABEL_45;
  }
LABEL_22:
  v20 = (unsigned int)(*(_DWORD *)(v19 + 64) - 1);
  v21 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 8 * v20);
  v22 = *(_DWORD *)(v19 + 72);
  *(_DWORD *)(v19 + 64) = v20;
  if ( v22 >= (unsigned int)v20 )
    v22 = v20;
  *(_DWORD *)(v19 + 72) = v22;
  *(_DWORD *)v21 = 3;
  *(_QWORD *)(v21 + 8) = 0LL;
  *(_DWORD *)(v21 + 16) = *(_DWORD *)((char *)this + v1 + 88);
  *(_BYTE *)(v21 + 20) = *((_BYTE *)this + v1 + 92);
  v23 = (_DWORD *)v21;
  v24 = *(volatile signed __int32 **)((char *)this + v1 + 112);
  *(_QWORD *)(v21 + 8) = v24;
  if ( v24 )
  {
    v25 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v24;
    if ( v25 == CMILRefCountImpl::AddReference )
    {
      v26 = _InterlockedAdd(v24, 1u);
      if ( (v26 < 0) ^ __OFSUB__(v25, CMILRefCountImpl::AddReference) | (v26 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v47);
    }
    else
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, unsigned int (__fastcall *)(CMILRefCountImpl *__hidden), __int64))v24)(
        v24,
        v25,
        v14);
    }
    v23 = (_DWORD *)v21;
  }
  *(_DWORD *)(v21 + 24) = *(_DWORD *)((char *)this + v1 + 100);
  v27 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 5) = v23;
  v49 = v23;
  v28 = *(_DWORD *)(v27 + 24);
  v29 = v28 + 1;
  if ( v28 + 1 < v28 )
  {
    v41 = -2147024362;
    v42 = 181;
    v43 = -2147024362;
    goto LABEL_50;
  }
  if ( v29 <= *(_DWORD *)(v27 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)v27 + 8LL * v28) = v23;
    *(_DWORD *)(v27 + 24) = v29;
    goto LABEL_5;
  }
  v41 = DynArrayImpl<0>::AddMultipleAndSet(v27, 8, 1, &v49);
  v43 = v41;
  if ( v41 < 0 )
  {
    v42 = 192;
LABEL_50:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, v42, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x90u, 0LL);
    ModuleFailFastForHRESULT(v41, retaddr);
  }
LABEL_5:
  v9 = *(_QWORD *)((char *)this + v1 + 112);
  *(_QWORD *)((char *)this + v1 + 112) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
LABEL_7:
  v10 = *((_QWORD *)this + 1);
  if ( !v4 && v5 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v11 = *(_DWORD *)(v10 + 24);
  v12 = v11 + v5;
  if ( v11 + v5 < v11 )
  {
    v38 = -2147024362;
    v39 = 181;
    v40 = -2147024362;
    goto LABEL_43;
  }
  if ( v12 <= *(_DWORD *)(v10 + 20) )
  {
    memcpy_0((void *)(*(_QWORD *)v10 + 8LL * v11), v4, 8LL * v5);
    *(_DWORD *)(v10 + 24) = v12;
    goto LABEL_11;
  }
  v38 = DynArrayImpl<0>::AddMultipleAndSet(*((_QWORD *)this + 1), 8, v5, v4);
  v40 = v38;
  if ( v38 < 0 )
  {
    v39 = 192;
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, v39, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xA1u, 0LL);
    ModuleFailFastForHRESULT(v38, retaddr);
  }
LABEL_11:
  v13 = *(_DWORD *)((char *)this + v1 + 104) == 0;
  *(_QWORD *)((char *)this + v1 + 96) = 0LL;
  if ( v13 )
    *((_QWORD *)this + 5) = 0LL;
  *(_DWORD *)((char *)this + v1 + 104) = 0;
}
