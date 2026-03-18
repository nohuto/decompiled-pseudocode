/*
 * XREFs of ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1801C16B8
 * Callers:
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x1800C5E70 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C0CF0 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801C1470 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::CheckForLeakedDWMSwapChain(struct IDXGISwapChainDWM1 *a1)
{
  __int64 v1; // rax
  _DWORD v2[4]; // [rsp+20h] [rbp-C8h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)a1;
  v2[0] = 0;
  if ( (*(int (__fastcall **)(struct IDXGISwapChainDWM1 *, _DWORD *))(v1 + 240))(a1, v2) >= 0 )
  {
    if ( v2[0] )
    {
      memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
      pExceptionRecord.ExceptionCode = 142213121;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
}
