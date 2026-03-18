/*
 * XREFs of ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C0CF0
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801714A0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1801BF7C0 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802D49A0 (-Present@CConversionSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1801C0FE4 (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C1038 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x1801C1294 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1801C16B8 (-CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18025B75C (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::Present(__int64 a1, unsigned int a2, int a3, __int64 *a4, int a5)
{
  __int64 v6; // r15
  bool v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // ebp
  struct IDXGISwapChainDWM1 *v11; // r12
  char v12; // r15
  int v13; // eax
  int v14; // edi
  __int64 v15; // rax
  int v16; // ecx
  bool v17; // r8
  int v19; // eax
  int v20; // ecx
  int v21; // r9d
  unsigned int v22[2]; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+B0h] [rbp+18h] BYREF

  v24 = a3;
  v6 = 0LL;
  if ( (a3 & 2) != 0 )
  {
    v7 = 1;
    LODWORD(v8) = 0;
  }
  else
  {
    v7 = 0;
    v8 = (a4[1] - *a4) >> 4;
    if ( (_DWORD)v8 )
      v6 = *a4;
  }
  CLegacySwapChain::PrePresent((CLegacySwapChain *)(a1 - 24), v7);
  v9 = *(_QWORD *)(a1 + 40);
  v10 = -2003304307;
  v11 = *(struct IDXGISwapChainDWM1 **)(a1 + 264);
  if ( *(_DWORD *)(v9 + 1112) )
  {
    v14 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x3A2u, 0LL);
    v12 = v24;
  }
  else
  {
    *(_QWORD *)v22 = v6;
    v12 = v24;
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *, _QWORD, _QWORD, unsigned int *, _DWORD, _QWORD, _DWORD, _QWORD, int))(**(_QWORD **)(v9 + 224) + 104LL))(
            *(_QWORD *)(v9 + 224),
            v11,
            a2,
            (unsigned int)v24,
            *(unsigned int **)v22,
            v8,
            0LL,
            0,
            0LL,
            a5);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x3ACu, 0LL);
    }
    else
    {
      v15 = 0LL;
      if ( g_pComposition )
        v15 = *((_QWORD *)g_pComposition + 111);
      *(_QWORD *)(v9 + 1480) = v15;
      *(_BYTE *)(v9 + 1499) = 0;
      if ( v14 == 142213121 )
        CD3DDevice::CheckForLeakedDWMSwapChain(v11);
    }
  }
  if ( *(_DWORD *)(v9 + 1112)
    || v14 != -2005532292 && v14 != -2147024882 && v14 != -2005270523
    || !*(_DWORD *)(v9 + 448) )
  {
LABEL_14:
    if ( v14 >= 0 )
      goto LABEL_15;
    goto LABEL_22;
  }
  if ( v14 != -2005270523 )
  {
LABEL_30:
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v9 + 16));
    goto LABEL_14;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 552) + 312LL))(*(_QWORD *)(v9 + 552));
  v20 = *(_DWORD *)(v9 + 1112);
  if ( v19 == -2005270480 )
  {
    if ( !v20 )
      *(_DWORD *)(v9 + 1112) = -2005270480;
    goto LABEL_30;
  }
  if ( !v20 )
    *(_DWORD *)(v9 + 1112) = -2005270523;
LABEL_22:
  if ( *(_DWORD *)(v9 + 1112) )
  {
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x2B4u, 0LL);
    return v10;
  }
LABEL_15:
  v24 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v14, 1, &v24) )
  {
    v21 = v24;
    if ( v24 == -2003304307 )
    {
      if ( v14 >= 0 )
        v14 = -2003304307;
      if ( !*(_DWORD *)(v9 + 1112) )
        *(_DWORD *)(v9 + 1112) = v14;
    }
    v14 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xB4Du, 0LL);
  }
  v10 = v14;
  if ( v14 < 0 )
    goto LABEL_23;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qqq_EventWriteTransfer(v16, (unsigned int)&EVTDESC_ETWGUID_PRESENT, a5, 0, v12);
  CLegacySwapChain::PostPresent((CLegacySwapChain *)(a1 - 24), v7, v17);
  return v10;
}
