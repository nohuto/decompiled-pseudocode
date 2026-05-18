/*
 * XREFs of sub_180011AAC @ 0x180011AAC
 * Callers:
 *     sub_180011AFC @ 0x180011AFC (sub_180011AFC.c)
 *     sub_180011B2C @ 0x180011B2C (sub_180011B2C.c)
 *     sub_180025FD0 @ 0x180025FD0 (sub_180025FD0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall __noreturn sub_180011AAC(const struct stdext::exception *a1)
{
  if ( std::_Raise_handler )
    std::_Raise_handler(a1);
  (*(void (__fastcall **)(const struct stdext::exception *))(*(_QWORD *)a1 + 16LL))(a1);
  invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
