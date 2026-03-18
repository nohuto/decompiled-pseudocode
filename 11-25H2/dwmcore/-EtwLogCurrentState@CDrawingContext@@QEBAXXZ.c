/*
 * XREFs of ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x18002AF80
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18002A7A0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18002AA80 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetOwningProcessId@CWindowNode@@UEBAKXZ @ 0x18002B400 (-GetOwningProcessId@CWindowNode@@UEBAKXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::EtwLogCurrentState(CDrawingContext *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // eax
  __m128 v10; // xmm2
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  __int64 v15; // rax
  int v16; // eax
  __m128 v17; // xmm0
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  CDrawingContext *v28; // rcx
  CWindowNode *CurrentVisual; // rcx
  unsigned int (__fastcall *v30)(CWindowNode *__hidden); // rax
  unsigned int OwningProcessId; // eax
  __int64 v32; // rcx
  void (__fastcall *v33)(__int64, _DWORD *); // rax
  char v34; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v35[2]; // [rsp+38h] [rbp-C8h] BYREF
  float v36; // [rsp+40h] [rbp-C0h] BYREF
  float v37; // [rsp+48h] [rbp-B8h] BYREF
  float v38; // [rsp+50h] [rbp-B0h] BYREF
  float v39; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+60h] [rbp-A0h] BYREF
  CDrawingContext *v41; // [rsp+70h] [rbp-90h] BYREF
  __int128 v42; // [rsp+80h] [rbp-80h] BYREF
  __int128 v43; // [rsp+90h] [rbp-70h]
  __int128 v44; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+C0h] [rbp-40h]
  char v47[16]; // [rsp+D0h] [rbp-30h] BYREF
  CDrawingContext **v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int128 *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  float *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  float *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  float *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  float *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  char *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  __int128 *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  _DWORD *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
  {
    v4 = *((_QWORD *)this + 82);
    v5 = *((_DWORD *)this + 170) - 1;
    v46 = 0;
    v6 = *(_QWORD *)(v4 + 8LL * v5);
    v40 = 0LL;
    v7 = *(_DWORD *)(v6 + 128);
    if ( ((v7 + 1) & 0xFFFFFFFE) == 0 && CDrawingContext::GetCurrentVisual(this) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual(v28);
      v30 = *(unsigned int (__fastcall **)(CWindowNode *__hidden))(*(_QWORD *)CurrentVisual + 144LL);
      if ( v30 == CWindowNode::GetOwningProcessId )
        OwningProcessId = CWindowNode::GetOwningProcessId(CurrentVisual);
      else
        OwningProcessId = v30(CurrentVisual);
      v7 = OwningProcessId;
    }
    v8 = *((_QWORD *)this + 94);
    if ( v8 == *((_QWORD *)this + 93) )
    {
      LODWORD(v11) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
      LODWORD(v12) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
      v13 = *(float *)&_xmm;
      LODWORD(v14) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
    }
    else
    {
      if ( *(_QWORD *)(v8 - 184) )
      {
        v9 = *((_DWORD *)this + 780);
        if ( v9 )
        {
          v10 = *(__m128 *)(*((_QWORD *)this + 389) + 16LL * (unsigned int)(v9 - 1));
          LODWORD(v11) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
          LODWORD(v12) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
          v13 = v10.m128_f32[0];
          LODWORD(v14) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
        }
        else
        {
          v13 = *(float *)&_xmm;
          LODWORD(v11) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
          LODWORD(v12) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
          LODWORD(v14) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
        }
      }
      else
      {
        v32 = *(_QWORD *)(v8 - 192);
        v33 = *(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v32 + 88LL);
        if ( (char *)v33 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
          IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v32, v35);
        else
          v33(v32, v35);
        v13 = 0.0;
        v14 = 0.0;
        v12 = (float)v35[0];
        v11 = (float)v35[1];
      }
      v15 = *((_QWORD *)this + 94);
      if ( v15 != *((_QWORD *)this + 93) && *(_QWORD *)(v15 - 168) )
      {
        v16 = *((_DWORD *)this + 786);
        if ( v16 )
          v17 = *(__m128 *)(*((_QWORD *)this + 392) + 16LL * (unsigned int)(v16 - 1));
        else
          v17 = (__m128)_xmm;
        if ( v17.m128_f32[0] > v13 )
          v13 = v17.m128_f32[0];
        v18 = v14;
        v19 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
        if ( v19 > v14 )
        {
          v14 = v19;
          v18 = v19;
        }
        v20 = v12;
        v21 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
        if ( v12 > v21 )
        {
          v12 = v21;
          v20 = v21;
        }
        v22 = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
        v23 = v11;
        if ( v11 > v22 )
        {
          v11 = v22;
          v23 = v22;
        }
        if ( v20 <= v13 || v23 <= v18 )
        {
          v11 = 0.0;
          v12 = 0.0;
          v14 = 0.0;
          v13 = 0.0;
        }
      }
    }
    v24 = *((_DWORD *)this + 74);
    if ( v24 )
    {
      v25 = (unsigned int)(v24 - 1);
      v26 = *((_QWORD *)this + 36);
      v42 = *(_OWORD *)(68 * v25 + v26);
      v43 = *(_OWORD *)(68 * v25 + v26 + 16);
      v44 = *(_OWORD *)(68 * v25 + v26 + 32);
      v45 = *(_OWORD *)(68 * v25 + v26 + 48);
      v46 = *(_DWORD *)(68 * v25 + v26 + 64);
    }
    else
    {
      v46 = 10666;
      v42 = _xmm;
      v43 = _xmm;
      v44 = _xmm;
      v45 = *(__int128 *)&_xmm.r;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      if ( *((_BYTE *)this + 7936) )
      {
        if ( *((_BYTE *)this + 7937) )
          v27 = *((_QWORD *)this + 402);
        else
          v27 = *((_QWORD *)this + 994);
      }
      else
      {
        v27 = 0LL;
      }
      *(_QWORD *)&v40 = v27;
      v39 = v11;
      v48 = &v41;
      v38 = v12;
      v50 = &v40;
      v37 = v14;
      v52 = &v36;
      v54 = &v37;
      v56 = &v38;
      v58 = &v39;
      v60 = &v34;
      v62 = &v42;
      v64 = v35;
      v36 = v13;
      v35[0] = v7;
      v34 = 68;
      v41 = this;
      v49 = 8LL;
      v51 = 8LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 1LL;
      v63 = 68LL;
      v65 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE,
        a3,
        10LL,
        v47);
    }
  }
}
