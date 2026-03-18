/*
 * XREFs of ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801C79DC
 * Callers:
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801C5F30 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x1801C7960 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180256154 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x18006D62C (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x1801C7BE8 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPE.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C7CAC (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureTexture(CDxHandleYUVBitmapRealization *this)
{
  unsigned int v1; // edi
  struct CD3DVidMemOnlyTexture **v2; // r14
  struct _LUID v5; // rdx
  int Device; // eax
  bool v7; // r9
  int v8; // eax
  char **v9; // rcx
  CD3DDevice *v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-60h]
  struct CD3DDevice *v12; // [rsp+30h] [rbp-50h] BYREF
  char *v13; // [rsp+38h] [rbp-48h] BYREF
  struct D3D11_TEXTURE2D_DESC v14; // [rsp+40h] [rbp-40h] BYREF

  v1 = 0;
  v2 = (struct CD3DVidMemOnlyTexture **)((char *)this + 376);
  if ( *((_QWORD *)this + 47) )
    return v1;
  if ( *((_DWORD *)this + 70) )
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x267u, 0LL);
    return v1;
  }
  v5 = (struct _LUID)*((_QWORD *)this + 33);
  v12 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v5, &v12);
  v1 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0x259u, 0LL);
    v10 = v12;
    if ( !v12 )
      return v1;
    goto LABEL_8;
  }
  memset(&v14, 0, sizeof(v14));
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v2);
  v8 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v14, v12, *((void **)this + 32), v7, v11, v2);
  v1 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x261u, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v12);
    return v1;
  }
  v9 = (char **)((char *)*v2 + 48);
  v13 = (char *)this + 16;
  std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(v9, &v13);
  if ( v12 )
  {
    v10 = v12;
LABEL_8:
    CD3DDevice::Release(v10);
  }
  return v1;
}
