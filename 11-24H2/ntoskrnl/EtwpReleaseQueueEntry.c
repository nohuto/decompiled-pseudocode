/*
 * XREFs of EtwpReleaseQueueEntry @ 0x1409F6E4C
 * Callers:
 *     EtwpQueueNotification @ 0x14083A16C (EtwpQueueNotification.c)
 *     EtwpDeleteRegistrationObject @ 0x14083C380 (EtwpDeleteRegistrationObject.c)
 *     EtwpSendReplyDataBlock @ 0x1409F6D68 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReleaseProcessWakeCounter @ 0x14088E750 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpReleaseQueueEntry(PVOID *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(P[4]);
    v4 = (__int64)P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
