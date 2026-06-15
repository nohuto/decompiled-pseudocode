/*
 * XREFs of ?GetInterruptPeriodicity@CSaDeviceProxy@@UEAA?B_JXZ @ 0x1800870A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSaDeviceProxy::GetInterruptPeriodicity(CSaDeviceProxy *this)
{
  return *(_QWORD *)(*((_QWORD *)this + 5) + 32LL);
}
