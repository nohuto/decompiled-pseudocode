/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800E81B0
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800149A0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E7AF0 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x1801EA5CC (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800A9050 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@Z @ 0x180114FB8 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdex.c)
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x1801FC3E0 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x18026FF24 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  int v1; // eax
  char *v2; // rbx
  __m128i v4; // xmm6
  __int64 v5; // rdi
  unsigned int v6; // r14d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __m128i v10; // xmm1
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v19; // eax
  __m128i v20; // xmm0
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // r10
  __int64 v28; // r8
  signed __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  signed __int64 v31; // r9
  __int64 v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int128 v39; // xmm0
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  __int64 v43; // rax
  int v44; // eax
  __m128 v45; // xmm1
  float v46; // xmm5_4
  float v47; // xmm6_4
  float v48; // xmm8_4
  float v49; // xmm6_4
  float v50; // xmm7_4
  float v51; // xmm1_4
  float v52; // xmm6_4
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // rsi
  int v58; // eax
  __int64 v59; // rcx
  void (__fastcall *v60)(__int64, int *); // rax
  __int128 v61; // [rsp+30h] [rbp-68h] BYREF
  signed __int64 v62; // [rsp+40h] [rbp-58h]
  int v63; // [rsp+A0h] [rbp+8h] BYREF
  int v64; // [rsp+A4h] [rbp+Ch]

  v1 = *((_DWORD *)this + 64);
  v2 = (char *)this + 248;
  v4 = 0LL;
  v5 = 0LL;
  if ( v1 )
  {
    v6 = 0;
    v4 = *(__m128i *)(*(_QWORD *)v2 + 16LL * (unsigned int)(v1 - 1));
  }
  else
  {
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x1297u, 0LL);
  }
  v7 = _mm_cvtsi128_si32(v4);
  if ( v7 == 9 )
  {
    v10 = 0LL;
    v62 = 0LL;
    v11 = *((_DWORD *)v2 + 2);
    if ( v11 )
      *((_DWORD *)v2 + 2) = v11 - 1;
    v12 = *((_DWORD *)this + 178);
    if ( v12 )
    {
      v13 = v12 - 1;
      *((_DWORD *)this + 178) = v13;
      v14 = 3LL * v13;
      v15 = *((_QWORD *)this + 88);
      v10 = *(__m128i *)(v15 + 8 * v14);
      v62 = *(_QWORD *)(v15 + 8 * v14 + 16);
    }
    v16 = v62;
    *((_DWORD *)this + 56) = _mm_cvtsi128_si32(v10);
    *((_DWORD *)this + 59) = v16;
    v17 = HIDWORD(v62);
    *((_DWORD *)this + 57) = _mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
    *((_DWORD *)this + 58) = _mm_cvtsi128_si32(_mm_srli_si128(v10, 12));
    *((_DWORD *)this + 60) = v17;
  }
  else
  {
    if ( v7 != 5 )
    {
      switch ( v7 )
      {
        case 1:
          v8 = *((_DWORD *)this + 64);
          if ( v8 )
            *((_DWORD *)this + 64) = v8 - 1;
          v9 = *((_DWORD *)this + 776);
          if ( v9 )
            *((_DWORD *)this + 776) = v9 - 1;
          --*(_QWORD *)(*((_QWORD *)this + 92) - 184LL);
          *((_BYTE *)this + 8049) = 1;
          return v6;
        case 2:
          CDrawingContext::PopCpuClip((CDrawingContext *)((char *)this - 16));
          return v6;
        case 3:
          v34 = *((_DWORD *)this + 64);
          if ( v34 )
            *((_DWORD *)this + 64) = v34 - 1;
          v35 = *((_DWORD *)this + 782);
          if ( v35 )
            *((_DWORD *)this + 782) = v35 - 1;
          v36 = *((_QWORD *)this + 92);
          v61 = 0LL;
          --*(_QWORD *)(v36 - 168);
          v37 = *((_QWORD *)this + 92);
          if ( v37 == *((_QWORD *)this + 91) )
          {
            LODWORD(v39) = _xmm;
            LODWORD(v40) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
            LODWORD(v41) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
            LODWORD(v42) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
          }
          else
          {
            if ( *(_QWORD *)(v37 - 184) )
            {
              v38 = *((_DWORD *)this + 776);
              if ( v38 )
                v39 = *(_OWORD *)(*((_QWORD *)this + 387) + 16LL * (unsigned int)(v38 - 1));
              else
                v39 = _xmm;
              v61 = v39;
              v40 = *((float *)&v39 + 3);
              v41 = *((float *)&v39 + 2);
              v42 = *((float *)&v39 + 1);
            }
            else
            {
              v59 = *(_QWORD *)(v37 - 192);
              v60 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v59 + 88LL);
              if ( (char *)v60 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
                IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v59, &v63);
              else
                v60(v59, &v63);
              LODWORD(v39) = 0;
              v42 = 0.0;
              v41 = (float)v63;
              v40 = (float)v64;
            }
            v43 = *((_QWORD *)this + 92);
            if ( v43 != *((_QWORD *)this + 91) && *(_QWORD *)(v43 - 168) )
            {
              v44 = *((_DWORD *)this + 782);
              if ( v44 )
                v45 = *(__m128 *)(*((_QWORD *)this + 390) + 16LL * (unsigned int)(v44 - 1));
              else
                v45 = (__m128)_xmm;
              if ( v45.m128_f32[0] > *(float *)&v39 )
                LODWORD(v39) = v45.m128_i32[0];
              v46 = v42;
              v47 = _mm_shuffle_ps(v45, v45, 85).m128_f32[0];
              if ( v47 > v42 )
              {
                v42 = v47;
                v46 = v47;
              }
              v48 = v46;
              v49 = _mm_shuffle_ps(v45, v45, 170).m128_f32[0];
              v50 = v41;
              if ( v41 > v49 )
              {
                v41 = v49;
                v50 = v49;
              }
              v51 = _mm_shuffle_ps(v45, v45, 255).m128_f32[0];
              v52 = v40;
              if ( v40 > v51 )
              {
                v40 = v51;
                v52 = v51;
                v48 = v46;
              }
              if ( v50 <= *(float *)&v39 || v52 <= v48 )
              {
                v40 = 0.0;
                v41 = 0.0;
                v42 = 0.0;
                LODWORD(v39) = 0;
              }
            }
          }
          if ( v41 > *(float *)&v39
            && v40 > v42
            && (*(float *)&v39 < *((float *)this + 52)
             || v42 < *((float *)this + 53)
             || *((float *)this + 54) < v41
             || *((float *)this + 55) < v40) )
          {
            *((_BYTE *)this + 8049) = 1;
          }
          return v6;
        case 4:
          v26 = *((_DWORD *)this + 64);
          if ( v26 )
            *((_DWORD *)this + 64) = v26 - 1;
          v27 = 0xAAAAAAAAAAAAAAABuLL;
          v28 = *((_QWORD *)this + 91);
          v29 = 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 92) - v28 - 192) >> 6);
          v30 = 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 92) - v28) >> 6);
          v31 = v29 + 1;
          if ( v29 + 1 > v30 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
          }
          else
          {
            v5 = v28 + ((*((_QWORD *)this + 92) - v28) >> 6 << 6);
            if ( v31 == v30 )
              goto LABEL_33;
            if ( !v29 )
              goto LABEL_79;
            if ( !v28 || v29 < 0 )
LABEL_82:
              _invalid_parameter_noinfo_noreturn();
          }
          if ( v30 < v29 )
            goto LABEL_82;
