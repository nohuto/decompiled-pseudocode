/*
 * XREFs of ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18005C06C
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18005BD10 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 * Callees:
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18005C8F0 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18005C9E8 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18005CA74 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18005CAE0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x18005CB6C (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18005CD70 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18005DBAC (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18025984C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int Size; // eax
  __int64 v18; // r12
  __int64 v19; // rbx
  int v20; // ecx
  float *v21; // rbx
  __int64 v22; // rbx
  void *v23; // rax
  __int64 v24; // rax
  struct CPathData *v25; // rbx
  __int64 v26; // rax
  float *v27; // r12
  __int128 v28; // [rsp+30h] [rbp-50h] BYREF
  SIZE_T v29; // [rsp+40h] [rbp-40h]
  _QWORD v30[2]; // [rsp+48h] [rbp-38h] BYREF
  int v31; // [rsp+58h] [rbp-28h]
  void *retaddr; // [rsp+B8h] [rbp+38h]
  _BYTE *i; // [rsp+C8h] [rbp+48h] BYREF

  v5 = *((_QWORD *)a2 + 3);
  v6 = 0;
  v29 = 0LL;
  v7 = v5 - *((_QWORD *)a2 + 2);
  v28 = 0LL;
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
    *(_QWORD *)&v28 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    *((_QWORD *)&v28 + 1) = v28;
    v29 = v7 + v28;
  }
LABEL_6:
  v10 = 0;
  v11 = *((_QWORD *)a3 + 2);
  v12 = *((_QWORD *)a3 + 3);
  v30[0] = v11;
  v30[1] = v12;
  v13 = fminf(1.0, fmaxf(a4, 0.0));
  v31 = 0;
  if ( a2 != a3 && COERCE_FLOAT(LODWORD(v13) & _xmm) >= 0.0000011920929 )
  {
    v15 = (_BYTE *)*((_QWORD *)a2 + 2);
    v16 = (_BYTE *)*((_QWORD *)a2 + 3);
    for ( i = v15; ; v15 = i )
    {
      if ( v15 == v16 )
      {
        v22 = *((_QWORD *)a2 + 5);
        v23 = MIDL_user_allocate(0x48uLL);
        if ( v23 )
        {
          v24 = CPathData::CPathData(v23, v22, &v28);
          i = (_BYTE *)v24;
          v25 = (struct CPathData *)v24;
          if ( v24 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
            v6 = 0;
            *a5 = v25;
            goto LABEL_10;
          }
        }
        else
        {
          i = 0LL;
        }
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2CEu, 0LL);
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&i);
        goto LABEL_10;
      }
      LOBYTE(this) = *v15;
      Size = Path::Segment::GetSize(this);
      v18 = Size;
      if ( v15 > &v15[Size] )
        goto LABEL_23;
      std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(&v28, *((_QWORD *)&v28 + 1), v15, Size);
      if ( v11 != v12 || v10 )
      {
        v19 = *((_QWORD *)&v28 + 1) - v18;
        this = *(unsigned __int8 *)(*((_QWORD *)&v28 + 1) - v18);
        if ( !*(_BYTE *)(*((_QWORD *)&v28 + 1) - v18) )
          goto LABEL_36;
        v20 = this - 1;
        if ( !v20 )
          goto LABEL_25;
        this = (unsigned int)(v20 - 1);
        if ( (_DWORD)this && (this = (unsigned int)(this - 1), (_DWORD)this) )
        {
          this = (unsigned int)(this - 1);
          if ( (_DWORD)this )
          {
            if ( (_DWORD)this != 1 )
              ModuleFailFastForHRESULT(-2147024809, retaddr);
            v21 = (float *)(v19 + 8);
            if ( !v21 )
              goto LABEL_23;
            v26 = 3LL;
          }
          else
          {
            v21 = (float *)(v19 + 8);
            if ( !v21 )
              goto LABEL_23;
            v26 = 2LL;
          }
        }
        else
        {
LABEL_36:
          v21 = (float *)(v19 + 8);
          if ( !v21 )
            goto LABEL_23;
          v26 = 1LL;
        }
        v27 = &v21[2 * v26];
        while ( v21 != v27 )
        {
          if ( v11 != v12 || v10 )
          {
            *v21 = (float)((float)(1.0 - v13) * *v21)
                 + (float)(*(float *)Path::ControlPointCollection::const_iterator::operator*(v30) * v13);
            v21[1] = (float)(*(float *)(Path::ControlPointCollection::const_iterator::operator*(v30) + 4) * v13)
                   + (float)((float)(1.0 - v13) * v21[1]);
            Path::ControlPointCollection::const_iterator::operator++(v30);
            v10 = v31;
            v11 = v30[0];
          }
          v21 += 2;
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
  std::vector<unsigned char>::_Tidy(&v28);
  return v6;
}
