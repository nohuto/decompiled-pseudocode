/*
 * XREFs of ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18017DA3C
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18017D6E0 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18017E2C0 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18017E3B8 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18017E444 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18017E4B0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x18017E53C (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18017E740 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18017F54C (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInterpolatePathsOperation::Interpolate(
        unsigned __int64 this,
        const struct CPathData *a2,
        const struct CPathData *a3,
        float a4,
        struct CPathData **a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r12d
  SIZE_T v7; // rbx
  int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // rsi
  float v13; // xmm7_4
  _BYTE *v15; // rbx
  _BYTE *v16; // r14
  __int64 Size; // r12
  __int64 v18; // rbx
  int v19; // ecx
  float *v20; // rbx
  __int64 v21; // rbx
  void *v22; // rax
  __int64 v23; // rax
  struct CPathData *v24; // rbx
  __int64 v25; // rax
  float *v26; // r12
  __int128 v27; // [rsp+30h] [rbp-50h] BYREF
  SIZE_T v28; // [rsp+40h] [rbp-40h]
  _QWORD v29[2]; // [rsp+48h] [rbp-38h] BYREF
  int v30; // [rsp+58h] [rbp-28h]
  void *retaddr; // [rsp+B8h] [rbp+38h]
  _BYTE *i; // [rsp+C8h] [rbp+48h] BYREF

  v5 = *((_QWORD *)a2 + 3);
  v6 = 0;
  v28 = 0LL;
  v7 = v5 - *((_QWORD *)a2 + 2);
  v27 = 0LL;
  if ( v7 == -1LL )
    goto LABEL_23;
  if ( !*((_QWORD *)a2 + 2) )
  {
    if ( !v7 )
      goto LABEL_6;
LABEL_23:
    `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)this);
    __debugbreak();
  }
  if ( v7 )
  {
    if ( v7 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(this);
    *(_QWORD *)&v27 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    *((_QWORD *)&v27 + 1) = v27;
    v28 = v7 + v27;
  }
LABEL_6:
  v10 = 0;
  v11 = *((_QWORD *)a3 + 2);
  v12 = *((_QWORD *)a3 + 3);
  v29[0] = v11;
  v29[1] = v12;
  v13 = fminf(1.0, fmaxf(a4, 0.0));
  v30 = 0;
  if ( a2 != a3 && COERCE_FLOAT(LODWORD(v13) & _xmm) >= 0.0000011920929 )
  {
    v15 = (_BYTE *)*((_QWORD *)a2 + 2);
    v16 = (_BYTE *)*((_QWORD *)a2 + 3);
    for ( i = v15; ; v15 = i )
    {
      if ( v15 == v16 )
      {
        v21 = *((_QWORD *)a2 + 5);
        v22 = MIDL_user_allocate(0x48uLL);
        if ( v22 )
        {
          v23 = CPathData::CPathData(v22, v21, &v27);
          i = (_BYTE *)v23;
          v24 = (struct CPathData *)v23;
          if ( v23 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
            v6 = 0;
            *a5 = v24;
            goto LABEL_10;
          }
        }
        else
        {
          i = 0LL;
        }
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2CEu, 0LL);
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&i);
        goto LABEL_10;
      }
      LOBYTE(this) = *v15;
      Size = (unsigned int)Path::Segment::GetSize(this);
      if ( v15 > &v15[Size] )
        goto LABEL_23;
      std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(&v27, *((_QWORD *)&v27 + 1), v15);
      if ( v11 != v12 || v10 )
      {
        v18 = *((_QWORD *)&v27 + 1) - Size;
        this = *(unsigned __int8 *)(*((_QWORD *)&v27 + 1) - Size);
        if ( !*(_BYTE *)(*((_QWORD *)&v27 + 1) - Size) )
          goto LABEL_36;
        v19 = this - 1;
        if ( !v19 )
          goto LABEL_25;
        this = (unsigned int)(v19 - 1);
        if ( (_DWORD)this && (this = (unsigned int)(this - 1), (_DWORD)this) )
        {
          this = (unsigned int)(this - 1);
          if ( (_DWORD)this )
          {
            if ( (_DWORD)this != 1 )
              ModuleFailFastForHRESULT(-2147024809, retaddr);
            v20 = (float *)(v18 + 8);
            if ( !v20 )
              goto LABEL_23;
            v25 = 3LL;
          }
          else
          {
            v20 = (float *)(v18 + 8);
            if ( !v20 )
              goto LABEL_23;
            v25 = 2LL;
          }
        }
        else
        {
LABEL_36:
          v20 = (float *)(v18 + 8);
          if ( !v20 )
            goto LABEL_23;
          v25 = 1LL;
        }
        v26 = &v20[2 * v25];
        while ( v20 != v26 )
        {
          if ( v11 != v12 || v10 )
          {
            *v20 = (float)((float)(1.0 - v13) * *v20)
                 + (float)(*(float *)Path::ControlPointCollection::const_iterator::operator*(v29) * v13);
            v20[1] = (float)(*(float *)(Path::ControlPointCollection::const_iterator::operator*(v29) + 4) * v13)
                   + (float)((float)(1.0 - v13) * v20[1]);
            Path::ControlPointCollection::const_iterator::operator++(v29);
            v10 = v30;
            v11 = v29[0];
          }
          v20 += 2;
        }
      }
LABEL_25:
      Path::SegmentCollection::const_iterator::operator++(&i);
    }
  }
  if ( a2 )
    (*(void (__fastcall **)(const struct CPathData *))(*(_QWORD *)a2 + 8LL))(a2);
  *a5 = a2;
LABEL_10:
  std::vector<unsigned char>::_Tidy(&v27);
  return v6;
}
