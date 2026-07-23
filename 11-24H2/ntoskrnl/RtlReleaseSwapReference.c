/*
 * XREFs of RtlReleaseSwapReference @ 0x14021E4BC
 * Callers:
 *     CmFcManagerNotifyFeatureUsage @ 0x14021E1F8 (CmFcManagerNotifyFeatureUsage.c)
 *     CmFcManagerRecordFeatureUsage @ 0x14048C624 (CmFcManagerRecordFeatureUsage.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x140496128 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1407E54B8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 * Callees:
 *     RtlBackoff @ 0x140284140 (RtlBackoff.c)
 *     ExpUnblockPushLock @ 0x1402BC2BC (ExpUnblockPushLock.c)
 */

__int64 __fastcall RtlReleaseSwapReference(unsigned __int64 *a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rtt
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = a2;
  v10 = 0;
  v4 = a1;
  while ( 1 )
  {
    _m_prefetchw(v4);
    v5 = *v4;
    v6 = *v4 & 1;
    if ( v6 != v3 )
      break;
    if ( !(v5 >> 1) )
      __fastfail(0xEu);
    v8 = *v4;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v6 | (2 * (v5 >> 1) - 2), v5);
    if ( v8 == result )
      return result;
    RtlBackoff(&v10);
  }
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    _InterlockedOr(v9, v2);
    if ( v4[2] != v2 )
      return ExpUnblockPushLock(v4 + 2, 0LL, 0LL);
  }
  return result;
}
