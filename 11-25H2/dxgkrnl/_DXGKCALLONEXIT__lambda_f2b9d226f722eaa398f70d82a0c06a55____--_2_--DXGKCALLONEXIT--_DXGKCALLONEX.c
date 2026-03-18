/*
 * XREFs of _DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140092660
 * Callers:
 *     ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x14027C870 (-StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 * Callees:
 *     ?LogStartStatus@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z @ 0x14027C74C (-LogStartStatus@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z.c)
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
    return BLTQUEUE_REMOTE_VSYNC_SOURCE::LogStartStatus(a1, **(unsigned int **)(a1 + 8), **(unsigned int **)(a1 + 16));
  return result;
}
