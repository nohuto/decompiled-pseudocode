/*
 * XREFs of ViMiscCheckResourceRelease @ 0x140BA1404
 * Callers:
 *     VfMiscExReleaseResourceLite_Entry @ 0x140B9FA70 (VfMiscExReleaseResourceLite_Entry.c)
 *     VfMiscExReleaseResourceForThreadLite_Entry @ 0x140B9FA90 (VfMiscExReleaseResourceForThreadLite_Entry.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

struct _KTHREAD *__fastcall ViMiscCheckResourceRelease(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r10
  struct _KTHREAD *result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
  {
    result = KeGetCurrentThread();
    if ( (result->MiscFlags & 0x400) == 0 )
    {
      result = KeGetCurrentThread();
      if ( !result->WaitBlock[3].SpareLong && CurrentIrql != 2 )
        return (struct _KTHREAD *)CarReportRuleViolationFromNt(
                                    196,
                                    56LL,
                                    CurrentIrql,
                                    KeGetCurrentThread()->CombinedApcDisable,
                                    a1,
                                    0xBu,
                                    a2);
    }
  }
  return result;
}
