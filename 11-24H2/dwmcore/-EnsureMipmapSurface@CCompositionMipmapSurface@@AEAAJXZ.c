/*
 * XREFs of ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18029770C
 * Callers:
 *     ?OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180297970 (-OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x1800439AC (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180157638 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180277378 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1802C878C (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 */

__int64 __fastcall CCompositionMipmapSurface::EnsureMipmapSurface(struct _LUID *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rsi
  CDeviceManager *v4; // rcx
  int ExistingDevice; // eax
  struct D3D11_SUBRESOURCE_DATA *v6; // r8
  int v7; // eax
  char **v8; // rcx
  struct CD3DDevice *v10; // [rsp+38h] [rbp-19h] BYREF
  struct _LUID *v11; // [rsp+40h] [rbp-11h] BYREF
  int v12; // [rsp+4Ch] [rbp-5h]
  _DWORD v13[12]; // [rsp+58h] [rbp+7h] BYREF
  const char *v14; // [rsp+88h] [rbp+37h]
  int v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+94h] [rbp+43h]

  v1 = 0;
  v2 = (__int64 *)&this[21];
  if ( !*(_QWORD *)&this[21] )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v10);
    ExistingDevice = CDeviceManager::GetExistingDevice(v4, this[15], &v10);
    v1 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ExistingDevice, 0x113u, 0LL);
    }
    else
    {
      v13[6] = 0;
      v13[7] = 0;
      v13[9] = 0;
      v13[10] = 0;
      v14 = "DWM Composition Mipmap Surface";
      v16 = v12;
      v13[0] = this[16].LowPart;
      v13[1] = this[16].HighPart;
      v13[2] = this[17].LowPart;
      v13[4] = this[17].HighPart;
      v15 = 30;
      v13[3] = 1;
      v13[5] = 1;
      v13[8] = 8;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
      v7 = CD3DSurface::Create(
             (struct CD3DDevice *)((char *)v10 + 1120),
             (const struct DWM_TEXTURE2D_DESC *)v13,
             v6,
             (struct CD3DSurface **)v2);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x125u, 0LL);
      }
      else
      {
        v8 = (char **)(*v2 + 48);
        v11 = this + 10;
        std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(v8, &v11);
        LOBYTE(this[20].LowPart) = 1;
      }
    }
    Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(&v10);
  }
  return v1;
}
