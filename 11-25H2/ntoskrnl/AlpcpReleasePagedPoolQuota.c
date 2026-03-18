/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x14098E608
 * Callers:
 *     AlpcpCaptureMessageDataSafe @ 0x1408AA5A0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCaptureMessageData @ 0x1408AE9B0 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14098E380 (AlpcpSetupMessageDataForDeferredCopy.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C5AE0 (PsReturnProcessPagedPoolQuota.c)
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + *(_QWORD *)(a1 + 1432);
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 1432), a2);
  }
  return result;
}
