/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x14088DADC
 * Callers:
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14088DB20 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140892480 (AlpcpCaptureMessageDataSafe.c)
 *     NtAlpcCreateSecurityContext @ 0x140894C50 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x14093F62C (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x14093FCA0 (AlpcpCaptureMessageData.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1404066F0 (PsReturnProcessPagedPoolQuota.c)
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
