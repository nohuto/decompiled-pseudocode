/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C0011FFC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01612C4 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 GetCcdRawmodeFlag(void)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  return (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 328))() != 0 ? 0x20000 : 0;
}
