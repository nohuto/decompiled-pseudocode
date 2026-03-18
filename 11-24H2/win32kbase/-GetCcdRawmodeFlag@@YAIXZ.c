/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x14015305C
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140153090 (DrvFunctionalizeDisplayConfig.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019A798 (-DrvFunctionalizeBaseVidMode@@YAJAEBURETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetCcdRawmodeFlag(__int64 a1)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 328))() != 0 ? 0x20000 : 0;
}
