/*
 * XREFs of ExFreePoolSanityChecks @ 0x140BA64B0
 * Callers:
 *     VerifierExFreePool @ 0x140B93810 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140B93890 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14035B710 (MmDeterminePoolType.c)
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
 *     KevSkipVerification @ 0x1406A2B5C (KevSkipVerification.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall ExFreePoolSanityChecks(ULONG_PTR a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx

  result = KevSkipVerification();
  if ( !(_DWORD)result )
  {
    if ( a1 <= 0x7FFFFFFEFFFFLL )
      CarReportRuleViolationFromNt(196, 16LL, a1, 0LL, 0LL, 0, a2);
    if ( !ExpSpecialAllocations || (result = ExIsSpecialPoolAddress(a1), !(_DWORD)result) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (a1 & 0xFFF) == 0 )
      {
        result = MmDeterminePoolType(a1) & 0x100;
        if ( (_DWORD)result )
        {
          if ( CurrentIrql > 1u )
            return CarReportRuleViolationFromNt(196, 17LL, CurrentIrql, (unsigned int)result != 0LL, a1, 0, a2);
        }
        else if ( CurrentIrql > 2u )
        {
          return CarReportRuleViolationFromNt(196, 18LL, CurrentIrql, 0LL, a1, 0, a2);
        }
        return result;
      }
      if ( (a1 & 0xF) != 0 )
        CarReportRuleViolationFromNt(196, 22LL, 0x2176uLL, a1, 0LL, 0, a2);
      if ( (*(_BYTE *)(a1 - 13) & 3) == 0 )
        CarReportRuleViolationFromNt(196, 19LL, 0x2184uLL, a1 - 16, *(unsigned int *)(a1 - 16), 0, a2);
      result = *(_BYTE *)(a1 - 13) & 3;
      if ( (*(_BYTE *)(a1 - 13) & 1) != 0 )
      {
        if ( CurrentIrql <= 1u )
          goto LABEL_22;
        v6 = 17LL;
      }
      else
      {
        if ( CurrentIrql <= 2u )
          goto LABEL_22;
        v6 = 18LL;
      }
      result = CarReportRuleViolationFromNt(196, v6, CurrentIrql, *(_BYTE *)(a1 - 13) & 3, a1, 0, a2);
LABEL_22:
      if ( (*(_BYTE *)(a1 - 13) & 2) == 0 )
        return CarReportRuleViolationFromNt(196, 20LL, 0x21A7uLL, a1 - 16, 0LL, 0, a2);
    }
  }
  return result;
}
