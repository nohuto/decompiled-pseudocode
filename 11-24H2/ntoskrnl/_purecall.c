/*
 * XREFs of _purecall @ 0x140658550
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
