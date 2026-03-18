/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1800FEF54
 * Callers:
 *     ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18022CD78 (-InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18023F210 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x18026CF80 (--1CSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
        __int64 a1)
{
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    a1,
    0LL);
  return a1;
}
