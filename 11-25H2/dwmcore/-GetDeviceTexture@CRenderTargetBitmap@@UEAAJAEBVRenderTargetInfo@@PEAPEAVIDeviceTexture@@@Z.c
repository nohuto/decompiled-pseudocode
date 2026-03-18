/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180147C20
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801462F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x180148150 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18018BF20 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18018C120 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 *     ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801B5730 (-GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801C1F00 (-RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D7560 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?RecordUse@CAtlasBitmapResource@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801E8F40 (-RecordUse@CAtlasBitmapResource@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801EF5A0 (-GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18021E5F0 (-GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAdapterLuid@CRenderTargetBitmap@@UEBA?AU_LUID@@XZ @ 0x18003F700 (-GetAdapterLuid@CRenderTargetBitmap@@UEBA-AU_LUID@@XZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18003F750 (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?GetDisplayId@CRenderTargetBitmap@@UEBA?AVDisplayId@@XZ @ 0x18003F7B0 (-GetDisplayId@CRenderTargetBitmap@@UEBA-AVDisplayId@@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18018B7A0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18018C0C0 (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802D6E70 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     ?QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D6F70 (-QueryInterface@CDeviceTextureTarget@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  __int64 v6; // rcx
  __int64 (*v7)(void); // rax
  char IsProtected; // al
  CComposition *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  int BitmapInternal; // eax
  CComposition *v14; // rcx
  int v15; // ebx
  __int64 (__fastcall *v17)(CRenderTargetBitmap *, struct IDeviceTexture **); // rax
  CRenderTargetBitmap *v18; // rcx
  struct _LUID AdapterLuid; // rax
  int v20; // r12d
  _DWORD *(__fastcall *v21)(__int64, __int64 *); // rax
  int *DisplayId; // rax
  int v23; // eax
  char (__fastcall *v24)(CRenderTargetBitmap *); // rax
  CRenderTargetBitmap *v25; // rcx
  char IsHardwareProtected; // al
  unsigned int v27; // ebx
  unsigned int v28; // eax
  __int64 (__fastcall ***v29)(_QWORD, GUID *, struct IDeviceTexture **); // rcx
  __int64 (__fastcall *v30)(_QWORD, GUID *, struct IDeviceTexture **); // rax
  int Interface; // eax
  struct IBitmapResource *v32; // rbx
  __int64 (__fastcall *v33)(struct IBitmapResource *, __int64 *); // rdi
  int v34; // eax
  int v35; // eax
  struct IBitmapResource *StockBlackBitmap; // rax
  struct IBitmapResource *v37; // rdi
  __int64 (__fastcall *v38)(struct IBitmapResource *, __int64 *); // rbx
  int v39; // eax
  __int64 v40; // [rsp+70h] [rbp+40h] BYREF
  struct IDeviceTexture *v41; // [rsp+80h] [rbp+50h] BYREF

  *a3 = 0LL;
  if ( !*((_QWORD *)this + 4) )
  {
    v27 = -2003292412;
    v28 = 481;
    goto LABEL_34;
  }
  if ( *((_BYTE *)this + 40) )
  {
    v17 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, struct IDeviceTexture **))(*((_QWORD *)this - 1) + 64LL);
    v18 = (CRenderTargetBitmap *)((char *)this - 8);
    if ( (char *)v17 == (char *)CRenderTargetBitmap::GetAdapterLuid )
      AdapterLuid = CRenderTargetBitmap::GetAdapterLuid(v18, &v41);
    else
      AdapterLuid = (struct _LUID)v17(v18, &v41);
    if ( *(_DWORD *)a2 == *(_DWORD *)AdapterLuid.LowPart
      && *((_DWORD *)a2 + 1) == *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL)
      && ((v20 = *((_DWORD *)a2 + 2),
           v21 = *(_DWORD *(__fastcall **)(__int64, __int64 *))(*(_QWORD *)this + 48LL),
           (char *)v21 != (char *)CRenderTargetBitmap::GetDisplayId)
        ? (DisplayId = v21((__int64)this, &v40))
        : (DisplayId = CRenderTargetBitmap::GetDisplayId((__int64)this, &v40)),
          (v23 = *DisplayId, v23 == -1) || v23 == v20 || v20 == -3) )
    {
      v24 = *(char (__fastcall **)(CRenderTargetBitmap *))(*((_QWORD *)this - 1) + 56LL);
      v25 = (CRenderTargetBitmap *)((char *)this - 8);
      if ( v24 == CRenderTargetBitmap::IsHardwareProtected )
        IsHardwareProtected = CRenderTargetBitmap::IsHardwareProtected(v25);
      else
        IsHardwareProtected = v24(v25);
      if ( !IsHardwareProtected || *((_BYTE *)a2 + 20) )
        goto LABEL_3;
      v27 = -2147024891;
      v28 = 475;
    }
    else
    {
      v27 = -2003304287;
      v28 = 470;
    }
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, v28, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0xB4u, 0LL);
    return v27;
  }
LABEL_3:
  v6 = *((_QWORD *)this + 4);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 160LL);
  if ( (char *)v7 == (char *)CDeviceTextureTarget::IsProtected )
    IsProtected = CDeviceTextureTarget::IsProtected(v6);
  else
    IsProtected = v7();
  if ( IsProtected && *((_BYTE *)g_pComposition + 6490) )
  {
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v9);
    v40 = 0LL;
    v37 = StockBlackBitmap;
    v38 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v40);
    v39 = v38(v37, &v40);
    v15 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0xC8u, 0LL);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v40 + 96LL))(
              v40,
              a2,
              a3);
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xCAu, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v40);
  }
  else if ( *((_BYTE *)this + 40) )
  {
    v29 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDeviceTexture **))*((_QWORD *)this + 4);
    v30 = **v29;
    if ( (char *)v30 == (char *)CDeviceTextureTarget::QueryInterface )
      Interface = CDeviceTextureTarget::QueryInterface(v29, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, a3);
    else
      Interface = v30(v29, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, a3);
    v15 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Interface, 0xC0u, 0LL);
  }
  else
  {
    *a3 = 0LL;
    v10 = *((unsigned __int8 *)a2 + 20);
    v11 = *((unsigned int *)a2 + 2);
    v12 = *(_QWORD *)a2;
    LOBYTE(v40) = 0;
    v41 = 0LL;
    BitmapInternal = CD2DBitmapCache::GetBitmapInternal((char *)this - 88, v12, v11, v10, &v41, &v40);
    v15 = BitmapInternal;
    if ( BitmapInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x64u, 0LL);
    }
    else if ( (_BYTE)v40 )
    {
      v40 = 0LL;
      v32 = CComposition::GetStockBlackBitmap(v14);
      v33 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)v32 + 64LL);
      if ( v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      v34 = v33(v32, &v40);
      v15 = v34;
      if ( v34 >= 0 )
      {
        v35 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v40 + 96LL))(
                v40,
                a2,
                a3);
        v15 = v35;
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x6Eu, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v40);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x6Cu, 0LL);
        if ( v40 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    else
    {
      *a3 = v41;
      v41 = 0LL;
    }
    if ( v41 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v41 + 16LL))(v41);
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xBCu, 0LL);
  }
  return (unsigned int)v15;
}
