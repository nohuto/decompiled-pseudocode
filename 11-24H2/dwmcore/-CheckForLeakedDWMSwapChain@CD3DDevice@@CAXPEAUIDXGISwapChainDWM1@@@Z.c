/*
 * XREFs of ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1801C7A38
 * Callers:
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180097F44 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C7300 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801C77F0 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
