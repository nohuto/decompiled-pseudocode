/*
 * XREFs of VerifierMmUnlockPages @ 0x140BA0D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B8B8F0 (ViTargetAddToCounter.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierMmUnlockPages(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v5; // rdi
  unsigned __int64 v6; // r9
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 120LL, CurrentIrql, BugCheckParameter2, 0LL, 0xBu, retaddr);
  v5 = *(__int16 *)(BugCheckParameter2 + 10);
  if ( (v5 & 2) == 0 && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 124LL, BugCheckParameter2, v5, 0LL, 0xBu, retaddr);
  if ( (unsigned int)VfVerifyMode >= 3 && (v5 & 4) != 0 && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 125LL, BugCheckParameter2, v5, 0LL, 0xBu, retaddr);
  if ( (v5 & 0x10) != 0 && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 180LL, BugCheckParameter2, v5, 16LL, 0xBu, retaddr);
  if ( (v5 & 1) != 0 && _bittest(&MmVerifierData, 0xCu) )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  v6 = -(__int64)*(unsigned int *)(BugCheckParameter2 + 40);
  if ( _bittest(&MmVerifierData, 0xCu) )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, v6);
  return guard_dispatch_icall_no_overrides(BugCheckParameter2, a2, a3, v6);
}
