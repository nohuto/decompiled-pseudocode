/*
 * XREFs of PspHardDereferenceSiloWorker @ 0x1403C47E0
 * Callers:
 *     PsReleaseSiloHardReference @ 0x1403C4750 (PsReleaseSiloHardReference.c)
 *     IopCloseFileObjectExtension @ 0x1403C4780 (IopCloseFileObjectExtension.c)
 *     PspJobClose @ 0x1408E9460 (PspJobClose.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1408EF378 (PspEvaluateAndNotifyEmptyJob.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 */

void __fastcall PspHardDereferenceSiloWorker(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  if ( !a1 )
    NT_ASSERT("!PsIsHostSilo(Silo)");
  if ( (*(_DWORD *)(a1 + 1552) & 0x40000000) == 0 )
    NT_ASSERT("PspJobIsSilo(Silo)");
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1752), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    *(_QWORD *)(a1 + 1760) = 0LL;
    *(_QWORD *)(a1 + 1776) = PspCompleteHardDereferenceSiloDeferred;
    *(_QWORD *)(a1 + 1784) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1760), DelayedWorkQueue);
  }
}
