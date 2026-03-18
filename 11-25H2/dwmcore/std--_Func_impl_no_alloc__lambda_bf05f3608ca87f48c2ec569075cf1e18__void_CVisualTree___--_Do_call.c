/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bf05f3608ca87f48c2ec569075cf1e18__void_CVisualTree___::_Do_call @ 0x180196020
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x18013CFC4 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_bf05f3608ca87f48c2ec569075cf1e18__void_CVisualTree___::_Do_call(
        detail::liberal_expansion_policy *a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r15
  __int64 v4; // r12
  __int64 v5; // r8
  _QWORD *v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  char *v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // r11
  signed __int64 v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  LPVOID v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rdx
  void *v22; // rdi
  LPVOID v23; // rbx
  _QWORD *v24; // rdx
  bool v25; // zf
  __int128 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-48h]
  __int128 v28; // [rsp+40h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-28h]

  v3 = (_QWORD *)*((_QWORD *)a1 + 1);
  v4 = *a2;
  v5 = v3[1];
  v6 = (_QWORD *)*v3;
  v7 = (v5 - *v3) >> 3;
  if ( (v3[2] - v5) >> 3 )
    goto LABEL_2;
  if ( v7 + 1 >= v7 )
  {
    v18 = detail::liberal_expansion_policy::expand(a1, (__int64)(v3[2] - (_QWORD)v6) >> 3, v7 + 1);
    v19 = operator new[](saturated_mul(v18, 8uLL));
    v20 = v3[1];
    v21 = (_QWORD *)*v3;
    *(_QWORD *)&v26 = v19;
    v22 = 0LL;
    *((_QWORD *)&v26 + 1) = v7;
    v23 = v19;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
      (__int64)&v26,
      v21,
      v20,
      &v28);
    v24 = (_QWORD *)*v3;
    v25 = *v3 == (_QWORD)(v3 + 3);
    *v3 = v23;
    if ( !v25 )
      v22 = v24;
    operator delete(v22);
    v6 = (_QWORD *)*v3;
    v5 = *v3 + 8 * v7;
    v3[2] = *v3 + 8 * v18;
    v3[1] = v5;
LABEL_2:
    v8 = (v5 - (__int64)v6) >> 3;
    v9 = v8 - v7;
    v10 = 8 * v8;
    v11 = (char *)&v6[v8];
    if ( !v11 )
      goto LABEL_8;
    v2 = 1LL;
    v12 = ((v5 - (__int64)v6) >> 3) - v7;
    if ( v9 > 1 )
      v12 = 1LL;
    v13 = (_QWORD *)(v5 - 8 * v12);
    if ( (_QWORD *)v5 == v13 )
      goto LABEL_6;
    goto LABEL_15;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_15:
  v16 = (_QWORD *)(v5 - 8);
  v17 = v2 - 1;
  while ( 1 )
  {
    *(_QWORD *)&v11[8 * v17] = *v16;
    if ( v16 == v13 )
      break;
    --v16;
    if ( v17 )
    {
      if ( !--v17 )
        continue;
    }
    goto LABEL_8;
  }
LABEL_6:
  if ( v9 > 1 )
  {
    if ( !v8 || v6 && v8 >= 0 )
    {
      *(_QWORD *)&v26 = v6;
      *((_QWORD *)&v26 + 1) = v8;
      v27 = v8;
      v14 = v10 - 8 * v7 - 8;
      v15 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
              &v26,
              -(v14 >> 3));
      memmove_0((void *)(v15 - v14), &v6[v7], v14);
      goto LABEL_7;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  v3[1] += 8LL;
  v6[v7] = v4;
}
