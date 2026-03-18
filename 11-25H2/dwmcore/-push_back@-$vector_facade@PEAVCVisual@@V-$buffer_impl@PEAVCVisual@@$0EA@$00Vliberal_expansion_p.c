/*
 * XREFs of ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x1801693D0
 * Callers:
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180169268 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@_J@Z @ 0x180169618 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@_J@std@@YA-A_TAEAV-$.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
        detail::liberal_expansion_policy *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r15
  LPVOID v10; // rax
  _QWORD *v11; // rbx
  void *v12; // r14
  signed __int64 v13; // rsi
  LPVOID v14; // rbp
  void *v15; // rax
  _QWORD *v16; // rdx
  bool v17; // zf
  __int64 v18; // r10
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // r9
  __int64 result; // rax
  _QWORD *v25; // r8
  __int128 v26; // [rsp+20h] [rbp-68h]
  __int128 v27; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+50h] [rbp-38h]

  v2 = *((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD **)a1;
  v7 = (v2 - *(_QWORD *)a1) >> 3;
  if ( !((v4 - v2) >> 3) )
  {
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v9 = detail::liberal_expansion_policy::expand(a1, (v4 - (__int64)v5) >> 3, v8);
    v10 = operator new[](saturated_mul(v9, 8uLL));
    v11 = *(_QWORD **)a1;
    v12 = 0LL;
    *(_QWORD *)&v26 = v10;
    v13 = *((_QWORD *)a1 + 1) - *(_QWORD *)a1;
    *((_QWORD *)&v26 + 1) = v7;
    v14 = v10;
    v27 = v26;
    v28 = 0LL;
    v15 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<D2D_POINT_2F *> &,__int64>(&v27, v13 >> 3);
    memmove_0(v15, v11, v13);
    v16 = *(_QWORD **)a1;
    v17 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v14;
    if ( !v17 )
      v12 = v16;
    operator delete(v12);
    v5 = *(_QWORD **)a1;
    v2 = *(_QWORD *)a1 + 8 * v7;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 8 * v9;
    *((_QWORD *)a1 + 1) = v2;
  }
  v18 = (v2 - (__int64)v5) >> 3;
  v19 = v18 - v7;
  v20 = 8 * v18;
  v21 = &v5[v18];
  if ( !v21 )
    goto LABEL_14;
  v22 = ((v2 - (__int64)v5) >> 3) - v7;
  if ( v19 > 1 )
    v22 = 1LL;
  v23 = (_QWORD *)(v2 - 8 * v22);
  if ( (_QWORD *)v2 != v23 )
  {
    v25 = (_QWORD *)(v2 - 8);
    *v21 = *v25;
    if ( v25 != v23 )
LABEL_14:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v19 > 1 )
  {
    if ( v18 && (!v5 || v18 < 0) )
      goto LABEL_14;
    if ( (__int64)(v20 - 8 * v7 - 8) >> 3 <= 0 )
    {
      if ( (__int64)(v20 - 8 * v7 - 8) >> 3 < 0 )
        goto LABEL_14;
    }
    else if ( v18 < (unsigned __int64)((__int64)(v20 - 8 * v7 - 8) >> 3) )
    {
      goto LABEL_14;
    }
    memmove_0((char *)v5 + 8 - -8LL * v7, &v5[v7], v20 - 8 * v7 - 8);
  }
  *((_QWORD *)a1 + 1) += 8LL;
  result = *a2;
  v5[v7] = *a2;
  return result;
}
