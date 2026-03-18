/*
 * XREFs of ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180066B38
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800668C0 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180067324 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1801C3440 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x1801F2DC0 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     ?reserve_region@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURectInt32@Graphics@Windows@@_K0@Z @ 0x18024386C (-reserve_region@-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@.c)
 *     ??1?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180243C1C (--1-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@Windows@@$07$.c)
 *     ?clear@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180243C40 (-clear@-$vector_facade@URectInt32@Graphics@Windows@@V-$buffer_impl@URectInt32@Graphics@Windows@@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::SetPerPresentDisplayScanoutOptions(
        CDDisplaySwapChain *this,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a2,
        unsigned int a3,
        void (__fastcall ***a4)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *),
        bool a5,
        enum DXGI_HDR_METADATA_TYPE a6,
        const void *a7)
{
  void (__fastcall *v10)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *); // rax
  unsigned int v11; // esi
  char *v12; // rdi
  BOOL v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  _OWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h]
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v27; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v28; // [rsp+78h] [rbp-88h]
  char *v29; // [rsp+80h] [rbp-80h]
  _BYTE v30[128]; // [rsp+88h] [rbp-78h] BYREF
  char v31; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v10 = **a4;
  v22 = 0LL;
  v10((struct Windows::Devices::Display::Core::IDisplayScanout *)a4, &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7, &v22);
  v11 = 0;
  v27 = v30;
  v28 = v30;
  v29 = &v31;
  if ( a3 )
  {
    v12 = (char *)a2 + 8;
    while ( 1 )
    {
      detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::clear(&v27);
      if ( *(v12 - 4) )
      {
        v13 = 1;
        if ( !a5 )
          v13 = !IsDesktopOverlayPlaneResource(*(const struct IOverlayPlaneResource **)v12);
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, BOOL))(*(_QWORD *)v22 + 144LL))(
                v22,
                *((unsigned int *)v12 - 2),
                v13);
        v15 = v14;
        if ( v14 < 0 )
        {
          v19 = 1652LL;
          goto LABEL_19;
        }
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 136LL))(
                v22,
                *((unsigned int *)v12 - 2),
                *((unsigned int *)v12 + 28));
        v15 = v14;
        if ( v14 < 0 )
        {
          v19 = 1656LL;
          goto LABEL_19;
        }
        if ( *((_DWORD *)v12 + 17) )
        {
          v16 = 0;
          v26 = *(_OWORD *)(v12 + 12);
          do
          {
            v24 = *(_OWORD *)(*((_QWORD *)v12 + 9) + 16LL * v16);
            if ( (unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IntersectUnsafe(
                                    &v24,
                                    &v26) )
            {
              DWORD2(v25) = DWORD2(v24) - v24;
              *(_QWORD *)&v25 = v24;
              HIDWORD(v25) = HIDWORD(v24) - DWORD1(v24);
              v17 = (_OWORD *)detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::reserve_region(
                                &v27,
                                (v28 - v27) >> 4);
              *v17 = v25;
            }
            ++v16;
          }
          while ( v16 < *((_DWORD *)v12 + 17) );
        }
      }
      v23 = 0LL;
      v18 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
              v22,
              &GUID_aac1aa85_b883_5c29_b7c1_c2eaaeb3da75,
              &v23);
      v15 = v18;
      if ( v18 < 0 )
        break;
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, signed __int64))(*(_QWORD *)v23 + 48LL))(
              v23,
              *((unsigned int *)v12 - 2),
              (v28 - v27) >> 4);
      v15 = v18;
      if ( v18 < 0 )
      {
        v20 = 1682LL;
        goto LABEL_23;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
      ++v11;
      v12 += 128;
      if ( v11 >= a3 )
        goto LABEL_16;
    }
    v20 = 1678LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
  }
  else
  {
LABEL_16:
    v14 = CDDisplaySwapChain::ComputeCachedHdrMetadata(this, a6, a7);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 120LL))(v22, *((_QWORD *)this + 74));
      v15 = v14;
      if ( v14 >= 0 )
      {
        v15 = 0;
        goto LABEL_27;
      }
      v19 = 1687LL;
    }
    else
    {
      v19 = 1686LL;
    }
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)v14);
  }
LABEL_27:
  detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::~vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>(&v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  return v15;
}
