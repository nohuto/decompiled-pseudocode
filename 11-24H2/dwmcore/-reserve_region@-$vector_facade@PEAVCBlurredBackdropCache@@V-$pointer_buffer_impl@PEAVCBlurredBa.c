/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1801D27D0
 * Callers:
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1801D261C (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_K@Z @ 0x1801D2424 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_K@Z.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x1801D26BC (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D26F4 (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D2784 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??$move_backward@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x18024BAA8 (--$move_backward@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iterator@.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::reserve_region(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // r8
  _QWORD *i; // rax
  unsigned __int64 v14; // rax
  _QWORD v16[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  detail::pointer_buffer_impl<CBlurredBackdropCache *>::ensure_extra_capacity(a1, 1uLL);
  v4 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size((__int64)a1);
  v5 = v4 - a2;
  v6 = v4;
  v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(a1);
  v8 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
  v9 = (_QWORD *)(v8 + 8 * v6);
  if ( !v9 )
    goto LABEL_22;
  v10 = v5;
  v11 = 1LL;
  if ( v5 > 1 )
    v10 = 1LL;
  v12 = (_QWORD *)(v7 - 8 * v10);
  if ( (_QWORD *)v7 != v12 )
  {
    for ( i = (_QWORD *)(v7 - 8); v11; --i )
    {
      if ( --v11 )
        break;
      *v9 = *i;
      if ( i == v12 )
        goto LABEL_10;
    }
LABEL_22:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_10:
  if ( v5 > 1 )
  {
    if ( v6 && (!v8 || v6 < 0) )
      goto LABEL_22;
    v16[0] = v8;
    v16[1] = v6;
    v16[2] = v6;
    ((void (__fastcall *)(_BYTE *, unsigned __int64, unsigned __int64, _QWORD *))std::move_backward<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>)(
      v17,
      v8 + 8 * a2,
      v8 + 8 * (v6 - 1),
      v16);
  }
  if ( (*a1 & 3) != 0 )
  {
    if ( (*a1 & 3) == 1LL )
    {
      v14 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
      ++*(_QWORD *)(v14 - 16);
    }
    else if ( (unsigned __int64)(*a1 & 3) - 2 > 1 )
    {
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
  }
  else
  {
    *(_QWORD *)a1 = 2LL;
  }
  return v8 + 8 * a2;
}
