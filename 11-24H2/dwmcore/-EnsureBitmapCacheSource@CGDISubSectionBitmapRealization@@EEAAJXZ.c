/*
 * XREFs of ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802D7320
 * Callers:
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802D7184 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18002432C (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x180025224 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18005A680 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MapSection@CSectionBitmapRealization@@IEAAJXZ @ 0x180197190 (-MapSection@CSectionBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGDISubSectionBitmapRealization::EnsureBitmapCacheSource(CGDISubSectionBitmapRealization *this)
{
  unsigned int v1; // ebx
  struct ID2DBitmapCacheSource **v2; // r14
  INT v4; // eax
  INT v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  unsigned __int8 PixelFormatSize; // al
  __int64 v10; // rdx
  unsigned int v11; // edi
  unsigned int RequiredBufferSize; // eax
  unsigned int v13; // ebx
  int v14; // eax
  struct ID2DBitmapCacheSource *v15; // rcx
  int v16; // eax
  _DWORD v18[4]; // [rsp+40h] [rbp-20h] BYREF
  WICRect v19; // [rsp+50h] [rbp-10h] BYREF
  struct IBitmapSource *v20; // [rsp+80h] [rbp+20h] BYREF

  v1 = 0;
  v2 = (struct ID2DBitmapCacheSource **)((char *)this + 344);
  if ( !*((_QWORD *)this + 43) )
  {
    v4 = *((_DWORD *)this + 90);
    if ( v4 )
    {
      v5 = *((_DWORD *)this + 91);
      if ( v5 )
      {
        v6 = *((_DWORD *)this + 93);
        v19.X = 0;
        v19.Y = 0;
        v19.Width = v4;
        v18[1] = *((_DWORD *)this + 26);
        v7 = *((_DWORD *)this + 38);
        v19.Height = v5;
        v18[2] = v7;
        v18[0] = v6;
        v8 = CSectionBitmapRealization::MapSection((HANDLE *)this);
        v1 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x94u, 0LL);
        }
        else
        {
          PixelFormatSize = GetPixelFormatSize(v6);
          v11 = *((_DWORD *)this + 105) * v10 + *((_DWORD *)this + 104) * (PixelFormatSize >> 3);
          RequiredBufferSize = GetRequiredBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 93), v10, &v19);
          v20 = 0LL;
          v13 = RequiredBufferSize;
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v20);
          v14 = HrCreateBitmapFromMemoryEx(
                  *((_DWORD *)this + 90),
                  *((_DWORD *)this + 91),
                  (const struct PixelFormatInfo *)v18,
                  *((_DWORD *)this + 92),
                  v13,
                  (unsigned __int8 *)(*((_QWORD *)this + 47) + v11),
                  0LL,
                  &v20);
          v1 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xA6u, 0LL);
          }
          else
          {
            v15 = *v2;
            *v2 = 0LL;
            if ( v15 )
              (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v15 + 16LL))(v15);
            v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct ID2DBitmapCacheSource **))v20)(
                    v20,
                    &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                    v2);
            v1 = v16;
            if ( v16 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xA8u, 0LL);
            else
              CD2DBitmapCache::InitializeCache(this, *v2);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
        }
      }
    }
  }
  return v1;
}
