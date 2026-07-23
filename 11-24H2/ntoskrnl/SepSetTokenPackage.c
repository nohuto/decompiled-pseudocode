/*
 * XREFs of SepSetTokenPackage @ 0x140A0C9C0
 * Callers:
 *     SepGetAnonymousToken @ 0x1403B977C (SepGetAnonymousToken.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406F8F00 (RtlIsParentOfChildAppContainer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenPackage(__int64 a1, unsigned __int8 *a2)
{
  PVOID *v2; // rdi
  void *v4; // rcx
  PVOID *v6; // r14
  unsigned int v7; // r15d
  void *Pool2; // rbp
  PVOID *v10; // rbx
  unsigned int v11; // eax

  v2 = (PVOID *)(a1 + 784);
  v4 = *(void **)(a1 + 784);
  v6 = v2;
  if ( v4 )
  {
    if ( !RtlIsParentOfChildAppContainer(v4, a2) )
      return 3221225506LL;
    v6 = (PVOID *)(a1 + 784);
  }
  v7 = (4 * a2[1] + 11) & 0xFFFFFFFC;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v7, 0x69536553u);
  if ( !Pool2 )
    return 3221225626LL;
  v10 = v2;
  v11 = 4 * a2[1] + 8;
  if ( v11 <= v7 )
  {
    memmove(Pool2, a2, v11);
    v10 = v6;
  }
  if ( *v2 )
  {
    ExFreePoolWithTag(*v2, 0);
    *v10 = 0LL;
  }
  *v10 = Pool2;
  return 0LL;
}
