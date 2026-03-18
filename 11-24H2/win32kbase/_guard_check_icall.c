/*
 * XREFs of _guard_check_icall @ 0x1401A228C
 * Callers:
 *     qsort @ 0x14019FD50 (qsort.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x140242050 (_guard_check_icall$thunk$15021643654165956172.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x14011C0B0 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  _guard_check_icall_fptr((CIgnoreInputQueue *)Target);
}
