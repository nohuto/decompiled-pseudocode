/*
 * XREFs of _guard_check_icall @ 0x1801268D4
 * Callers:
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x180171010 (_guard_check_icall$thunk$15021643654165956172.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x1800F58E0 (RtlEndStrongEnumerationHashTable.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE))_guard_check_icall_fptr)((PRTL_DYNAMIC_HASH_TABLE)Target);
}
