/*
 * XREFs of ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003EF80 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18003F30C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18003F8E8 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18006D050 (-GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1800C4784 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?Present@CDDASwapChain@@QEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800C5D54 (-Present@CDDASwapChain@@QEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x1800D8850 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800DAB4C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ??$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@?$_Default_allocator_traits@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@SAXAEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@1@QEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x1800FFC48 (--$construct@VAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@-$_Default_allocator_traits@V-$allo.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18018B180 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801980A0 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x180198490 (--4-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801ABBD0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801C79DC (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1801DE2FC (--1CDrawingContext@@MEAA@XZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801E0DA0 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x180226A48 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@_N@Z.c)
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x180254734 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180282028 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18028E930 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?Release@CD3DDevice@@WBA@EAAKXZ @ 0x1802C6BB0 (-Release@CD3DDevice@@WBA@EAAKXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x1801CCDF0 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ??_ECGlobalDrawingContext@@UEAAPEAXI@Z @ 0x1801DE2B0 (--_ECGlobalDrawingContext@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::Release(CD3DDevice *this)
{
  int v2; // edi
  CGlobalComposition *v4; // rdi
  __int64 v5; // rax
  ULONG TolerableDelay; // edx
  __int64 v7; // r8
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  signed int LastError; // eax
  void (__fastcall *v11)(CScratchRenderTargetBitmap *__hidden); // rax
  void *(__fastcall *v12)(CGlobalDrawingContext *__hidden, unsigned int); // rax
  int v13; // [rsp+20h] [rbp-68h]
  int v14; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER DueTime; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-38h] BYREF
  int *v17; // [rsp+60h] [rbp-28h]
  int v18; // [rsp+68h] [rbp-20h]
  int v19; // [rsp+6Ch] [rbp-1Ch]
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( *((_DWORD *)this + 2) == 2 )
  {
    v4 = g_pComposition;
    v5 = 0LL;
    if ( g_pComposition )
      v5 = *((_QWORD *)g_pComposition + 111);
    *((_QWORD *)this + 186) = v5 + 5;
    if ( v4 && *((_BYTE *)v4 + 6496) )
    {
      TolerableDelay = (unsigned int)((unsigned __int64)(1000LL
                                                       * *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 39) + 24LL))(*((_QWORD *)v4 + 39))
                                                                   + 8))
                                    / g_qpcFrequency.QuadPart) < 0x3E8
                     ? 0x3E8
                     : 0;
      if ( TolerableDelay < *((_DWORD *)v4 + 62) )
      {
        *((_DWORD *)v4 + 62) = TolerableDelay;
        DueTime.QuadPart = -10000LL * TolerableDelay;
        if ( !SetWaitableTimerEx(*((HANDLE *)v4 + 30), &DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError >= 0 )
            LastError = -2003304445;
          ModuleFailFastForHRESULT(LastError, retaddr);
        }
      }
      _m_prefetchw((char *)v4 + 252);
      v8 = *((_DWORD *)v4 + 63);
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 63, v8 | 0x20000, v8);
      }
      while ( v9 != v8 );
      if ( (~v8 & 0x20000) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v19 = 0;
        v17 = &v14;
        v14 = 0x20000;
        v18 = 4;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULED_COMPOSITION_REASON,
          v7,
          2u,
          &v16);
      }
    }
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 < -1 )
    wil::details::in1diag3::Log_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v13);
  if ( !v2 )
  {
    if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v13);
    v11 = *(void (__fastcall **)(CScratchRenderTargetBitmap *__hidden))(*(_QWORD *)this + 32LL);
    if ( v11 == CScratchRenderTargetBitmap::FinalRelease )
      CScratchRenderTargetBitmap::FinalRelease(this);
    else
      v11(this);
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
    if ( v2 < -1 )
      wil::details::in1diag3::Log_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v13);
    if ( !v2 )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)this + 2) < -1 )
        wil::details::in1diag3::Log_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v13);
      v12 = *(void *(__fastcall **)(CGlobalDrawingContext *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
      if ( v12 == CGlobalDrawingContext::`vector deleting destructor' )
        CGlobalDrawingContext::`vector deleting destructor'(this, 1u);
      else
        v12(this, 1u);
    }
  }
  return (unsigned int)v2;
}
