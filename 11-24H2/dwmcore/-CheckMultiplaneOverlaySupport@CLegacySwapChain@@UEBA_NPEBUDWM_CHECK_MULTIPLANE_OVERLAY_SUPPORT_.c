/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180066F30
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@COverlayContext@@AEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180066EB8 (-CheckMultiplaneOverlaySupport@COverlayContext@@AEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_P.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?DXGIPlaneFromDwmPlane@@YA?AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x18006724C (-DXGIPlaneFromDwmPlane@@YA-AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTI.c)
 *     ??$_Get_size_of_n@$0JA@@std@@YA_K_K@Z @ 0x180067458 (--$_Get_size_of_n@$0JA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAXQEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K1@Z @ 0x180067488 (-_Change_array@-$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$allocator@UDXGI_CHEC.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x180068194 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802B8D4C (-CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ??$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@QEAU2@$$QEAU2@@Z @ 0x1802C907C (--$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector@UDXGI_CHECK_MU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacySwapChain::CheckMultiplaneOverlaySupport(
        CLegacySwapChain *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  bool *v4; // r12
  CD3DDevice *v8; // rcx
  char *v9; // rbx
  __int64 v10; // rdi
  SIZE_T size_of; // rax
  __int64 v12; // rax
  char *v13; // rsi
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v14; // r12
  __int128 *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // rcx
  char *v33; // rdi
  int v34; // eax
  DWORD v35; // esi
  bool v37; // si
  bool v38; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+34h] [rbp-CCh] BYREF
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+40h] [rbp-C0h] BYREF
  char *v42; // [rsp+50h] [rbp-B0h]
  bool *v43; // [rsp+58h] [rbp-A8h]
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+100h] [rbp+0h] BYREF
  __int128 v46; // [rsp+110h] [rbp+10h]
  __int128 v47; // [rsp+120h] [rbp+20h]
  __int128 v48; // [rsp+130h] [rbp+30h]
  __int128 v49; // [rsp+140h] [rbp+40h]
  __int128 v50; // [rsp+150h] [rbp+50h]
  __int128 v51; // [rsp+160h] [rbp+60h]
  __int128 v52; // [rsp+170h] [rbp+70h]
  __int128 v53; // [rsp+180h] [rbp+80h]

  v43 = a4;
  *a4 = 0;
  v4 = a4;
  if ( !*((_QWORD *)this + 33) || *((int *)this + 16) < 1 )
    return 0;
  v8 = (CD3DDevice *)*((_QWORD *)this + 5);
  v38 = 0;
  if ( CD3DDevice::CheckMPOCache(v8, a2, a3, &v38) )
    return v38;
  v9 = 0LL;
  v42 = 0LL;
  v10 = a3;
  v41 = 0LL;
  if ( a3 )
  {
    size_of = std::_Get_size_of_n<144>(a3);
    v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Change_array(&v41, v12, 0LL, a3);
    v9 = v42;
    v13 = (char *)*((_QWORD *)&v41 + 1);
    v14 = a2;
    do
    {
      v15 = (__int128 *)DXGIPlaneFromDwmPlane(&pExceptionRecord, v14);
      v16 = v15[1];
      v45 = *v15;
      v17 = v15[2];
      v46 = v16;
      v18 = v15[3];
      v47 = v17;
      v19 = v15[4];
      v48 = v18;
      v20 = v15[5];
      v49 = v19;
      v21 = v15[6];
      v50 = v20;
      v22 = v15[7];
      v51 = v21;
      v23 = v15[8];
      v52 = v22;
      v53 = v23;
      if ( v13 == v9 )
      {
        std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Emplace_reallocate<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>(
          &v41,
          v13,
          &v45);
        v9 = v42;
        v13 = (char *)*((_QWORD *)&v41 + 1);
      }
      else
      {
        v24 = v46;
        *(_OWORD *)v13 = v45;
        v25 = v47;
        *((_OWORD *)v13 + 1) = v24;
        v26 = v48;
        *((_OWORD *)v13 + 2) = v25;
        v27 = v49;
        *((_OWORD *)v13 + 3) = v26;
        v28 = v50;
        *((_OWORD *)v13 + 4) = v27;
        v29 = v51;
        *((_OWORD *)v13 + 5) = v28;
        v30 = v52;
        *((_OWORD *)v13 + 6) = v29;
        v31 = v53;
        *((_OWORD *)v13 + 7) = v30;
        *((_OWORD *)v13 + 8) = v31;
        v13 += 144;
        *((_QWORD *)&v41 + 1) = v13;
      }
      v14 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)v14 + 144);
      --v10;
    }
    while ( v10 );
    v4 = v43;
  }
  v32 = *((_QWORD *)this + 33);
  v33 = (char *)v41;
  v39 = 0;
  v40 = 0;
  v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *, int *))(*(_QWORD *)v32 + 176LL))(
          v32,
          a3,
          v41,
          &v39,
          &v40);
  v35 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x1DAu, 0LL);
    if ( v35 == -2005270527 || v35 == -2147024809 )
    {
      memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
      pExceptionRecord.ExceptionCode = v35;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( v33 )
      std::_Deallocate<16,0>(v33, 16 * ((v9 - v33) >> 4));
    return 0;
  }
  v37 = v39 == 1;
  if ( v40 )
    *v4 = 1;
  else
    CD3DDevice::AddCheckMPOCache(*((CD3DDevice **)this + 5), a2, a3, v39 == 1);
  if ( v33 )
    std::_Deallocate<16,0>(v33, 16 * ((v9 - v33) >> 4));
  return v37;
}
