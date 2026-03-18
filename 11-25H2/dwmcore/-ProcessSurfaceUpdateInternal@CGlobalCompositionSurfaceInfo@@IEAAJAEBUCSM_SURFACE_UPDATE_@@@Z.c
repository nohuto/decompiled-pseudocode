/*
 * XREFs of ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180061858
 * Callers:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800CFA2C (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     ?clear@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180030128 (-clear@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180061F10 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1801012AC (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180101448 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z @ 0x1801EC784 (-FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE_ *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  struct ISwapChainRealization *v4; // rbx
  CGlobalCompositionSurfaceInfo::CBindInfo *v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  void (__fastcall ***v13)(_QWORD, unsigned __int64, char *, char *); // rax
  bool v15; // dl
  int v16; // eax
  struct ISwapChainRealization *Realization; // rax

  v2 = *((_QWORD *)a2 + 2);
  v3 = 0;
  v4 = 0LL;
  if ( *((_QWORD *)this + 17) == v2 )
  {
    v7 = (CGlobalCompositionSurfaceInfo *)((char *)this + 112);
  }
  else
  {
    v15 = *((_DWORD *)this + 36) == 3 && v2;
    v7 = (CGlobalCompositionSurfaceInfo *)((char *)this + 112);
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 112), v15);
    CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *((_QWORD *)a2 + 2);
  if ( !v8 )
    goto LABEL_13;
  if ( *((_QWORD *)this + 17) == v8 )
  {
    v9 = *((_QWORD *)this + 23);
    v10 = *((unsigned int *)a2 + 6);
    if ( v10 < (*((_QWORD *)this + 24) - v9) >> 3 )
      v4 = *(struct ISwapChainRealization **)(v9 + 8 * v10);
    if ( v4 )
    {
      v11 = *(_QWORD *)v4;
LABEL_9:
      (*(void (__fastcall **)(struct ISwapChainRealization *))(v11 + 8))(v4);
      goto LABEL_10;
    }
  }
  v16 = CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(v7, v8);
  v3 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x120u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xDAu, 0LL);
    goto LABEL_13;
  }
  Realization = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(v7, *((_DWORD *)a2 + 6));
  v4 = Realization;
  if ( Realization )
  {
    v11 = *(_QWORD *)Realization;
    goto LABEL_9;
  }
LABEL_10:
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 92);
  *((_DWORD *)this + 83) = *((_DWORD *)a2 + 93);
  *((_BYTE *)this + 300) = *(_DWORD *)a2 == 2;
  CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
    this,
    v4,
    (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 224),
    (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 32),
    (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 196));
  v12 = *(_QWORD *)(*((_QWORD *)g_pComposition + 709) + 24LL);
  if ( v12 )
  {
    v13 = (void (__fastcall ***)(_QWORD, unsigned __int64, char *, char *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
    if ( v13 )
      (**v13)(v13, ((unsigned __int64)this + 104) & -(__int64)(this != 0LL), (char *)a2 + 32, (char *)a2 + 196);
  }
LABEL_13:
  if ( *((_BYTE *)this + 295) )
  {
    std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::clear((__int64)this + 184);
    *((_BYTE *)this + 295) = 0;
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v4 + 16LL))(v4);
  return v3;
}
