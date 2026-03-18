/*
 * XREFs of ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x180277AF0
 * Callers:
 *     ?Present@CRemoteRenderTarget@@IEAAJXZ @ 0x1802804C0 (-Present@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteRenderTarget::IsPrimaryMonitor(CRemoteRenderTarget *this)
{
  return *((float *)this + 16) == 0.0 && *((float *)this + 17) == 0.0;
}
