/*
 * XREFs of ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18006B840
 * Callers:
 *     ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18006B7A0 (-EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // rdi
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  bool v9; // zf
  _QWORD *v10; // rdx
  signed __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 result; // rax

  v3 = *a1;
  v4 = a2 + a3;
  v6 = a2;
  v7 = (a1[1] - *a1) >> 3;
  v9 = a2 + a3 == v7;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v10 = a1 + 1;
  if ( !v9 )
  {
    if ( !v6 || v3 && v6 >= 0 && v7 >= v6 )
    {
      v11 = 8 * v7 - 8 * v4;
      v12 = v11 >> 3;
      if ( v11 >> 3 >= 0 )
      {
        if ( v11 >> 3 <= 0 || v7 - v6 >= v12 )
          goto LABEL_14;
      }
      else if ( v6 >= (unsigned __int64)-(__int64)v12 )
      {
LABEL_14:
        memmove_0((void *)(v3 + 8 * v6), (const void *)(v3 + 8 * v4), v11);
        v10 = a1 + 1;
        goto LABEL_15;
      }
    }
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_15:
  result = 8 * a3;
  *v10 = a1[1] - 8 * a3;
  return result;
}
