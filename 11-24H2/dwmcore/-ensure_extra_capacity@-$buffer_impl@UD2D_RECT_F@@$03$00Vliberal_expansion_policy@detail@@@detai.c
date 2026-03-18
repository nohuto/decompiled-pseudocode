/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801DC834
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801DC714 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansio.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@Z @ 0x1801CC6C4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // r14
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  const void *v7; // rax
  const void *v8; // rbx
  signed __int64 v9; // rdi
  const void *v10; // rsi
  void *v11; // rax
  void *v12; // rcx
  bool v13; // zf
  __int64 v14; // r14
  __int128 v15; // [rsp+20h] [rbp-58h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  v3 = a1[2];
  v4 = a1[1];
  if ( (v3 - v4) >> 4 < a2 )
  {
    v5 = (v4 - (_BYTE *)*a1) >> 4;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801DC965LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 4),
           (v3 - (_BYTE *)*a1) >> 4,
           v5 + a2);
    v7 = operator new[](saturated_mul(v6, 0x10uLL));
    v8 = *a1;
    *(_QWORD *)&v15 = v7;
    v9 = (_BYTE *)a1[1] - (_BYTE *)*a1;
    *((_QWORD *)&v15 + 1) = v5;
    v10 = v7;
    v16 = v15;
    v17 = 0LL;
    v11 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(
                    &v16,
                    v9 >> 4);
    memmove_0(v11, v8, v9);
    v12 = (void *)*a1;
    v13 = *a1 == a1 + 3;
    *a1 = v10;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = (__int64)*a1 + 16 * v5;
    a1[2] = (char *)*a1 + 16 * v6;
    a1[1] = (const void *)v14;
  }
}
