/*
 * XREFs of IrqArbClearStaleAllocations @ 0x1400B2278
 * Callers:
 *     IrqArbCommitAllocation @ 0x1400B1CB0 (IrqArbCommitAllocation.c)
 * Callees:
 *     <none>
 */

PRTL_RANGE __fastcall IrqArbClearStaleAllocations(__int64 a1)
{
  struct _RTL_RANGE_LIST *v1; // rcx
  PRTL_RANGE result; // rax
  _DWORD *UserData; // rax
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+8h] BYREF

  Range = 0LL;
  v1 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(v1, &Iterator, &Range);
  while ( 1 )
  {
    result = Range;
    if ( !Range )
      break;
    UserData = Range->UserData;
    if ( UserData )
      UserData[1] &= ~8u;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
