/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x18024AD88
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801A6F44 (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x180225D60 (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x1800439AC (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x18005CE9C (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D0B4 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18005D0D8 (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1801FA7B0 (-GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA-AU_LUID@@XZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        CDxHandleYUVBitmapRealization *this,
        struct IYUVSwapChainRealization *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char *v6; // rsi
  struct _LUID *AdapterLuid; // rax
  int Device; // eax
  __int64 v9; // r8
  int v10; // eax
  char **v11; // rcx
  struct CD3DDevice *v13; // [rsp+58h] [rbp+10h] BYREF
  char *v14; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    v13 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v13);
    AdapterLuid = (struct _LUID *)CDxHandleYUVBitmapRealization::GetAdapterLuid(
                                    (CDxHandleYUVBitmapRealization *)((char *)this + 328),
                                    &v14);
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *AdapterLuid, &v13);
    v5 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, 0xABu, 0LL);
    }
    else
    {
      v6 = (char *)this + 376;
      wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((struct CMILPoolResource **)this + 47);
      v10 = CD3DVidMemOnlyTexture::Create(
              *(struct ID3D11Texture2D **)(*((_QWORD *)a2 + 6) + 120LL),
              *((_DWORD *)this + 70),
              v9,
              v13,
              (struct CD3DVidMemOnlyTexture **)this + 47);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v11 = (char **)(*(_QWORD *)v6 + 48LL);
        v14 = (char *)this + 16;
        std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(v11, &v14);
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v13);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xB1u, 0LL);
    }
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v13);
    return v5;
  }
  v4 = CDxHandleYUVBitmapRealization::EnsureTexture(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (char *)this + 376;
LABEL_8:
    *((_BYTE *)this + 393) = (*(_DWORD *)(*(_QWORD *)v6 + 168LL) & 0x400000) == 0;
    return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xA0u, 0LL);
  return v5;
}
