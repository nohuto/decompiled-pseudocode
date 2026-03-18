/*
 * XREFs of ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010
 * Callers:
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180108D70 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180147598 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAVCSharedDirect3DResources@1@PEAPEAV1@@Z @ 0x1800E28F0 (-Create@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAVCSharedDirect3DResources@1@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCDrawListEntryBatch@@$0A@@@QEAAJPEFBQEAVCDrawListEntryBatch@@I@Z @ 0x1800E2A20 (-AddMultipleAndSet@-$DynArray@PEAVCDrawListEntryBatch@@$0A@@@QEAAJPEFBQEAVCDrawListEntryBatch@@I.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180109FF0 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ @ 0x18010A620 (-GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x18010B3D0 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x180146F30 (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180146F60 (--1-$out_param_t@V-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@@de.c)
 *     ??1?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ @ 0x180146FB0 (--1-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x180187E30 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18018801C (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ??0?$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGraph@@@Z @ 0x180188140 (--0-$com_ptr_t@VCBlurRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCBlurRenderingGr.c)
 *     ??1?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B1664 (--1-$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801B1910 (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAA.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1801D5204 (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 *     ?InternalRelease@?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E2420 (-InternalRelease@-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUPixelFormatInfo@@XZ @ 0x1802CDA80 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUPix.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::EnsureDrawListBatch(
        CD2DContext *this,
        struct CHwLightCollectionBuffer *a2,
        struct ClipPlaneInfoRef *a3)
{
  __int64 v3; // rbx
  int v7; // edi
  unsigned int v8; // r15d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  CDrawListBatchManager *v13; // rcx
  struct CDrawListEntryBatch *v14; // rcx
  __int64 v15; // rax
  struct IDrawListStateSink *v16; // rcx
  __int64 v17; // rcx
  struct CDrawListEntryBatch *v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rax
  void *v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // r15
  void (__fastcall *v27)(__int64, struct CDrawListEntryBatch **); // rax
  float v28; // xmm1_4
  int v29; // eax
  __int64 (__fastcall *v30)(__int64, void **); // rax
  int v31; // xmm0_4
  void **v32; // rax
  __int64 v33; // rcx
  __int64 (__fastcall *v34)(__int64, void **); // rax
  __int64 PixelFormatInfo; // rax
  int v36; // ebx
  int v37; // eax
  float v38; // xmm0_4
  int v39; // eax
  _QWORD *v40; // rdi
  struct CD3DDevice *v41; // rcx
  int v42; // eax
  int v43; // eax
  CDrawListBatchManager *v44; // rcx
  struct CDrawListEntryBatch *v45; // rcx
  __int64 v46; // rax
  struct IDrawListStateSink *v47; // rcx
  __int64 v48; // rcx
  struct CDrawListEntryBatch *v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  struct CDrawListEntryBatch *v54; // [rsp+30h] [rbp-30h] BYREF
  void *v55; // [rsp+38h] [rbp-28h] BYREF
  struct CBatchCommand *v56; // [rsp+40h] [rbp-20h] BYREF
  int v57; // [rsp+48h] [rbp-18h]
  bool IsHardwareProtected; // [rsp+4Ch] [rbp-14h]
  __int16 v59; // [rsp+4Dh] [rbp-13h]
  char v60; // [rsp+4Fh] [rbp-11h]
  void *retaddr; // [rsp+98h] [rbp+38h]

  v3 = *((_QWORD *)this + 17);
  if ( !v3 )
  {
    v12 = *((_QWORD *)CD2DContext::GetCurrentTargetNoRef(this) + 3);
    if ( *(_QWORD *)(v10 + 152) )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v21 = v10 + 1096;
    if ( !v11 )
      v21 = 1112LL;
    if ( *(_DWORD *)v21 )
    {
      v20 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x10Cu, 0LL);
      v8 = -2003304307;
    }
    else
    {
      if ( *(_DWORD *)(v10 + 112) )
        goto LABEL_22;
      v54 = 0LL;
      if ( v11 )
        v41 = (struct CD3DDevice *)(v10 - 16);
      else
        v41 = 0LL;
      v42 = CDrawListEntryBatch::Create(
              v41,
              *((struct CDrawListEntryBatch::CSharedDirect3DResources **)this + 16),
              &v54);
      v20 = v42;
      v8 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x113u, 0LL);
      }
      else
      {
        v55 = v54;
        v43 = DynArray<CDrawListEntryBatch *,0>::AddMultipleAndSet((__int64)this + 88, &v55);
        v20 = v43;
        v8 = v43;
        if ( v43 >= 0 )
        {
          v54 = 0LL;
          wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(&v54);
LABEL_22:
          v22 = (void *)*((_QWORD *)this + 17);
          *((_QWORD *)this + 17) = 0LL;
          if ( v22 )
            CMILRefCountBaseT<ID2D1PrivateCompositorRenderer,CMilObjectDeleter>::InternalRelease(v22);
          v23 = (unsigned int)(*((_DWORD *)this + 28) - 1);
          *((_QWORD *)this + 17) = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v23);
          v24 = *((_DWORD *)this + 30);
          *((_DWORD *)this + 28) = v23;
          if ( v24 >= (unsigned int)v23 )
            v24 = v23;
          *((_DWORD *)this + 30) = v24;
          ++*((_DWORD *)this + 40);
          v25 = *((_DWORD *)this + 8);
          v26 = *((_QWORD *)this + 17);
          *(_DWORD *)(v26 + 40) = v25;
          *(_DWORD *)(v26 + 44) = v25;
          v27 = *(void (__fastcall **)(__int64, struct CDrawListEntryBatch **))(*(_QWORD *)v12 + 88LL);
          if ( (char *)v27 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
            IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v12, &v54);
          else
            v27(v12, &v54);
          v28 = (float)(int)v54;
          v29 = HIDWORD(v54);
          *(_QWORD *)(v26 + 48) = 0LL;
          *(float *)(v26 + 56) = v28;
          *(float *)(v26 + 60) = (float)v29;
          v30 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 120LL);
          if ( (char *)v30 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
          {
            IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid(v12 - 256, &v55);
            v31 = *(_DWORD *)(v12 + 28);
            LODWORD(v56) = *(_DWORD *)(v12 - 28);
            HIDWORD(v56) = *(_DWORD *)(v12 + 24);
            v57 = v31;
            IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(v12 - 256));
            v59 = 0;
            v60 = 0;
            v32 = &v55;
          }
          else
          {
            v32 = (void **)v30(v12, &v55);
          }
          v33 = v12 + 8;
          *(_OWORD *)(v26 + 80) = *(_OWORD *)v32;
          *(_QWORD *)(v26 + 96) = v32[2];
          v34 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)(v12 + 8) + 24LL);
          if ( (char *)v34 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
            PixelFormatInfo = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v33, &v55);
          else
            PixelFormatInfo = v34(v33, &v55);
          v36 = 0;
          *(_QWORD *)(v26 + 104) = *(_QWORD *)PixelFormatInfo;
          *(_DWORD *)(v26 + 112) = *(_DWORD *)(PixelFormatInfo + 8);
          v37 = (int)v54;
          *(_DWORD *)(v26 + 72) = -1082130432;
          *(_DWORD *)(v26 + 76) = 1065353216;
          v38 = (float)v37;
          v39 = HIDWORD(v54);
          *(float *)(v26 + 64) = 2.0 / v38;
          *(float *)(v26 + 68) = -2.0 / (float)v39;
          v40 = (_QWORD *)*((_QWORD *)this + 17);
          if ( a2 != (struct CHwLightCollectionBuffer *)v40[4] )
          {
            ++dword_1803FA73C;
            v44 = (CDrawListBatchManager *)(v40[2] + 24LL);
            v54 = 0LL;
            v55 = &v54;
            v56 = 0LL;
            LOBYTE(v57) = 1;
            v36 = CDrawListBatchManager::CreateBatchCommand(v44, &v56);
            v8 = v36;
            wil::details::out_param_t<std::unique_ptr<CBatchCommand>>::~out_param_t<std::unique_ptr<CBatchCommand>>(&v55);
            if ( v36 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0xC0u, 0LL);
              if ( v54 )
              {
                std::default_delete<CBatchCommand>::operator()(v50, v54);
                goto LABEL_50;
              }
            }
            else
            {
              v45 = v54;
              *(_DWORD *)v54 = 2;
              wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>(
                (char *)v45 + 8,
                a2);
              v46 = v40[2];
              v47 = *(struct IDrawListStateSink **)(v46 + 160);
              if ( v47 )
              {
                CBatchOptimizer::AddStateSettingCommand(v47);
              }
              else
              {
                v51 = CDrawListBatchManager::AddBatchCommand(v46 + 24);
                v36 = v51;
                v8 = v51;
                if ( v51 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0xCAu, 0LL);
                  std::unique_ptr<CBatchCommand>::~unique_ptr<CBatchCommand>(&v54);
                  goto LABEL_50;
                }
              }
              v49 = v54;
              v40[4] = a2;
              if ( v49 )
                std::default_delete<CBatchCommand>::operator()(v48, v49);
            }
          }
          v8 = v36;
          if ( v36 >= 0 )
          {
            if ( (struct ClipPlaneInfoRef *)v40[3] != a3 )
            {
              if ( a3 )
                (**(void (__fastcall ***)(struct ClipPlaneInfoRef *))a3)(a3);
              v55 = (void *)v40[3];
              v40[3] = a3;
              Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::InternalRelease(&v55);
            }
            return v8;
          }
LABEL_50:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x1E1u, 0LL);
          return v8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x115u, 0LL);
      }
      wil::com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>::~com_ptr_t<CDrawListEntryBatch,wil::err_returncode_policy>(&v54);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x1DFu, 0LL);
    return v8;
  }
  if ( *(struct ClipPlaneInfoRef **)(v3 + 24) == a3 )
  {
    v7 = 0;
    if ( a2 != *(struct CHwLightCollectionBuffer **)(v3 + 32) )
    {
      ++dword_1803FA73C;
      v13 = (CDrawListBatchManager *)(*(_QWORD *)(v3 + 16) + 24LL);
      v54 = 0LL;
      v55 = &v54;
      v56 = 0LL;
      LOBYTE(v57) = 1;
      v7 = CDrawListBatchManager::CreateBatchCommand(v13, &v56);
      v8 = v7;
      wil::details::out_param_t<std::unique_ptr<CBatchCommand>>::~out_param_t<std::unique_ptr<CBatchCommand>>(&v55);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xC0u, 0LL);
        if ( v54 )
        {
          std::default_delete<CBatchCommand>::operator()(v19, v54);
          goto LABEL_15;
        }
      }
      else
      {
        v14 = v54;
        *(_DWORD *)v54 = 2;
        wil::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>::com_ptr_t<CBlurRenderingGraph,wil::err_returncode_policy>(
          (char *)v14 + 8,
          a2);
        v15 = *(_QWORD *)(v3 + 16);
        v16 = *(struct IDrawListStateSink **)(v15 + 160);
        if ( v16 )
        {
          CBatchOptimizer::AddStateSettingCommand(v16);
        }
        else
        {
          v53 = CDrawListBatchManager::AddBatchCommand(v15 + 24);
          v7 = v53;
          v8 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0xCAu, 0LL);
            std::unique_ptr<CBatchCommand>::~unique_ptr<CBatchCommand>(&v54);
            goto LABEL_15;
          }
        }
        v18 = v54;
        *(_QWORD *)(v3 + 32) = a2;
        if ( v18 )
          std::default_delete<CBatchCommand>::operator()(v17, v18);
      }
    }
    v8 = v7;
    if ( v7 >= 0 )
      return v8;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1F2u, 0LL);
    return v8;
  }
  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v52 = CD2DContext::EnsureDrawListBatch(this, a2, a3);
  v8 = v52;
  if ( v52 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x1EEu, 0LL);
  return v8;
}
