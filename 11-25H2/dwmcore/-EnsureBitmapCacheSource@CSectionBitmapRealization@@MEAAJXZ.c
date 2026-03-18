/*
 * XREFs of ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x18018A660
 * Callers:
 *     ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18018A450 (-GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180040E14 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1801875C8 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1801887CC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MapSection@CSectionBitmapRealization@@IEAAJXZ @ 0x180211818 (-MapSection@CSectionBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSectionBitmapRealization::EnsureBitmapCacheSource(CSectionBitmapRealization *this)
{
  unsigned int v1; // esi
  struct ID2DBitmapCacheSource **v2; // r14
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  unsigned __int8 *v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // edx
  int v12; // eax
  struct ID2DBitmapCacheSource *v13; // rcx
  struct IBitmapSource *v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  struct IBitmapSource *v17; // rcx
  _DWORD v18[4]; // [rsp+40h] [rbp-28h] BYREF
  struct IBitmapSource *v19; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (struct ID2DBitmapCacheSource **)((char *)this + 344);
  if ( !*((_QWORD *)this + 43) )
  {
    v5 = *((_DWORD *)this + 90);
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 91);
      if ( v6 )
      {
        v18[0] = *((_DWORD *)this + 93);
        v18[1] = *((_DWORD *)this + 26);
        v18[2] = *((_DWORD *)this + 38);
        v7 = CSectionBitmapRealization::MapSection(this);
        v1 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xDCu, 0LL);
          return v1;
        }
        v8 = *((_DWORD *)this + 92) * (v6 - 1) + (v5 * GetPixelFormatSize(*((_DWORD *)this + 93)) + 7) / 8;
        v9 = (unsigned __int8 *)*((_QWORD *)this + 47);
        v10 = *((_DWORD *)this + 92);
        v11 = *((_DWORD *)this + 91);
        v19 = 0LL;
        v12 = HrCreateBitmapFromMemoryEx(
                *((_DWORD *)this + 90),
                v11,
                (const struct PixelFormatInfo *)v18,
                v10,
                v8,
                v9,
                0LL,
                &v19);
        v1 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xE9u, 0LL);
          v17 = v19;
          if ( !v19 )
            return v1;
          v16 = *(_QWORD *)v19;
        }
        else
        {
          v13 = *v2;
          *v2 = 0LL;
          if ( v13 )
            (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v13 + 16LL))(v13);
          v14 = v19;
          v15 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct ID2DBitmapCacheSource **))v19)(
                  v19,
                  &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                  v2);
          v1 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xEBu, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
            return v1;
          }
          CD2DBitmapCache::InitializeCache(this, *v2);
          v16 = *(_QWORD *)v14;
          v17 = v14;
        }
        (*(void (__fastcall **)(struct IBitmapSource *))(v16 + 16))(v17);
      }
    }
  }
  return v1;
}
