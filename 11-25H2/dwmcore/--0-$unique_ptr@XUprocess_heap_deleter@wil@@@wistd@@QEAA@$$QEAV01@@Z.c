/*
 * XREFs of ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x18025E4C0
 * Callers:
 *     ??0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z @ 0x18025E4EC (--0heap_buffer@details_abi@wil@@QEAA@$$QEAU012@@Z.c)
 * Callees:
 *     ??0?$basic_iterator@PEAVCVisual@@@detail@@QEAA@AEBV01@@Z @ 0x1801D7970 (--0-$basic_iterator@PEAVCVisual@@@detail@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5 = v2;
  detail::basic_iterator<CVisual *>::basic_iterator<CVisual *>(a1, &v5);
  return v3;
}
