/*
 * XREFs of CmFcpFeatureUsageProviderSubscriptionWrapper @ 0x140A9A3B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmFcpFeatureUsageProviderSubscriptionWrapper(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  signed __int32 v6; // ett
  __int64 result; // rax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = a1[9];
  _m_prefetchw((char *)a1 + 84);
  do
    v6 = *((_DWORD *)a1 + 21);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 21, (v6 & 0xFFFFFFFC) + 4, v6) );
  guard_dispatch_icall_no_overrides(1LL, 0LL, a2, a4);
  _InterlockedAdd((volatile signed __int32 *)a1 + 21, 4u);
  _InterlockedOr(v8, 0);
  if ( a1[11] )
    ExfUnblockPushLock((__int64)(a1 + 11), 0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 1788), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    _InterlockedOr(v8, 0);
    if ( *(_QWORD *)(v4 + 1376) )
      return ExfUnblockPushLock(v4 + 1376, 0LL);
  }
  return result;
}
