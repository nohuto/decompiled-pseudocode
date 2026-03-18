/*
 * XREFs of ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140326C30
 * Callers:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x140326760 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x140326C50 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x14036D620 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x14032606C (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 */

bool __fastcall DmmIsTargetNonStandard(struct DXGADAPTER *a1, int a2)
{
  return (unsigned int)DmmGetTargetUsage((__int64)a1, a2, 0LL) != 0;
}
