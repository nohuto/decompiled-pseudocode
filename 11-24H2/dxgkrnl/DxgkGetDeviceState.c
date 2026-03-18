/*
 * XREFs of DxgkGetDeviceState @ 0x1402AB120
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetDeviceStateInternal @ 0x1402AB150 (DxgkGetDeviceStateInternal.c)
 */

__int64 __fastcall DxgkGetDeviceState(__int64 a1)
{
  __int64 v2; // rdx

  LOBYTE(v2) = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  return DxgkGetDeviceStateInternal(a1, v2);
}
