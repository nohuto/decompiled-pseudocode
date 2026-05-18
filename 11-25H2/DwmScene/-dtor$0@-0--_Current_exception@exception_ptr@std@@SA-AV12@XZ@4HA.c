/*
 * XREFs of ?dtor$0@?0??_Current_exception@exception_ptr@std@@SA?AV12@XZ@4HA @ 0x1800D8BBA
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F20 @ 0x180010F20 (sub_180010F20.c)
 */

__int64 __fastcall `std::exception_ptr::_Current_exception'::`1'::dtor$0(__int64 a1, __int64 a2)
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
