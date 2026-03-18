/*
 * XREFs of EtwpFreeLbrData @ 0x1407A24C4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLbrData(__int64 a1)
{
  unsigned int *v2; // rax
  __int64 v3; // rcx

  if ( (*(_DWORD *)(a1 + 816) & 0x8000) != 0 )
    _InterlockedDecrement(&dword_140E28C80);
  v2 = *(unsigned int **)(a1 + 1072);
  if ( v2 )
  {
    v3 = *v2;
    if ( (_DWORD)v3 )
      guard_dispatch_icall_no_overrides(v3);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1072), 0);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
}
