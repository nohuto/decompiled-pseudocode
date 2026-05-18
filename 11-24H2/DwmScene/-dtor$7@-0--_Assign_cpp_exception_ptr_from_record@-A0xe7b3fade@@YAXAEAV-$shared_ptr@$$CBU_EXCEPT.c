/*
 * XREFs of ?dtor$7@?0??_Assign_cpp_exception_ptr_from_record@?A0xe7b3fade@@YAXAEAV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@AEBUEHExceptionRecord@@@Z@4HA @ 0x1800D5730
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x180010380 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall ``anonymous namespace'::_Assign_cpp_exception_ptr_from_record'::`1'::dtor$7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 40));
  }
}
