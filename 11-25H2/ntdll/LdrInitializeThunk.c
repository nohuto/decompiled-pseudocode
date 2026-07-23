/*
 * XREFs of LdrInitializeThunk @ 0x180002A20
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180002A48 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x180163A80 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
