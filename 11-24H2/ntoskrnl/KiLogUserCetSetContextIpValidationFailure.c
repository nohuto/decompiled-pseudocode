/*
 * XREFs of KiLogUserCetSetContextIpValidationFailure @ 0x1405C449C
 * Callers:
 *     KeVerifyContextIpForUserCet @ 0x1403D4570 (KeVerifyContextIpForUserCet.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x1403D5B40 (KeVerifyContextRecord.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailure(int a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // esi
  struct _EX_RUNDOWN_REF *Process; // rdi
  signed __int32 Ptr_high; // eax
  signed __int32 v10; // ett
  __int64 Pool2; // rbx

  v5 = a4;
  Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->Process;
  _m_prefetchw((char *)&Process[234].Ptr + 4);
  Ptr_high = HIDWORD(Process[234].Ptr);
  do
  {
    v10 = Ptr_high;
    Ptr_high = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&Process[234].Ptr + 1,
                 Ptr_high | 0x80000,
                 Ptr_high);
  }
  while ( v10 != Ptr_high );
  if ( (Ptr_high & 0x80000) == 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x40uLL, 0x63736C4Bu);
    if ( Pool2 )
    {
      if ( ExAcquireRundownProtection_0(Process + 61) )
      {
        ObfReferenceObjectWithTag(Process, 0x746C6644u);
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 16) = KiLogUserCetSetContextIpValidationFailureWorker;
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_DWORD *)(Pool2 + 32) = a1;
        *(_QWORD *)(Pool2 + 40) = Process;
        *(_QWORD *)(Pool2 + 48) = a3;
        *(_DWORD *)(Pool2 + 56) = v5;
        *(_DWORD *)(Pool2 + 60) = a2;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
      }
      else
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
    }
  }
}
