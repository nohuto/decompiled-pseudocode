/*
 * XREFs of SeCodeIntegritySetInformationProcess @ 0x14077EF48
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCodeIntegritySetInformationProcess(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  void *Pool2; // rax
  void *v9; // rbx
  unsigned int v10; // edi

  v4 = a4;
  if ( !qword_140F04548 )
    return 3221225659LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memmove(Pool2, a3, v4);
  v10 = guard_dispatch_icall_no_overrides(a1);
  ExFreePoolWithTag(v9, 0);
  return v10;
}
