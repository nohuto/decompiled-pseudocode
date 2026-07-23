/*
 * XREFs of CmFcpFeatureUsageProviderSubscriptionWrapper @ 0x140A95920
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmFcpFeatureUsageProviderSubscriptionWrapper(_QWORD *a1)
{
  __int64 v1; // rdi
  signed __int32 v3; // ett
  __int64 result; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = a1[9];
  _m_prefetchw((char *)a1 + 84);
  do
    v3 = *((_DWORD *)a1 + 21);
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 21, (v3 & 0xFFFFFFFC) + 4, v3) );
  guard_dispatch_icall_no_overrides(1LL, 0LL);
  _InterlockedAdd((volatile signed __int32 *)a1 + 21, 4u);
  _InterlockedOr(v5, 0);
  if ( a1[11] )
    ExfUnblockPushLock((__int64)(a1 + 11), 0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 1860), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    _InterlockedOr(v5, 0);
    if ( *(_QWORD *)(v1 + 1448) )
      return ExfUnblockPushLock(v1 + 1448, 0LL);
  }
  return result;
}
