/*
 * XREFs of ??$_Insert_counted_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@_K@Z @ 0x18006B930
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x18006A5F0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18006BB80 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::vector<CMilPoint2F>::_Insert_counted_range<CMilPoint2F *>(
        _QWORD *a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // r14
  _QWORD *v6; // r15
  __int64 v8; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  SIZE_T size_of; // rax
  const void *v17; // rdx
  size_t v18; // r8
  char *v19; // r15
  size_t v20; // r8
  const void *v21; // rdx
  char *v22; // rcx
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rdx
  size_t v25; // r12
  unsigned __int64 v26; // r15
  char *v27; // rdi
  char *v28; // [rsp+70h] [rbp+8h]
  __int64 v29; // [rsp+78h] [rbp+10h]
  unsigned __int64 v31; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = (_BYTE *)a1[1];
    v6 = (_QWORD *)*a1;
    v8 = a1[2];
    if ( a4 <= (v8 - (__int64)v4) >> 3 )
    {
      v25 = 8 * a4;
      v26 = (v4 - a2) >> 3;
      if ( a4 < v26 )
      {
        memmove_0(v4, &v4[-v25], 8 * a4);
        a1[1] = &v4[v25];
        memmove_0(&a2[8 * a4], a2, (size_t)&v4[-8LL * a4 - (_QWORD)a2]);
      }
      else
      {
        v27 = &a2[v25];
        memmove_0(&a2[v25], a2, v4 - a2);
        a1[1] = &v27[8 * v26];
      }
      memmove_0(a2, a3, v25);
    }
    else
    {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
      v12 = (v4 - (_BYTE *)v6) >> 3;
      if ( a4 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v13 = v12 + a4;
      v31 = v12 + a4;
      v14 = (v8 - (__int64)v6) >> 3;
      v15 = v14 >> 1;
      if ( v14 <= 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<8>(v11);
      v28 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v29 = (a2 - (_BYTE *)v6) >> 3;
      memmove_0(&v28[8 * v29], a3, 8 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v21 = v6;
        v20 = v4 - (_BYTE *)v6;
        v19 = v28;
        v22 = v28;
      }
      else
      {
        v17 = v6;
        v18 = a2 - (_BYTE *)v6;
        v19 = v28;
        memmove_0(v28, v17, v18);
        v20 = v4 - a2;
        v21 = a2;
        v22 = &v28[8 * a4 + 8 * v29];
      }
      memmove_0(v22, v21, v20);
      v23 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v24 = (a1[2] - (_QWORD)v23) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v24 >= 0x1000 )
        {
          v24 += 39LL;
          if ( (unsigned __int64)v23 - *(v23 - 1) - 8 > 0x1F )
            _invalid_parameter_noinfo_noreturn();
          v23 = (_QWORD *)*(v23 - 1);
        }
        operator delete(v23, v24);
      }
      *a1 = v19;
      a1[1] = &v19[8 * v31];
      a1[2] = &v19[8 * v11];
    }
  }
}
