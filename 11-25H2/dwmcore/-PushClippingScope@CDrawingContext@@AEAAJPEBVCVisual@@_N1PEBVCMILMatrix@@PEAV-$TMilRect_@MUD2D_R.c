/*
 * XREFs of ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180084CA0
 * Callers:
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180081FD8 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800876E0 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D4880 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScopedClipStack@@0@Z @ 0x180083CA0 (--$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScop.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x180083CF8 (--$uninitialized_move@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked.c)
 *     ??0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z @ 0x180083DA0 (--0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180086B40 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x18009309C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1801B4450 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ??$move_backward@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x180255360 (--$move_backward@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked_arra.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushClippingScope(
        struct CDrawingContext *a1,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        __int64 a5,
        float *a6)
{
  unsigned __int64 v6; // rbx
  struct CDrawingContext *v7; // r12
  __int64 *v8; // r13
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __m128 v13; // xmm0
  float v14; // xmm2_4
  float *v15; // rax
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float *v19; // rcx
  float v20; // xmm1_4
  float v21; // xmm0_4
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rsi
  unsigned __int64 v30; // r15
  __int64 v31; // r10
  signed __int64 v32; // r8
  unsigned __int64 v33; // r9
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  unsigned __int64 i; // rbx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // r15d
  __int64 v41; // rbx
  int v42; // esi
  __int64 v43; // r14
  unsigned int v44; // r13d
  __int64 v45; // r12
  char v46; // al
  CD2DLayer *v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // edi
  void *v50; // rax
  void *v51; // rsi
  int v52; // eax
  __int64 v53; // rcx
  void (__fastcall *v54)(__int64, __int128 *); // rax
  float v55; // xmm1_4
  int v56; // eax
  unsigned __int64 v57; // rdi
  SIZE_T v58; // r10
  SIZE_T v59; // rax
  void *v60; // rax
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // rdx
  void *v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rdx
  unsigned __int64 v71; // r10
  __int64 v72; // r11
  unsigned int v73; // [rsp+20h] [rbp-69h]
  unsigned int v74; // [rsp+20h] [rbp-69h]
  char v75; // [rsp+30h] [rbp-59h]
  int v76; // [rsp+34h] [rbp-55h]
  __int128 v77; // [rsp+38h] [rbp-51h] BYREF
  __int128 v78; // [rsp+50h] [rbp-39h] BYREF
  __int64 v79; // [rsp+60h] [rbp-29h]
  __int128 v80; // [rsp+70h] [rbp-19h] BYREF
  __int64 v81; // [rsp+80h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]
  __int64 v84; // [rsp+E8h] [rbp+5Fh]

  v84 = a2;
  v76 = 0;
  v6 = a4;
  v75 = 0;
  v7 = a1;
  if ( a4 )
    goto LABEL_2;
  v41 = *((_QWORD *)a1 + 94);
  v42 = 0;
  v43 = -858993459 * (unsigned int)((__int64)(*((_QWORD *)a1 + 337) - *((_QWORD *)a1 + 336)) >> 3)
      - *(_DWORD *)(v41 - 176);
  v44 = 0;
  while ( 1 )
  {
    v39 = v42;
    v76 = v42;
    if ( !*(_QWORD *)(v41 - 160) )
    {
      if ( v42 < 0 )
        goto LABEL_78;
      a2 = v84;
      v6 = 0LL;
      if ( *((_BYTE *)v7 + 8066) )
        *(_WORD *)((char *)v7 + 8065) = 1;
      else
        v76 = v42;
LABEL_2:
      v8 = (__int64 *)((char *)v7 + 744);
      v9 = *((_QWORD *)v7 + 94);
      if ( v9 == *((_QWORD *)v7 + 93) )
      {
        *(_OWORD *)a6 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      else
      {
        if ( *(_QWORD *)(v9 - 184) )
        {
          v10 = *((_DWORD *)v7 + 780);
          if ( v10 )
            *(_OWORD *)a6 = *(_OWORD *)(*((_QWORD *)v7 + 389) + 16LL * (unsigned int)(v10 - 1));
          else
            *(_OWORD *)a6 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        else
        {
          v53 = *(_QWORD *)(v9 - 192);
          v54 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v53 + 88LL);
          if ( (char *)v54 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
            IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v53, &v77);
          else
            v54(v53, &v77);
          v55 = (float)(int)v77;
          v56 = DWORD1(v77);
          *(_QWORD *)a6 = 0LL;
          a6[2] = v55;
          a6[3] = (float)v56;
          a2 = v84;
        }
        if ( !(_BYTE)v6 )
        {
          v11 = *((_QWORD *)v7 + 94);
          if ( v11 != *v8 )
          {
            if ( *(_QWORD *)(v11 - 168) )
            {
              v12 = *((_DWORD *)v7 + 786);
              if ( v12 )
                v13 = *(__m128 *)(*((_QWORD *)v7 + 392) + 16LL * (unsigned int)(v12 - 1));
              else
                v13 = (__m128)_xmm;
              v14 = *a6;
              if ( v13.m128_f32[0] > *a6 )
              {
                *a6 = v13.m128_f32[0];
                v14 = v13.m128_f32[0];
              }
              v15 = a6 + 1;
              v16 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
              if ( v16 > a6[1] )
                *v15 = v16;
              v17 = a6[2];
              v18 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
              v19 = a6 + 1;
              if ( v17 > v18 )
              {
                a6[2] = v18;
                v19 = a6 + 1;
                v17 = v18;
              }
              v20 = a6[3];
              v21 = _mm_shuffle_ps(v13, v13, 255).m128_f32[0];
              if ( v20 > v21 )
              {
                a6[3] = v21;
                v20 = v21;
                v15 = v19;
              }
              if ( v17 <= v14 || v20 <= *v15 )
              {
                *((_QWORD *)a6 + 1) = 0LL;
                *v15 = 0.0;
                *a6 = 0.0;
              }
            }
          }
        }
        v8 = (__int64 *)((char *)v7 + 744);
      }
      if ( !a2 )
      {
LABEL_27:
        v26 = v8[1];
        v27 = v8[2];
        v28 = *v8;
        v29 = *((_QWORD *)v7 + 4);
        v30 = 0xAAAAAAAAAAAAAAABuLL * ((v26 - *v8) >> 6);
        *(_QWORD *)&v77 = v29;
        if ( !(0xAAAAAAAAAAAAAAABuLL * ((v27 - v26) >> 6)) )
        {
          if ( v30 + 1 < v30 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
            goto LABEL_98;
          }
          v57 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)(0xAAAAAAAAAAAAAAABuLL * ((v27 - v28) >> 6)),
                  0xAAAAAAAAAAAAAAABuLL * ((v27 - v28) >> 6),
                  v30 + 1);
          v59 = 192 * v57;
          if ( !is_mul_ok(v57, 0xC0uLL) )
            v59 = v58;
          v60 = operator new[](v59);
          v61 = v8[1];
          v62 = *v8;
          *(_QWORD *)&v78 = v60;
          v63 = (__int64)v60;
          *((_QWORD *)&v78 + 1) = v30;
          v79 = 0LL;
          v80 = v78;
          v81 = 0LL;
          std::uninitialized_move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
            (__int64)&v78,
            v62,
            v61,
            &v80);
          detail::destruct_range<CScopedClipStack::ClippingScopeState>(*v8, v8[1]);
          v64 = *v8;
          v65 = 0LL;
          *v8 = v63;
          if ( (__int64 *)v64 != v8 + 3 )
            v65 = (void *)v64;
          operator delete(v65);
          v28 = *v8;
          v26 = *v8 + 192 * v30;
          v66 = *v8 + 192 * v57;
          v8[1] = v26;
          v8[2] = v66;
        }
        v79 = 0LL;
        v31 = 1LL;
        v32 = 0xAAAAAAAAAAAAAAABuLL * ((v26 - v28) >> 6);
        v81 = 0LL;
        *((_QWORD *)&v78 + 1) = 1LL;
        v33 = v32 - v30;
        v6 = v28 + ((v26 - v28) >> 6 << 6);
        *(_QWORD *)&v78 = v6;
        if ( !v6 )
          goto LABEL_45;
        v81 = 1LL;
        v34 = 0xAAAAAAAAAAAAAAABuLL * ((v26 - v28) >> 6) - v30;
        if ( v33 > 1 )
          v34 = 1LL;
        v79 = 1LL;
        if ( v26 == v26 - 192 * v34 )
        {
LABEL_32:
          if ( v33 <= 1 )
          {
LABEL_33:
            v35 = v28 + 192 * (v30 + 1);
            if ( v6 < v35 )
              v35 = v6;
            for ( i = v28 + 192 * v30; i != v35; i += 192LL )
            {
              v37 = *(_QWORD *)(i + 176);
              if ( v37 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
            }
            v8[1] += 192LL;
            memset_0((void *)(v28 + 192 * v30), 0, 0xC0uLL);
            v38 = v8[1];
            *(_BYTE *)(v38 - 8) = a3;
            *(_QWORD *)(v38 - 192) = v29;
            if ( a5 )
            {
              *(_OWORD *)(v38 - 152) = *((_OWORD *)v7 + 6);
              *(_OWORD *)(v38 - 136) = *((_OWORD *)v7 + 7);
              *(_OWORD *)(v38 - 120) = *((_OWORD *)v7 + 8);
              *(_OWORD *)(v38 - 104) = *((_OWORD *)v7 + 9);
              *(_DWORD *)(v38 - 88) = *((_DWORD *)v7 + 40);
              *(_OWORD *)(v38 - 84) = *(_OWORD *)a5;
              *(_OWORD *)(v38 - 68) = *(_OWORD *)(a5 + 16);
              *(_OWORD *)(v38 - 52) = *(_OWORD *)(a5 + 32);
              *(_OWORD *)(v38 - 36) = *(_OWORD *)(a5 + 48);
              *(_DWORD *)(v38 - 20) = *(_DWORD *)(a5 + 64);
            }
            else
            {
              *(_QWORD *)(v38 - 152) = 1065353216LL;
              *(_QWORD *)(v38 - 144) = 0LL;
              *(_DWORD *)(v38 - 136) = 0;
              *(_QWORD *)(v38 - 132) = 1065353216LL;
              *(_QWORD *)(v38 - 124) = 0LL;
              *(_DWORD *)(v38 - 116) = 0;
              *(_QWORD *)(v38 - 112) = 1065353216LL;
              *(_QWORD *)(v38 - 104) = 0LL;
              *(_DWORD *)(v38 - 96) = 0;
              *(_DWORD *)(v38 - 92) = 1065353216;
              *(_BYTE *)(v38 - 87) &= 0xE9u;
              *(_BYTE *)(v38 - 87) |= 0x29u;
              *(_BYTE *)(v38 - 88) = -86;
              *(_QWORD *)(v38 - 84) = 1065353216LL;
              *(_QWORD *)(v38 - 76) = 0LL;
              *(_DWORD *)(v38 - 68) = 0;
              *(_QWORD *)(v38 - 64) = 1065353216LL;
              *(_QWORD *)(v38 - 56) = 0LL;
              *(_DWORD *)(v38 - 48) = 0;
              *(_QWORD *)(v38 - 44) = 1065353216LL;
              *(_QWORD *)(v38 - 36) = 0LL;
              *(_DWORD *)(v38 - 28) = 0;
              *(_DWORD *)(v38 - 24) = 1065353216;
              *(_BYTE *)(v38 - 19) &= 0xE9u;
              *(_BYTE *)(v38 - 19) |= 0x29u;
              *(_BYTE *)(v38 - 20) = -86;
            }
            if ( a4 )
              *((_BYTE *)v7 + 8066) = 0;
            v39 = v76;
            if ( v76 < 0 && v75 )
              CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)v7 + 264, 0LL);
            return v39;
          }
          if ( !v32 || v28 && v32 >= 0 )
          {
            *((_QWORD *)&v78 + 1) = v32;
            v79 = v32;
            *(_QWORD *)&v78 = v28;
            std::move_backward<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>(
              &v80,
              v28 + 192 * v30,
              v28 + 192 * v32 - 192,
              &v78);
            goto LABEL_33;
          }
LABEL_45:
          _invalid_parameter_noinfo_noreturn();
        }
LABEL_98:
        v68 = v78;
        v69 = v79;
        do
        {
          v70 = v26 - 192;
          if ( !v68 )
            goto LABEL_45;
          if ( !v31 )
            goto LABEL_45;
          v71 = v69 - 1;
          v69 = v71;
          if ( v71 >= *((_QWORD *)&v78 + 1) )
            goto LABEL_45;
          CScopedClipStack::ClippingScopeState::ClippingScopeState(v68 + 192 * v71, v70);
        }
        while ( v26 != v72 );
        v29 = v77;
        goto LABEL_32;
      }
      v22 = *((unsigned int *)v7 + 68);
      v23 = *((unsigned int *)v7 + 69);
      *(_QWORD *)&v77 = 4LL;
      *((_QWORD *)&v77 + 1) = a2;
      if ( (_DWORD)v22 != (_DWORD)v23 )
      {
LABEL_24:
        v76 = 0;
        v75 = 1;
        *(_OWORD *)(*((_QWORD *)v7 + 33) + 16LL * *((unsigned int *)v7 + 68)) = v77;
        v24 = *((_DWORD *)v7 + 71);
        v25 = *((_DWORD *)v7 + 68) + 1;
        *((_DWORD *)v7 + 68) = v25;
        if ( v24 <= v25 )
          v24 = v25;
        *((_DWORD *)v7 + 71) = v24;
        goto LABEL_27;
      }
      v6 = 2 * v23;
      if ( (unsigned __int64)(2 * v23) <= 0xFFFFFFFF )
      {
        if ( (unsigned int)v6 <= 0x40 )
          v6 = 64LL;
        v49 = 16 * v22;
        if ( (unsigned __int64)(16 * v22) <= 0xFFFFFFFF )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 <= 0x10 )
          {
            v39 = -2147024809;
          }
          else
          {
            v50 = MIDL_user_allocate(16LL * (unsigned int)v6);
            v51 = v50;
            if ( v50 )
            {
              memcpy_0(v50, *((const void **)v7 + 33), v49);
              operator delete(*((void **)v7 + 33));
              *((_QWORD *)v7 + 33) = v51;
              v8 = (__int64 *)((char *)v7 + 744);
              *((_DWORD *)v7 + 69) = v6;
              goto LABEL_24;
            }
            v39 = -2147024882;
          }
          v48 = 104LL;
LABEL_61:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v48,
            (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)v39,
            v73);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83,
            (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)v39,
            v74);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xC41u, 0LL);
          return v39;
        }
        v48 = 101LL;
      }
      else
      {
        v48 = 98LL;
      }
      v39 = -2147024362;
      goto LABEL_61;
    }
    v45 = *((_QWORD *)v7 + 336);
    v46 = 0;
    v47 = *(CD2DLayer **)(v45 + 40 * v43 + 24);
    if ( v47 )
    {
      v52 = CD2DLayer::ApplyState(v47, a1);
      v42 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x248u, 0LL);
        v39 = v42;
        goto LABEL_78;
      }
      *(_QWORD *)(v45 + 40 * v43 + 24) = 0LL;
      v46 = 1;
      --*(_QWORD *)(v41 - 160);
    }
    if ( *(_BYTE *)(v45 + 40 * v43 + 36) )
      break;
LABEL_53:
    v7 = a1;
    v43 = (unsigned int)(v43 + 1);
  }
  if ( !v46
    || (v67 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v41 - 16), a1, v44),
        v42 = v67,
        v39 = v67,
        v67 >= 0) )
  {
    ++v44;
    goto LABEL_53;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x264u, 0LL);
LABEL_78:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x10C0u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xC33u, 0LL);
  return v39;
}
