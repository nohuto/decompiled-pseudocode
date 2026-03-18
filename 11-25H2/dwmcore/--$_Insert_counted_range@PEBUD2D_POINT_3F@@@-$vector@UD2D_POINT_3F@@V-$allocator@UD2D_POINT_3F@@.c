/*
 * XREFs of ??$_Insert_counted_range@PEBUD2D_POINT_3F@@@?$vector@UD2D_POINT_3F@@V?$allocator@UD2D_POINT_3F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@PEBUD2D_POINT_3F@@_K@Z @ 0x1800777EC
 * Callers:
 *     ??$insert@PEBUD2D_POINT_3F@@$0A@@?$vector@UD2D_POINT_3F@@V?$allocator@UD2D_POINT_3F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_POINT_3F@@@std@@@std@@@1@PEBUD2D_POINT_3F@@1@Z @ 0x180077770 (--$insert@PEBUD2D_POINT_3F@@$0A@@-$vector@UD2D_POINT_3F@@V-$allocator@UD2D_POINT_3F@@@std@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1800779DC (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::vector<D2D_POINT_3F>::_Insert_counted_range<D2D_POINT_3F const *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // r15
  _BYTE *v6; // r9
  __int64 v10; // r8
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  SIZE_T size_of; // rax
  char *v17; // r12
  size_t v18; // r8
  const void *v19; // rdx
  char *v20; // rcx
  signed __int64 v21; // r12
  unsigned __int64 v22; // r14
  _BYTE *v23; // [rsp+80h] [rbp+8h]
  char *v24; // [rsp+88h] [rbp+10h]

  v4 = *(_BYTE **)(a1 + 8);
  v6 = *(_BYTE **)a1;
  v23 = *(_BYTE **)a1;
  if ( a4 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( a4 <= (v10 - (__int64)v4) / 12 )
    {
      v21 = 12 * a4;
      v22 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - a2) >> 2);
      if ( a4 >= v22 )
      {
        memmove_0(&a2[v21], a2, v4 - a2);
        *(_QWORD *)(a1 + 8) = &a2[12 * v22 + v21];
      }
      else
      {
        memmove_0(v4, &v4[-v21], 12 * a4);
        *(_QWORD *)(a1 + 8) = &v4[12 * (v21 / 12)];
        memmove_0(&a2[12 * a4], a2, (size_t)&v4[-12LL * a4 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v21);
    }
    else
    {
      v11 = 0x1555555555555555LL;
      v24 = (char *)(v4 - v6);
      v12 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - v6) >> 2);
      if ( a4 > 0x1555555555555555LL - v12 )
        std::_Xlength_error("vector too long");
      v13 = v12 + a4;
      v14 = 0xAAAAAAAAAAAAAAABuLL * ((v10 - (__int64)v6) >> 2);
      v15 = v14 >> 1;
      if ( v14 <= 0x1555555555555555LL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<12>(v11);
      v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v17[4 * ((a2 - v23) >> 2)], a3, 12 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v18 = (size_t)v24;
        v20 = v17;
        v19 = v23;
      }
      else
      {
        memmove_0(v17, v23, a2 - v23);
        v18 = v4 - a2;
        v19 = a2;
        v20 = &v17[12 * (a4 - 0x5555555555555555LL * ((a2 - v23) >> 2))];
      }
      memmove_0(v20, v19, v18);
      if ( *(_QWORD *)a1 )
        std::_Deallocate<16,0>(*(_QWORD **)a1, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2));
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 8) = &v17[12 * v13];
      *(_QWORD *)(a1 + 16) = &v17[12 * v11];
    }
  }
}
