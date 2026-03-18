/*
 * XREFs of SepDeleteAccessState @ 0x140401610
 * Callers:
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SeDeassignSecurity @ 0x140A265C0 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteAccessState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v5 = *(_QWORD *)(a1 + 72);
  if ( *(_BYTE *)(a1 + 11) )
    ExFreePoolWithTag(*(PVOID *)v5, 0);
  v6 = *(void **)(a1 + 136);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(a1 + 152);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 48) && (*(_DWORD *)(a1 + 12) & 0x4000000) == 0 )
      SeDeassignSecurity((PSECURITY_DESCRIPTOR *)(v5 + 48));
    if ( *(_QWORD *)(v5 + 72) )
    {
      v8 = *(_QWORD *)(v5 + 80);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v5 + 56);
        if ( v9 )
          guard_dispatch_icall_no_overrides(v8, v9, a3, a4);
        v10 = *(_QWORD *)(v5 + 64);
        if ( v10 )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 80), v10, a3, a4);
      }
    }
  }
}
