/*
 * XREFs of ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802CB438
 * Callers:
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x1802CB610 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x1802CB8C0 (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800691E0 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::EnsureTargetBitmap(CConversionSwapChain *this, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rbx
  const struct D2D_SIZE_U *v7; // rax
  int v8; // eax
  char *v9; // rdi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(char *, __int64, _QWORD); // rbx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  const char *v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+48h] [rbp-20h]
  CGlobalDrawingContext *v19; // [rsp+90h] [rbp+28h] BYREF
  __int64 v20; // [rsp+98h] [rbp+30h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+38h] BYREF
  char v22; // [rsp+A8h] [rbp+40h] BYREF

  v3 = (__int64 *)((char *)this + 520);
  if ( *((_QWORD *)this + 65) )
  {
    return 0;
  }
  else
  {
    v6 = *((_QWORD *)this + 8);
    v19 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v19, a2, a3);
    v7 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 37) + 88LL))(
                                      *((_QWORD *)this + 37),
                                      &v22);
    v18 = 37;
    v17 = "Conversion intermediate target bitmap";
    v8 = CD3DDevice::CreateRenderTargetBitmap(
           v6,
           (const struct CResourceTag *)&v17,
           v7,
           (CConversionSwapChain *)((char *)this + 528),
           (CConversionSwapChain *)((char *)this + 104),
           0,
           &v19);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1C8u, 0LL);
    }
    else
    {
      v9 = (char *)v19 + 8;
      v10 = *((_QWORD *)v19 + 1);
      v21 = 0LL;
      v11 = *(__int64 (__fastcall **)(char *, __int64, _QWORD))(v10 + 104);
      v12 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *, const char **))(*(_QWORD *)v19 + 88LL))(v19, &v17);
      v13 = v11(v9, v12, &v21);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1CCu, 0LL);
      }
      else
      {
        v20 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v20);
        v14 = (**v21)(v21, &GUID_77778ec0_8ef7_4222_bede_336213c916e3, &v20);
        v5 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1CFu, 0LL);
        }
        else
        {
          LOBYTE(v15) = 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 224LL))(v20, v15);
          wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(v3, (__int64 *)&v19);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  }
  return v5;
}
