/*
 * XREFs of ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x18022AED0
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802D9ED0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18002432C (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802D9DD8 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802DCBF4 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::FormatConvertLock(
        CSecondaryD2DBitmap *this,
        struct IBitmapLock *a2,
        struct IBitmapLock **a3)
{
  __int64 v3; // rax
  struct IBitmapSource *v6; // rbx
  void (__fastcall *v7)(struct IBitmapLock *, _BYTE *); // rax
  struct IBitmapSource *v9; // rdi
  int v10; // ecx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  struct WICRect *v18; // rdx
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-69h]
  unsigned int v22; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-45h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v25; // [rsp+4Ch] [rbp-3Dh] BYREF
  struct IBitmapSource *v26; // [rsp+50h] [rbp-39h] BYREF
  struct IBitmapSource *v27; // [rsp+58h] [rbp-31h] BYREF
  struct IBitmapDest *v28; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int8 *v29; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v30[4]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v31[16]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v32[16]; // [rsp+90h] [rbp+7h] BYREF

  v3 = *(_QWORD *)a2;
  v26 = 0LL;
  v28 = 0LL;
  v6 = 0LL;
  v7 = *(void (__fastcall **)(struct IBitmapLock *, _BYTE *))(v3 + 24);
  v27 = 0LL;
  v9 = 0LL;
  v7(a2, v31);
  v30[0] = *((_DWORD *)this + 40);
  v10 = *(_DWORD *)((*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 10) + 24LL))((char *)this + 80, v32)
                  + 4);
  v30[2] = *((_DWORD *)this + 56);
  v11 = *(_QWORD *)a2;
  v30[1] = v10;
  v25 = 0;
  v24 = 0;
  v12 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *, unsigned int *))(v11 + 32))(a2, &v25, &v24);
  v13 = v12;
  if ( v12 < 0 )
  {
    v21 = 209;
  }
  else
  {
    v14 = *(_QWORD *)a2;
    v23 = 0;
    v12 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(v14 + 40))(a2, &v23);
    v13 = v12;
    if ( v12 < 0 )
    {
      v21 = 212;
    }
    else
    {
      v15 = *(_QWORD *)a2;
      v22 = 0;
      v29 = 0LL;
      v12 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *, unsigned __int8 **))(v15 + 48))(
              a2,
              &v22,
              &v29);
      v13 = v12;
      if ( v12 < 0 )
      {
        v21 = 216;
      }
      else
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v27);
        v16 = HrCreateBitmapFromMemoryEx(v25, v24, (const struct PixelFormatInfo *)v31, v23, v22, v29, 0LL, &v27);
        v13 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xE1u, 0LL);
          v6 = v27;
          goto LABEL_16;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v26);
        v6 = v27;
        v17 = CFormatConverter::HrConvertBitmap(v27, (const struct PixelFormatInfo *)v30, &v26);
        v13 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xE6u, 0LL);
          v9 = v26;
          goto LABEL_16;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v28);
        v9 = v26;
        v19 = HrCreateDestBitmapCopy(v26, v18, &v28);
        v13 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xEBu, 0LL);
          goto LABEL_16;
        }
        v12 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, struct IBitmapLock **))(*(_QWORD *)v28 + 24LL))(
                v28,
                0LL,
                1LL,
                a3);
        v13 = v12;
        if ( v12 >= 0 )
          goto LABEL_16;
        v21 = 239;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v21, 0LL);
LABEL_16:
  if ( v28 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v9 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
  return v13;
}
