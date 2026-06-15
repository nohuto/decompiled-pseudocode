/*
 * XREFs of ??1RawUsageIndex@details_abi@wil@@QEAA@XZ @ 0x140079430
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$0 @ 0x1400970B9 (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$0.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14005CEF0 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::~RawUsageIndex(wil::details_abi::RawUsageIndex *this, void *a2)
{
  wil::details *v2; // rax

  v2 = (wil::details *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v2 )
    wil::details::FreeProcessHeap(v2, a2);
}
