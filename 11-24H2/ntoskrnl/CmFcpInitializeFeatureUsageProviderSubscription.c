/*
 * XREFs of CmFcpInitializeFeatureUsageProviderSubscription @ 0x1407E4CFC
 * Callers:
 *     CmFcpManagerAllocateUsageProviderSubscription @ 0x140ABA02C (CmFcpManagerAllocateUsageProviderSubscription.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 *__fastcall CmFcpInitializeFeatureUsageProviderSubscription(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 *result; // rax

  v4 = a1 + 16;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  memset_0((void *)(a1 + 16), 0, 0x40uLL);
  *(_QWORD *)(v4 + 24) = v4;
  *(_QWORD *)(v4 + 16) = CmpWorkItemWrapper;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 48) = CmFcpFeatureUsageProviderSubscriptionWrapper;
  result = CmFcSystemManager;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_DWORD *)(v4 + 44) = 4;
  *(_QWORD *)(v4 + 56) = a4;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 88) = CmFcSystemManager;
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
