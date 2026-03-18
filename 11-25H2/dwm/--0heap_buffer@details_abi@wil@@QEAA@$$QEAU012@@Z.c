/*
 * XREFs of ??0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z @ 0x140006E88
 * Callers:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x14000B498 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 * Callees:
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x140006D64 (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::details_abi::heap_buffer::heap_buffer(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(
    (_QWORD *)(a1 + 24),
    (__int64 *)(a2 + 24));
  return v2;
}
