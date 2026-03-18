/*
 * XREFs of ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x14027C388
 * Callers:
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140028FA4 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 * Callees:
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x14027C330 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 */

void __fastcall DXGDODPRESENT::UpdateDisplayModeInfo(
        DXGDODPRESENT *this,
        unsigned int a2,
        struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v3; // rax
  D3DDDI_RATIONAL RefreshRate; // rdx

  v3 = a2;
  if ( a3->RefreshRate.Numerator == -2 && a3->RefreshRate.Denominator == -2 )
    RefreshRate = (D3DDDI_RATIONAL)0x100000040LL;
  else
    RefreshRate = a3->RefreshRate;
  BLTQUEUE::UpdateDisplayModeInfo(
    (struct _D3DDDI_RATIONAL *)(*((_QWORD *)this + 1) + 2968 * v3),
    RefreshRate,
    a3->Height);
}
