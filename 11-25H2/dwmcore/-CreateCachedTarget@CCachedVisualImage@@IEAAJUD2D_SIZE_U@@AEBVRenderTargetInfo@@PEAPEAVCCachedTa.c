/*
 * XREFs of ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18003F8E8
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z @ 0x18003F0D8 (--0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180040190 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ @ 0x180040710 (-GetPixelFormatInfo@CCachedVisualImage@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CreateCachedTarget(
        CCachedVisualImage *this,
        struct D2D_SIZE_U a2,
        const struct RenderTargetInfo *a3,
        struct CCachedVisualImage::CCachedTarget **a4)
{
  struct IRenderTargetBitmap *v4; // rbx
  char *v7; // rcx
  void (__fastcall *v9)(char *, int *); // rax
  struct _LUID v10; // rdx
  int Device; // eax
  unsigned int v12; // esi
  __int64 v13; // rax
  int v14; // eax
  CCachedVisualImage::CCachedTarget *v15; // rax
  struct IRenderTargetBitmap *v17; // [rsp+40h] [rbp-19h] BYREF
  struct CD3DDevice *v18; // [rsp+48h] [rbp-11h] BYREF
  struct D2D_SIZE_U v19; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v20[16]; // [rsp+58h] [rbp-1h] BYREF
  int v21; // [rsp+68h] [rbp+Fh] BYREF
  int v22; // [rsp+70h] [rbp+17h]

  v19 = a2;
  v4 = 0LL;
  v17 = 0LL;
  v7 = (char *)this + 72;
  v9 = *(void (__fastcall **)(char *, int *))(*(_QWORD *)v7 + 24LL);
  if ( (char *)v9 == (char *)CCachedVisualImage::GetPixelFormatInfo )
    CCachedVisualImage::GetPixelFormatInfo(v7, &v21);
  else
    v9(v7, &v21);
  *a4 = 0LL;
  if ( RenderTargetInfo::IsHDR(a3) )
  {
    v21 = 10;
    v22 = 1;
  }
  else
  {
    v22 = 0;
    v21 = 87;
  }
  v10 = *(struct _LUID *)a3;
  v18 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v10, &v18);
  v12 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x3ADu, 0LL);
  }
  else
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v17);
    v13 = (*(__int64 (__fastcall **)(CCachedVisualImage *, _BYTE *))(*(_QWORD *)this + 200LL))(this, v20);
    v14 = CD3DDevice::CreateRenderTargetBitmap(v18, v13, &v19, &v21, a3, 0, &v17);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x3B4u, 0LL);
      v4 = v17;
    }
    else
    {
      v15 = (CCachedVisualImage::CCachedTarget *)MIDL_user_allocate(0x40uLL);
      v4 = v17;
      if ( v15 )
        v15 = CCachedVisualImage::CCachedTarget::CCachedTarget(v15, this, v17);
      *a4 = v15;
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v18 )
    CD3DDevice::Release(v18);
  return v12;
}
