/*
 * XREFs of MmFreeBootRegistry @ 0x1407D73A4
 * Callers:
 *     CmpFreeBootRegistry @ 0x14065D1C0 (CmpFreeBootRegistry.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     HvpDropPagedBins @ 0x1409F6F54 (HvpDropPagedBins.c)
 * Callees:
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void MmFreeBootRegistry()
{
  size_t *v0; // rax
  size_t *v1; // r14
  size_t v2; // rsi
  unsigned __int64 *v3; // rbx
  __int64 v4; // rdx
  size_t i; // rdi
  unsigned __int64 v6; // rcx
  __int64 PteAddress; // rax
  __int64 v8; // rdx

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_140E372C8, 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, MiRegistryVaSort);
    v4 = 0LL;
    for ( i = 0LL; i < v2; ++i )
    {
      v6 = *v3;
      ++v4;
      ++v3;
      if ( i == v2 - 1 || v6 + 4096 != *v3 )
      {
        PteAddress = MiGetPteAddress(v6);
        MiDeleteBootRange(8 - 8 * v8 + PteAddress, v8);
        v4 = 0LL;
      }
    }
    ExFreePoolWithTag(v1, 0);
    qword_140E372C8 = 0LL;
  }
}
