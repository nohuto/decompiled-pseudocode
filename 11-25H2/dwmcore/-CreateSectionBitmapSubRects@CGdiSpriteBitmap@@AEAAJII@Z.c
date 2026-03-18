/*
 * XREFs of ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x180102D80
 * Callers:
 *     ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z @ 0x180103048 (-NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x180100570 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18019F9E0 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1801D5068 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801F91D4 (--$_Emplace_reallocate@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_r.c)
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x1802560B8 (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802E0424 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmapSubRects(CGdiSpriteBitmap *this)
{
  char *v1; // rdi
  __int64 *v2; // rdx
  int v4; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // r12d
  unsigned int v9; // r15d
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  struct IBitmapRealization *v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  struct CBitmapResource **v18; // rdx
  __int64 *v19; // rdx
  struct IBitmapRealization *v21; // [rsp+48h] [rbp-29h] BYREF
  struct CBitmapResource *v22; // [rsp+50h] [rbp-21h] BYREF
  struct IBitmapRealization *v23; // [rsp+58h] [rbp-19h] BYREF
  struct IBitmapRealization *v24; // [rsp+60h] [rbp-11h] BYREF
  _DWORD v25[4]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v26; // [rsp+78h] [rbp+7h] BYREF
  int v27; // [rsp+80h] [rbp+Fh]
  int v28; // [rsp+84h] [rbp+13h]
  __int128 v29; // [rsp+88h] [rbp+17h] BYREF

  v1 = (char *)this + 456;
  v2 = (__int64 *)*((_QWORD *)this + 58);
  v4 = 0;
  if ( *((__int64 **)this + 57) != v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      *(__int64 **)v1,
      v2);
    *((_QWORD *)v1 + 1) = *(_QWORD *)v1;
  }
  v5 = 0;
  v27 = *((_DWORD *)this + 108);
  v28 = *((_DWORD *)this + 109);
  v26 = 0LL;
LABEL_4:
  v6 = *((_DWORD *)this + 108);
  if ( v5 >= v6 )
  {
    if ( v4 >= 0 )
      return (unsigned int)v4;
  }
  else
  {
    v7 = v6 - v5;
    v8 = 2048;
    v9 = 0;
    if ( v7 < 0x800 )
      v8 = v7;
    while ( 1 )
    {
      v10 = *((_DWORD *)this + 109);
      if ( v9 >= v10 )
      {
        v5 += 2048;
        goto LABEL_4;
      }
      v11 = v10 - v9;
      v22 = 0LL;
      v23 = 0LL;
      v12 = 2048;
      v25[0] = v5;
      if ( v11 < 0x800 )
        v12 = v11;
      v25[1] = v9;
      v21 = 0LL;
      v25[2] = v8 + v5;
      v25[3] = v12 + v9;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v21);
      v13 = CGDISubSectionBitmapRealization::Create(
              *((_QWORD *)this + 46),
              (unsigned int)&v26,
              (unsigned int)v25,
              *((_DWORD *)this + 110),
              *((_DWORD *)this + 34),
              *((_DWORD *)this + 35),
              (__int64)&v21);
      v4 = v13;
      if ( v13 < 0 )
        break;
      v14 = v21;
      v15 = *(_QWORD *)v21;
      v29 = *(_OWORD *)((char *)this + 88);
      (*(void (__fastcall **)(struct IBitmapRealization *, __int128 *))(v15 + 120))(v21, &v29);
      if ( *((_BYTE *)this + 155) )
      {
        v24 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v24);
        v16 = CColorKeyBitmapRealization::Create(v14, (CGdiSpriteBitmap *)((char *)this + 376), &v24);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x18Fu, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
          goto LABEL_24;
        }
        wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(&v23, &v24);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
      }
      else
      {
        v21 = 0LL;
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
          (__int64 *)&v23,
          (__int64)v14);
      }
      v17 = CBitmapResource::Create(*((struct CComposition **)this + 3), v23, &v22);
      v4 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x199u, 0LL);
        goto LABEL_24;
      }
      v18 = (struct CBitmapResource **)*((_QWORD *)v1 + 1);
      if ( v18 == *((struct CBitmapResource ***)v1 + 2) )
      {
        std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>(
          v1,
          v18,
          &v22);
      }
      else
      {
        *v18 = v22;
        *((_QWORD *)v1 + 1) += 8LL;
        v22 = 0LL;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
      v9 += 2048;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x181u, 0LL);
LABEL_24:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  }
  v19 = (__int64 *)*((_QWORD *)v1 + 1);
  if ( *(__int64 **)v1 != v19 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      *(__int64 **)v1,
      v19);
    *((_QWORD *)v1 + 1) = *(_QWORD *)v1;
  }
  return (unsigned int)v4;
}