LABEL_79:
          *((_QWORD *)&v61 + 1) = v30;
          v62 = v29;
          v56 = v28 + 192 * v31;
          *(_QWORD *)&v61 = v28;
          v57 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *> &,__int64>(
                  &v61,
                  v27 * ((v5 - v56) >> 6))
              - v56;
          while ( v56 != v5 )
          {
            CScopedClipStack::ClippingScopeState::operator=(v56 + v57, v56);
            v56 += 192LL;
          }
LABEL_33:
          v32 = v5 - 192;
          do
          {
            v33 = *(_QWORD *)(v32 + 176);
            if ( v33 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
            v32 += 192LL;
          }
          while ( v32 != v5 );
          *((_QWORD *)this + 92) -= 192LL;
          return v6;
        case 6:
        case 7:
          v55 = CDrawingContext::PopLayer((CDrawingContext *)((char *)this - 16));
          v6 = v55;
          if ( v55 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v55, 0x12ABu, 0LL);
          return v6;
        case 8:
          v53 = *((_DWORD *)this + 64);
          if ( v53 )
            *((_DWORD *)this + 64) = v53 - 1;
          v54 = *((_DWORD *)this + 788);
          if ( v54 )
            *((_DWORD *)this + 788) = v54 - 1;
          return v6;
        case 10:
          v58 = CDrawingContext::PopLight((CDrawingContext *)((char *)this - 16));
          v6 = v58;
          if ( v58 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v58, 0x12BFu, 0LL);
          return v6;
        case 11:
          v25 = *((_DWORD *)this + 64);
          if ( v25 )
            *((_DWORD *)this + 64) = v25 - 1;
          --*((_DWORD *)this + 166);
          return v6;
        default:
          return v6;
      }
    }
    v19 = *((_DWORD *)v2 + 2);
    v20 = 0LL;
    if ( v19 )
    {
      v21 = (unsigned int)(v19 - 1);
      *((_DWORD *)v2 + 2) = v21;
      v20 = *(__m128i *)(*(_QWORD *)v2 + 16 * v21);
    }
    if ( _mm_srli_si128(v20, 8).m128i_u64[0] )
    {
      v22 = *((_DWORD *)this + 82);
      if ( v22 )
        *((_DWORD *)this + 82) = v22 - 1;
    }
    v23 = *((_DWORD *)this + 70);
    if ( v23 )
      *((_DWORD *)this + 70) = v23 - 1;
    v24 = *((_DWORD *)this + 76);
    if ( v24 )
      *((_DWORD *)this + 76) = v24 - 1;
  }
  return v6;
}
