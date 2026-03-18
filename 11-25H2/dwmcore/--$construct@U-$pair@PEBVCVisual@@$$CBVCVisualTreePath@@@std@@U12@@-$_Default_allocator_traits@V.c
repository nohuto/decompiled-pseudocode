/*
 * XREFs of ??$construct@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@?$_Default_allocator_traits@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@SAXAEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@1@QEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@$$QEAU31@@Z @ 0x18000851C
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008F30 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x18000979C (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 *     ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18025A10C (--$_Uninitialized_move@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@Z @ 0x180009754 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::_Default_allocator_traits<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>::construct<std::pair<CVisual const *,CVisualTreePath const>,std::pair<CVisual const *,CVisualTreePath const>>(
        detail::liberal_expansion_policy *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  char *v4; // rdx
  __int128 *v5; // rsi
  __int128 *v6; // rdi
  unsigned __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // rcx
  char *v10; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  char *result; // rax
  char *v14; // r9
  __int128 v15; // xmm0
  signed __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  int v19; // edx
  void *v20; // rax
  const void *v21; // rbx
  void *v22; // r15
  __int64 v23; // r14
  signed __int64 v24; // r14
  void *v25; // rax
  _QWORD *v26; // rcx
  char *v27; // rdx
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]

  v3 = a2;
  *a2 = *a3;
  v4 = (char *)(a2 + 4);
  v3[1] = v4;
  v3[3] = v3 + 8;
  v3[2] = v4;
  v5 = (__int128 *)a3[2];
  v6 = (__int128 *)a3[1];
  v7 = v5 - v6;
  if ( v7 > 2 )
  {
    v18 = detail::liberal_expansion_policy::expand(a1, 2uLL, (__int64)(a3[2] - (_QWORD)v6) >> 4);
    v20 = operator new[](saturated_mul(v18, (unsigned int)(v19 + 14)));
    v21 = (const void *)v3[1];
    v22 = v20;
    v29 = 0LL;
    v23 = a2[2];
    v28 = (unsigned __int64)v20;
    v24 = v23 - (_QWORD)v21;
    v31 = 0LL;
    v30 = (unsigned __int64)v20;
    v25 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                    &v30,
                    v24 >> 4);
    memmove_0(v25, v21, v24);
    v3 = a2;
    v26 = (_QWORD *)a2[1];
    a2[1] = v22;
    if ( v26 == a2 + 4 )
      v26 = 0LL;
    operator delete(v26);
    v4 = (char *)a2[1];
    a2[2] = v4;
    a2[3] = &v4[16 * v18];
  }
  v8 = (char *)v3[1];
  v9 = (v4 - v8) >> 4;
  v10 = &v8[16 * v9];
  if ( v7 && (!v10 || (v7 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_13;
  v11 = (v4 - v8) >> 4;
  v12 = v5 - v6;
  if ( v7 < v9 )
    v11 = v5 - v6;
  result = (char *)(16 * v11);
  v14 = (char *)(v4 - result);
  if ( v4 != (char *)(v4 - result) )
  {
    v27 = v4 - 16;
    result = &v10[16 * v7];
    if ( v10 )
    {
      while ( v12 )
      {
        --v12;
        result -= 16;
        if ( v12 >= v7 )
          break;
        *(_OWORD *)result = *(_OWORD *)v27;
        if ( v27 == v14 )
          goto LABEL_8;
        v27 -= 16;
      }
    }
    goto LABEL_13;
  }
LABEL_8:
  if ( v9 > v7 )
  {
    if ( !v9 || v8 && v9 >= 0 )
    {
      *((_QWORD *)&v28 + 1) = v9;
      v29 = v9;
      *(_QWORD *)&v28 = v8;
      v16 = 16 * v9 - 16 * v7;
      v17 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
              &v28,
              -(v16 >> 4));
      result = (char *)memmove_0((void *)(v17 - v16), v8, v16);
      v3 = a2;
      goto LABEL_9;
    }
LABEL_13:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  v3[2] += 16 * v7;
  while ( v6 != v5 )
  {
    v15 = *v6++;
    *(_OWORD *)v8 = v15;
    v8 += 16;
  }
  return result;
}
