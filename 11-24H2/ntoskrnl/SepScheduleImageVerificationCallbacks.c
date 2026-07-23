/*
 * XREFs of SepScheduleImageVerificationCallbacks @ 0x140A89D00
 * Callers:
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepScheduleImageVerificationCallbacks(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 Pool2; // rax
  unsigned int v9; // ebx

  Pool2 = ExAllocatePool2(0x40uLL, a2 + 56LL, 0x63734943u);
  v9 = 0;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = Pool2;
    *(_QWORD *)(Pool2 + 16) = SepImageVerificationCallbackWorker;
    *(_QWORD *)Pool2 = 0LL;
    *(_DWORD *)(Pool2 + 32) = a3;
    *(_DWORD *)(Pool2 + 36) = a4;
    *(_QWORD *)(Pool2 + 40) = a1;
    *(_DWORD *)(Pool2 + 48) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
