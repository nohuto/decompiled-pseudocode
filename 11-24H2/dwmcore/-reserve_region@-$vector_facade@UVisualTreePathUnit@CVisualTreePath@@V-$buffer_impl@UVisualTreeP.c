/*
 * XREFs of ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180009080
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008640 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x180008EAC (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x180009488 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x18001DE40 (-Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@Z @ 0x180008E64 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rsi
  char *v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  _OWORD *v12; // r9
  __int64 v13; // r12
  __int64 v14; // rdi
  signed __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r15
  void *v20; // rax
  char *v21; // rbx
  char *v22; // r14
  void *v23; // rbp
  signed __int64 v24; // rsi
  void *v25; // rax
  char *v26; // rdx
  bool v27; // zf
  _OWORD *v28; // rsi
  unsigned __int64 v29; // r11
  _OWORD *v30; // rax
  __int128 v31; // [rsp+20h] [rbp-68h]
  __int128 v32; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+50h] [rbp-38h]
  unsigned __int64 v34; // [rsp+90h] [rbp+8h]

  v3 = *((_QWORD *)a1 + 1);
  if ( (*((_QWORD *)a1 + 2) - v3) >> 4 < a3 )
  {
    v17 = (v3 - *(_QWORD *)a1) >> 4;
    v18 = v17 + a3;
    v34 = v17;
    if ( v18 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800092FDLL);
    }
    v19 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4, v18);
    v20 = operator new[](saturated_mul(v19, 0x10uLL));
    v21 = *(char **)a1;
    *((_QWORD *)&v31 + 1) = v17;
    v22 = 0LL;
    v23 = v20;
    *(_QWORD *)&v31 = v20;
    v24 = *((_QWORD *)a1 + 1) - *(_QWORD *)a1;
    v32 = v31;
    v33 = 0LL;
    v25 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                    &v32,
                    v24 >> 4);
    memmove_0(v25, v21, v24);
    v26 = *(char **)a1;
    v27 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v23;
    if ( !v27 )
      v22 = v26;
    operator delete(v22);
    v3 = *(_QWORD *)a1 + 16 * v34;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v19;
    *((_QWORD *)a1 + 1) = v3;
  }
  v7 = *(char **)a1;
  v8 = (v3 - *(_QWORD *)a1) >> 4;
  v9 = v8 - a2;
  v10 = 16 * v8 + *(_QWORD *)a1;
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_12;
  v11 = ((v3 - *(_QWORD *)a1) >> 4) - a2;
  if ( a3 < v9 )
    v11 = a3;
  v12 = (_OWORD *)(v3 - 16 * v11);
  if ( (_OWORD *)v3 != v12 )
  {
    v28 = (_OWORD *)(v3 - 16);
    v29 = a3;
    v30 = (_OWORD *)(v10 + 16 * a3);
    if ( v10 )
    {
      while ( v29 )
      {
        --v29;
        --v30;
        if ( v29 >= a3 )
          break;
        *v30 = *v28;
        if ( v28 == v12 )
          goto LABEL_8;
        --v28;
      }
    }
    goto LABEL_12;
  }
LABEL_8:
  if ( v9 > a3 )
  {
    if ( !v8 || v7 && v8 >= 0 )
    {
      v13 = 16 * a2;
      v14 = 16 * a3;
      v16 = 16 * v8 - v14 - v13;
      if ( v16 >> 4 <= 0 )
      {
        if ( v16 >> 4 >= 0 )
        {
LABEL_18:
          memmove_0(&v7[16 * v8 - v16], &v7[v13], v16);
          goto LABEL_10;
        }
      }
      else if ( v8 >= (unsigned __int64)(v16 >> 4) )
      {
        goto LABEL_18;
      }
    }
LABEL_12:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = 16 * a2;
  v14 = 16 * a3;
LABEL_10:
  *((_QWORD *)a1 + 1) += v14;
  return &v7[v13];
}
