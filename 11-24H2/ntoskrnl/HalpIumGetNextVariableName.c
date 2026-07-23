/*
 * XREFs of HalpIumGetNextVariableName @ 0x140498220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall HalpIumGetNextVariableName(size_t *a1, void *a2, _OWORD *a3)
{
  size_t v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // rbp
  __int64 Pool2; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx

  if ( !qword_140FC11F0 )
    return 0x8000000000000003uLL;
  v6 = *a1;
  v7 = 2072544LL;
  if ( v6 < 0x1F9FE0 )
    v7 = v6;
  *a1 = v7;
  v8 = (v7 + 4127) & 0xFFFFFFFFFFFFF000uLL;
  Pool2 = ExAllocatePool2(0x40uLL, v8, 0x77466B53u);
  v10 = Pool2;
  if ( !Pool2 )
    return 0x8000000000000009uLL;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 32;
  memmove((void *)(Pool2 + 32), a2, *a1);
  *(_QWORD *)v10 = *a1;
  *(_OWORD *)(v10 + 16) = *a3;
  v11 = guard_dispatch_icall_no_overrides(4LL, v10);
  *a1 = *(_QWORD *)v10;
  *a3 = *(_OWORD *)(v10 + 16);
  if ( v11 )
  {
    if ( v11 == 0x8000000000000005uLL && v8 == 2072576 )
      v11 = 0x8000000000000004uLL;
  }
  else
  {
    memmove(a2, *(const void **)(v10 + 8), *a1);
  }
  ExFreePoolWithTag((PVOID)v10, 0);
  return v11;
}
