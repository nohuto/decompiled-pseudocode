/*
 * XREFs of ??0?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x1800083C0
 * Callers:
 *     ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x1800079E0 (--0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z.c)
 *     ??$make_unique@VCVisualTreePath@@AEAV1@$0A@@std@@YA?AV?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@0@AEAVCVisualTreePath@@@Z @ 0x180007BD8 (--$make_unique@VCVisualTreePath@@AEAV1@$0A@@std@@YA-AV-$unique_ptr@VCVisualTreePath@@U-$default_.c)
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008640 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@Z @ 0x180008E64 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

const void **__fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(
        _QWORD *a1,
        __int128 **a2)
{
  char *v2; // r8
  const void **v3; // rbp
  char *v4; // rbx
  __int128 *v5; // rsi
  __int128 *v6; // rdi
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  char *v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // r9
  __int128 v13; // xmm0
  signed __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  void *v18; // rax
  _BYTE *v19; // rbx
  _BYTE *v20; // rbp
  void *v21; // r15
  signed __int64 v22; // rbp
  void *v23; // r14
  void *v24; // rax
  void *v25; // rax
  bool v26; // zf
  __int64 v27; // r12
  char *v28; // r8
  char *v29; // rax
  __int128 v30; // [rsp+20h] [rbp-68h] BYREF
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int128 v32; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+50h] [rbp-38h]

  v2 = (char *)(a1 + 3);
  v3 = (const void **)a1;
  *a1 = a1 + 3;
  a1[1] = a1 + 3;
  v4 = (char *)(a1 + 3);
  a1[2] = a1 + 7;
  v5 = a2[1];
  v6 = *a2;
  v7 = v5 - *a2;
  if ( v7 > 2 )
  {
    v17 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, 2uLL, v7);
    v18 = operator new[](saturated_mul(v17, 0x10uLL));
    v19 = *v3;
    v20 = v3[1];
    v21 = 0LL;
    v30 = (unsigned __int64)v18;
    v22 = v20 - v19;
    v31 = 0LL;
    v23 = v18;
    v32 = (unsigned __int64)v18;
    v33 = 0LL;
    v24 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                    &v32,
                    v22 >> 4);
    memmove_0(v24, v19, v22);
    v3 = (const void **)a1;
    v25 = (void *)*a1;
    v26 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v23;
    if ( !v26 )
      v21 = v25;
    operator delete(v21);
    v2 = (char *)*a1;
    v4 = (char *)*a1;
    v27 = *a1 + 16 * v17;
    a1[1] = *a1;
    a1[2] = v27;
  }
  v8 = (v2 - v4) >> 4;
  v9 = &v4[16 * v8];
  if ( v7 && (!v9 || (v7 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_13;
  v10 = (v2 - v4) >> 4;
  v11 = v7;
  if ( v7 < v8 )
    v10 = v7;
  v12 = &v2[-16 * v10];
  if ( v2 != v12 )
  {
    v28 = v2 - 16;
    v29 = &v9[16 * v7];
    if ( v9 )
    {
      while ( v11 )
      {
        --v11;
        v29 -= 16;
        if ( v11 >= v7 )
          break;
        *(_OWORD *)v29 = *(_OWORD *)v28;
        if ( v28 == v12 )
          goto LABEL_8;
        v28 -= 16;
      }
    }
    goto LABEL_13;
  }
LABEL_8:
  if ( v8 > v7 )
  {
    if ( !v8 || v4 && v8 >= 0 )
    {
      *((_QWORD *)&v30 + 1) = v8;
      v31 = v8;
      *(_QWORD *)&v30 = v4;
      v15 = 16 * v8 - 16 * v7;
      v16 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
              &v30,
              -(v15 >> 4));
      memmove_0((void *)(v16 - v15), v4, v15);
      v3 = (const void **)a1;
      goto LABEL_9;
    }
LABEL_13:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  v3[1] = (char *)v3[1] + 16 * v7;
  while ( v6 != v5 )
  {
    v13 = *v6++;
    *(_OWORD *)v4 = v13;
    v4 += 16;
  }
  return v3;
}
