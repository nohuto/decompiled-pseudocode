/*
 * XREFs of ViSpMmMapIoSpace_Entry @ 0x140BA6A90
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     MmIsMdlPageLocked @ 0x140BA66F8 (MmIsMdlPageLocked.c)
 */

__int64 __fastcall ViSpMmMapIoSpace_Entry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v3; // rbx
  ULONG_PTR v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    CarReportRuleViolationFromNt(
      196,
      115LL,
      CurrentIrql,
      *(unsigned int *)(a1 + 24),
      *(_QWORD *)(a1 + 16),
      0,
      *(_QWORD *)a1);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v3 >> 12;
  v6 = ((v3 & 0xFFF) + v4 + 4095) >> 12;
  do
  {
    result = MmIsMdlPageLocked(v5);
    if ( !(_DWORD)result )
      result = CarReportRuleViolationFromNt(196, 131LL, v3, v4, v5, 0, *(_QWORD *)a1);
    ++v5;
    --v6;
  }
  while ( v6 );
  return result;
}
