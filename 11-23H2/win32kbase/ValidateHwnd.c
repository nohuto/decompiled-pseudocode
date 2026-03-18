/*
 * XREFs of ValidateHwnd @ 0x1C0045EC0
 * Callers:
 *     NtUserGetDC @ 0x1C004D400 (NtUserGetDC.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A350 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0045FD0 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL);
}
