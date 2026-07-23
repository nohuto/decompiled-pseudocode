/*
 * XREFs of CmFcpInitializeFeatureUsageProviderSubscription @ 0x1407E52AC
 * Callers:
 *     CmFcpManagerAllocateUsageProviderSubscription @ 0x140AB5048 (CmFcpManagerAllocateUsageProviderSubscription.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 *__fastcall CmFcpInitializeFeatureUsageProviderSubscription(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax

  memset_0((void *)a1, 0, 0x88uLL);
  if ( a4 )
  {
    *(_QWORD *)(a1 + 112) = *(_QWORD *)a4;
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a4 + 8);
    *(_DWORD *)(a1 + 128) = *(_DWORD *)(a4 + 24);
    a4 = *(_QWORD *)(a4 + 16);
  }
  memset_0((void *)(a1 + 16), 0, 0x40uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32) = CmpWorkItemWrapper;
  *(_QWORD *)(a1 + 64) = CmFcpFeatureUsageProviderSubscriptionWrapper;
  result = CmFcSystemManager;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_DWORD *)(a1 + 60) = 4;
  *(_QWORD *)(a1 + 72) = a4;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 88) = CmFcSystemManager;
  return result;
}
