/*
 * XREFs of ViIrpCheckKernelAddressForIrp @ 0x140B90228
 * Callers:
 *     VfBeforeCallDriver @ 0x140B8FC68 (VfBeforeCallDriver.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     VfTargetDriversIsEnabled @ 0x140BA9F30 (VfTargetDriversIsEnabled.c)
 */

struct _KTHREAD *__fastcall ViIrpCheckKernelAddressForIrp(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *result; // rax
  struct _KPROCESS *Process; // r9

  result = (struct _KTHREAD *)(BugCheckParameter3 - 1);
  if ( BugCheckParameter3 - 1 <= 0x7FFFFFFEFFFELL )
  {
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
    {
      if ( !a3 )
        return (struct _KTHREAD *)CarReportRuleViolationFromNt(
                                    196,
                                    226LL,
                                    BugCheckParameter2,
                                    BugCheckParameter3,
                                    0LL,
                                    4u,
                                    *(_QWORD *)(a3 + 176));
      result = (struct _KTHREAD *)VfTargetDriversIsEnabled(*(_QWORD *)(a3 + 176));
      if ( (_DWORD)result )
        return (struct _KTHREAD *)CarReportRuleViolationFromNt(
                                    196,
                                    226LL,
                                    BugCheckParameter2,
                                    BugCheckParameter3,
                                    0LL,
                                    4u,
                                    *(_QWORD *)(a3 + 176));
    }
  }
  return result;
}
