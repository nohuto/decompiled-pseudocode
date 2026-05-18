/*
 * XREFs of sub_1800368B0 @ 0x1800368B0
 * Callers:
 *     sub_180034CF0 @ 0x180034CF0 (sub_180034CF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800368B0(_Cnd_t a1, _Mtx_t *a2, const xtime *a3)
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
