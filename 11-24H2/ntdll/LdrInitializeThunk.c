/*
 * XREFs of LdrInitializeThunk @ 0x18002C210
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x18002C238 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1801608B0 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
