/*
 * XREFs of PipAddBindingId @ 0x14071BF24
 * Callers:
 *     IoResolveDependency @ 0x1404B4110 (IoResolveDependency.c)
 *     PipCreateDependencyNode @ 0x14071C21C (PipCreateDependencyNode.c)
 * Callees:
 *     RtlDuplicateUnicodeString @ 0x1409287C0 (RtlDuplicateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall PipAddBindingId(__int64 a1, const UNICODE_STRING *a2)
{
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v5; // rbx
  NTSTATUS result; // eax
  UNICODE_STRING **v7; // rdx

  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x53706E50u);
  v5 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  result = RtlDuplicateUnicodeString(0, a2, Pool2 + 1);
  if ( result >= 0 )
  {
    v7 = *(UNICODE_STRING ***)(a1 + 64);
    if ( *v7 != (UNICODE_STRING *)(a1 + 56) )
      __fastfail(3u);
    *(_QWORD *)&v5->Length = a1 + 56;
    v5->Buffer = (wchar_t *)v7;
    *v7 = v5;
    *(_QWORD *)(a1 + 64) = v5;
  }
  return result;
}
