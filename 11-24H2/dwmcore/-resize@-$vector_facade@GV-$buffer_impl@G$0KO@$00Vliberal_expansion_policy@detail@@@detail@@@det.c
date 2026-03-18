/*
 * XREFs of ?resize@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x180177BB0
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x180244320 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAG@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAG@stdext@@_J@Z @ 0x180177ED0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAG@stdext@@_J@std@@YA-A_TAEAV-$checked_array_.c)
 *     ??$move@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x180227890 (--$move@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$checked_a.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x18028552C (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::resize(
        void **a1,
        unsigned __int64 a2,
        char *a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  char *v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  _BYTE *v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  LPVOID v15; // rax
  char *v16; // rbx
  _BYTE *v17; // rdi
  LPVOID v18; // rsi
  signed __int64 v19; // rdi
  void *v20; // rax
  void *v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  char *v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  _WORD *v29; // r9
  __int64 result; // rax
  char *v31; // r8
  unsigned __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rbx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  char *v37; // rdi
  unsigned __int64 i; // rcx
  _WORD *v39; // rbx
  unsigned __int64 v40; // r10
  __int128 v41; // [rsp+20h] [rbp-68h] BYREF
  __int64 v42; // [rsp+30h] [rbp-58h]
  __int128 v43; // [rsp+40h] [rbp-48h] BYREF
  __int64 v44; // [rsp+50h] [rbp-38h]
  unsigned __int64 v45; // [rsp+90h] [rbp+8h]

  v4 = (__int64)a1[1];
  v6 = (char *)*a1;
  v7 = a2;
  v8 = (v4 - (__int64)*a1) >> 1;
  if ( a2 <= v8 )
  {
    result = 2 * a2;
    v33 = (__int64)(2 * a2) >> 1;
    v34 = (__int64)(v4 - 2 * a2 - (_QWORD)v6) >> 1;
    if ( v34 + v33 <= v8 )
    {
      if ( v34 + v33 != v8 )
      {
        if ( v33 && (!v6 || v33 < 0 || v8 < v33) )
          goto LABEL_22;
        v42 = (__int64)(2 * a2) >> 1;
        *(_QWORD *)&v41 = v6;
        *((_QWORD *)&v41 + 1) = v8;
        result = ((__int64 (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
                   &v43,
                   &v6[2 * v34 + 2 * v33],
                   &v6[2 * v8],
                   &v41);
      }
      a1[1] = (char *)a1[1] - 2 * v34;
      return result;
    }
    goto LABEL_27;
  }
  v10 = a1[2];
  v7 = a2 - v8;
  v3 = 0LL;
  if ( (__int64)&v10[-v4] >> 1 >= a2 - v8 )
    goto LABEL_10;
  v11 = v10 - v6;
  v12 = a2;
  v13 = v11 >> 1;
  v45 = a2;
  if ( a2 < v8 )
  {
LABEL_27:
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_28;
  }
  v14 = v13 >> 1;
  if ( v13 <= ~(v13 >> 1) && v13 + v14 >= v12 )
  {
    v12 = v13 + v14;
    v45 = v13 + v14;
  }
  v15 = operator new[](saturated_mul(v12, 2uLL));
  v16 = (char *)*a1;
  v17 = a1[1];
  v18 = v15;
  *(_QWORD *)&v41 = v15;
  v19 = v17 - v16;
  *((_QWORD *)&v41 + 1) = v8;
  v42 = 0LL;
  v43 = v41;
  v44 = 0LL;
  v20 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<unsigned short *> &,__int64>(&v43, v19 >> 1);
  memmove_0(v20, v16, v19);
  v21 = *a1;
  v22 = *a1 == a1 + 3;
  *a1 = v18;
  if ( v22 )
    v21 = 0LL;
  operator delete(v21);
  v6 = (char *)*a1;
  v4 = (__int64)*a1 + 2 * v8;
  v23 = (__int64)*a1 + 2 * v45;
  a1[1] = (void *)v4;
  a1[2] = (void *)v23;
LABEL_10:
  v24 = (v4 - (__int64)v6) >> 1;
  v25 = v24 - v8;
  v26 = &v6[2 * v24];
  if ( v7 && (!v26 || (v7 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_22;
  v27 = ((v4 - (__int64)v6) >> 1) - v8;
  if ( v7 < v25 )
    v27 = v7;
  v28 = 2 * v27;
  v29 = (_WORD *)(v4 - v28);
  if ( v4 != v4 - v28 )
  {
    v39 = (_WORD *)(v4 - 2);
    v40 = v7;
    if ( v26 )
    {
      while ( v40 )
      {
        if ( --v40 >= v7 )
          break;
        *(_WORD *)&v26[2 * v40] = *v39;
        if ( v39 == v29 )
          goto LABEL_16;
        --v39;
      }
    }
    goto LABEL_22;
  }
LABEL_16:
  if ( v25 <= v7 )
    goto LABEL_17;
  if ( v24 && (!v6 || v24 < 0) )
LABEL_22:
    _invalid_parameter_noinfo_noreturn();
  *(_QWORD *)&v41 = v6;
  *((_QWORD *)&v41 + 1) = v24;
  v42 = v24;
  ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
    &v43,
    &v6[2 * v8],
    &v6[2 * (v24 - v7)],
    &v41);
LABEL_17:
  result = (__int64)a1[1];
  v31 = &v6[2 * v8];
  a1[1] = (void *)(result + 2 * v7);
  if ( !v7 )
    return result;
  if ( v7 < 8 )
    goto LABEL_19;
LABEL_28:
  if ( v31 <= a3 && &v31[2 * v7 - 2] >= a3 )
    goto LABEL_19;
  v35 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
  do
    v3 += 8LL;
  while ( v3 < v35 );
  v36 = 2 * v35;
  result = *(unsigned __int16 *)a3;
  v37 = v31;
  for ( i = v36 >> 1; i; --i )
  {
    *(_WORD *)v37 = result;
    v37 += 2;
  }
  v31 += v36;
  if ( v3 < v7 )
  {
LABEL_19:
    v32 = v7 - v3;
    do
    {
      result = *(unsigned __int16 *)a3;
      *(_WORD *)v31 = result;
      v31 += 2;
      --v32;
    }
    while ( v32 );
  }
  return result;
}
