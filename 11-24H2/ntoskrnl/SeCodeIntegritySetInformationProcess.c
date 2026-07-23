/*
 * XREFs of SeCodeIntegritySetInformationProcess @ 0x14078E138
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCodeIntegritySetInformationProcess(__int64 a1, unsigned int a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  void *Pool2; // rax
  void *v10; // rbx
  unsigned int v11; // edi

  v4 = a4;
  if ( !qword_140F04BC8 )
    return 3221225659LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, a4, 0x20206553u);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memmove(Pool2, a3, v4);
  v11 = guard_dispatch_icall_no_overrides(a1, a2);
  ExFreePoolWithTag(v10, 0);
  return v11;
}
