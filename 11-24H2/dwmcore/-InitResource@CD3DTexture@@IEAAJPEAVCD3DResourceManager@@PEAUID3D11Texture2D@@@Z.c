/*
 * XREFs of ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x18020CAE0
 * Callers:
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x18005D224 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x18004554C (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DTexture::InitResource(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3)
{
  unsigned int v3; // edi
  int v4; // r14d
  unsigned int i; // ebp
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v11; // edx
  __int128 v12; // [rsp+30h] [rbp-68h] BYREF
  enum DXGI_FORMAT v13[4]; // [rsp+40h] [rbp-58h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+58h] [rbp-40h]

  v3 = 0;
  v4 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 46) )
    {
      *((_DWORD *)this + 28) = v4;
      *((_BYTE *)this + 118) = 1;
      *((_QWORD *)this + 5) = a2;
      CD3DResourceManager::RegisterResource(a2, this);
      *((_QWORD *)this + 15) = a3;
      ((void (__fastcall *)(struct ID3D11Texture2D *))a3->lpVtbl->AddRef)(a3);
      return v3;
    }
    v14 = 0LL;
    v15 = 0;
    lpVtbl = a3->lpVtbl;
    v12 = 0LL;
    *(_OWORD *)v13 = 0LL;
    ((void (__fastcall *)(struct ID3D11Texture2D *, __int128 *))lpVtbl->GetDesc)(a3, &v12);
    v11 = GetPixelFormatSize(v13[0]) >> 3;
    if ( !v11 )
      break;
    v4 += v11 * v12 * DWORD1(v12);
  }
  v3 = -2003292288;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, 0x85u, 0LL);
  return v3;
}
