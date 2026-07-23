/*
 * XREFs of AstInitialize @ 0x140C0CF98
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140311820 (RtlGetNtProductType.c)
 *     AstInitializeBloomFilter @ 0x14070D964 (AstInitializeBloomFilter.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 AstInitialize()
{
  ULONG_PTR Pool2; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  NtProductType = 0;
  if ( RtlGetNtProductType(&NtProductType) && NtProductType == NtProductWinNt )
  {
    AstIsActive = 1;
    Pool2 = ExAllocatePool2(0x100uLL, 0x1000uLL, 0x6E446341uLL);
    if ( !Pool2 )
      return 3221225495LL;
    AstInitializeBloomFilter(v2, v1, Pool2);
  }
  else
  {
    AstIsActive = 0;
  }
  return 0LL;
}
