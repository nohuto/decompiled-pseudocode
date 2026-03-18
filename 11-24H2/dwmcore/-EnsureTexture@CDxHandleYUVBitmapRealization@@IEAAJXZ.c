/*
 * XREFs of ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x18005CE9C
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x18005CE20 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180196A30 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x18024AD88 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x1800439AC (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x18005CC74 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPE.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D0B4 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureTexture(CDxHandleYUVBitmapRealization *this)
{
  unsigned int v1; // edi
  struct CD3DVidMemOnlyTexture **v2; // r14
  int Device; // eax
  __int64 v6; // r9
  int v7; // eax
  char **v8; // rcx
  CD3DDevice *v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-60h]
  CD3DDevice *v11; // [rsp+30h] [rbp-50h] BYREF
  char *v12; // [rsp+38h] [rbp-48h] BYREF
  struct D3D11_TEXTURE2D_DESC v13; // [rsp+40h] [rbp-40h] BYREF

  v1 = 0;
  v2 = (struct CD3DVidMemOnlyTexture **)((char *)this + 376);
  if ( *((_QWORD *)this + 47) )
    return v1;
  if ( *((_DWORD *)this + 70) )
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x25Du, 0LL);
    return v1;
  }
  v11 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v11);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 264), &v11);
  v1 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Device, 0x24Fu, 0LL);
    v9 = v11;
    if ( !v11 )
      return v1;
    goto LABEL_8;
  }
  memset(&v13, 0, sizeof(v13));
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v2);
  v7 = CD3DVidMemOnlyTexture::OpenSharedTexture(
         &v13,
         (__int64 **)v11,
         *((struct D3D11_SUBRESOURCE_DATA **)this + 32),
         v6,
         v10,
         v2);
  v1 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x257u, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v11);
    return v1;
  }
  v8 = (char **)((char *)*v2 + 48);
  v12 = (char *)this + 16;
  std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(v8, &v12);
  if ( v11 )
  {
    v9 = v11;
LABEL_8:
    CD3DDevice::Release(v9);
  }
  return v1;
}
