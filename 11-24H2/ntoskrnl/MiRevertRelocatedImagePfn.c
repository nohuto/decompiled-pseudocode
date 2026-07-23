/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x14093B22C
 * Callers:
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 *     MiPageHasRelocations @ 0x14093B310 (MiPageHasRelocations.c)
 *     MiPerformFixups @ 0x14093BA30 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(
        __int64 BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  unsigned __int64 v5; // rax
  __int64 result; // rax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rcx

  v5 = *(_QWORD *)(BugCheckParameter2 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*(_QWORD *)(v5 + 32) || !(unsigned int)MiPageHasRelocations(*(_QWORD *)(v5 + 32), a3, 1LL) )
    return -1LL;
  result = MiAllocatePool(0x100uLL, 0x1000uLL, 1749642573);
  v9 = result;
  if ( result )
  {
    KeCopyPage(result, BugCheckParameter3);
    v10 = v9;
    if ( (a5 & 2) != 0 )
      v10 = BugCheckParameter3;
    MiPerformFixups(v10, BugCheckParameter2, 0LL, 41);
    return v9;
  }
  return result;
}
