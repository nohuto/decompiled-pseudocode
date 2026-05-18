/*
 * XREFs of ?dtor$4@?0??_Assign_cpp_exception_ptr_from_record@?A0xcb9108e8@@YAXAEAV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@AEBUEHExceptionRecord@@@Z@4HA @ 0x1800E252A
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F20 @ 0x180010F20 (sub_180010F20.c)
 */

__int64 __fastcall ``anonymous namespace'::_Assign_cpp_exception_ptr_from_record'::`1'::dtor$4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180010F20();
  }
  return result;
}
