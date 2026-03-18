/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801257FC
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x180125CBC (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180125454 (-ensure_extra_capacity@-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x180256CEC (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

__int64 __fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  _OWORD *v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  _OWORD *v8; // rdx
  __int64 v9; // rax
  _OWORD *v10; // r9
  __int64 v11; // rbx
  _OWORD *v13; // rcx
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  char v15[32]; // [rsp+40h] [rbp-28h] BYREF

  detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity((__int64)a1, 1uLL);
  v4 = *a1;
  v5 = (_OWORD *)a1[1];
  v6 = ((__int64)v5 - *a1) >> 4;
  v7 = v6 - a2;
  v8 = (_OWORD *)(*a1 + 16 * v6);
  if ( !v8 )
    goto LABEL_8;
  v9 = v6 - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = &v5[-v9];
  if ( v5 != v10 )
  {
    v13 = v5 - 1;
    *v8 = *v13;
    if ( v13 != v10 )
LABEL_8:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 > 1 )
  {
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_8;
    v14[1] = v6;
    v14[2] = v6;
    v11 = 16 * a2;
    v14[0] = v4;
    ((void (__fastcall *)(char *, __int64, __int64, _QWORD *))std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>)(
      v15,
      v11 + v4,
      v4 + 16 * v6 - 16,
      v14);
  }
  else
  {
    v11 = 16 * a2;
  }
  a1[1] += 16LL;
  return v11 + v4;
}
