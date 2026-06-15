/*
 * XREFs of ??1RawUsageIndex@details_abi@wil@@QEAA@XZ @ 0x180022830
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$0 @ 0x18004CA89 (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::~RawUsageIndex(wil::details_abi::RawUsageIndex *this)
{
  void *v1; // rax

  v1 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v1 )
    operator delete(v1);
}
