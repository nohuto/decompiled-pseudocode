/*
 * XREFs of VmpDereferencePinInProgress @ 0x14064A7B4
 * Callers:
 *     VmpPinMemoryRange @ 0x14064ACC0 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x14064B360 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     VmpVaRangeCheckPinnedGpaRanges @ 0x14064B89C (VmpVaRangeCheckPinnedGpaRanges.c)
 */

__int64 __fastcall VmpDereferencePinInProgress(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 64))-- == 1LL )
    return VmpVaRangeCheckPinnedGpaRanges(a1);
  return result;
}
