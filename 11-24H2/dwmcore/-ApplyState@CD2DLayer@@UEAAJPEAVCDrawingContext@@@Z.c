/*
 * XREFs of ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FA800
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180073030 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x1800F9390 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F94F0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800FA5F0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x180138E78 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800FABC0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DLayer::ApplyState(CD2DLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  char *v7; // rsi
  unsigned int v8; // r15d
  int v9; // r13d
  int v10; // xmm6_4
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  __int128 *v19; // rsi
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __m128i v22; // xmm2
  __int64 v23; // r8
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  CGlobalComposition *CurrentFrameId; // rax
  __int64 v29; // rcx
  CGlobalComposition *v30; // rax
  __int64 v31; // rcx
  int v32; // [rsp+38h] [rbp-D0h] BYREF
  int v33; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v35[3]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v36[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  _BYTE v37[40]; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+90h] [rbp-78h]
  int *v39; // [rsp+98h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-68h] BYREF
  int v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B4h] [rbp-54h]
  __int128 v43; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-40h]
  __m128i v45; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v46; // [rsp+E8h] [rbp-20h]
  __int128 v47; // [rsp+F8h] [rbp-10h]
  __int128 v48; // [rsp+108h] [rbp+0h]
  int *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]

  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
  {
    v27 = (*(__int64 (__fastcall **)(CD2DLayer *))(*(_QWORD *)this + 16LL))(this);
    if ( (*(unsigned int (__fastcall **)(CD2DLayer *))(*(_QWORD *)this + 8LL))(this) == 1 )
    {
      CurrentFrameId = GetCurrentFrameId();
      if ( *(CGlobalComposition **)(v29 + 16) == CurrentFrameId )
      {
        ++*(_DWORD *)(v29 + 212);
        *(_QWORD *)(v29 + 176) += v27;
      }
    }
    else
    {
      v30 = GetCurrentFrameId();
      if ( *(CGlobalComposition **)(v31 + 16) == v30 )
      {
        ++*(_DWORD *)(v31 + 216);
        *(_QWORD *)(v31 + 184) += v27;
      }
    }
  }
  v5 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v25 = (int)*((float *)this + 5);
    *((_QWORD *)&v46 + 1) = 4LL;
    *((_QWORD *)&v47 + 1) = 4LL;
    *((_QWORD *)&v48 + 1) = 4LL;
    v50 = 4LL;
    v32 = v25;
    v35[0] = (int)*((float *)this + 4);
    v34 = (int)*((float *)this + 3);
    v33 = (int)*((float *)this + 2);
    *(_QWORD *)&v46 = &v33;
    *(_QWORD *)&v47 = &v34;
    *(_QWORD *)&v48 = v35;
    v49 = &v32;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start,
      a3,
      5u,
      (PEVENT_DATA_DESCRIPTOR)&v45);
  }
  v6 = *((_QWORD *)a2 + 5);
  v7 = (char *)this + 32;
  v8 = *((_DWORD *)this + 16);
  v9 = *((_DWORD *)this + 15);
  v10 = *((_DWORD *)this + 17);
  v32 = *((_DWORD *)this + 14);
  if ( !*((_BYTE *)this + 72) )
    v7 = 0LL;
  v11 = *((_QWORD *)this + 3);
  CD2DContext::FlushDrawList((CD2DContext *)(v6 + 16), (__int64)a2, a3);
  v14 = *(_DWORD *)(v6 + 368);
  if ( v14 )
  {
    v12 = (unsigned int)(v14 - 1);
    v5 = *(_QWORD *)(*(_QWORD *)(v6 + 344) + 8 * v12);
  }
  CD2DContext::EnsureBeginDraw((CD2DContext *)(v6 + 16), v12, v13);
  v15 = *(_QWORD *)(v5 + 16);
  v41 = 0;
  v42 = 0;
  v40 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v15 + 200) + 240LL))(*(_QWORD *)(v15 + 200), &v40);
  v16 = *(_QWORD *)(v5 + 16);
  if ( v8 != *(_DWORD *)(v16 + 396) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 200) + 624LL))(*(_QWORD *)(v16 + 200), v8);
    *(_DWORD *)(v16 + 396) = v8;
    v16 = *(_QWORD *)(v5 + 16);
  }
  if ( v7 )
  {
    v17 = *(_OWORD *)v7;
    v18 = *((_QWORD *)v7 + 2);
    v19 = &v43;
    v43 = v17;
    v44 = v18;
  }
  else
  {
    v19 = &v40;
    v41 = 0;
    v42 = 0;
    v40 = _xmm;
  }
  memset_0(v36, 0, 0x44uLL);
  v20 = *v19;
  v21 = *((_QWORD *)v19 + 2);
  v22 = _mm_loadu_si128((const __m128i *)((char *)this + 8));
  *(_DWORD *)&v37[8] = v32;
  *(_OWORD *)&v37[12] = v20;
  *(_QWORD *)v37 = v11;
  v38 = 0LL;
  *(_QWORD *)&v37[28] = v21;
  LODWORD(v39) = v9;
  v46 = *(_OWORD *)v37;
  v47 = *(_OWORD *)&v37[16];
  v45 = v22;
  v49 = v39;
  *(_DWORD *)&v37[36] = v10;
  v48 = *(unsigned __int64 *)&v37[32];
  (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD))(**(_QWORD **)(v16 + 200) + 688LL))(
    *(_QWORD *)(v16 + 200),
    &v45,
    0LL);
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v5);
  ++*(_DWORD *)(v5 + 48);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v26 = (int)*((float *)this + 5);
    *((_QWORD *)&v46 + 1) = 4LL;
    *((_QWORD *)&v47 + 1) = 4LL;
    *((_QWORD *)&v48 + 1) = 4LL;
    v50 = 4LL;
    v33 = v26;
    v34 = (int)*((float *)this + 4);
    v35[0] = (int)*((float *)this + 3);
    v32 = (int)*((float *)this + 2);
    *(_QWORD *)&v46 = &v32;
    *(_QWORD *)&v47 = v35;
    *(_QWORD *)&v48 = &v34;
    v49 = &v33;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Stop,
      v23,
      5u,
      (PEVENT_DATA_DESCRIPTOR)&v45);
  }
  return 0LL;
}
