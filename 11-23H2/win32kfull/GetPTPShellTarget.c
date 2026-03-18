/*
 * XREFs of GetPTPShellTarget @ 0x1C01F6140
 * Callers:
 *     <none>
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C008D070 (INPUTDEST_FROM_PWND.c)
 *     GetPTPShellListener @ 0x1C0155616 (GetPTPShellListener.c)
 */

__int64 __fastcall GetPTPShellTarget(__int64 a1)
{
  __int64 PTPShellListener; // rax
  _DWORD *v3; // rcx

  PTPShellListener = GetPTPShellListener();
  INPUTDEST_FROM_PWND(v3, PTPShellListener);
  return a1;
}
