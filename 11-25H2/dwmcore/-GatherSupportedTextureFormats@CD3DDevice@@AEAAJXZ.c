/*
 * XREFs of ?GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ @ 0x1801B27DC
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1801B1DA0 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckTextureFormatSupported@CD3DDevice@@AEAA_NW4DXGI_FORMAT@@@Z @ 0x1801B2A68 (-CheckTextureFormatSupported@CD3DDevice@@AEAA_NW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::GatherSupportedTextureFormats(CD3DDevice *this)
{
  unsigned int v1; // esi
  __int64 v4; // rcx
  bool v5; // di
  __int64 v6; // rcx
  __int64 v7; // rcx
  int *v8; // rdi
  __int64 v9; // rcx
  int v10; // r14d
  __int64 v11; // rcx
  int v12; // edi
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-10h]
  int v15; // [rsp+68h] [rbp+38h] BYREF
  int v16; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0;
  if ( CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R8_UNORM) )
    *((_DWORD *)this + 268) = 61;
  *((_DWORD *)this + 269) = CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_A8_UNORM) ? 65 : 87;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_R8G8B8A8_UNORM) )
  {
    v14 = 717;
LABEL_5:
    v1 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, v14, 0LL);
    return v1;
  }
  *((_DWORD *)this + 270) = 28;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8A8_UNORM) )
  {
    v14 = 727;
    goto LABEL_5;
  }
  *((_DWORD *)this + 272) = 87;
  if ( !CD3DDevice::CheckTextureFormatSupported(this, DXGI_FORMAT_B8G8R8X8_UNORM) )
  {
    v14 = 746;
    goto LABEL_5;
  }
  v4 = *((_QWORD *)this + 69);
  v15 = 0;
  *((_DWORD *)this + 273) = 88;
  v5 = (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v4 + 264LL))(v4, 7LL, &v15) >= 0 && v15;
  v6 = *((_QWORD *)this + 69);
  v16 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v6 + 232LL))(v6, 2LL, &v16) >= 0
    && (v16 & 0x8220) == 0x8220
    && v5 )
  {
    *((_DWORD *)this + 277) = 2;
  }
  v7 = *((_QWORD *)this + 69);
  v16 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v7 + 232LL))(v7, 10LL, &v16) >= 0
    && (v16 & 0x8220) == 0x8220
    && v5 )
  {
    v8 = (int *)((char *)this + 1108);
    *((_DWORD *)this + 275) = 10;
    if ( !*((_DWORD *)this + 277) )
      *v8 = 10;
  }
  else
  {
    v8 = (int *)((char *)this + 1108);
    v13 = *((_DWORD *)this + 277);
    if ( v13 )
    {
      *((_DWORD *)this + 275) = v13;
    }
    else
    {
      *v8 = 87;
      *((_DWORD *)this + 275) = 87;
    }
  }
  v9 = *((_QWORD *)this + 69);
  v16 = 0;
  v10 = 11;
  if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v9 + 232LL))(v9, 11LL, &v16) < 0
    || (v16 & 0x8220) != 0x8220 )
  {
    v10 = *v8;
  }
  *((_DWORD *)this + 276) = v10;
  v11 = *((_QWORD *)this + 69);
  v12 = 24;
  v16 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v11 + 232LL))(v11, 24LL, &v16) < 0
    || (v16 & 0x8220) != 0x8220 )
  {
    v12 = *((_DWORD *)this + 275);
  }
  *((_DWORD *)this + 274) = v12;
  return v1;
}
