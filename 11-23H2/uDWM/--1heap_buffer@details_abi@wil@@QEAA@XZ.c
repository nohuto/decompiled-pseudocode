/*
 * XREFs of ??1heap_buffer@details_abi@wil@@QEAA@XZ @ 0x18009A978
 * Callers:
 *     _wil::details_abi::RawUsageIndex::RecordUsage_::_1_::dtor$0 @ 0x180066F5C (_wil--details_abi--RawUsageIndex--RecordUsage_--_1_--dtor$0.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180021C38 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::heap_buffer::~heap_buffer(wil::details_abi::heap_buffer *this)
{
  void *v1; // rax

  v1 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v1 )
    MemoryFree(v1);
}
