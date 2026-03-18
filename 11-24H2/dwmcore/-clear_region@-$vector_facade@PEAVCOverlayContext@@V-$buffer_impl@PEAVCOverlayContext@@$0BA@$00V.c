/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801BBA10
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180102130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v6; // rax
  unsigned __int64 v7; // r9
  bool v9; // zf
  _QWORD *v10; // rdx
  signed __int64 v11; // r8
  unsigned __int64 v12; // rcx
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
    if ( v6 && (!v3 || v6 < 0 || v7 < v6) )
LABEL_7:
      _invalid_parameter_noinfo_noreturn();
    v11 = 8 * v7 - 8 * v4;
    v12 = v11 >> 3;
    if ( v11 >> 3 >= 0 )
    {
      if ( v11 >> 3 > 0 && v7 - v6 < v12 )
        goto LABEL_7;
    }
    else if ( v6 < (unsigned __int64)-(__int64)v12 )
    {
      goto LABEL_7;
    }
    memmove_0((void *)(v3 + 8 * v6), (const void *)(v3 + 8 * v4), v11);
    v10 = a1 + 1;
  }
  result = 8 * a3;
  *v10 = a1[1] - 8 * a3;
  return result;
}
