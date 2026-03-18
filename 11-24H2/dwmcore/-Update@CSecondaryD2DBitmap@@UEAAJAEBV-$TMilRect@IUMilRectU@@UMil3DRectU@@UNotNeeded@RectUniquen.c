/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802D9ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800234B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180023574 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800237CC (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x1801F5FC8 (-UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801F6664 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x18022AED0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1802D98D4 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802D9CA0 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryD2DBitmap *this, unsigned int *a2, __int64 *a3)
{
  char *v3; // r15
  _DWORD *v7; // rdx
  struct tagRECT *v8; // rdx
  __int64 (__fastcall *v9)(__int64 *, struct tagRECT *, struct IBitmapLock **); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r9d
  int v13; // r14d
  int v14; // eax
  struct IBitmapLock *v15; // rcx
  struct IBitmapLock *v16; // rax
  unsigned __int8 PixelFormatSize; // al
  CD3DDevice *v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-59h]
  struct IBitmapLock *v21; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-41h] BYREF
  struct ID3D11Resource *v23; // [rsp+40h] [rbp-39h] BYREF
  int v24; // [rsp+48h] [rbp-31h] BYREF
  void *v25; // [rsp+50h] [rbp-29h] BYREF
  struct D2D_RECT_F v26; // [rsp+58h] [rbp-21h] BYREF
  struct tagRECT v27; // [rsp+68h] [rbp-11h] BYREF
  struct IBitmapLock *v28[2]; // [rsp+80h] [rbp+7h] BYREF

  v3 = (char *)this + 240;
  *(_QWORD *)&v27.left = 0LL;
  *(_QWORD *)&v27.right = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((unsigned int *)this + 60, a2)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v11 = -2147024809;
    v12 = -2147024809;
    v20 = 57;
    goto LABEL_26;
  }
  if ( *((float *)this + 50) == 96.0 && *((float *)this + 51) == 96.0 )
  {
    v9 = *(__int64 (__fastcall **)(__int64 *, struct tagRECT *, struct IBitmapLock **))(*a3 + 72);
    v27 = *v8;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v21);
    v10 = v9(a3, &v27, &v21);
    v11 = v10;
    if ( v10 < 0 )
    {
      v20 = 64;
LABEL_7:
      v12 = v10;
LABEL_26:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v20, 0LL);
      goto LABEL_27;
    }
  }
  else
  {
    *(struct tagRECT *)v28 = *v8;
    v27 = (struct tagRECT)*CSecondaryD2DBitmap::GetPrefilteredRect((__int64)this, &v26, (int *)v28);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v21);
    v10 = CSecondaryD2DBitmap::CreateScaledLock((__int64)this, &v27.left, a3, &v21);
    v11 = v10;
    if ( v10 < 0 )
    {
      v20 = 70;
      goto LABEL_7;
    }
  }
  v13 = *(_DWORD *)(*(__int64 (__fastcall **)(struct IBitmapLock *, struct IBitmapLock **))(*(_QWORD *)v21 + 24LL))(
                     v21,
                     v28);
  if ( v13 != *(_DWORD *)(*(__int64 (__fastcall **)(char *, struct IBitmapLock **))(*((_QWORD *)this + 10) + 24LL))(
                           (char *)this + 80,
                           v28) )
  {
    v28[0] = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v28);
    v14 = CSecondaryD2DBitmap::FormatConvertLock(this, v21, v28);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x50u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v28);
      goto LABEL_27;
    }
    v15 = v21;
    v16 = v28[0];
    v28[0] = 0LL;
    v21 = v16;
    if ( v15 )
      (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v15 + 16LL))(v15);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v28);
  }
  v22 = 0;
  v10 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v21 + 40LL))(v21, &v22);
  v11 = v10;
  if ( v10 < 0 )
  {
    v20 = 86;
    goto LABEL_7;
  }
  v24 = 0;
  v25 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IBitmapLock *, int *, void **))(*(_QWORD *)v21 + 48LL))(v21, &v24, &v25);
  v11 = v10;
  if ( v10 < 0 )
  {
    v20 = 90;
    goto LABEL_7;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v13);
    McTemplateU0qqqq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      (unsigned int)(v27.right - v27.left),
      v27.bottom - v27.top,
      v13,
      PixelFormatSize >> 3);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
  v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this + 13))(
          *((_QWORD *)this + 13),
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v23);
  v11 = v10;
  if ( v10 < 0 )
  {
    v20 = 97;
    goto LABEL_7;
  }
  v18 = (CD3DDevice *)(*(__int64 (__fastcall **)(CSecondaryD2DBitmap *))(*(_QWORD *)this + 40LL))(this);
  CD3DDevice::UpdateSubresource(v18, v23, &v27, v25, v22, 0);
  CSecondaryBitmap::AddValidRect((__int64)v3, (int *)a2);
LABEL_27:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  return v11;
}
