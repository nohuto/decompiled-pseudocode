/*
 * XREFs of ?push_back@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@2@@Z @ 0x180008100
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008640 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@Z @ 0x180008E64 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<std::pair<CVisual const *,CVisualTreePath const>>::push_back(
        detail::liberal_expansion_policy *a1,
        __int64 *a2)
{
  _QWORD *v2; // rbp
  detail::liberal_expansion_policy *v4; // r14
  __int64 v5; // rax
  char *v6; // rdx
  __int128 *v7; // rsi
  __int128 *v8; // rdi
  unsigned __int64 v9; // r13
  char *v10; // rbx
  __int64 v11; // rcx
  char *v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  char *result; // rax
  char *v16; // r9
  __int128 v17; // xmm0
  signed __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  void *v21; // rax
  const void *v22; // rbx
  __int64 v23; // rbp
  void *v24; // r15
  signed __int64 v25; // rbp
  void *v26; // r14
  void *v27; // rax
  _QWORD *v28; // rax
  char *v29; // rdx
  __int128 v30; // [rsp+20h] [rbp-78h] BYREF
  __int64 v31; // [rsp+30h] [rbp-68h]
  __int128 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+50h] [rbp-48h]
  _QWORD *v35; // [rsp+B0h] [rbp+18h]

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  v4 = a1;
  v35 = v2;
  if ( v2 == *((_QWORD **)a1 + 2) )
    return (char *)std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
                     a1,
                     v2,
                     a2);
  v5 = *a2;
  v6 = (char *)(v2 + 4);
  *v2 = v5;
  v2[3] = v2 + 8;
  v2[1] = v2 + 4;
  v2[2] = v2 + 4;
  v7 = (__int128 *)a2[2];
  v8 = (__int128 *)a2[1];
  v9 = v7 - v8;
  if ( v9 > 2 )
  {
    v20 = detail::liberal_expansion_policy::expand(a1, 2uLL, v9);
    v21 = operator new[](saturated_mul(v20, 0x10uLL));
    v22 = (const void *)v2[1];
    v23 = v2[2];
    v24 = 0LL;
    v30 = (unsigned __int64)v21;
    v25 = v23 - (_QWORD)v22;
    v31 = 0LL;
    v26 = v21;
    v32 = (unsigned __int64)v21;
    v33 = 0LL;
    v27 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                    &v32,
                    v25 >> 4);
    memmove_0(v27, v22, v25);
    v2 = v35;
    v28 = (_QWORD *)v35[1];
    v35[1] = v26;
    if ( v28 != v35 + 4 )
      v24 = v28;
    operator delete(v24);
    v6 = (char *)v35[1];
    v4 = a1;
    v35[2] = v6;
    v35[3] = &v6[16 * v20];
  }
  v10 = (char *)v2[1];
  v11 = (v6 - v10) >> 4;
  v12 = &v10[16 * v11];
  if ( v9 && (!v12 || (v9 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_14;
  v13 = (v6 - v10) >> 4;
  v14 = v7 - v8;
  if ( v9 < v11 )
    v13 = v7 - v8;
  result = (char *)(16 * v13);
  v16 = (char *)(v6 - result);
  if ( v6 != (char *)(v6 - result) )
  {
    v29 = v6 - 16;
    result = &v12[16 * v9];
    if ( v12 )
    {
      while ( v14 )
      {
        --v14;
        result -= 16;
        if ( v14 >= v9 )
          break;
        *(_OWORD *)result = *(_OWORD *)v29;
        if ( v29 == v16 )
          goto LABEL_9;
        v29 -= 16;
      }
    }
    goto LABEL_14;
  }
LABEL_9:
  if ( v11 <= v9 )
    goto LABEL_10;
  if ( v11 && (!v10 || v11 < 0) )
LABEL_14:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v30 + 1) = v11;
  v31 = v11;
  *(_QWORD *)&v30 = v10;
  v18 = 16 * v11 - 16 * v9;
  v19 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
          &v30,
          -(v18 >> 4));
  result = (char *)memmove_0((void *)(v19 - v18), v10, v18);
  v2 = v35;
LABEL_10:
  v2[2] += 16 * v9;
  while ( v8 != v7 )
  {
    v17 = *v8++;
    *(_OWORD *)v10 = v17;
    v10 += 16;
  }
  *((_QWORD *)v4 + 1) += 64LL;
  return result;
}
