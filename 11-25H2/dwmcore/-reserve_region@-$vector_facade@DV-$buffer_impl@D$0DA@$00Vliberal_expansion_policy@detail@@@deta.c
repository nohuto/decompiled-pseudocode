/*
 * XREFs of ?reserve_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAD_K0@Z @ 0x1801D1640
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1801D1904 (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@D@detail@@V?$checked_array_iterator@PEAD@stdext@@@detail@@YAXV?$basic_iterator@D@0@0V?$checked_array_iterator@PEAD@stdext@@@Z @ 0x1801D1784 (--$move_backward_uninitialized@V-$basic_iterator@D@detail@@V-$checked_array_iterator@PEAD@stdext.c)
 *     ??$uninitialized_move@V?$move_iterator@PEA_N@std@@V?$checked_array_iterator@PEA_N@stdext@@@std@@YA?AV?$checked_array_iterator@PEA_N@stdext@@V?$move_iterator@PEA_N@0@0V12@@Z @ 0x180251BD4 (--$uninitialized_move@V-$move_iterator@PEA_N@std@@V-$checked_array_iterator@PEA_N@stdext@@@std@@.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEA_N@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEA_N@stdext@@_J@Z @ 0x180251C5C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEA_N@stdext@@_J@std@@YA-A_TAEAV-$checked_array.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  char *v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  SIZE_T v16; // rdi
  LPVOID v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  LPVOID v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  char *v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  void *v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  if ( *((_QWORD *)a1 + 2) - v3 < a3 )
  {
    v7 = v3 - *(_QWORD *)a1;
    v8 = v7 + a3;
    if ( v8 >= v7 )
    {
      v16 = detail::liberal_expansion_policy::expand(a1, *((_QWORD *)a1 + 2) - *(_QWORD *)a1, v8);
      v17 = operator new[](v16);
      v18 = *((_QWORD *)a1 + 1);
      v19 = *(char **)a1;
      *(_QWORD *)&v24 = v17;
      *((_QWORD *)&v24 + 1) = v7;
      v20 = v17;
      v25 = 0LL;
      v26 = v24;
      v27 = 0LL;
      std::uninitialized_move<std::move_iterator<bool *>,stdext::checked_array_iterator<bool *>>(&v24, v19, v18, &v26);
      v21 = *(char **)a1;
      v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
      v28 = 0LL;
      *(_QWORD *)a1 = v20;
      if ( v22 )
        v21 = 0LL;
      operator delete(v21);
      v23 = *(char **)a1;
      *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + v7;
      *((_QWORD *)a1 + 2) = &v23[v16];
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v28);
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
  }
  v9 = *((_QWORD *)a1 + 1);
  v10 = *(char **)a1;
  v11 = v9 - *(_QWORD *)a1;
  v12 = v11 - a2;
  if ( a3 && (!v9 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_6;
  v28 = (void *)*((_QWORD *)a1 + 1);
  *(_QWORD *)&v24 = v9;
  v13 = v11 - a2;
  *((_QWORD *)&v24 + 1) = a3;
  if ( a3 < v12 )
    v13 = a3;
  v25 = a3;
  v29 = v9 - v13;
  detail::move_backward_uninitialized<detail::basic_iterator<char>,stdext::checked_array_iterator<char *>>(
    &v29,
    &v28,
    &v24);
  if ( v12 > a3 )
  {
    if ( !v11 || v10 && v11 >= 0 )
    {
      *(_QWORD *)&v24 = v10;
      *((_QWORD *)&v24 + 1) = v11;
      v25 = v11;
      v14 = std::_Get_unwrapped_n<stdext::checked_array_iterator<bool *> &,__int64>(&v24, a2 - (v11 - a3));
      memmove_0((void *)(v14 - (v11 - a3 - a2)), &v10[a2], v11 - a3 - a2);
      goto LABEL_15;
    }
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_15:
  *((_QWORD *)a1 + 1) += a3;
  return &v10[a2];
}
