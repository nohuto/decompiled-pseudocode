/*
 * XREFs of MmFreeBootRegistry @ 0x1407E725C
 * Callers:
 *     CmpFreeBootRegistry @ 0x140668C90 (CmpFreeBootRegistry.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     HvpDropPagedBins @ 0x140A60168 (HvpDropPagedBins.c)
 * Callees:
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     MiDeleteBootRange @ 0x140669130 (MiDeleteBootRange.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_140E37508, 1LL, 0LL);
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
    qword_140E37508 = 0LL;
  }
}
