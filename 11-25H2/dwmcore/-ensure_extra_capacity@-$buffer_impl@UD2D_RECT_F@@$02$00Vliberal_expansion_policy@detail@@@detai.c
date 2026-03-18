/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180125454
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x180125680 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801257FC (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  void *v2; // rbp
  void *v3; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  signed __int64 v9; // r8
  void *v10; // rcx
  bool v11; // zf
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( (*(_QWORD *)(a1 + 16) - v5) >> 4 < a2 )
  {
    v6 = (v5 - *(_QWORD *)a1) >> 4;
    v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
    v8 = v6 + a2;
    if ( v6 + a2 >= v6 )
    {
      v13 = v7 >> 1;
      if ( v7 <= ~(v7 >> 1) && v13 + v7 >= v8 )
        v8 = v13 + v7;
      v2 = operator new[](saturated_mul(v8, 0x10uLL));
      v9 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      v3 = 0LL;
      v14 = v9 >> 4;
      if ( v9 >> 4 < 0 || v14 > 0 && v6 < v14 )
        _invalid_parameter_noinfo_noreturn();
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    memmove_0(v2, *(const void **)a1, v9);
    v10 = *(void **)a1;
    v11 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v2;
    if ( v11 )
      v10 = v3;
    operator delete(v10);
    v12 = *(_QWORD *)a1 + 16 * v6;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 16 * v8;
    *(_QWORD *)(a1 + 8) = v12;
  }
}
