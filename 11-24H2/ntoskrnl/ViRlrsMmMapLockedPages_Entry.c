/*
 * XREFs of ViRlrsMmMapLockedPages_Entry @ 0x140BA1770
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140B9865C (VfFaultsIsSystemSufficientlyBooted.c)
 */

__int64 __fastcall ViRlrsMmMapLockedPages_Entry(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10

  result = *(_QWORD *)(a1 + 16);
  if ( !_bittest16((const signed __int16 *)(result + 10), 0xDu) )
  {
    result = VfFaultsIsSystemSufficientlyBooted();
    if ( (_DWORD)result )
      return CarReportRuleViolationFromNt(
               196,
               129LL,
               *(_QWORD *)(v2 + 16),
               *(__int16 *)(*(_QWORD *)(v2 + 16) + 10LL),
               0LL,
               2u,
               *(_QWORD *)v2);
  }
  return result;
}
