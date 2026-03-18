/*
 * XREFs of ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x18021F4D4
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801B5880 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x1801B6020 (-GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CD3DDevice::IsFrontBufferRenderingSupported(CD3DDevice *this, __int64 a2)
{
  char v2; // di
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)this + 154) >= 45056 && !*((_QWORD *)this + 71) )
  {
    v4 = *((_QWORD *)this + 69);
    v7 = 0;
    if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v4 + 232LL))(v4, a2, &v7) >= 0
      && (v7 & 0x2000000) != 0 )
    {
      v5 = *((_DWORD *)this + 224);
      if ( (v5 != 4318 || *((__int64 *)this + 78) >= 0x180015000D25B5LL)
        && (CCommonRegistryData::SuperWetEnabled && *((int *)this + 155) >= 2600
         || CCommonRegistryData::InkGPUAccelOverrideVendorWhitelist
         || v5 == 32902 && *((int *)this + 155) < 2600) )
      {
        return 1;
      }
    }
  }
  return v2;
}
