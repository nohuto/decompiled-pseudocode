/*
 * XREFs of ACPIInternalGrowBuffer @ 0x140097794
 * Callers:
 *     PnpiGrowResourceDescriptor @ 0x1400BBF5C (PnpiGrowResourceDescriptor.c)
 *     PnpiGrowResourceList @ 0x1400BC068 (PnpiGrowResourceList.c)
 * Callees:
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIInternalGrowBuffer(const void **a1, unsigned int a2, unsigned int a3)
{
  size_t v3; // rsi
  void *Pool2; // rax
  void *v6; // rcx
  const void *v7; // rdi

  v3 = a2;
  Pool2 = (void *)ExAllocatePool2(256LL, a3, 1383097153LL);
  v6 = (void *)*a1;
  v7 = Pool2;
  if ( Pool2 )
  {
    if ( v6 )
    {
      memmove(Pool2, *a1, v3);
      ExFreePoolWithTag((PVOID)*a1, 0);
    }
    *a1 = v7;
    return 0LL;
  }
  else
  {
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *a1 = 0LL;
    }
    return 3221225626LL;
  }
}
