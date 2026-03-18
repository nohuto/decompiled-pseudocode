/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x140946F00
 * Callers:
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KeCopyPage @ 0x1406A8140 (KeCopyPage.c)
 *     MiPerformFixups @ 0x140946214 (MiPerformFixups.c)
 *     MiPageHasRelocations @ 0x140946FF0 (MiPageHasRelocations.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(
        __int64 BugCheckParameter3,
        __int64 *BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  unsigned __int64 v6; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdi
  ULONG_PTR v12; // rcx
  __int64 v13; // rdx

  v6 = BugCheckParameter2[12] & 0xFFFFFFFFFFFFFFF8uLL;
  v9 = *(_QWORD *)(v6 + 32);
  if ( !v9 || !(unsigned int)MiPageHasRelocations(*(_QWORD *)(v6 + 32), a3, 1LL) )
    return -1LL;
  result = MiAllocatePool(0x100uLL, 0x1000uLL, 1749642573);
  v11 = result;
  if ( result )
  {
    KeCopyPage(result, BugCheckParameter3);
    v12 = v11;
    if ( (a5 & 2) != 0 )
      v12 = BugCheckParameter3;
    v13 = 0LL;
    if ( (a5 & 1) == 0 )
      v13 = -*(_QWORD *)(v9 + 40);
    MiPerformFixups(v12, BugCheckParameter2, a3, v13 + *(_QWORD *)(v9 + 48), 0LL, 0x29u);
    return v11;
  }
  return result;
}
