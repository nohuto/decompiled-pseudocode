/*
 * XREFs of ?push_back@?$vector_facade@PEBVCVisualTree@@V?$buffer_impl@PEBVCVisualTree@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEBVCVisualTree@@@Z @ 0x18003B150
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x1801017D8 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??Y?$checked_array_iterator@PEAPEBVCVisualTree@@@stdext@@QEAAAEAV01@_J@Z @ 0x18019C990 (--Y-$checked_array_iterator@PEAPEBVCVisualTree@@@stdext@@QEAAAEAV01@_J@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CVisualTree const *,detail::buffer_impl<CVisualTree const *,8,1,detail::liberal_expansion_policy>>::push_back(
        detail::liberal_expansion_policy *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  char *v5; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  char *v10; // r9
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r10
  __int64 result; // rax
  signed __int64 v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // r11
  unsigned __int64 v20; // rdi
  void *v21; // rax
  __int64 v22; // r8
  char *v23; // rdx
  void *v24; // rbx
  char *v25; // rdx
  void *v26; // rcx
  __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int128 v30; // [rsp+40h] [rbp-38h] BYREF
  __int64 v31; // [rsp+50h] [rbp-28h]

  v3 = *((_QWORD *)a1 + 1);
  v5 = *(char **)a1;
  v7 = (v3 - *(_QWORD *)a1) >> 3;
  if ( !((*((_QWORD *)a1 + 2) - v3) >> 3) )
  {
    if ( v7 + 1 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_12:
      v18 = (_QWORD *)(v3 - 8);
      v19 = v11 - 1;
      while ( 1 )
      {
        *(_QWORD *)&v10[8 * v19] = *v18;
        if ( v18 == v14 )
          goto LABEL_6;
        --v18;
        if ( v19 )
        {
          if ( !--v19 )
            continue;
        }
        goto LABEL_9;
      }
    }
    v20 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v5) >> 3, v7 + 1);
    v21 = operator new[](saturated_mul(v20, 8uLL));
    v22 = *((_QWORD *)a1 + 1);
    v23 = *(char **)a1;
    *(_QWORD *)&v28 = v21;
    v24 = v21;
    *((_QWORD *)&v28 + 1) = v7;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>)(
      &v28,
      v23,
      v22,
      &v30);
    v25 = *(char **)a1;
    v26 = 0LL;
    *(_QWORD *)a1 = v24;
    if ( v25 != (char *)a1 + 24 )
      v26 = v25;
    operator delete(v26);
    v5 = *(char **)a1;
    v3 = *(_QWORD *)a1 + 8 * v7;
    v27 = *(_QWORD *)a1 + 8 * v20;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v27;
  }
  v8 = (v3 - (__int64)v5) >> 3;
  v9 = v8 - v7;
  v2 = 8 * v8;
  v10 = &v5[8 * v8];
  if ( !v10 )
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  v11 = 1LL;
  v12 = ((v3 - (__int64)v5) >> 3) - v7;
  if ( v9 > 1 )
    v12 = 1LL;
  v13 = 8 * v12;
  v14 = (_QWORD *)(v3 - v13);
  if ( v3 != v3 - v13 )
    goto LABEL_12;
LABEL_6:
  if ( v9 > 1 )
  {
    *(_QWORD *)&v28 = v5;
    *((_QWORD *)&v28 + 1) = v8;
    v29 = 0LL;
    stdext::checked_array_iterator<CVisualTree const * *>::operator+=(&v28);
    v30 = v28;
    v31 = v29;
    v16 = v2 - 8 * v7 - 8;
    v17 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
            &v30,
            -(v16 >> 3));
    memmove_0((void *)(v17 - v16), &v5[8 * v7], v16);
  }
  *((_QWORD *)a1 + 1) += 8LL;
  result = *a2;
  *(_QWORD *)&v5[8 * v7] = *a2;
  return result;
}
