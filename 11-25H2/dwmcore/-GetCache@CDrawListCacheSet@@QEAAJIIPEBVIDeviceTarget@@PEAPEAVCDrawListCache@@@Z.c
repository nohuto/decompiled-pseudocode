/*
 * XREFs of ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180010960
 * Callers:
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x1802B6FD0 (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x180012608 (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ??$emplace@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180012998 (--$emplace@IIV-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@UC.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@Z @ 0x18012504C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x180147A00 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014B8B4 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18014BD30 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18014C440 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801DA59C (--$uninitialized_move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_arra.c)
 *     ??$_Move_backward_unchecked@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@PEAUContentEntry@CDrawListCacheSet@@@std@@YAPEAUContentEntry@CDrawListCacheSet@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0PEAU12@@Z @ 0x1801DA954 (--$_Move_backward_unchecked@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@PEAUConte.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1801DA9C0 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802D6C50 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  struct CD3DDevice *(__fastcall *v12)(CD2DResource *__hidden); // rax
  struct CD3DDevice *Device; // rax
  signed __int32 v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  signed __int32 v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  detail::liberal_expansion_policy *v27; // rcx
  signed __int32 v28; // eax
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r10
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rcx
  signed __int32 v43; // eax
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rdi
  void *v55; // rax
  __int64 v56; // r8
  __int64 v57; // rdx
  void *v58; // rbx
  CDrawListCacheSet *v59; // rdx
  CDrawListCacheSet *v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rbx
  _QWORD *v63; // r11
  __int64 v64; // rax
  unsigned int v65; // [rsp+20h] [rbp-E0h]
  __int128 v66; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v67; // [rsp+50h] [rbp-B0h]
  __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+68h] [rbp-98h] BYREF
  __int64 v71; // [rsp+70h] [rbp-90h] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h] BYREF
  __int64 v73; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v75[4]; // [rsp+90h] [rbp-70h] BYREF
  char v76; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v77; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  char v80[72]; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  unsigned int v82; // [rsp+158h] [rbp+58h]

  v82 = a2;
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
    v12 = *(struct CD3DDevice *(__fastcall **)(CD2DResource *__hidden))(*(_QWORD *)a4 + 40LL);
    if ( (char *)v12 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
    {
      Device = (struct CD3DDevice *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(
                                      a4,
                                      a2,
                                      IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice,
                                      CD2DContext::GetDevice);
LABEL_7:
      a2 = v82;
      goto LABEL_8;
    }
    if ( v12 == CD2DResource::GetDevice )
    {
      Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)a4 + 5) + 24LL));
      goto LABEL_7;
    }
    if ( v12 != CD2DContext::GetDevice )
    {
      Device = (struct CD3DDevice *)((__int64 (__fastcall *)(const struct IDeviceTarget *, __int64, _QWORD, struct CD3DDevice *(__fastcall *)(CD2DContext *__hidden)))v12)(
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
        v65);
    goto LABEL_15;
  }
  v68 = 0LL;
  v18 = CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Alloc(
          CD2DResource::GetDevice,
          a2,
          IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice,
          CD2DContext::GetDevice);
  v8 = v18;
  if ( !v18 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u, 0LL);
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v68, v48, v49, v50);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Cu, 0LL);
    return v15;
  }
  *(_DWORD *)(v18 + 8) = 0;
  v22 = 0LL;
  *(_QWORD *)v18 = &CDrawListCache::`vftable';
  if ( g_pComposition )
    v22 = *((_QWORD *)g_pComposition + 111);
  *(_QWORD *)(v18 + 24) = 0LL;
  *(_QWORD *)(v18 + 32) = 0LL;
  *(_QWORD *)(v18 + 16) = v22;
  *(_QWORD *)(v18 + 40) = 2LL;
  *(_QWORD *)(v18 + 72) = 0LL;
  *(_WORD *)(v18 + 84) = 0;
  *(_BYTE *)(v18 + 86) = 0;
  v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 1u);
  if ( (v23 + 1 < 0) ^ __OFADD__(1, v23) | (v23 == -1) )
    goto LABEL_49;
  while ( 1 )
  {
    v69 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v69, v19, v20, v21);
    v68 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v68, v24, v25, v26);
    v15 = 0;
    if ( *(_BYTE *)(v8 + 85) || !*(_QWORD *)(v8 + 24) )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
      v73 = *(_QWORD *)this;
      v74 = 0LL;
      v72 = v8;
      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        (_DWORD)this,
        (unsigned int)&v76,
        (unsigned int)&v73,
        v82,
        v6,
        (__int64)&v72);
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v74);
      goto LABEL_16;
    }
    v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 1u);
    if ( (v28 + 1 < 0) ^ __OFADD__(1, v28) | (v28 == -1) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v65);
    v29 = *((_QWORD *)this + 1);
    v30 = *((_QWORD *)this + 2);
    v31 = *(_QWORD *)this;
    v32 = v29 - *(_QWORD *)this;
    v71 = 0LL;
    v6 = v32 >> 4;
    v70 = v8;
    v67 = v6;
    if ( (v30 - v29) >> 4 )
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
      v65);
  }
  v54 = detail::liberal_expansion_policy::expand(v27, (v30 - v31) >> 4, v6 + 1);
  v55 = operator new[](saturated_mul(v54, 0x10uLL));
  v56 = *((_QWORD *)this + 1);
  v57 = *(_QWORD *)this;
  *(_QWORD *)&v66 = v55;
  v58 = v55;
  *((_QWORD *)&v66 + 1) = v6;
  v77 = v66;
  v78 = 0LL;
  std::uninitialized_move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
    v80,
    v57,
    v56,
    &v77);
  detail::destruct_range<CDrawListCacheSet::ContentEntry>(*(_QWORD *)this, *((_QWORD *)this + 1));
  v59 = *(CDrawListCacheSet **)this;
  v60 = 0LL;
  *(_QWORD *)this = v58;
  if ( v59 != (CDrawListCacheSet *)((char *)this + 24) )
    v60 = v59;
  operator delete(v60);
  v31 = *(_QWORD *)this;
  v29 = *(_QWORD *)this + 16 * v6;
  v61 = *(_QWORD *)this + 16 * v54;
  *((_QWORD *)this + 1) = v29;
  *((_QWORD *)this + 2) = v61;
LABEL_33:
  v33 = (v29 - v31) >> 4;
  v79 = 0LL;
  v34 = v33 - v6;
  v35 = v31 + 16 * v33;
  if ( !v35 )
    goto LABEL_46;
  v79 = 1LL;
  v36 = v34;
  if ( v34 > 1 )
    v36 = 1LL;
  v37 = 16 * v36;
  v38 = v29 - v37;
  if ( v29 != v29 - v37 )
  {
    v62 = 1LL;
    v63 = (_QWORD *)(v35 + 24);
    do
    {
      v29 -= 16LL;
      if ( !v62 )
        goto LABEL_46;
      --v62;
      v63 -= 2;
      if ( v62 )
        goto LABEL_46;
      *((_DWORD *)v63 - 2) = *(_DWORD *)v29;
      *((_DWORD *)v63 - 1) = *(_DWORD *)(v29 + 4);
      v64 = *(_QWORD *)(v29 + 8);
      *(_QWORD *)(v29 + 8) = 0LL;
      *v63 = v64;
    }
    while ( v29 != v38 );
  }
  if ( v34 <= 1 )
    goto LABEL_38;
  if ( v33 && (!v31 || v33 < 0) )
LABEL_46:
    _invalid_parameter_noinfo_noreturn();
  v51 = v31 + 16 * v33;
  v75[1] = v33;
  v75[2] = v33;
  v52 = v31 + 16 * v67;
  v75[0] = v31;
  v53 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(
          v75,
          -((v51 - 16 - v52) >> 4));
  std::_Move_backward_unchecked<std::move_iterator<CDrawListCacheSet::ContentEntry *>,CDrawListCacheSet::ContentEntry *>(
    v52,
    v51 - 16,
    v53);
LABEL_38:
  v39 = v67;
  v40 = v31 + 16 * (v67 + 1);
  if ( v35 < v40 )
    v40 = v35;
  v41 = v31 + 16 * v67;
  if ( v41 != v40 )
  {
    do
    {
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v41 + 8);
      v41 += 16LL;
    }
    while ( v41 != v40 );
    v39 = v67;
  }
  *((_QWORD *)this + 1) += 16LL;
  v42 = 2 * v39;
  *(_DWORD *)(v31 + 8 * v42 + 4) = a3;
  *(_DWORD *)(v31 + 8 * v42) = v82;
  *(_QWORD *)(v31 + 8 * v42 + 8) = v8;
  v43 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 1u);
  if ( (v43 + 1 < 0) ^ __OFADD__(1, v43) | (v43 == -1) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v65);
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v70);
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v71);
LABEL_15:
  v15 = 0;
LABEL_16:
  v16 = *(_QWORD *)this;
  if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4) > 1 )
  {
    v44 = *(_QWORD *)this;
    while ( v16 != *((_QWORD *)this + 1) )
    {
      v45 = *(_QWORD *)(v16 + 8);
      if ( v45 == v8 )
        goto LABEL_56;
      v46 = 0LL;
      if ( g_pComposition )
        v46 = *((_QWORD *)g_pComposition + 111);
      if ( (unsigned __int64)(v46 - *(_QWORD *)(v45 + 16)) <= 0x1E )
      {
LABEL_56:
        v16 += 16LL;
      }
      else
      {
        v47 = (v16 - v44) >> 4;
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
          this,
          v47,
          1LL);
        v44 = *(_QWORD *)this;
        v16 = *(_QWORD *)this + 16 * v47;
      }
    }
  }
  *a5 = (struct CDrawListCache *)v8;
  return v15;
}
