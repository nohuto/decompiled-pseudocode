/*
 * XREFs of ?resize@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18017A940
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x180244320 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@Z @ 0x180008E64 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??$move@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@V?$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@0@0V12@@Z @ 0x18017B52C (--$move@V-$move_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@std@@V-$checked_array_iterator.c)
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x18024B9A0 (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::resize(
        void **a1,
        unsigned __int64 a2)
{
  __int64 v2; // rdi
  char *v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rcx
  __int64 v7; // rdx
  char *v8; // r8
  _BYTE *v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  LPVOID v14; // rax
  char *v15; // rdi
  _BYTE *v16; // rsi
  signed __int64 v17; // rsi
  LPVOID v18; // rbx
  void *v19; // rax
  void *v20; // rcx
  bool v21; // zf
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  char *v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  _OWORD *v28; // r8
  char *v29; // rsi
  _OWORD *v30; // r9
  unsigned __int64 v31; // rdi
  char *v32; // rcx
  __int128 v33; // [rsp+20h] [rbp-78h] BYREF
  __int64 v34; // [rsp+30h] [rbp-68h]
  __int128 v35; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+50h] [rbp-48h]

  v2 = (__int64)a1[1];
  v3 = (char *)*a1;
  v4 = (v2 - (__int64)*a1) >> 4;
  if ( a2 <= v4 )
  {
    v6 = (__int64)(16 * a2) >> 4;
    v2 = (__int64)(v2 - 16 * a2 - (_QWORD)v3) >> 4;
    v7 = v2 + v6;
    if ( v2 + v6 <= v4 )
    {
      v8 = &v3[16 * v4];
      if ( v7 == v4 )
      {
LABEL_4:
        a1[1] = (char *)a1[1] - 16 * v2;
        return;
      }
      goto LABEL_35;
    }
LABEL_34:
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_35:
    if ( !v6 || v3 && v6 >= 0 && v4 >= v6 )
    {
      v34 = v6;
      *(_QWORD *)&v33 = v3;
      *((_QWORD *)&v33 + 1) = v4;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move<std::move_iterator<CVisualTreePath::VisualTreePathUnit *>,stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *>>)(
        &v35,
        &v3[16 * v7],
        v8,
        &v33);
      goto LABEL_4;
    }
LABEL_23:
    _invalid_parameter_noinfo_noreturn();
  }
  v9 = a1[2];
  v10 = a2 - v4;
  if ( (__int64)&v9[-v2] >> 4 < a2 - v4 )
  {
    v11 = a2;
    v12 = (v9 - v3) >> 4;
    if ( a2 < v4 )
      goto LABEL_34;
    v13 = v12 >> 1;
    if ( v12 <= ~(v12 >> 1) && v12 + v13 >= v11 )
      v11 = v12 + v13;
    v14 = operator new[](saturated_mul(v11, 0x10uLL));
    v15 = (char *)*a1;
    v16 = a1[1];
    *(_QWORD *)&v33 = v14;
    v17 = v16 - v15;
    *((_QWORD *)&v33 + 1) = v4;
    v34 = 0LL;
    v18 = v14;
    v35 = v33;
    v36 = 0LL;
    v19 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                    &v35,
                    v17 >> 4);
    memmove_0(v19, v15, v17);
    v20 = *a1;
    v21 = *a1 == a1 + 4;
    *a1 = v18;
    if ( v21 )
      v20 = 0LL;
    operator delete(v20);
    v3 = (char *)*a1;
    v2 = (__int64)*a1 + 16 * v4;
    v22 = (__int64)*a1 + 16 * v11;
    a1[1] = (void *)v2;
    a1[2] = (void *)v22;
  }
  v23 = (v2 - (__int64)v3) >> 4;
  v24 = v23 - v4;
  v25 = &v3[16 * v23];
  if ( v10 && (!v25 || (v10 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_23;
  v26 = ((v2 - (__int64)v3) >> 4) - v4;
  if ( v10 < v24 )
    v26 = v10;
  v27 = 16 * v26;
  v28 = (_OWORD *)(v2 - v27);
  if ( v2 != v2 - v27 )
  {
    v30 = (_OWORD *)(v2 - 16);
    v31 = v10;
    v32 = &v25[16 * v10];
    if ( v25 )
    {
      while ( v31 )
      {
        --v31;
        v32 -= 16;
        if ( v31 >= v10 )
          break;
        *(_OWORD *)v32 = *v30;
        if ( v30 == v28 )
          goto LABEL_20;
        --v30;
      }
    }
    goto LABEL_23;
  }
LABEL_20:
  if ( v24 > v10 )
  {
    if ( v23 && (!v3 || v23 < 0) )
      goto LABEL_23;
    *(_QWORD *)&v33 = v3;
    *((_QWORD *)&v33 + 1) = v23;
    v34 = v23;
    ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>)(
      &v35,
      &v3[16 * v4],
      &v3[16 * (v23 - v10)],
      &v33);
  }
  a1[1] = (char *)a1[1] + 16 * v10;
  v29 = &v3[16 * v4];
  if ( v10 )
  {
    *(_OWORD *)v29 = 0LL;
    qmemcpy(v29 + 16, v29, 8 * ((16 * v10 - 9) >> 3));
  }
}
