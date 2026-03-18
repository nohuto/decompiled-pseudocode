/*
 * XREFs of ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18013CB60
 * Callers:
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x1802AD3E0 (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x18010BDC0 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18010FC74 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801100F0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180110800 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x18013E808 (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ??$emplace@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18013EB98 (--$emplace@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@UC.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801CC30C (--$uninitialized_move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_arra.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@Z @ 0x1801CC6C4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J.c)
 *     ??$_Move_backward_unchecked@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@PEAUContentEntry@CDrawListCacheSet@@@std@@YAPEAUContentEntry@CDrawListCacheSet@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0PEAU12@@Z @ 0x1801CC70C (--$_Move_backward_unchecked@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@PEAUConte.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1801CC778 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802CD9E0 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListCacheSet::GetCache(
        CDrawListCacheSet *this,
        __int64 a2,
        int a3,
        const struct IDeviceTarget *a4,
        struct CDrawListCache **a5)
{
  unsigned __int64 v6; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rsi
  struct CD3DDevice *(__fastcall *v12)(CD2DContext *); // rax
  struct CD3DDevice *Device; // rax
  signed __int32 v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  signed __int32 v20; // eax
  detail::liberal_expansion_policy *v21; // rcx
  signed __int32 v22; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r10
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rcx
  signed __int32 v37; // eax
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // rdi
  LPVOID v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  LPVOID v49; // rbx
  CDrawListCacheSet *v50; // rdx
  CDrawListCacheSet *v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rbx
  _QWORD *v54; // r11
  __int64 v55; // rax
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  __int128 v57; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v58; // [rsp+50h] [rbp-B0h]
  volatile signed __int32 *v59; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v60; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v61; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v62; // [rsp+70h] [rbp-90h] BYREF
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v65; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v66[4]; // [rsp+90h] [rbp-70h] BYREF
  char v67; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v68; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  char v71[72]; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  unsigned int v73; // [rsp+158h] [rbp+58h]

  v73 = a2;
  LODWORD(v6) = a3;
  *a5 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)this;
  v10 = *((_QWORD *)this + 1);
  while ( v9 != v10 )
  {
    if ( *(_DWORD *)v9 != (_DWORD)a2 || *(_DWORD *)(v9 + 4) != (_DWORD)v6 )
      goto LABEL_74;
    v11 = *(_QWORD *)(v9 + 8);
    v12 = *(struct CD3DDevice *(__fastcall **)(CD2DContext *))(*(_QWORD *)a4 + 40LL);
    if ( (char *)v12 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
    {
      Device = (struct CD3DDevice *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(
                                      a4,
                                      a2,
                                      IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice,
                                      CD2DContext::GetDevice);
LABEL_7:
      a2 = v73;
      goto LABEL_8;
    }
    if ( v12 == CD2DResource::GetDevice )
    {
      Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)a4 + 5) + 24LL));
      goto LABEL_7;
    }
    if ( v12 != CD2DContext::GetDevice )
    {
      Device = (struct CD3DDevice *)((__int64 (__fastcall *)(const struct IDeviceTarget *, __int64, _QWORD, struct CD3DDevice *(__fastcall *)(CD2DContext *)))v12)(
                                      a4,
                                      a2,
                                      IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice,
                                      CD2DContext::GetDevice);
      goto LABEL_7;
    }
    Device = (const struct IDeviceTarget *)((char *)a4 - 16);
LABEL_8:
    if ( !*((_QWORD *)Device + 72) || *(_BYTE *)(v11 + 85) || !*(_QWORD *)(v11 + 24) )
    {
      v8 = *(_QWORD *)(v9 + 8);
      LODWORD(v6) = a3;
      break;
    }
    LODWORD(v6) = a3;
LABEL_74:
    v9 += 16LL;
  }
  if ( v8 )
  {
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 1u);
    if ( (v14 + 1 < 0) ^ __OFADD__(1, v14) | (v14 == -1) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v56);
    goto LABEL_15;
  }
  v59 = 0LL;
  v18 = CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Alloc(
          CD2DResource::GetDevice,
          a2,
          IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice,
          CD2DContext::GetDevice);
  v8 = v18;
  if ( !v18 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x24u, 0LL);
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v59);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Cu, 0LL);
    return v15;
  }
  *(_DWORD *)(v18 + 8) = 0;
  v19 = 0LL;
  *(_QWORD *)v18 = &CDrawListCache::`vftable';
  if ( g_pComposition )
    v19 = *((_QWORD *)g_pComposition + 111);
  *(_QWORD *)(v18 + 24) = 0LL;
  *(_QWORD *)(v18 + 32) = 0LL;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 40) = 2LL;
  *(_QWORD *)(v18 + 72) = 0LL;
  *(_WORD *)(v18 + 84) = 0;
  *(_BYTE *)(v18 + 86) = 0;
  v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 1u);
  if ( (v20 + 1 < 0) ^ __OFADD__(1, v20) | (v20 == -1) )
    goto LABEL_49;
  while ( 1 )
  {
    v60 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v60);
    v59 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v59);
    v15 = 0;
    if ( *(_BYTE *)(v8 + 85) || !*(_QWORD *)(v8 + 24) )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
      v64 = *(_QWORD *)this;
      v65 = 0LL;
      v63 = v8;
      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        (_DWORD)this,
        (unsigned int)&v67,
        (unsigned int)&v64,
        v73,
        v6,
        (__int64)&v63);
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v65);
      goto LABEL_16;
    }
    v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 1u);
    if ( (v22 + 1 < 0) ^ __OFADD__(1, v22) | (v22 == -1) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v56);
    v23 = *((_QWORD *)this + 1);
    v24 = *((_QWORD *)this + 2);
    v25 = *(_QWORD *)this;
    v26 = v23 - *(_QWORD *)this;
    v62 = 0LL;
    v6 = v26 >> 4;
    v61 = (volatile signed __int32 *)v8;
    v58 = v6;
    if ( (v24 - v23) >> 4 )
      goto LABEL_33;
    if ( v6 + 1 >= v6 )
      break;
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_49:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v56);
  }
  v45 = detail::liberal_expansion_policy::expand(v21, (v24 - v25) >> 4, v6 + 1);
  v46 = operator new[](saturated_mul(v45, 0x10uLL));
  v47 = *((_QWORD *)this + 1);
  v48 = *(_QWORD *)this;
  *(_QWORD *)&v57 = v46;
  v49 = v46;
  *((_QWORD *)&v57 + 1) = v6;
  v68 = v57;
  v69 = 0LL;
  std::uninitialized_move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
    v71,
    v48,
    v47,
    &v68);
  detail::destruct_range<CDrawListCacheSet::ContentEntry>(*(_QWORD *)this, *((_QWORD *)this + 1));
  v50 = *(CDrawListCacheSet **)this;
  v51 = 0LL;
  *(_QWORD *)this = v49;
  if ( v50 != (CDrawListCacheSet *)((char *)this + 24) )
    v51 = v50;
  operator delete(v51);
  v25 = *(_QWORD *)this;
  v23 = *(_QWORD *)this + 16 * v6;
  v52 = *(_QWORD *)this + 16 * v45;
  *((_QWORD *)this + 1) = v23;
  *((_QWORD *)this + 2) = v52;
LABEL_33:
  v27 = (v23 - v25) >> 4;
  v70 = 0LL;
  v28 = v27 - v6;
  v29 = v25 + 16 * v27;
  if ( !v29 )
    goto LABEL_46;
  v70 = 1LL;
  v30 = v28;
  if ( v28 > 1 )
    v30 = 1LL;
  v31 = 16 * v30;
  v32 = v23 - v31;
  if ( v23 != v23 - v31 )
  {
    v53 = 1LL;
    v54 = (_QWORD *)(v29 + 24);
    do
    {
      v23 -= 16LL;
      if ( !v53 )
        goto LABEL_46;
      --v53;
      v54 -= 2;
      if ( v53 )
        goto LABEL_46;
      *((_DWORD *)v54 - 2) = *(_DWORD *)v23;
      *((_DWORD *)v54 - 1) = *(_DWORD *)(v23 + 4);
      v55 = *(_QWORD *)(v23 + 8);
      *(_QWORD *)(v23 + 8) = 0LL;
      *v54 = v55;
    }
    while ( v23 != v32 );
  }
  if ( v28 <= 1 )
    goto LABEL_38;
  if ( v27 && (!v25 || v27 < 0) )
LABEL_46:
    _invalid_parameter_noinfo_noreturn();
  v42 = v25 + 16 * v27;
  v66[1] = v27;
  v66[2] = v27;
  v43 = v25 + 16 * v58;
  v66[0] = v25;
  v44 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(
          v66,
          -((v42 - 16 - v43) >> 4));
  std::_Move_backward_unchecked<std::move_iterator<CDrawListCacheSet::ContentEntry *>,CDrawListCacheSet::ContentEntry *>(
    v43,
    v42 - 16,
    v44);
LABEL_38:
  v33 = v58;
  v34 = v25 + 16 * (v58 + 1);
  if ( v29 < v34 )
    v34 = v29;
  v35 = v25 + 16 * v58;
  if ( v35 != v34 )
  {
    do
    {
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)(v35 + 8));
      v35 += 16LL;
    }
    while ( v35 != v34 );
    v33 = v58;
  }
  *((_QWORD *)this + 1) += 16LL;
  v36 = 2 * v33;
  *(_DWORD *)(v25 + 8 * v36 + 4) = a3;
  *(_DWORD *)(v25 + 8 * v36) = v73;
  *(_QWORD *)(v25 + 8 * v36 + 8) = v8;
  v37 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 1u);
  if ( (v37 + 1 < 0) ^ __OFADD__(1, v37) | (v37 == -1) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v56);
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v61);
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v62);
LABEL_15:
  v15 = 0;
LABEL_16:
  v16 = *(_QWORD *)this;
  if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4) > 1 )
  {
    v38 = *(_QWORD *)this;
    while ( v16 != *((_QWORD *)this + 1) )
    {
      v39 = *(_QWORD *)(v16 + 8);
      if ( v39 == v8 )
        goto LABEL_56;
      v40 = 0LL;
      if ( g_pComposition )
        v40 = *((_QWORD *)g_pComposition + 111);
      if ( (unsigned __int64)(v40 - *(_QWORD *)(v39 + 16)) <= 0x1E )
      {
LABEL_56:
        v16 += 16LL;
      }
      else
      {
        v41 = (v16 - v38) >> 4;
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)this,
          v41,
          1LL);
        v38 = *(_QWORD *)this;
        v16 = *(_QWORD *)this + 16 * v41;
      }
    }
  }
  *a5 = (struct CDrawListCache *)v8;
  return v15;
}
