/*
 * XREFs of NtRIMGetDevicePropertiesLockfree @ 0x1401D4AB0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePropertiesLockfree @ 0x140135580 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePropertiesLockfree(char *a1, ULONG64 a2)
{
  return RIMGetDevicePropertiesLockfree(a1, a2, 1);
}
