/*
 * XREFs of ?push_back@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBM@Z @ 0x180199574
 * Callers:
 *     ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18019A960 (--$GetAllPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@de.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18019AF04 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAW4Type@IRenderTarget@@@std@@V?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@V?$move_iterator@PEAW4Type@IRenderTarget@@@0@0V12@@Z @ 0x180252220 (--$move@V-$move_iterator@PEAW4Type@IRenderTarget@@@std@@V-$checked_array_iterator@PEAW4Type@IRen.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x1802522B0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
        detail::liberal_expansion_policy *a1,
        unsigned int *a2)
{
  _DWORD *v2; // rbx
  char *v3; // r15
  unsigned __int64 v6; // rsi
  _DWORD *v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // rax
  _DWORD *v12; // r10
  __int64 result; // rax
  signed __int64 v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // r9
  unsigned __int64 v17; // rdi
  LPVOID v18; // rax
  __int64 v19; // r8
  char *v20; // rdx
  LPVOID v21; // rbx
  char *v22; // rcx
  bool v23; // zf
  char *v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  void *v29; // [rsp+90h] [rbp+30h] BYREF

  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 2;
  if ( (__int64)(*((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1)) >> 2 )
    goto LABEL_2;
  if ( v6 + 1 >= v6 )
  {
    v17 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 2, v6 + 1);
    v18 = operator new[](saturated_mul(v17, 4uLL));
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(char **)a1;
    *(_QWORD *)&v25 = v18;
    *((_QWORD *)&v25 + 1) = v6;
    v21 = v18;
    v26 = 0LL;
    v27 = v25;
    v28 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>)(
      &v25,
      v20,
      v19,
      &v27);
    v22 = *(char **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    v29 = 0LL;
    *(_QWORD *)a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v24 = *(char **)a1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 4 * v6;
    *((_QWORD *)a1 + 2) = &v24[4 * v17];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v29);
LABEL_2:
    v3 = *(char **)a1;
    v7 = (_DWORD *)*((_QWORD *)a1 + 1);
    v8 = ((__int64)v7 - *(_QWORD *)a1) >> 2;
    v9 = v8 - v6;
    v10 = 4 * v8;
    v2 = (_DWORD *)(4 * v8 + *(_QWORD *)a1);
    if ( !v2 )
      goto LABEL_8;
    v11 = ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 2) - v6;
    if ( v9 > 1 )
      v11 = 1LL;
    v12 = &v7[-v11];
    if ( v7 == v12 )
      goto LABEL_6;
    goto LABEL_15;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_15:
  v16 = v7 - 1;
  *v2 = *v16;
  if ( v16 != v12 )
    goto LABEL_8;
LABEL_6:
  if ( v9 > 1 )
  {
    if ( !v8 || v3 && v8 >= 0 )
    {
      *((_QWORD *)&v25 + 1) = v8;
      v26 = v8;
      *(_QWORD *)&v25 = v3;
      v14 = v10 - 4 * v6 - 4;
      v15 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
              &v25,
              -(v14 >> 2));
      memmove_0((void *)(v15 - v14), &v3[4 * v6], v14);
      goto LABEL_7;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  result = *a2;
  *((_QWORD *)a1 + 1) += 4LL;
  *(_DWORD *)&v3[4 * v6] = result;
  return result;
}
