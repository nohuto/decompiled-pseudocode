/*
 * XREFs of ?SetGuestCpuVisibleBuffer@DXGVIRTUALMACHINE@@QEAAX_K0@Z @ 0x14007AEA0
 * Callers:
 *     ?SetGuestCpuVisibleBuffer@DXGPROCESSVMWP@@QEAAX_K0@Z @ 0x14007AE84 (-SetGuestCpuVisibleBuffer@DXGPROCESSVMWP@@QEAAX_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVIRTUALMACHINE::SetGuestCpuVisibleBuffer(DXGVIRTUALMACHINE *this, __int64 a2, __int64 a3)
{
  *((_QWORD *)this + 32) = a2;
  *((_QWORD *)this + 33) = a3;
}
