/*
 * XREFs of ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180086B40
 * Callers:
 *     ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x18007FC58 (-PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180084CA0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800A3E30 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800A48A0 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DCA0C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x1801BF030 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180086A40 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __int128 *v17; // rsi
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  __m128i v20; // xmm2
  __int64 v21; // r8
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  unsigned __int64 CurrentFrameId; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+40h] [rbp-C8h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v33[3]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v34[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  _BYTE v35[40]; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  int *v37; // [rsp+98h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-68h] BYREF
  int v39; // [rsp+B0h] [rbp-58h]
  int v40; // [rsp+B4h] [rbp-54h]
  __int128 v41; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-40h]
  __m128i v43; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E8h] [rbp-20h]
  __int128 v45; // [rsp+F8h] [rbp-10h]
  __int128 v46; // [rsp+108h] [rbp+0h]
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]

  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
  {
    v25 = (*(__int64 (__fastcall **)(CD2DLayer *))(*(_QWORD *)this + 16LL))(this);
    if ( (*(unsigned int (__fastcall **)(CD2DLayer *))(*(_QWORD *)this + 8LL))(this) == 1 )
    {
      CurrentFrameId = GetCurrentFrameId();
      if ( *(_QWORD *)(v27 + 16) == CurrentFrameId )
      {
        ++*(_DWORD *)(v27 + 212);
        *(_QWORD *)(v27 + 176) += v25;
      }
    }
    else
    {
      v28 = GetCurrentFrameId();
      if ( *(_QWORD *)(v29 + 16) == v28 )
      {
        ++*(_DWORD *)(v29 + 216);
        *(_QWORD *)(v29 + 184) += v25;
      }
    }
  }
  v5 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v23 = (int)*((float *)this + 5);
    *((_QWORD *)&v44 + 1) = 4LL;
    *((_QWORD *)&v45 + 1) = 4LL;
    *((_QWORD *)&v46 + 1) = 4LL;
    v48 = 4LL;
    v30 = v23;
    v33[0] = (int)*((float *)this + 4);
    v32 = (int)*((float *)this + 3);
    v31 = (int)*((float *)this + 2);
    *(_QWORD *)&v44 = &v31;
    *(_QWORD *)&v45 = &v32;
    *(_QWORD *)&v46 = v33;
    v47 = &v30;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start,
      a3,
      5LL,
      &v43);
  }
  v6 = *((_QWORD *)a2 + 5);
  v7 = (char *)this + 32;
  v8 = *((_DWORD *)this + 16);
  v9 = *((_DWORD *)this + 15);
  v10 = *((_DWORD *)this + 17);
  v30 = *((_DWORD *)this + 14);
  if ( !*((_BYTE *)this + 72) )
    v7 = 0LL;
  v11 = *((_QWORD *)this + 3);
  CD2DContext::FlushDrawList((CD2DContext *)(v6 + 16));
  v12 = *(_DWORD *)(v6 + 368);
  if ( v12 )
    v5 = *(_QWORD *)(*(_QWORD *)(v6 + 344) + 8LL * (unsigned int)(v12 - 1));
  CD2DContext::EnsureBeginDraw((CD2DContext *)(v6 + 16));
  v13 = *(_QWORD *)(v5 + 16);
  v39 = 0;
  v40 = 0;
  v38 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v13 + 200) + 240LL))(*(_QWORD *)(v13 + 200), &v38);
  v14 = *(_QWORD *)(v5 + 16);
  if ( v8 != *(_DWORD *)(v14 + 396) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14 + 200) + 624LL))(*(_QWORD *)(v14 + 200), v8);
    *(_DWORD *)(v14 + 396) = v8;
    v14 = *(_QWORD *)(v5 + 16);
  }
  if ( v7 )
  {
    v15 = *(_OWORD *)v7;
    v16 = *((_QWORD *)v7 + 2);
    v17 = &v41;
    v41 = v15;
    v42 = v16;
  }
  else
  {
    v17 = &v38;
    v39 = 0;
    v40 = 0;
    v38 = _xmm;
  }
  memset_0(v34, 0, 0x44uLL);
  v18 = *v17;
  v19 = *((_QWORD *)v17 + 2);
  v20 = _mm_loadu_si128((const __m128i *)((char *)this + 8));
  *(_DWORD *)&v35[8] = v30;
  *(_OWORD *)&v35[12] = v18;
  *(_QWORD *)v35 = v11;
  v36 = 0LL;
  *(_QWORD *)&v35[28] = v19;
  LODWORD(v37) = v9;
  v44 = *(_OWORD *)v35;
  v45 = *(_OWORD *)&v35[16];
  v43 = v20;
  v47 = v37;
  *(_DWORD *)&v35[36] = v10;
  v46 = *(unsigned __int64 *)&v35[32];
  (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD))(**(_QWORD **)(v14 + 200) + 688LL))(
    *(_QWORD *)(v14 + 200),
    &v43,
    0LL);
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v5);
  ++*(_DWORD *)(v5 + 48);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v24 = (int)*((float *)this + 5);
    *((_QWORD *)&v44 + 1) = 4LL;
    *((_QWORD *)&v45 + 1) = 4LL;
    *((_QWORD *)&v46 + 1) = 4LL;
    v48 = 4LL;
    v31 = v24;
    v32 = (int)*((float *)this + 4);
    v33[0] = (int)*((float *)this + 3);
    v30 = (int)*((float *)this + 2);
    *(_QWORD *)&v44 = &v30;
    *(_QWORD *)&v45 = v33;
    *(_QWORD *)&v46 = &v32;
    v47 = &v31;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Stop,
      v21,
      5LL,
      &v43);
  }
  return 0LL;
}
