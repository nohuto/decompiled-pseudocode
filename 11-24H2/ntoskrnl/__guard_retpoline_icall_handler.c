/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140BC0080
 * Callers:
 *     <none>
 * Callees:
 *     sub_140BC00A0 @ 0x140BC00A0 (sub_140BC00A0.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140BC00A0();
  __debugbreak();
}
