/*
 * XREFs of ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18006108C
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010B4B0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180061250 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ @ 0x180061270 (-GetPixelFormatInfo@CCachedVisualImage@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z @ 0x1800614F4 (--0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CreateCachedTarget(
        CCachedVisualImage *this,
        struct D2D_SIZE_U a2,
        const struct RenderTargetInfo *a3,
        struct CCachedVisualImage::CCachedTarget **a4)
{
  struct IRenderTargetBitmap *v4; // rbx
  char *v6; // rcx
  void (__fastcall *v9)(char *, int *); // rax
  int Device; // eax
  unsigned int v11; // esi
  const struct CResourceTag *v12; // rax
  int v13; // eax
  CCachedVisualImage::CCachedTarget *v14; // rax
  CD3DDevice *v16; // [rsp+40h] [rbp-19h] BYREF
  struct IRenderTargetBitmap *v17; // [rsp+48h] [rbp-11h] BYREF
  struct D2D_SIZE_U v18; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-1h] BYREF
  int v20; // [rsp+68h] [rbp+Fh] BYREF
  int v21; // [rsp+70h] [rbp+17h]

  v16 = 0LL;
  v4 = 0LL;
  v18 = a2;
  v6 = (char *)this + 72;
  v17 = 0LL;
  v9 = *(void (__fastcall **)(char *, int *))(*(_QWORD *)v6 + 24LL);
  if ( (char *)v9 == (char *)CCachedVisualImage::GetPixelFormatInfo )
    CCachedVisualImage::GetPixelFormatInfo(v6, &v20);
  else
    v9(v6, &v20);
  *a4 = 0LL;
  if ( RenderTargetInfo::IsHDR(a3) )
  {
    v20 = 10;
    v21 = 1;
  }
  else
  {
    v21 = 0;
    v20 = 87;
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v16);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)a3, &v16);
  v11 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x3ADu, 0LL);
  }
  else
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v17);
    v12 = (const struct CResourceTag *)(*(__int64 (__fastcall **)(CCachedVisualImage *, _BYTE *))(*(_QWORD *)this + 200LL))(
                                         this,
                                         v19);
    v13 = CD3DDevice::CreateRenderTargetBitmap((__int64)v16, v12, &v18, (struct PixelFormatInfo *)&v20, a3, 0, &v17);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x3B4u, 0LL);
      v4 = v17;
    }
    else
    {
      v14 = (CCachedVisualImage::CCachedTarget *)MIDL_user_allocate(0x40uLL);
      v4 = v17;
      if ( v14 )
        v14 = (CCachedVisualImage::CCachedTarget *)CCachedVisualImage::CCachedTarget::CCachedTarget(v14, this, v17);
      *a4 = v14;
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v16 )
    CD3DDevice::Release(v16);
  return v11;
}
