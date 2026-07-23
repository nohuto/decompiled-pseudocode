/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x140892384
 * Callers:
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140892140 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCaptureMessageData @ 0x1408942E0 (AlpcpCaptureMessageData.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14089BA70 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x14089EAD0 (PsChargeProcessPagedPoolQuota.c)
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
