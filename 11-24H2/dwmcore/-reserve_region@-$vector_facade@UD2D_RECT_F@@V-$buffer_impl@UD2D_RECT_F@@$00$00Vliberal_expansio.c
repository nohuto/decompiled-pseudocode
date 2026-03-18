/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801511CC
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180150034 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180151348 (-ensure_extra_capacity@-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@Z @ 0x1801CC6C4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // rbp
  _OWORD *v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  _OWORD *v12; // r11
  __int64 v13; // rsi
  __int64 v14; // rdi
  _OWORD *v16; // r8
  _OWORD *v17; // r9
  unsigned __int64 v18; // rcx
  signed __int64 v19; // r15
  __int64 v20; // rax
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v6 = *a1;
  v7 = (_OWORD *)a1[1];
  v8 = ((__int64)v7 - *a1) >> 4;
  v9 = v8 - a2;
  v10 = 16 * v8 + *a1;
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_11;
  v11 = ((a1[1] - *a1) >> 4) - a2;
  if ( a3 < v9 )
    v11 = a3;
  v12 = &v7[-v11];
  if ( v7 != v12 )
  {
    v16 = v7 - 1;
    v17 = (_OWORD *)(16 * a3 + v10);
    v18 = a3;
    if ( v10 )
    {
      while ( v18 )
      {
        --v18;
        --v17;
        if ( v18 >= a3 )
          break;
        *v17 = *v16;
        if ( v16 == v12 )
          goto LABEL_7;
        --v16;
      }
    }
    goto LABEL_11;
  }
LABEL_7:
  if ( v9 > a3 )
  {
    if ( !v8 || v6 && v8 >= 0 )
    {
      v21[1] = v8;
      v21[2] = v8;
      v13 = 16 * a2;
      v14 = 16 * a3;
      v21[0] = v6;
      v19 = 16 * v8 - v14 - v13;
      v20 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(
              v21,
              -(v19 >> 4));
      memmove_0((void *)(v20 - v19), (const void *)(v13 + v6), v19);
      goto LABEL_9;
    }
LABEL_11:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = 16 * a2;
  v14 = 16 * a3;
LABEL_9:
  a1[1] += v14;
  return v13 + v6;
}
