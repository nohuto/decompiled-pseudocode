/*
 * XREFs of sub_180036750 @ 0x180036750
 * Callers:
 *     sub_180034B90 @ 0x180034B90 (sub_180034B90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180036750(_Cnd_t a1, _Mtx_t *a2, const xtime *a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( !Mtx_current_owns(*a2) )
  {
    std::_Throw_Cpp_error(4);
    __debugbreak();
  }
  LOBYTE(v6) = Cnd_timedwait(a1, *a2, a3) != 0;
  return v6;
}
