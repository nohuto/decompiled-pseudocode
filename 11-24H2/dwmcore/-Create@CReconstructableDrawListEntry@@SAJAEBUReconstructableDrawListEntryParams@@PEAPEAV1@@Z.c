/*
 * XREFs of ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18016F400
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18016E700 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18004D160 (-InternalRelease@-$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x18016EC60 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     ??0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderingEffect@@$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@V?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@@Z @ 0x18016FEA0 (--0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderin.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z @ 0x180170C08 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x180170C50 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWarpRenderingEffect@@@Z @ 0x180170CB0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWarpRenderingEffect@@@Z.c)
 *     ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x180170D00 (-GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CReconstructableDrawListEntry::Create(
        const struct ReconstructableDrawListEntryParams *a1,
        struct CReconstructableDrawListEntry **a2)
{
  __int64 v4; // rax
  __m128 v5; // xmm6
  int v6; // r14d
  bool v7; // zf
  _QWORD *v8; // rdi
  struct CReconstructableDrawListEntry_UVx0 *v9; // rbx
  unsigned int v10; // r12d
  char v11; // r15
  HANDLE ProcessHeap; // rax
  char *v13; // rax
  struct CReconstructableDrawListEntry_UVx0 *v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  _DWORD *Value; // r15
  int v18; // ecx
  char *v19; // rbx
  HANDLE v20; // rax
  struct CReconstructableDrawListEntry_UVx0 *v21; // rax
  volatile signed __int32 *v22; // rcx
  void (*v23)(void); // rax
  int v24; // et0
  __int64 v25; // rcx
  int v26; // eax
  _OWORD *v27; // rcx
  _QWORD *v28; // rcx
  CCommonRenderingEffect *v29; // rcx
  __int64 (*v30)(void); // rax
  unsigned int UsedSamplersBitmask; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // rax
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // xmm0_4
  __int64 v39; // rcx
  float *v40; // rax
  float v41; // xmm4_4
  float v42; // xmm7_4
  float v43; // xmm11_4
  float v44; // xmm3_4
  float v45; // xmm10_4
  float v46; // xmm5_4
  float v47; // xmm9_4
  float v48; // xmm8_4
  float v49; // xmm1_4
  float v50; // xmm12_4
  float v51; // xmm14_4
  float v52; // xmm13_4
  float v53; // xmm15_4
  float v54; // xmm0_4
  float v55; // xmm2_4
  float v56; // xmm6_4
  float v57; // xmm4_4
  float v58; // xmm0_4
  float v59; // xmm3_4
  float v60; // xmm6_4
  float v61; // xmm2_4
  float v62; // xmm9_4
  float v63; // xmm7_4
  void **v64; // rax
  struct CReconstructableDrawListEntry_UVx0 *v65; // rcx
  __m128 v67; // xmm10
  float v68; // xmm9_4
  __m128 v69; // xmm11
  float v70; // xmm2_4
  __m128 v71; // xmm6
  float v72; // xmm0_4
  __m128 v73; // xmm6
  __m128 v74; // xmm6
  __m128 v75; // xmm6
  CObjectCache *v76; // rax
  CObjectCache *ObjectCache; // rax
  _QWORD *v78; // rax
  void (__fastcall ***v79)(_QWORD); // rdx
  CThreadContext *v80; // rax
  CThreadContext *v81; // rax
  int v82; // [rsp+28h] [rbp-E0h]
  struct CReconstructableDrawListEntry_UVx0 *v83; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v84; // [rsp+48h] [rbp-C0h] BYREF
  float v85; // [rsp+58h] [rbp-B0h]
  float v86; // [rsp+5Ch] [rbp-ACh]
  _QWORD v87[3]; // [rsp+60h] [rbp-A8h]
  _DWORD v88[10]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]
  float v90; // [rsp+188h] [rbp+80h]
  float v91; // [rsp+198h] [rbp+90h]
  float v92; // [rsp+1A0h] [rbp+98h]

  v4 = *((_QWORD *)a1 + 9);
  if ( v4 )
  {
    v67 = (__m128)*(unsigned int *)(v4 + 8);
    v69 = (__m128)*((unsigned int *)a1 + 24);
    v67.m128_f32[0] = (float)((float)(v67.m128_f32[0] * *((float *)a1 + 23))
                            + (float)(*(float *)v4 * *((float *)a1 + 22)))
                    + *(float *)(v4 + 16);
    v68 = (float)((float)(*(float *)(v4 + 12) * *((float *)a1 + 23)) + (float)(*(float *)(v4 + 4) * *((float *)a1 + 22)))
        + *(float *)(v4 + 20);
    v69.m128_f32[0] = (float)((float)(v69.m128_f32[0] * *(float *)v4) + (float)(*((float *)a1 + 25) * *(float *)(v4 + 8)))
                    + *(float *)(v4 + 16);
    v70 = (float)((float)(*((float *)a1 + 24) * *(float *)(v4 + 4)) + (float)(*((float *)a1 + 25) * *(float *)(v4 + 12)))
        + *(float *)(v4 + 20);
    if ( v69.m128_f32[0] <= v67.m128_f32[0] )
      v71 = v69;
    else
      v71 = v67;
    if ( v70 <= v68 )
      v72 = (float)((float)(*((float *)a1 + 24) * *(float *)(v4 + 4))
                  + (float)(*((float *)a1 + 25) * *(float *)(v4 + 12)))
          + *(float *)(v4 + 20);
    else
      v72 = (float)((float)(*(float *)(v4 + 12) * *((float *)a1 + 23))
                  + (float)(*(float *)(v4 + 4) * *((float *)a1 + 22)))
          + *(float *)(v4 + 20);
    if ( v67.m128_f32[0] <= v69.m128_f32[0] )
      v67.m128_i32[0] = v69.m128_i32[0];
    if ( v68 <= v70 )
      v68 = (float)((float)(*((float *)a1 + 24) * *(float *)(v4 + 4))
                  + (float)(*((float *)a1 + 25) * *(float *)(v4 + 12)))
          + *(float *)(v4 + 20);
    v73 = _mm_shuffle_ps(v71, v71, 225);
    v73.m128_f32[0] = v72;
    v74 = _mm_shuffle_ps(v73, v73, 198);
    v74.m128_f32[0] = v67.m128_f32[0];
    v75 = _mm_shuffle_ps(v74, v74, 39);
    v75.m128_f32[0] = v68;
    v5 = _mm_shuffle_ps(v75, v75, 57);
  }
  else
  {
    v5 = *(__m128 *)((char *)a1 + 88);
  }
  v6 = 0;
  v7 = (*((_DWORD *)a1 + 2) & 0x400) == 0;
  v8 = 0LL;
  *(__m128 *)&v87[1] = v5;
  if ( !v7 )
  {
    ObjectCache = CThreadContext::GetObjectCache(a1);
    v78 = CObjectCache::Alloc(ObjectCache, 0x18uLL);
    v8 = v78;
    if ( !v78 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\reconstructabledrawlistentry.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)v78);
    *v8 = &CWarpRenderingEffect::`vftable';
    v8[2] = v79;
    if ( v79 )
      (**v79)(v79);
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 1));
  }
  v9 = 0LL;
  v10 = *((_DWORD *)a1 + 12);
  v11 = *((_BYTE *)a1 + 108);
  v83 = 0LL;
  ProcessHeap = GetProcessHeap();
  v13 = (char *)HeapAlloc(ProcessHeap, 0, 0x58uLL);
  if ( v13 )
  {
    *((_QWORD *)&v84 + 1) = v10;
    *(_QWORD *)&v84 = 0LL;
    v9 = (struct CReconstructableDrawListEntry_UVx0 *)v13;
    *(_OWORD *)(v13 + 8) = v84;
    *((_QWORD *)v13 + 3) = 0LL;
    *((_QWORD *)v13 + 4) = 0LL;
    *((_QWORD *)v13 + 5) = 0LL;
    *((_QWORD *)v13 + 6) = 0LL;
    *(_QWORD *)v13 = &CDrawListPrimitive0::`vftable';
    v13[80] = 0;
    *(__m128 *)(v13 + 56) = v5;
    v13[81] = v11;
    *((_DWORD *)v13 + 18) = 1065353216;
    *((_DWORD *)v13 + 19) = 1065353216;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x6Cu, 0LL);
  }
  v14 = v83;
  v83 = v9;
  if ( v14 )
    (**(void (__fastcall ***)(struct CReconstructableDrawListEntry_UVx0 *, __int64))v14)(v14, 1LL);
  if ( v6 >= 0 )
  {
    v15 = *((_QWORD *)a1 + 7);
    v16 = *((_QWORD *)a1 + 8);
    if ( v15 >= *((_QWORD *)a1 + 6) )
      v15 = *((_QWORD *)a1 + 6);
    if ( v15 != -1LL )
    {
      if ( v16 )
      {
        if ( v15 )
        {
          if ( v15 <= 2 )
          {
            Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
            if ( !Value )
            {
              v80 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
              if ( !v80 || (v81 = CThreadContext::CThreadContext(v80), (Value = v81) == 0LL) )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
                ModuleFailFastForHRESULT(-2147024882, retaddr);
              }
              TlsSetValue(CThreadContext::s_dwTlsIndex, v81);
            }
            v18 = Value[53];
            v19 = 0LL;
            if ( v18 )
            {
              v19 = (char *)*((_QWORD *)Value + 27);
              *((_QWORD *)Value + 27) = *(_QWORD *)v19;
              Value[53] = v18 - 1;
            }
            if ( v19 || (v20 = GetProcessHeap(), (v19 = (char *)HeapAlloc(v20, 0, 0xD8uLL)) != 0LL) )
            {
              *((_DWORD *)v19 + 2) = 0;
              *(_QWORD *)v19 = &CDrawListEntry::`vftable';
              v21 = v83;
              v83 = 0LL;
              *((_QWORD *)v19 + 2) = v21;
              v22 = *(volatile signed __int32 **)a1;
              *((_QWORD *)v19 + 3) = *(_QWORD *)a1;
              if ( v22 )
              {
                v23 = **(void (***)(void))v22;
                if ( (char *)v23 == (char *)CMILRefCountImpl::AddReference )
                {
                  v24 = _InterlockedAdd(v22, 1u);
                  if ( (v24 < 0) ^ __OFSUB__(v23, CMILRefCountImpl::AddReference) | (v24 == 0) )
                    wil::details::in1diag3::Log_Hr(
                      retaddr,
                      (void *)0x18,
                      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                      (const char *)0x8007029CLL,
                      v82);
                }
                else
                {
                  v23();
                }
              }
              v25 = *((_QWORD *)a1 + 2);
              *((_QWORD *)v19 + 4) = v25;
              if ( v25 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
              *((_QWORD *)v19 + 5) = *((_QWORD *)a1 + 3);
              *((_DWORD *)v19 + 12) = 1065353216;
              *((_DWORD *)v19 + 13) = 1065353216;
              *((_DWORD *)v19 + 14) = 1065353216;
              *((_DWORD *)v19 + 15) = 1065353216;
              v26 = *((_DWORD *)a1 + 2);
              *((_DWORD *)v19 + 16) = v26;
              v27 = (_OWORD *)*((_QWORD *)a1 + 4);
              if ( v27 )
                *((_OWORD *)v19 + 3) = *v27;
              v28 = (_QWORD *)*((_QWORD *)a1 + 5);
              if ( v28 )
              {
                *(_QWORD *)(v19 + 68) = *v28;
                *((_DWORD *)v19 + 16) = v26 | 0x100;
              }
              *(_QWORD *)v19 = &CReconstructableDrawListEntry::`vftable';
              *((_QWORD *)v19 + 10) = v8;
              if ( v8 )
                CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 1));
              v29 = (CCommonRenderingEffect *)*((_QWORD *)v19 + 3);
              *((_QWORD *)v19 + 11) = v15;
              *((_DWORD *)v19 + 24) = *((_DWORD *)a1 + 26);
              v19[100] = *((_BYTE *)a1 + 109);
              v19[101] = *((_BYTE *)a1 + 110);
              v30 = *(__int64 (**)(void))(*(_QWORD *)v29 + 24LL);
              if ( (char *)v30 == (char *)CCommonRenderingEffect::GetUsedSamplersBitmask )
              {
                UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(v29);
              }
              else if ( (char *)v30 == (char *)CBrushRenderingEffect::GetUsedSamplersBitmask )
              {
                UsedSamplersBitmask = CBrushRenderingEffect::GetUsedSamplersBitmask(v29);
              }
              else
              {
                UsedSamplersBitmask = v30();
              }
              v33 = UsedSamplersBitmask;
              if ( UsedSamplersBitmask )
              {
                v34 = (_DWORD *)*((_QWORD *)a1 + 10);
                if ( v34 )
                {
                  v35 = v34[1];
                  v88[0] = *v34;
                  v36 = v34[3];
                  v88[1] = v35;
                  v88[3] = v34[2];
                  v37 = v34[4];
                  v88[4] = v36;
                  v38 = v34[5];
                  v88[6] = v37;
                  v88[7] = v38;
                  v88[2] = 0;
                  v88[5] = 0;
                  v88[8] = 1065353216;
                }
                LODWORD(v32) = 0;
                do
                {
                  if ( _bittest((const int *)&v33, v32) )
                  {
                    if ( (unsigned int)v32 >= v15 )
                      goto LABEL_72;
                    v39 = 56LL * (unsigned int)v32;
                    v40 = (float *)v88;
                    if ( !*((_QWORD *)a1 + 10) )
                      v40 = 0LL;
                    if ( v40 )
                    {
                      v41 = v40[1];
                      v42 = v40[4];
                      v43 = *(float *)(v39 + v16 + 12);
                      v44 = *v40;
                      v45 = *(float *)(v39 + v16);
                      v46 = v40[2];
                      v47 = v40[3];
                      v48 = v40[5];
                      v49 = v40[6];
                      v50 = *(float *)(v39 + v16 + 24);
                      v51 = *(float *)(v39 + v16 + 16);
                      v52 = *(float *)(v39 + v16 + 4);
                      v53 = *(float *)(v39 + v16 + 28);
                      v90 = *(float *)(v39 + v16 + 20);
                      v91 = *(float *)(v39 + v16 + 8);
                      v92 = *(float *)(v39 + v16 + 32);
                      v86 = v40[7];
                      v85 = v49;
                      *(float *)v87 = v40[8];
                      v54 = v41;
                      v55 = (float)((float)(v44 * v45) + (float)(v41 * v43)) + (float)(v46 * v50);
                      v56 = (float)(v44 * v91) + (float)(v41 * v90);
                      v57 = v86;
                      *(float *)&v19[v39 + 104] = v55;
                      *(float *)&v19[v39 + 108] = (float)((float)(v44 * v52) + (float)(v54 * v51)) + (float)(v46 * v53);
                      v58 = v42;
                      *(float *)&v19[v39 + 112] = v56 + (float)(v46 * v92);
                      v59 = v47;
                      v60 = *(float *)v87;
                      v61 = (float)((float)(v47 * v45) + (float)(v42 * v43)) + (float)(v48 * v50);
                      v62 = (float)(v47 * v91) + (float)(v42 * v90);
                      v63 = v85;
                      *(float *)&v19[v39 + 116] = v61;
                      *(float *)&v19[v39 + 120] = (float)((float)(v59 * v52) + (float)(v58 * v51)) + (float)(v48 * v53);
                      *(float *)&v19[v39 + 124] = v62 + (float)(v48 * v92);
                      *(float *)&v19[v39 + 128] = (float)((float)(v63 * v45) + (float)(v57 * v43)) + (float)(v60 * v50);
                      *(float *)&v19[v39 + 132] = (float)((float)(v63 * v52) + (float)(v57 * v51)) + (float)(v60 * v53);
                      *(float *)&v19[v39 + 136] = (float)((float)(v63 * v91) + (float)(v57 * v90)) + (float)(v60 * v92);
                    }
                    else
                    {
                      *(_OWORD *)&v19[v39 + 104] = *(_OWORD *)(v39 + v16);
                      *(_OWORD *)&v19[v39 + 120] = *(_OWORD *)(v39 + v16 + 16);
                      *(_DWORD *)&v19[v39 + 136] = *(_DWORD *)(v39 + v16 + 32);
                    }
                    v19[v39 + 156] = *(_BYTE *)(v39 + v16 + 52);
                    if ( *(_BYTE *)(v39 + v16 + 52) )
                      *(_OWORD *)&v19[v39 + 140] = *(_OWORD *)(v39 + v16 + 36);
                  }
                  v32 = (unsigned int)(v32 + 1);
                }
                while ( (unsigned int)v32 < v15 );
              }
              v64 = &CReconstructableDrawListEntry_UVx2::`vftable';
              goto LABEL_48;
            }
            goto LABEL_53;
          }
          v19 = (char *)MIDL_user_allocate(56 * v15 + 104);
          if ( v19 )
          {
            *(_QWORD *)&v84 = v15;
            *((_QWORD *)&v84 + 1) = v16;
            CReconstructableDrawListEntry::CReconstructableDrawListEntry(
              (_DWORD)v19,
              (_DWORD)a1,
              (_DWORD)v8,
              (unsigned int)&v83,
              (__int64)&v84);
            v64 = &CReconstructableDrawListEntry_UVxN::`vftable';
            goto LABEL_48;
          }
          goto LABEL_53;
        }
LABEL_74:
        v76 = CThreadContext::GetObjectCache(v14);
        v19 = (char *)CObjectCache::Alloc(v76, 0x68uLL);
        if ( v19 )
        {
          v84 = 0uLL;
          CReconstructableDrawListEntry::CReconstructableDrawListEntry(
            (_DWORD)v19,
            (_DWORD)a1,
            (_DWORD)v8,
            (unsigned int)&v83,
            (__int64)&v84);
          v64 = &CReconstructableDrawListEntry_UVx0::`vftable';
LABEL_48:
          *(_QWORD *)v19 = v64;
          ((void (__fastcall *)(char *, __int64, __int64))*v64)(v19, v32, v33);
          v65 = v83;
          *a2 = (struct CReconstructableDrawListEntry *)v19;
          if ( v65 )
            (**(void (__fastcall ***)(struct CReconstructableDrawListEntry_UVx0 *, __int64))v65)(v65, 1LL);
          if ( v8 )
            CMILRefCountBaseT<CRenderingEffect,CMilObjectDeleter>::InternalRelease((CBrushRenderingEffect *)v8);
          return 0LL;
        }
LABEL_53:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8C,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\reconstructabledrawlistentry.cpp",
          (const char *)0x8007000ELL);
        if ( v83 )
          (**(void (__fastcall ***)(struct CReconstructableDrawListEntry_UVx0 *, __int64))v83)(v83, 1LL);
        if ( v8 )
          CMILRefCountBaseT<CRenderingEffect,CMilObjectDeleter>::InternalRelease((CBrushRenderingEffect *)v8);
        return 2147942414LL;
      }
      if ( !v15 )
        goto LABEL_74;
    }
LABEL_72:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\reconstructabledrawlistentry.cpp",
    (const char *)(unsigned int)v6);
  if ( v83 )
    (**(void (__fastcall ***)(struct CReconstructableDrawListEntry_UVx0 *, __int64))v83)(v83, 1LL);
  if ( v8 )
    CMILRefCountBaseT<CRenderingEffect,CMilObjectDeleter>::InternalRelease((CBrushRenderingEffect *)v8);
  return (unsigned int)v6;
}
