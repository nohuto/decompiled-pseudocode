/*
 * XREFs of CmFcpManagerAllocateUsageProviderSubscription @ 0x140AB5048
 * Callers:
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x1407E4AB4 (CmFcManagerRegisterFeatureUsageProvider.c)
 * Callees:
 *     CmFcpInitializeFeatureUsageProviderSubscription @ 0x1407E52AC (CmFcpInitializeFeatureUsageProviderSubscription.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

int *__fastcall CmFcpManagerAllocateUsageProviderSubscription(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int32 v5; // eax
  int *Pool2; // rbx

  if ( byte_140EF72DA )
  {
    Pool2 = (int *)ExAllocatePool2(0x40uLL, 0x88uLL, 0x63466D43u);
    if ( !Pool2 )
      return Pool2;
LABEL_6:
    CmFcpInitializeFeatureUsageProviderSubscription((__int64)Pool2, a2, a2, a3);
    return Pool2;
  }
  v5 = _InterlockedIncrement(&dword_140EF76A8);
  if ( v5 <= 3 )
  {
    Pool2 = &dword_140EF7510[34 * v5 - 34];
    goto LABEL_6;
  }
  return 0LL;
}
