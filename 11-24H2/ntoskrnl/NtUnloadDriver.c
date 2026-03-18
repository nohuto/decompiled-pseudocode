/*
 * XREFs of NtUnloadDriver @ 0x140AA8FA0
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 */

__int64 __fastcall NtUnloadDriver(__int64 a1)
{
  return IopUnloadDriver(a1, 0LL);
}
