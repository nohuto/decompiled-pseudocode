/*
 * XREFs of VmpDereferencePinInProgress @ 0x140648D74
 * Callers:
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x140649920 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     VmpVaRangeCheckPinnedGpaRanges @ 0x140649E5C (VmpVaRangeCheckPinnedGpaRanges.c)
 */

__int64 __fastcall VmpDereferencePinInProgress(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 64))-- == 1LL )
    return VmpVaRangeCheckPinnedGpaRanges(a1);
  return result;
}
