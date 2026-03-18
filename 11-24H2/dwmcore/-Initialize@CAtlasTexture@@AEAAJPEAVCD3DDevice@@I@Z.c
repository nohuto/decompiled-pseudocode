/*
 * XREFs of ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x1801CD084
 * Callers:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1801CCFB0 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801BF7A0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x1801CD22C (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasTexture::Initialize(CAtlasTexture *this, struct CD3DDevice *a2, UINT32 a3)
{
  __int64 v3; // rax
  int v7; // eax
  struct IRenderTargetBitmap *v8; // rbx
  unsigned int v9; // edi
  void *v10; // rax
  void *v11; // rcx
  void *v12; // rcx
  _DWORD v14[4]; // [rsp+40h] [rbp-40h] BYREF
  const char *v15; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  int v20; // [rsp+70h] [rbp-10h]
  char v21; // [rsp+74h] [rbp-Ch]
  __int16 v22; // [rsp+75h] [rbp-Bh]
  char v23; // [rsp+77h] [rbp-9h]
  struct IRenderTargetBitmap *v24; // [rsp+A8h] [rbp+28h] BYREF
  struct D2D_SIZE_U v25; // [rsp+B8h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 117);
  v24 = 0LL;
  v14[2] = 0;
  v18 = -1;
  v19 = 0;
  v20 = 0;
  v17 = v3;
  v22 = 0;
  v23 = 0;
  v14[0] = 87;
  v14[1] = 1;
  v25.width = 2048;
  v25.height = a3;
  v21 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  v16 = 17;
  v15 = "DWM Atlas surface";
  v7 = CD3DDevice::CreateRenderTargetBitmap(
         (__int64)a2,
         (const struct CResourceTag *)&v15,
         &v25,
         (struct PixelFormatInfo *)v14,
         (struct RenderTargetInfo *)&v17,
         0,
         &v24);
  v8 = v24;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x47u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, CAtlasTexture *))(*(_QWORD *)v24 + 72LL))(v24, this);
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 1, &v24);
    *((_DWORD *)this + 6) = a3 - 1;
    *((_DWORD *)this + 7) = a3 - 1;
    v10 = MIDL_user_allocate(saturated_mul(a3 - 1, 8uLL));
    v11 = (void *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v10;
    if ( v11 )
      operator delete(v11);
    v12 = (void *)*((_QWORD *)this + 2);
    if ( v12 )
    {
      memset_0(v12, 0, 8LL * *((unsigned int *)this + 6));
      CAtlasTexture::GenerateWhitePixel(this);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x58u, 0LL);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
