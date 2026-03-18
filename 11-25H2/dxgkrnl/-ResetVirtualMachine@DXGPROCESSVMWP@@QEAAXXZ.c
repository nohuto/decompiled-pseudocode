/*
 * XREFs of ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1401E7C3C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1401E7CDC (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x140348F20 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 */

void __fastcall DXGPROCESSVMWP::ResetVirtualMachine(DXGPROCESSVMWP *this)
{
  DXGVIRTUALMACHINE *v2; // rcx
  int v3; // eax
  __int64 v4; // rbx

  v2 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 74);
  if ( v2 )
    DXGVIRTUALMACHINE::ResetVirtualMachine(v2, 0);
  v3 = DXGPROCESS::DeferredInitialize(this, 1u);
  if ( v3 < 0 )
  {
    v4 = v3;
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 5587;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to create VidMm and VidSch processes: 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
    *((_BYTE *)this + 616) = 0;
  }
}
