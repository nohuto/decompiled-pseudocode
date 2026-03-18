/*
 * XREFs of CmFcpManagerAllocateUsageProviderSubscription @ 0x140ABA02C
 * Callers:
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x1407E4564 (CmFcManagerRegisterFeatureUsageProvider.c)
 * Callees:
 *     CmFcpInitializeFeatureUsageProviderSubscription @ 0x1407E4CFC (CmFcpInitializeFeatureUsageProviderSubscription.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

int *__fastcall CmFcpManagerAllocateUsageProviderSubscription(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int32 v5; // eax
  int *Pool2; // rbx

  if ( byte_140EF709A )
  {
    Pool2 = (int *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return Pool2;
LABEL_6:
    CmFcpInitializeFeatureUsageProviderSubscription((__int64)Pool2, a2, a2, a3);
    return Pool2;
  }
  v5 = _InterlockedIncrement(&dword_140EF7420);
  if ( v5 <= 3 )
  {
    Pool2 = &dword_140EF72D0[28 * v5 - 28];
    goto LABEL_6;
  }
  return 0LL;
}
