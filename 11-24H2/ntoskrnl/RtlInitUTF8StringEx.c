/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405E74A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1404A99C0 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitUTF8StringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
