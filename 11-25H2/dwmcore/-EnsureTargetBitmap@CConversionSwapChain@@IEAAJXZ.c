/*
 * XREFs of ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802D46A8
 * Callers:
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x1802D4880 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x1802D4B30 (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18019F9E0 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::EnsureTargetBitmap(CConversionSwapChain *this)
{
  __int64 *v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rbx
  struct D2D_SIZE_U *v5; // rax
  int v6; // eax
  char *v7; // rdi
  __int64 v8; // rax
  __int64 (__fastcall *v9)(char *, __int64, _QWORD); // rbx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  const char *v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  CGlobalDrawingContext *v17; // [rsp+90h] [rbp+28h] BYREF
  __int64 v18; // [rsp+98h] [rbp+30h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+38h] BYREF
  char v20; // [rsp+A8h] [rbp+40h] BYREF

  v1 = (__int64 *)((char *)this + 520);
  if ( *((_QWORD *)this + 65) )
  {
    return 0;
  }
  else
  {
    v4 = *((_QWORD *)this + 8);
    v17 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v17);
    v5 = (struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 37) + 88LL))(
                                *((_QWORD *)this + 37),
                                &v20);
    v16 = 37;
    v15 = "Conversion intermediate target bitmap";
    v6 = CD3DDevice::CreateRenderTargetBitmap(
           v4,
           (const struct CResourceTag *)&v15,
           v5,
           (CConversionSwapChain *)((char *)this + 528),
           (CConversionSwapChain *)((char *)this + 104),
           0,
           &v17);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1C8u, 0LL);
    }
    else
    {
      v7 = (char *)v17 + 8;
      v8 = *((_QWORD *)v17 + 1);
      v19 = 0LL;
      v9 = *(__int64 (__fastcall **)(char *, __int64, _QWORD))(v8 + 104);
      v10 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *, const char **))(*(_QWORD *)v17 + 88LL))(v17, &v15);
      v11 = v9(v7, v10, &v19);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1CCu, 0LL);
      }
      else
      {
        v18 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v18);
        v12 = (**v19)(v19, &GUID_77778ec0_8ef7_4222_bede_336213c916e3, &v18);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1CFu, 0LL);
        }
        else
        {
          LOBYTE(v13) = 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 224LL))(v18, v13);
          wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(v1, (__int64 *)&v17);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  }
  return v3;
}
