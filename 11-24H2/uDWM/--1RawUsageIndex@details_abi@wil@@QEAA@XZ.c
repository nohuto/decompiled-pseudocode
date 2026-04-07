/*
 * XREFs of ??1RawUsageIndex@details_abi@wil@@QEAA@XZ @ 0x180080F1C
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$0 @ 0x1800F74AE (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::RawUsageIndex::~RawUsageIndex(wil::details_abi::RawUsageIndex *this)
{
  void *v1; // rax

  v1 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v1 )
    MemoryFree(v1);
}
