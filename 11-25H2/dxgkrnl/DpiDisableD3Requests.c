/*
 * XREFs of DpiDisableD3Requests @ 0x1403498D0
 * Callers:
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x14002A058 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     DpiRequestDevicePowerState @ 0x14002A4E8 (DpiRequestDevicePowerState.c)
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140054E8C (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiDisableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(result + 4232));
  return result;
}
