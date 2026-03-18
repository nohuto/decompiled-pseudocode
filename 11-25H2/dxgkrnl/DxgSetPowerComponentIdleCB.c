/*
 * XREFs of DxgSetPowerComponentIdleCB @ 0x140016C10
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140016D04 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x140016DB8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void __fastcall DxgSetPowerComponentIdleCB(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v5);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentIdleCB(DxgAdapter, a2);
  if ( v5[0] )
    KeUnstackDetachProcess(&ApcState);
}
