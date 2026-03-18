/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x14098E5C4
 * Callers:
 *     AlpcpCaptureMessageDataSafe @ 0x1408AA5A0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCaptureMessageData @ 0x1408AE9B0 (AlpcpCaptureMessageData.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14098E380 (AlpcpSetupMessageDataForDeferredCopy.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1408B0170 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 1432));
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 1432);
    if ( v2 < a2 )
      break;
    v3 = *(_QWORD *)(a1 + 1432);
    if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1432), v2 - a2, v2) )
      return 0LL;
  }
  return PsChargeProcessPagedPoolQuota(a1, a2);
}
