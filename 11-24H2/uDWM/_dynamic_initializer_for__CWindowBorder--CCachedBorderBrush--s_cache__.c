/*
 * XREFs of _dynamic_initializer_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x180087A10
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

int __fastcall dynamic_initializer_for__CWindowBorder::CCachedBorderBrush::s_cache__(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  _QWORD *v2; // rax

  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL, a2);
  *v2 = v2;
  v2[1] = v2;
  CWindowBorder::CCachedBorderBrush::s_cache = (__int64)v2;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CWindowBorder::CCachedBorderBrush::s_cache__);
}
