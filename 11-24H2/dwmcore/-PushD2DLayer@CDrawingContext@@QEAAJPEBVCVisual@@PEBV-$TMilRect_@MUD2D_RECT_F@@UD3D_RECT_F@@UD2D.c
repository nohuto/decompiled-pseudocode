/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180073030
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F4D78 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180167898 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18026494C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FA800 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBD40 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_1800FBD40.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FBE20 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1801482FC (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x1801C9180 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUPixelFormatInfo@@XZ @ 0x1802CDA80 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUPix.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushD2DLayer(
        struct CDrawingContext *a1,
        __int64 a2,
        struct _EVENT_DATA_DESCRIPTOR *a3,
        __int64 a4,
        __int64 a5,
        float a6,
        char a7,
        int a8)
{
  unsigned int v8; // esi
  bool v9; // zf
  __int64 v11; // rcx
  int v12; // r13d
  char v13; // r15
  __int64 v15; // rax
  float v17; // xmm1_4
  __int64 (__fastcall *v18)(__int64, struct _EVENT_DATA_DESCRIPTOR *); // rax
  __int64 v19; // rcx
  __int64 PixelFormatInfo; // rax
  _DWORD *Value; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  char *v25; // rbx
  HANDLE ProcessHeap; // rax
  CD2DLayer *v27; // rdi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  struct _EVENT_DATA_DESCRIPTOR v32; // xmm0
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // edx
  __int64 (__fastcall *v37)(CD2DLayer *__hidden, struct CDrawingContext *); // rax
  int v38; // eax
  int v39; // ebx
  int v40; // ecx
  int v41; // r12d
  __int64 v42; // rbx
  __int64 v43; // r13
  unsigned int v44; // edx
  unsigned int v45; // eax
  ULONGLONG v46; // rcx
  __int64 Ptr; // rax
  char v48; // r9
  int v49; // eax
  CThreadContext *v50; // rax
  CThreadContext *v51; // rax
  int v52; // eax
  __int64 v53; // r8
  char *v54; // r14
  unsigned int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // r13d
  int v60; // r9d
  unsigned int v61; // eax
  char *v62; // [rsp+20h] [rbp-79h]
  BOOL v63; // [rsp+30h] [rbp-69h]
  int v64; // [rsp+30h] [rbp-69h]
  int v65; // [rsp+38h] [rbp-61h] BYREF
  bool v66; // [rsp+40h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+48h] [rbp-51h] BYREF
  __int64 v68; // [rsp+58h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+60h] [rbp-39h] BYREF
  int *v70; // [rsp+70h] [rbp-29h]
  __int64 v71; // [rsp+78h] [rbp-21h]
  void *retaddr; // [rsp+D8h] [rbp+3Fh]

  v8 = 0;
  v68 = a2;
  v9 = *((_DWORD *)a1 + 61) == 0;
  v65 = 0;
  v11 = *((_QWORD *)a1 + 4);
  v12 = 0;
  v13 = 0;
  v63 = !v9;
  v15 = *(_QWORD *)(v11 + 8);
  v67 = 0LL;
  LODWORD(v17) = COERCE_UNSIGNED_INT(a6 - 1.0) & _xmm;
  v18 = *(__int64 (__fastcall **)(__int64, struct _EVENT_DATA_DESCRIPTOR *))(v15 + 24);
  v19 = v11 + 8;
  v66 = v17 < 0.0000011920929;
  if ( (char *)v18 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
    PixelFormatInfo = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v19, &v69);
  else
    PixelFormatInfo = v18(v19, &v69);
  if ( *(_DWORD *)(PixelFormatInfo + 4) == 3 )
  {
    v12 = 3;
  }
  else if ( v17 < 0.0000011920929 )
  {
    v65 = 1;
    v12 = 1;
  }
  if ( a3 )
    v67 = *a3;
  else
    CDrawingContext::GetClipBoundsWorld(a1, &v67);
  if ( *(float *)&v67.Size > *(float *)&v67.Ptr && *(float *)&v67.Reserved > *((float *)&v67.Ptr + 1) )
  {
    v69 = v67;
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v50 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v50 || (v51 = CThreadContext::CThreadContext(v50), (Value = v51) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v51);
    }
    v24 = Value[109];
    v25 = 0LL;
    if ( v24 )
    {
      v25 = (char *)*((_QWORD *)Value + 55);
      *((_QWORD *)Value + 55) = *(_QWORD *)v25;
      Value[109] = v24 - 1;
    }
    if ( !v25 )
    {
      ProcessHeap = GetProcessHeap();
      v25 = (char *)HeapAlloc(ProcessHeap, 0, 0x50uLL);
      if ( !v25 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Du, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x100Eu, 0LL);
        return v8;
      }
    }
    *(_QWORD *)v25 = &CD2DLayer::`vftable';
    *(struct _EVENT_DATA_DESCRIPTOR *)(v25 + 8) = v69;
    *((_QWORD *)v25 + 3) = a4;
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    *((_DWORD *)v25 + 14) = v63;
    *((_DWORD *)v25 + 16) = v65;
    v25[72] = a5 != 0;
    *((float *)v25 + 17) = a6;
    *((_DWORD *)v25 + 15) = v12;
    if ( a5 )
    {
      *((_OWORD *)v25 + 2) = *(_OWORD *)a5;
      *((_QWORD *)v25 + 6) = *(_QWORD *)(a5 + 16);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v65 = a8;
      v71 = 4LL;
      v70 = &v65;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_D2DLAYERCREATEREASON,
        v22,
        2u,
        &v69);
    }
    v27 = (CD2DLayer *)v25;
    if ( !a7 || !a4 || !v66 )
    {
      v41 = 0;
      v42 = *((_QWORD *)a1 + 94);
      v43 = -858993459 * (unsigned int)((__int64)(*((_QWORD *)a1 + 337) - *((_QWORD *)a1 + 336)) >> 3)
          - *(_DWORD *)(v42 - 176);
      v44 = 0;
      v65 = 0;
      while ( 1 )
      {
        v8 = v41;
        if ( !*(_QWORD *)(v42 - 160) )
          break;
        v46 = *((_QWORD *)a1 + 336);
        Ptr = 5 * v43;
        v69.Ptr = v46;
        v48 = 0;
        v67.Ptr = 5 * v43;
        v22 = *(_QWORD *)(v46 + 40 * v43 + 24);
        if ( v22 )
        {
          v57 = CD2DLayer::ApplyState(*(CD2DLayer **)(v46 + 40 * v43 + 24), a1);
          v41 = v57;
          v8 = v57;
          if ( v57 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x248u, 0LL);
LABEL_82:
            LODWORD(v23) = v8;
            v45 = 4129;
            goto LABEL_61;
          }
          Ptr = v67.Ptr;
          v48 = 1;
          v46 = v69.Ptr;
          v44 = v65;
          *(_QWORD *)(v69.Ptr + 8 * v67.Ptr + 24) = 0LL;
          --*(_QWORD *)(v42 - 160);
        }
        if ( *(_BYTE *)(v46 + 8 * Ptr + 36) )
        {
          if ( v48 )
          {
            v49 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v42 - 16), a1, v44);
            v41 = v49;
            v8 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x264u, 0LL);
              goto LABEL_82;
            }
            v44 = v65;
          }
          v65 = ++v44;
        }
        v43 = (unsigned int)(v43 + 1);
      }
      v23 = (unsigned int)v41;
      if ( v41 >= 0 )
        goto LABEL_27;
      v45 = 4129;
      goto LABEL_61;
    }
    v28 = *((_QWORD *)a1 + 337);
    if ( *(_QWORD *)(v28 - 16) )
      --*(_QWORD *)(*((_QWORD *)a1 + 94) - 160LL);
    *(_QWORD *)(v28 - 16) = v25;
    v13 = 1;
    ++*(_QWORD *)(*((_QWORD *)a1 + 94) - 160LL);
LABEL_27:
    *(_QWORD *)&v69.Size = v68;
    v29 = *((_DWORD *)a1 + 69);
    v69.Ptr = 6LL;
    if ( *((_DWORD *)a1 + 68) == v29 )
    {
      v62 = (char *)a1 + 264;
      v52 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)a1 + 264);
      v64 = v52;
      v8 = v52;
      if ( v52 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v52);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1051u, 0LL);
LABEL_60:
        LODWORD(v23) = v64;
        v45 = 4136;
LABEL_61:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v45, 0LL);
        if ( v13 )
        {
          v53 = *((_QWORD *)a1 + 337);
          if ( *(_QWORD *)(v53 - 16) )
            --*(_QWORD *)(*((_QWORD *)a1 + 94) - 160LL);
          *(_QWORD *)(v53 - 16) = 0LL;
        }
        CD2DLayer::`scalar deleting destructor'(v27, 1u);
        return v8;
      }
    }
    v30 = *((_QWORD *)a1 + 33);
    v31 = 2LL * *((unsigned int *)a1 + 68);
    v32 = v69;
    v69.Ptr = (ULONGLONG)v27;
    *(struct _EVENT_DATA_DESCRIPTOR *)(v30 + 8 * v31) = v32;
    ++*((_DWORD *)a1 + 68);
    v33 = *((_DWORD *)a1 + 71);
    if ( v33 <= *((_DWORD *)a1 + 68) )
      v33 = *((_DWORD *)a1 + 68);
    *((_DWORD *)a1 + 71) = v33;
    v34 = *((_DWORD *)a1 + 96);
    v35 = v34 + 1;
    if ( v34 + 1 < v34 )
    {
      v8 = -2147024362;
      v61 = 181;
      v39 = -2147024362;
      v59 = -2147024362;
      v64 = -2147024362;
      v60 = -2147024362;
    }
    else
    {
      v8 = 0;
      if ( v35 <= *((_DWORD *)a1 + 95) )
      {
        *(_QWORD *)(*((_QWORD *)a1 + 45) + 8LL * v34) = v27;
        *((_DWORD *)a1 + 96) = v35;
        goto LABEL_33;
      }
      v58 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 360, 8, 1, &v69);
      v64 = v58;
      v8 = v58;
      v39 = v58;
      if ( v58 >= 0 )
      {
LABEL_33:
        if ( v13
          || ((v37 = *(__int64 (__fastcall **)(CD2DLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)v27 + 24LL),
               v37 != CD2DLayer::ApplyState)
            ? (v37 != COffScreenRenderingLayer::ApplyState
             ? (v38 = ((__int64 (__fastcall *)(CD2DLayer *, struct CDrawingContext *, __int64, __int64, char *))v37)(
                        v27,
                        a1,
                        v22,
                        v23,
                        v62))
             : (v38 = COffScreenRenderingLayer::ApplyState(v27, a1)))
            : (v38 = CD2DLayer::ApplyState(v27, a1)),
              v64 = v38,
              v8 = v38,
              v39 = v38,
              v38 >= 0) )
        {
          ++dword_1803FA758;
          ++dword_1803FA808;
          return v8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x105Bu, 0LL);
        --*((_DWORD *)a1 + 96);
        goto LABEL_42;
      }
      v59 = v58;
      v60 = v58;
      v61 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, v61, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1056u, 0LL);
    v8 = v59;
LABEL_42:
    v40 = *((_DWORD *)a1 + 68);
    if ( v40 )
    {
      *((_DWORD *)a1 + 68) = v40 - 1;
    }
    else
    {
      v64 = v39;
      v8 = v39;
      if ( v39 >= 0 )
        return v8;
    }
    goto LABEL_60;
  }
  v54 = (char *)a1 + 264;
  *(_QWORD *)&v69.Size = v68;
  v69.Ptr = 7LL;
  if ( *((_DWORD *)v54 + 2) == *((_DWORD *)v54 + 3)
    && (v56 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(v54),
        v56 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v56);
  }
  else
  {
    *(struct _EVENT_DATA_DESCRIPTOR *)(*(_QWORD *)v54 + 16LL * *((unsigned int *)v54 + 2)) = v69;
    v55 = *((_DWORD *)v54 + 5);
    if ( v55 <= ++*((_DWORD *)v54 + 2) )
      v55 = *((_DWORD *)v54 + 2);
    *((_DWORD *)v54 + 5) = v55;
  }
  return v8;
}
