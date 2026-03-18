/*
 * XREFs of ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180061AA0
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800AEC80 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 * Callees:
 *     ?clear@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180030128 (-clear@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180061F10 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1801012AC (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180101448 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z @ 0x1801EC784 (-FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdate(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE_ *a2,
        __int64 a3)
{
  bool v5; // r15
  __int64 v6; // rax
  unsigned int v7; // r14d
  struct ISwapChainRealization *v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  void (__fastcall ***v14)(_QWORD, char *, char *, char *); // rax
  bool v16; // sf
  bool v17; // of
  unsigned int v18; // ecx
  bool v19; // zf
  int v20; // eax
  struct ISwapChainRealization *Realization; // rax
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v28; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+78h] [rbp-88h] BYREF
  BOOL v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h] BYREF
  char v38[16]; // [rsp+B0h] [rbp-50h] BYREF
  char *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int64 *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int64 *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  int *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  __int64 *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  int *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  int *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  int *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  int *v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  BOOL *v61; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  int *v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  int *v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  int *v67; // [rsp+1A0h] [rbp+A0h]
  __int64 v68; // [rsp+1A8h] [rbp+A8h]
  BOOL *v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  __int64 *v71; // [rsp+1C0h] [rbp+C0h]
  __int64 v72; // [rsp+1C8h] [rbp+C8h]

  v5 = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v17 = __OFSUB__(*((_DWORD *)this + 72), 3);
    v16 = *((_DWORD *)this + 72) - 3 < 0;
    v18 = *((_DWORD *)a2 + 90);
    v37 = 0LL;
    v19 = *(_DWORD *)a2 == 2;
    v28 = v16 == v17;
    v30 = 0;
    v32 = v19;
    v31 = *((_DWORD *)a2 + 6);
    v29 = *((_DWORD *)a2 + 65);
    v27 = *((_DWORD *)a2 + 67);
    v26 = 0;
    v25 = (v18 >> 3) & 1;
    v24 = (v18 >> 2) & 1;
    v36 = *((_QWORD *)a2 + 29);
    v23 = *((_DWORD *)a2 + 56);
    v34 = *((unsigned int *)a2 + 7);
    v33 = *((_QWORD *)a2 + 2);
    v39 = (char *)a2 + 4;
    v41 = &v33;
    v43 = &v34;
    v45 = &v35;
    v47 = &v22;
    v49 = &v23;
    v51 = &v36;
    v53 = &v24;
    v55 = &v25;
    v57 = &v26;
    v59 = &v27;
    v61 = &v28;
    v63 = &v29;
    v65 = &v30;
    v22 = (v18 >> 4) & 1;
    v35 = 0LL;
    v40 = 8LL;
    v42 = 8LL;
    v44 = 8LL;
    v46 = 8LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 8LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v67 = &v31;
    v68 = 4LL;
    v69 = &v32;
    v70 = 4LL;
    v71 = &v37;
    v72 = 8LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_SURFACEUPDATE,
      a3,
      18LL,
      v38);
  }
  v6 = *((_QWORD *)a2 + 2);
  v7 = 0;
  v8 = 0LL;
  if ( *((_QWORD *)this + 17) != v6 )
  {
    if ( *((_DWORD *)this + 36) != 3 || !v6 )
      v5 = 0;
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 112), v5);
    CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = *((_QWORD *)a2 + 2);
  if ( v9 )
  {
    if ( *((_QWORD *)this + 17) != v9 )
      goto LABEL_22;
    v10 = *((_QWORD *)this + 23);
    v11 = *((unsigned int *)a2 + 6);
    if ( v11 < (*((_QWORD *)this + 24) - v10) >> 3 )
      v8 = *(struct ISwapChainRealization **)(v10 + 8 * v11);
    if ( v8 )
    {
      v12 = *(_QWORD *)v8;
    }
    else
    {
LABEL_22:
      v20 = CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(
              (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
              v9);
      v7 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x120u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xDAu, 0LL);
        goto LABEL_14;
      }
      Realization = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(
                      (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
                      *((_DWORD *)a2 + 6));
      v8 = Realization;
      if ( !Realization )
        goto LABEL_11;
      v12 = *(_QWORD *)Realization;
    }
    (*(void (__fastcall **)(struct ISwapChainRealization *))(v12 + 8))(v8);
LABEL_11:
    *((_DWORD *)this + 39) = *((_DWORD *)a2 + 7);
    *((_DWORD *)this + 72) = *((_DWORD *)a2 + 92);
    *((_DWORD *)this + 83) = *((_DWORD *)a2 + 93);
    *((_BYTE *)this + 300) = *(_DWORD *)a2 == 2;
    CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
      this,
      v8,
      (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 224),
      (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 32),
      (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 196));
    v13 = *(_QWORD *)(*((_QWORD *)g_pComposition + 709) + 24LL);
    if ( v13 )
    {
      v14 = (void (__fastcall ***)(_QWORD, char *, char *, char *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
      if ( v14 )
        (**v14)(v14, (char *)this + 104, (char *)a2 + 32, (char *)a2 + 196);
    }
  }
LABEL_14:
  if ( *((_BYTE *)this + 295) )
  {
    std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::clear((__int64)this + 184);
    *((_BYTE *)this + 295) = 0;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}
