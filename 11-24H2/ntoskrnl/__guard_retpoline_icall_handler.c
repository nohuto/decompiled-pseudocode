/*
 * XREFs of __guard_retpoline_icall_handler @ 0x140BBE080
 * Callers:
 *     <none>
 * Callees:
 *     sub_140BBE0A0 @ 0x140BBE0A0 (sub_140BBE0A0.c)
 */

void __noreturn _guard_retpoline_icall_handler()
{
  sub_140BBE0A0();
  __debugbreak();
}
