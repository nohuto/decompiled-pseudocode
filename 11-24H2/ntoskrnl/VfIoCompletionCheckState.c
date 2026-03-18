/*
 * XREFs of VfIoCompletionCheckState @ 0x140BA710C
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140BA6B70 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfIoCompletionCheckState(unsigned int *Entry, ULONG_PTR BugCheckParameter2)
{
  __int64 v4; // rdx

  if ( (MmVerifierData & 0x10) != 0 && *(_BYTE *)Entry != KeGetCurrentIrql() )
    CarReportRuleViolationFromNt(
      196,
      250LL,
      BugCheckParameter2,
      *(unsigned __int8 *)Entry,
      KeGetCurrentIrql(),
      4u,
      BugCheckParameter2);
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v4 = Entry[1];
    if ( (_DWORD)v4 != KeGetCurrentThread()->WaitBlock[3].SpareLong )
      CarReportRuleViolationFromNt(
        196,
        251LL,
        BugCheckParameter2,
        KeGetCurrentThread()->CombinedApcDisable,
        v4,
        4u,
        BugCheckParameter2);
  }
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}
