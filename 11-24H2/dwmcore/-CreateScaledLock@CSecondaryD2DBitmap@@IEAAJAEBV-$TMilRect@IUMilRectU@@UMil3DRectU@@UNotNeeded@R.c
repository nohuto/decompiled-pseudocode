/*
 * XREFs of ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1802D98D4
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802D9ED0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18002432C (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1801CE678 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z @ 0x18025BE0C (-GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CreateScaledLock(__int64 a1, int *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v5; // rax
  void (__fastcall *v9)(__int64 *, _DWORD *); // rax
  int v10; // edx
  int v11; // r8d
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, __int64 *, __int64 *); // rbx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  unsigned __int8 *v20; // rbx
  unsigned int v21; // edi
  unsigned int v22; // esi
  const struct PixelFormatInfo *v23; // rax
  int v24; // eax
  int v25; // eax
  int ImagingFactory; // eax
  struct IWICImagingFactory *v27; // rbx
  HRESULT (__stdcall *CreateBitmapScaler)(IWICImagingFactory *, IWICBitmapScaler **); // rdi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 v35; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-5Dh] BYREF
  struct IWICBitmapSource *v38; // [rsp+50h] [rbp-59h] BYREF
  __int64 v39; // [rsp+58h] [rbp-51h] BYREF
  struct IBitmapSource *v40; // [rsp+60h] [rbp-49h] BYREF
  __int64 v41; // [rsp+68h] [rbp-41h] BYREF
  struct IBitmapSource *v42; // [rsp+70h] [rbp-39h] BYREF
  struct IWICImagingFactory *v43; // [rsp+78h] [rbp-31h] BYREF
  _DWORD v44[2]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int8 *v45; // [rsp+88h] [rbp-21h] BYREF
  __int64 v46; // [rsp+90h] [rbp-19h] BYREF
  int v47; // [rsp+98h] [rbp-11h]
  int v48; // [rsp+9Ch] [rbp-Dh]
  _DWORD v49[4]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v50[16]; // [rsp+B0h] [rbp+7h] BYREF

  *a4 = 0LL;
  v5 = *a3;
  v35 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v9 = *(void (__fastcall **)(__int64 *, _DWORD *))(v5 + 32);
  v43 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  v9(a3, v44);
  v10 = *a2;
  v11 = a2[1];
  v47 = v44[0];
  v48 = v44[1];
  v12 = a2[2] - v10;
  v46 = 0LL;
  v49[2] = v12;
  v13 = a2[3] - v11;
  v49[0] = v10;
  v49[3] = v13;
  v14 = *a3;
  v49[1] = v11;
  v15 = *(__int64 (__fastcall **)(__int64 *, __int64 *, __int64 *))(v14 + 72);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v35);
  v16 = v15(a3, &v46, &v35);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x90u, 0LL);
  }
  else
  {
    v37 = 0;
    v18 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v35 + 40LL))(v35, &v37);
    v17 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x93u, 0LL);
    }
    else
    {
      v36 = 0;
      v45 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v35 + 48LL))(
              v35,
              &v36,
              &v45);
      v17 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x97u, 0LL);
      }
      else
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v42);
        v20 = v45;
        v21 = v36;
        v22 = v37;
        v23 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v35 + 24LL))(
                                                v35,
                                                v50);
        v24 = HrCreateBitmapFromMemoryEx(v47 - (int)v46, v48 - HIDWORD(v46), v23, v22, v21, v20, 0LL, &v42);
        v17 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xA1u, 0LL);
        }
        else
        {
          if ( v41 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          v25 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v42)(
                  v42,
                  &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                  &v41);
          v17 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0xA3u, 0LL);
          }
          else
          {
            ImagingFactory = CComposition::GetImagingFactory(g_pComposition, &v43);
            v17 = ImagingFactory;
            if ( ImagingFactory < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ImagingFactory, 0xA5u, 0LL);
            }
            else
            {
              v27 = v43;
              CreateBitmapScaler = v43->lpVtbl->CreateBitmapScaler;
              if ( v38 )
                ((void (__fastcall *)(struct IWICBitmapSource *))v38->lpVtbl->Release)(v38);
              v29 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))CreateBitmapScaler)(
                      v27,
                      &v38);
              v17 = v29;
              if ( v29 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0xA7u, 0LL);
              }
              else
              {
                v30 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v38->lpVtbl[1].QueryInterface)(
                        v38,
                        v41,
                        *(unsigned int *)(a1 + 144),
                        *(unsigned int *)(a1 + 148),
                        3);
                v17 = v30;
                if ( v30 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0xADu, 0LL);
                }
                else
                {
                  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v40);
                  v31 = HrCreateBitmapFromWICBitmapSource(v38, &v40);
                  v17 = v31;
                  if ( v31 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0xB1u, 0LL);
                  }
                  else
                  {
                    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v39);
                    v32 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v40)(
                            v40,
                            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                            &v39);
                    v17 = v32;
                    if ( v32 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0xB3u, 0LL);
                    }
                    else
                    {
                      v33 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v39 + 24LL))(
                              v39,
                              v49,
                              1LL,
                              a4);
                      v17 = v33;
                      if ( v33 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0xB7u, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v39);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v40);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v43);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v41);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v42);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
  return v17;
}
