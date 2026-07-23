/*
 * XREFs of PspHardDereferenceSiloWorker @ 0x1403B33A0
 * Callers:
 *     PsReleaseSiloHardReference @ 0x1403B3310 (PsReleaseSiloHardReference.c)
 *     IopCloseFileObjectExtension @ 0x1403B3340 (IopCloseFileObjectExtension.c)
 *     PspJobClose @ 0x14085AC90 (PspJobClose.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140860B78 (PspEvaluateAndNotifyEmptyJob.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
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
