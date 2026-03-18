/*
 * XREFs of ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1801BF7C0
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C6E9C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C7AC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1801BFBDC (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801C07C0 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     ?GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1801C0B90 (-GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C0CF0 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     McTemplateU0nqqt_EventWriteTransfer @ 0x1801C1314 (McTemplateU0nqqt_EventWriteTransfer.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18020F584 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     McTemplateU0nqq_EventWriteTransfer @ 0x180258BC4 (McTemplateU0nqq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     McTemplateU0nqxxxq_EventWriteTransfer @ 0x180277C9C (McTemplateU0nqxxxq_EventWriteTransfer.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281D70 (-GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281DC0 (-GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::Present(
        CDirectFlipInfo **this,
        struct IOverlaySwapChain *a2,
        int a3,
        __int64 a4,
        int a5,
        _BYTE *a6,
        char a7)
{
  CLegacyRenderTarget *v9; // rcx
  __int64 (*v12)(void); // rax
  unsigned int TargetId; // eax
  CDirectFlipInfo *v14; // rdi
  unsigned int v15; // ebp
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // esi
  CDirectFlipInfo *v22; // rcx
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 (__fastcall *v26)(_DWORD, _DWORD, int, _DWORD, int); // rax
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  CDirectFlipInfo *v38; // rax
  int v39; // edi
  char v40; // al
  int v41; // r8d
  char v42; // [rsp+50h] [rbp-68h] BYREF
  _DWORD v43[5]; // [rsp+54h] [rbp-64h] BYREF
  __int64 v44[2]; // [rsp+68h] [rbp-50h] BYREF

  v9 = (CDirectFlipInfo *)((char *)*this + 8);
  v12 = *(__int64 (**)(void))(*(_QWORD *)v9 + 32LL);
  if ( (char *)v12 == (char *)CLegacyRenderTarget::GetTargetId )
  {
    TargetId = CLegacyRenderTarget::GetTargetId(v9);
  }
  else if ( (char *)v12 == (char *)CDDisplayRenderTarget::GetTargetId )
  {
    TargetId = CDDisplayRenderTarget::GetTargetId(v9);
  }
  else if ( (char *)v12 == (char *)CLegacyRenderTarget::GetTargetId )
  {
    TargetId = (unsigned int)CLegacyRenderTarget::GetTargetId(v9);
  }
  else
  {
    TargetId = v12();
  }
  v14 = this[2468];
  v15 = TargetId;
  v42 = 0;
  if ( v14 )
  {
    v22 = *this;
    v43[1] = *((_DWORD *)this + 4841);
    v43[2] = *((_DWORD *)this + 4842);
    v43[3] = *((_DWORD *)this + 4843);
    v43[4] = *((_DWORD *)this + 4844);
    v23 = *(__int64 (**)(void))(*(_QWORD *)v22 + 256LL);
    if ( (char *)v23 == (char *)CLegacyRenderTarget::GetMonitorTransform )
    {
      v24 = (__int64)v22 + 30728;
    }
    else if ( (char *)v23 == (char *)CDDisplayRenderTarget::GetMonitorTransform )
    {
      v24 = (__int64)v22 + 30736;
    }
    else
    {
      v24 = v23();
    }
    *(_OWORD *)v44 = *(_OWORD *)(v24 + 24);
    v25 = CDirectFlipInfo::Present(v14, a2, (__int64)v44);
    v20 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0xCD5u, 0LL);
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    {
      v38 = this[2468];
      v39 = *((_DWORD *)v38 + 23);
      v40 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v38 + 2) + 336LL))(*((_QWORD *)v38 + 2));
      McTemplateU0nqxxxq_EventWriteTransfer(
        (unsigned int)this[2468],
        *((_QWORD *)this[2468] + 2),
        v41,
        v15,
        v20,
        *(_QWORD *)(*((_QWORD *)this[2468] + 2) + 40LL),
        *((_QWORD *)this[2468] + 3),
        v40,
        v39);
    }
    if ( (int)(v20 + 0x80000000) < 0 || v20 == -2003304309 )
      *((_BYTE *)this + 19774) = 1;
    else
      COverlayContext::ClearDirectFlip((COverlayContext *)this);
  }
  else
  {
    *((_BYTE *)this + 19774) = 0;
    if ( a7
      || this[1618] == this[1617]
      && *((_BYTE *)this + 19472)
      && !*((_BYTE *)this + 19473)
      && (*((int *)this + 4938) < 2200 || *((_BYTE *)this + 19771) || (*((_DWORD *)this + 13) & 0x40000) == 0) )
    {
      v26 = *(__int64 (__fastcall **)(_DWORD, _DWORD, int, _DWORD, int))(*(_QWORD *)a2 + 376LL);
      if ( v26 == CLegacySwapChain::Present )
        v27 = CLegacySwapChain::Present((_DWORD)a2, 1, a3, a4, a5);
      else
        v27 = v26(a2, 1LL, a3, a4, a5);
      v20 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0xCB5u, 0LL);
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        McTemplateU0nqq_EventWriteTransfer(v29, v28, v30, v15, v20, a3);
      if ( v20 >= 0 )
      {
        *((_WORD *)this + 9736) = 1;
        v31 = *((_OWORD *)this + 1210);
        v42 = 1;
        v32 = *((_OWORD *)this + 1211);
        this[2450] = 0LL;
        *(_OWORD *)(this + 2435) = v31;
        v33 = *((_OWORD *)this + 1212);
        *(_OWORD *)(this + 2437) = v32;
        v34 = *((_OWORD *)this + 1213);
        *(_OWORD *)(this + 2439) = v33;
        v35 = *((_OWORD *)this + 1214);
        *(_OWORD *)(this + 2441) = v34;
        v36 = *((_OWORD *)this + 1215);
        *(_OWORD *)(this + 2443) = v35;
        v37 = *((_OWORD *)this + 1216);
        *(_OWORD *)(this + 2445) = v36;
        *(_QWORD *)&v36 = this[2434];
        *(_OWORD *)(this + 2447) = v37;
        this[2449] = (CDirectFlipInfo *)v36;
      }
    }
    else
    {
      v43[0] = 0;
      v16 = COverlayContext::PresentMPO((COverlayContext *)this, (__int64)v43, (__int64)&v42);
      v20 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xCA0u, 0LL);
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        McTemplateU0nqqt_EventWriteTransfer(v18, v17, v19, v15, v20, v43[0], v42);
    }
  }
  if ( a6 )
    *a6 = v42;
  return (unsigned int)v20;
}
