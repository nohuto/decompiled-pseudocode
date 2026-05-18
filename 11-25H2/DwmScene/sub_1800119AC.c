/*
 * XREFs of sub_1800119AC @ 0x1800119AC
 * Callers:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 *     sub_180011A2C @ 0x180011A2C (sub_180011A2C.c)
 *     sub_180025E70 @ 0x180025E70 (sub_180025E70.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall __noreturn sub_1800119AC(const struct stdext::exception *a1)
{
  if ( std::_Raise_handler )
    std::_Raise_handler(a1);
  (*(void (__fastcall **)(const struct stdext::exception *))(*(_QWORD *)a1 + 16LL))(a1);
  invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
}
