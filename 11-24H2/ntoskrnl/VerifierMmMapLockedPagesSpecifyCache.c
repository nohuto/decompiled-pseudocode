/*
 * XREFs of VerifierMmMapLockedPagesSpecifyCache @ 0x140BA0B40
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140B9665C (VfFaultsIsSystemSufficientlyBooted.c)
 */

__int64 __fastcall VerifierMmMapLockedPagesSpecifyCache(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  unsigned int v6; // r14d
  char v7; // si
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  v7 = a2;
  if ( !_bittest16((const signed __int16 *)(BugCheckParameter2 + 10), 0xDu) && (_DWORD)a5 )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      CarReportRuleViolationFromNt(
        196,
        130LL,
        BugCheckParameter2,
        *(__int16 *)(BugCheckParameter2 + 10),
        (unsigned int)a5,
        0xBu,
        retaddr);
LABEL_5:
    LOBYTE(a2) = v7;
    return guard_dispatch_icall_no_overrides(BugCheckParameter2, a2, v6, a4);
  }
  if ( ((VfRuleClasses & 4) == 0 || !(unsigned int)VfFaultsInjectResourceFailure(0))
    && ((VfRuleClasses & 0x40000) == 0
     || !ViFnAutoFailInject
     || !(unsigned __int8)guard_dispatch_icall_no_overrides("MmMapLockedPagesSpecifyCache", a2, a3, a4)) )
  {
    goto LABEL_5;
  }
  if ( v7 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
