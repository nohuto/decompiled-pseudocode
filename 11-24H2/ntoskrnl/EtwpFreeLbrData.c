/*
 * XREFs of EtwpFreeLbrData @ 0x1407B1894
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLbrData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rax
  __int64 v6; // rcx

  if ( (*(_DWORD *)(a1 + 816) & 0x8000) != 0 )
    _InterlockedDecrement(&dword_140E28EC0);
  v5 = *(unsigned int **)(a1 + 1072);
  if ( v5 )
  {
    v6 = *v5;
    if ( (_DWORD)v6 )
      guard_dispatch_icall_no_overrides(v6, a2, a3, a4);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1072), 0);
    *(_QWORD *)(a1 + 1072) = 0LL;
  }
}
