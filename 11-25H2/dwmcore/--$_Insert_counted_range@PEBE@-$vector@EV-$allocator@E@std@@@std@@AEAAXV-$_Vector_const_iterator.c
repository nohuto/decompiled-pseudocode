/*
 * XREFs of ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x18005CB6C
 * Callers:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18005B4B0 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18005B568 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18005B8B4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18005C06C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18005C390 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18005CD20 (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x18021C2B8 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18025984C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(
        _QWORD *a1,
        _BYTE *a2,
        const void *a3,
        size_t a4)
{
  _BYTE *v4; // rdi
  _BYTE *v6; // r13
  __int64 v8; // rcx
  SIZE_T v11; // r15
  signed __int64 v12; // r12
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  char *v15; // r14
  char *v16; // rcx
  size_t v17; // r8
  const void *v18; // rdx
  size_t v19; // r14
  char *v20; // rdi
  char *v21; // [rsp+78h] [rbp+10h]
  size_t v23; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = (_BYTE *)a1[1];
    v6 = (_BYTE *)*a1;
    v8 = a1[2];
    if ( a4 <= v8 - (__int64)v4 )
    {
      v19 = v4 - a2;
      if ( a4 < v4 - a2 )
      {
        memmove_0(v4, &v4[-a4], a4);
        a1[1] = &v4[a4];
        memmove_0(&v4[-(v19 - a4)], a2, v19 - a4);
      }
      else
      {
        v20 = &a2[a4];
        memmove_0(&a2[a4], a2, v19);
        a1[1] = &v20[v19];
      }
      memmove_0(a2, a3, a4);
    }
    else
    {
      v11 = 0x7FFFFFFFFFFFFFFFLL;
      v12 = v4 - v6;
      if ( a4 > 0x7FFFFFFFFFFFFFFFLL - (v4 - v6) )
        std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(v8);
      v13 = v8 - (_QWORD)v6;
      v23 = v12 + a4;
      v14 = v13 >> 1;
      if ( v13 <= 0x7FFFFFFFFFFFFFFFLL - (v13 >> 1) )
      {
        v11 = v14 + v13;
        if ( v14 + v13 < v12 + a4 )
          v11 = v12 + a4;
      }
      v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
      v21 = &v15[a2 - v6];
      memmove_0(v21, a3, a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v17 = v4 - v6;
        v18 = v6;
        v16 = v15;
      }
      else
      {
        memmove_0(v15, v6, a2 - v6);
        v16 = &v21[a4];
        v17 = v4 - a2;
        v18 = a2;
      }
      memmove_0(v16, v18, v17);
      if ( *a1 )
        std::_Deallocate<16,0>(*a1, a1[2] - *a1);
      *a1 = v15;
      a1[1] = &v15[v23];
      a1[2] = &v15[v11];
    }
  }
}
