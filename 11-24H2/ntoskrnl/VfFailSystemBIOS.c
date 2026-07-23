/*
 * XREFs of VfFailSystemBIOS @ 0x14060ED20
 * Callers:
 *     <none>
 * Callees:
 *     VfIsVerificationEnabled @ 0x1404A8EB0 (VfIsVerificationEnabled.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

LOGICAL __fastcall VfFailSystemBIOS(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  LOGICAL result; // eax

  v8 = (unsigned int)BugCheckParameter1;
  if ( a7 && (v9 = *(_QWORD *)(a7 + 8)) != 0 )
    v10 = *(_QWORD *)(v9 + 24);
  else
    v10 = 0LL;
  result = VfIsVerificationEnabled(2, 0LL);
  if ( result )
    return CarReportRuleViolationFromNt(BugCheckCode, v8, 0LL, 0LL, 0LL, 30, v10);
  return result;
}
