/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801D293C
 * Callers:
 *     ??1?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA@XZ @ 0x1801D252C (--1-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@.c)
 *     ?erase_unchecked@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@0@Z @ 0x1801D259C (-erase_unchecked@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredB.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x1801017D8 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x1801D26BC (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D2784 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rax
  _QWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2 + a3;
  v7 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size((__int64)a1);
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  result = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
  if ( v6 != v7 )
  {
    if ( a2 && (!result || a2 < 0 || v7 < a2) )
      _invalid_parameter_noinfo_noreturn();
    v10[0] = result;
    v10[1] = v7;
    v10[2] = a2;
    result = std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
               (__int64)v11,
               (const void *)(result + 8 * v6),
               result + 8 * v7,
               v10);
  }
  if ( a3 )
  {
    result = *(_DWORD *)a1 & 3;
    if ( (*(_DWORD *)a1 & 3) == 0 )
      goto LABEL_18;
    v9 = result - 1;
    if ( !v9 )
    {
      result = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
      *(_QWORD *)(result - 16) -= a3;
      return result;
    }
    result = v9 - 1;
    if ( result )
    {
      if ( result != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      if ( a3 != -1 )
LABEL_18:
        *a1 = 2LL;
    }
  }
  return result;
}
