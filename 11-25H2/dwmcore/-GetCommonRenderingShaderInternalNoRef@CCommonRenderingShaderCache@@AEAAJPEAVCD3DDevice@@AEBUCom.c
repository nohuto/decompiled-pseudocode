/*
 * XREFs of ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18014ABE0
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801462F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1801B0AF0 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18006CBB0 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18006D2F8 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18006D498 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x18014A890 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18014C070 (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z @ 0x18014C0DC (-Free@-$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z @ 0x18014C1CC (-Free@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ??1CDrawListEntry@@MEAA@XZ @ 0x18014C2BC (--1CDrawListEntry@@MEAA@XZ.c)
 *     ??1CDrawListCache@@EEAA@XZ @ 0x18014C318 (--1CDrawListCache@@EEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x18014C350 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x1801B18D0 (-AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x1801D7B30 (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x180228BB0 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingShaderCache::GetCommonRenderingShaderInternalNoRef(
        CCommonRenderingShaderCache *this,
        struct CD3DDevice *a2,
        const struct CommonRenderingShaderDesc *a3,
        unsigned int *a4,
        struct ID3D10BlobVtbl **a5)
{
  int v8; // edi
  __int128 v9; // xmm0
  bool v10; // cc
  unsigned __int8 v11; // r12
  bool v12; // al
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // rax
  __int64 i; // rcx
  __int64 v19; // r8
  ID3DBlob *v20; // rcx
  ID3DBlob *v21; // rdx
  int v22; // eax
  int v23; // ecx
  _QWORD *p_lpVtbl; // r13
  ULONG (__stdcall *Release)(ID3D10Blob *); // rax
  SIZE_T v26; // rbx
  const void *v27; // r13
  HRESULT v28; // eax
  void *v29; // rax
  HANDLE ProcessHeap; // rax
  unsigned int v31; // esi
  __int64 v32; // rdx
  int v33; // edi
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  ID3DBlob *v37; // rbx
  __int64 v39; // rdi
  unsigned __int64 v40; // rbx
  const void *v41; // rax
  int v42; // eax
  __int64 v43; // r8
  char *v44; // rdx
  char *v45; // rcx
  struct ID3D10BlobVtbl *lpVtbl; // r8
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  ID3DBlob *v50; // rax
  unsigned int v51; // ebx
  int v52; // eax
  _OWORD *ShaderLinkingBody; // rax
  int v54; // eax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r8
  SIZE_T size_of; // rax
  struct ID3D10BlobVtbl *v58; // rdi
  struct ID3D10BlobVtbl *v59; // r8
  struct ID3D10BlobVtbl *v60; // rcx
  struct ID3D10BlobVtbl *v61; // rax
  struct ID3D10BlobVtbl *v62; // rdx
  size_t v63; // r8
  struct ID3D10BlobVtbl *v64; // rcx
  __int64 v65; // rax
  int v66; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v67; // [rsp+30h] [rbp-D0h]
  ID3DBlob *ppBlob; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+40h] [rbp-C0h]
  __int128 v70; // [rsp+50h] [rbp-B0h]
  __int128 v71; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v72[3]; // [rsp+70h] [rbp-90h] BYREF
  char v73[48]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v74; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v75; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v76; // [rsp+F0h] [rbp-10h]
  __int128 v77; // [rsp+100h] [rbp+0h] BYREF
  __int128 v78; // [rsp+110h] [rbp+10h]
  __int128 v79; // [rsp+120h] [rbp+20h] BYREF
  __int128 v80; // [rsp+130h] [rbp+30h]
  __int128 v81; // [rsp+140h] [rbp+40h] BYREF
  __int128 v82; // [rsp+150h] [rbp+50h]
  int v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+164h] [rbp+64h]
  int v85; // [rsp+16Ch] [rbp+6Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  if ( ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v76 + 1) = 0LL;
    *(_QWORD *)&v77 = 0LL;
  }
  else
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc((ShaderLinkingSamplerDesc *)&v75);
  }
  if ( ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v78 + 1) = 0LL;
    *(_QWORD *)&v79 = 0LL;
  }
  else
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc((ShaderLinkingSamplerDesc *)&v77);
  }
  if ( ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v80 + 1) = 0LL;
    *(_QWORD *)&v81 = 0LL;
  }
  else
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc((ShaderLinkingSamplerDesc *)&v79);
  }
  if ( ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v82 + 1) = 0LL;
    LODWORD(v84) = 0;
  }
  else
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc((ShaderLinkingSamplerDesc *)&v81);
  }
  v8 = *(_DWORD *)a3;
  v9 = *(_OWORD *)((char *)a3 + 8);
  v84 = 0LL;
  v85 = 0;
  v83 = -1;
  BYTE8(v76) = (v8 & 4) != 0;
  v75 = v9;
  *(_DWORD *)((char *)&v84 + 1) = (v8 & 0x10) != 0;
  v10 = *((_DWORD *)a2 + 154) < 37632;
  LOBYTE(v84) = (v8 & 8) != 0;
  WORD2(v84) = *((_WORD *)a3 + 14);
  if ( v10 )
  {
    v13 = v8 & 3;
    v14 = v13 | 4;
    v11 = 0;
  }
  else
  {
    v11 = 1;
    v83 = *((_DWORD *)a3 + 6);
    v12 = (v8 & 0x20) != 0;
    v13 = v8 & 3;
    BYTE5(v76) = v12;
    v14 = v13;
  }
  LODWORD(v70) = v14;
  ShaderLinkingConfig::GetLookupKey((__int64)&v75, &v74, v14);
  v15 = dword_180405230;
  v16 = 0;
  v17 = g_commonRenderingShaderCache;
  for ( i = 0LL; ; ++i )
  {
    v67 = v11;
    v19 = v11;
    if ( i >= dword_180405230 )
      goto LABEL_34;
    if ( *(_QWORD *)v17 == (_QWORD)v74 && *(_DWORD *)(v17 + 8) == DWORD2(v74) )
      break;
    ++v16;
    v17 += 16LL;
  }
  if ( v16 == -1 )
  {
LABEL_34:
    p_lpVtbl = 0LL;
    *(_QWORD *)&v74 = 0LL;
  }
  else
  {
    v20 = *(ID3DBlob **)(qword_180405228 + 8LL * v16);
    ppBlob = v20;
    if ( v20 && _InterlockedAdd((volatile signed __int32 *)&v20[1], 1u) <= 0 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v66);
      v20 = ppBlob;
      v19 = v11;
    }
    v21 = v20;
    v11 = v19;
    if ( v20 )
    {
      v22 = _InterlockedDecrement((volatile signed __int32 *)&v20[1]);
      LODWORD(v69) = v22;
      if ( v22 < -1 )
      {
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v66);
        v19 = v67;
        v20 = ppBlob;
        v22 = v69;
      }
      v21 = v20;
      v11 = v19;
      if ( !v22 )
      {
        if ( _InterlockedAdd((volatile signed __int32 *)&v20[1], 1u) <= 0 )
        {
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v66);
          v20 = ppBlob;
        }
        ((void (__fastcall *)(ID3DBlob *, ID3DBlob *, __int64, __int64))v20->lpVtbl->GetBufferPointer)(
          v20,
          v21,
          v19,
          v15);
        v23 = _InterlockedDecrement((volatile signed __int32 *)&ppBlob[1]);
        LODWORD(v69) = v23;
        if ( v23 < -1 )
        {
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v66);
          v23 = v69;
        }
        v11 = v67;
        v21 = ppBlob;
        if ( !v23 )
        {
          p_lpVtbl = &ppBlob->lpVtbl;
          if ( _InterlockedDecrement((volatile signed __int32 *)&ppBlob[1]) < -1 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x26,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v66);
          Release = ppBlob->lpVtbl->Release;
          if ( (char *)Release == (char *)CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
          {
            CReconstructableDrawListEntry::~CReconstructableDrawListEntry((CReconstructableDrawListEntry *)ppBlob);
            CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free(ppBlob);
          }
          else if ( (char *)Release == (char *)CDrawListEntry::`scalar deleting destructor' )
          {
            CDrawListEntry::~CDrawListEntry((CDrawListEntry *)ppBlob);
            CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free(ppBlob);
          }
          else if ( (char *)Release == (char *)CDrawListCache::`scalar deleting destructor' )
          {
            CDrawListCache::~CDrawListCache((CDrawListCache *)ppBlob);
            CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free(ppBlob);
          }
          else
          {
            ((void (__fastcall *)(ID3DBlob *, __int64))Release)(ppBlob, 1LL);
          }
          goto LABEL_46;
        }
      }
    }
    *(_QWORD *)&v74 = v21;
    p_lpVtbl = &v21->lpVtbl;
    if ( v21 )
    {
LABEL_46:
      v32 = p_lpVtbl[6];
      v33 = 0;
      v34 = 0LL;
      v35 = p_lpVtbl[7] - v32;
      ppBlob = 0LL;
      v36 = v35 >> 3;
      while ( 1 )
      {
        if ( (unsigned int)v34 >= v36 )
          goto LABEL_57;
        v37 = *(ID3DBlob **)(v32 + 8 * v34);
        if ( a2 == (struct CD3DDevice *)v37[5].lpVtbl[2].QueryInterface )
          break;
        v34 = (unsigned int)(v34 + 1);
      }
      ppBlob = *(ID3DBlob **)(v32 + 8 * v34);
      if ( !v37 )
      {
LABEL_57:
        v39 = p_lpVtbl[5];
        *(_QWORD *)&v74 = 0LL;
        v40 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + 16) + 32LL))(*(_QWORD *)(v39 + 16));
        v41 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + 16) + 24LL))(*(_QWORD *)(v39 + 16));
        v42 = CD3DPixelShader::Create(a2, v41, v40, (struct CD3DPixelShader **)&v74);
        v33 = v42;
        v31 = v42;
        if ( v42 >= 0 )
        {
          v37 = (ID3DBlob *)v74;
          v44 = *(char **)(v74 + 56);
          v45 = *(char **)(v74 + 64);
          *(_QWORD *)&v74 = v44;
          if ( v44 == v45 )
          {
            lpVtbl = v37[6].lpVtbl;
            v47 = v44 - (char *)lpVtbl;
            v48 = 0x1FFFFFFFFFFFFFFFLL;
            v49 = v47 >> 3;
            ppBlob = (ID3DBlob *)v49;
            *(_QWORD *)&v70 = 0x1FFFFFFFFFFFFFFFLL;
            if ( v49 == 0x1FFFFFFFFFFFFFFFLL )
              std::_Xlength_error("vector too long");
            v55 = (v45 - (char *)lpVtbl) >> 3;
            v69 = v49 + 1;
            v56 = v55 >> 1;
            if ( v55 <= 0x1FFFFFFFFFFFFFFFLL - (v55 >> 1) )
            {
              v48 = v55 + v56;
              if ( v55 + v56 < v49 + 1 )
                v48 = v49 + 1;
              *(_QWORD *)&v70 = v48;
            }
            size_of = std::_Get_size_of_n<8>(v48);
            v58 = (struct ID3D10BlobVtbl *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
            v59 = (struct ID3D10BlobVtbl *)v74;
            *((_QWORD *)&v58->QueryInterface + (_QWORD)ppBlob) = p_lpVtbl + 4;
            v60 = v58;
            v61 = v37[7].lpVtbl;
            v62 = v37[6].lpVtbl;
            if ( v59 == v61 )
            {
              v63 = (char *)v61 - (char *)v62;
            }
            else
            {
              memmove_0(v58, v62, (char *)v59 - (char *)v62);
              v63 = (size_t)v37[7].lpVtbl - v74;
              v62 = (struct ID3D10BlobVtbl *)v74;
              v60 = (struct ID3D10BlobVtbl *)((char *)v58 + 8 * ((_QWORD)&ppBlob->lpVtbl + 1));
            }
            memmove_0(v60, v62, v63);
            v64 = v37[6].lpVtbl;
            if ( v64 )
              std::_Deallocate<16,0>(v64, ((char *)v37[8].lpVtbl - (char *)v64) & 0xFFFFFFFFFFFFFFF8uLL);
            v65 = v69;
            v37[6].lpVtbl = v58;
            v37[7].lpVtbl = (struct ID3D10BlobVtbl *)((char *)v58 + 8 * v65);
            v37[8].lpVtbl = (struct ID3D10BlobVtbl *)((char *)v58 + 8 * v70);
          }
          else
          {
            *(_QWORD *)v44 = p_lpVtbl + 4;
            v37[7].lpVtbl = (struct ID3D10BlobVtbl *)((char *)v37[7].lpVtbl + 8);
          }
          *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                       p_lpVtbl + 6,
                       (__int64)(p_lpVtbl[7] - p_lpVtbl[6]) >> 3,
                       v43) = v37;
          goto LABEL_51;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x52u, 0LL);
        if ( (_QWORD)v74 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v74 + 16LL))(v74);
LABEL_63:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x11u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x65u, 0LL);
          return v31;
        }
        v37 = ppBlob;
      }
      v31 = v33;
      if ( v33 >= 0 )
      {
LABEL_51:
        *a4 = *((_DWORD *)p_lpVtbl + 6);
        *a5 = v37[15].lpVtbl;
        return v31;
      }
      goto LABEL_63;
    }
  }
  if ( *((_DWORD *)a3 + 4) > 1u || *((_DWORD *)a3 + 6) != -1 || *((_BYTE *)a3 + 29) )
    goto LABEL_87;
  switch ( *(_DWORD *)a3 )
  {
    case 5:
      v26 = 856LL;
      v27 = &unk_180337BB0;
      break;
    case 1:
      v26 = 800LL;
      v27 = &unk_1803AA130;
      break;
    case 2:
      v26 = 824LL;
      v27 = &unk_180337FA0;
      break;
    default:
LABEL_87:
      v51 = v70;
      goto LABEL_70;
  }
  ppBlob = 0LL;
  v28 = D3DCreateBlob(v26, &ppBlob);
  LODWORD(v69) = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x47u, 0LL);
    if ( ppBlob )
      ((void (__fastcall *)(ID3DBlob *))ppBlob->lpVtbl->Release)(ppBlob);
    return (unsigned int)v69;
  }
  v29 = (void *)((__int64 (__fastcall *)(ID3DBlob *))ppBlob->lpVtbl->GetBufferPointer)(ppBlob);
  memcpy_0(v29, v27, v26);
  ProcessHeap = GetProcessHeap();
  p_lpVtbl = HeapAlloc(ProcessHeap, 0, 0x58uLL);
  if ( p_lpVtbl )
  {
    v50 = ppBlob;
    *((_DWORD *)p_lpVtbl + 2) = 0;
    *p_lpVtbl = &CLinkedShader::`vftable';
    p_lpVtbl[2] = v50;
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(p_lpVtbl + 2);
    *((_DWORD *)p_lpVtbl + 6) = 0;
    p_lpVtbl[4] = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`vftable';
    p_lpVtbl[5] = p_lpVtbl;
    p_lpVtbl[6] = p_lpVtbl + 9;
    p_lpVtbl[7] = p_lpVtbl + 9;
    p_lpVtbl[8] = p_lpVtbl + 11;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(p_lpVtbl + 1));
    v51 = v70;
    ShaderLinkingConfig::GetLookupKey((__int64)&v75, &v71, v70);
    v52 = CShaderCache::AddLinkedShader(&g_commonRenderingShaderCache, &v71, p_lpVtbl);
    LODWORD(v69) = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x50u, 0LL);
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CDrawListCache *)p_lpVtbl);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppBlob);
      return (unsigned int)v69;
    }
    *(_QWORD *)&v74 = p_lpVtbl;
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CDrawListCache *)p_lpVtbl);
    if ( ppBlob )
      ((void (__fastcall *)(ID3DBlob *))ppBlob->lpVtbl->Release)(ppBlob);
LABEL_70:
    if ( p_lpVtbl )
      goto LABEL_46;
    ShaderLinkingBody = (_OWORD *)CommonRenderingShaderBody::GetShaderLinkingBody(v73, v13, v11);
    v70 = 0uLL;
    v72[0] = *ShaderLinkingBody;
    v72[1] = ShaderLinkingBody[1];
    v72[2] = ShaderLinkingBody[2];
    v71 = 0uLL;
    v54 = CShaderCache::CreateLinkedShader(
            (const void **)&g_commonRenderingShaderCache,
            v51,
            (__int64)&v75,
            (int)v72,
            &v71,
            &v74);
    LODWORD(v69) = v54;
    if ( v54 >= 0 )
    {
      p_lpVtbl = (_QWORD *)v74;
      goto LABEL_46;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v54, 0x61u, 0LL);
    return (unsigned int)v69;
  }
  v31 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x4Du, 0LL);
  if ( ppBlob )
    ((void (__fastcall *)(ID3DBlob *))ppBlob->lpVtbl->Release)(ppBlob);
  return v31;
}
