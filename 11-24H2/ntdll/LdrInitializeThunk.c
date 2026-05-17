/*
 * XREFs of LdrInitializeThunk @ 0x1800973C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     LdrpInitialize @ 0x1800973E8 (LdrpInitialize.c)
 *     ZwContinue @ 0x1801624F0 (ZwContinue.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax

  LdrpInitialize();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
}
