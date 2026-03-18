/*
 * XREFs of ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18017DD60
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18017D04C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18000D9B0 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x18001BBBC (--0CPathLengthOperation@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18017D24C (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18017D288 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18017E444 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x18017E518 (-ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x18017E53C (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18017E740 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18017E7A0 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18017E80C (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18017E8B8 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18017F278 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18017F54C (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180180410 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1802DF620 (fmodf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTrimPathOperation::Trim(
        CTrimPathOperation *this,
        const struct CPathData *a2,
        float a3,
        float a4,
        float a5,
        struct CPathData **a6)
{
  float v8; // xmm9_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  __int64 v11; // r15
  struct CPathData *v12; // rdi
  float v13; // xmm8_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  CPathLengthOperation *v16; // rax
  float Length; // xmm0_4
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  CTrimPathOperation *v20; // rcx
  float v21; // xmm1_4
  void *v22; // rax
  __int64 v23; // rax
  struct CPathData *v24; // rbx
  unsigned int v25; // ebx
  bool v27; // zf
  void *v28; // rax
  CPathData *v29; // rax
  float v30; // xmm0_4
  char v31; // al
  char v32; // al
  int v33; // xmm1_4
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  CPathData *v35; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v39[224]; // [rsp+68h] [rbp-A0h] BYREF

  v8 = fminf(1.0, fmaxf(a4, 0.0));
  v9 = fminf(1.0, fmaxf(a3, 0.0));
  v10 = v8 - v9;
  if ( (float)(v8 - v9) < 0.0 )
    v10 = v10 + 1.0;
  v11 = *((_QWORD *)a2 + 5);
  v35 = 0LL;
  v12 = 0LL;
  if ( !CPathData::IsSimpleGeometry(a2) )
  {
    v25 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304315, 0xA5u, 0LL);
    goto LABEL_30;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) < 0.0000011920929 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(const struct CPathData *))(*(_QWORD *)a2 + 8LL))(a2);
      v12 = a2;
    }
LABEL_29:
    v25 = 0;
    goto LABEL_30;
  }
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 0.0000011920929 )
  {
    v28 = MIDL_user_allocate(0x48uLL);
    if ( v28 )
    {
      *((_QWORD *)&v36 + 1) = 0LL;
      v37 = 0LL;
      v29 = (CPathData *)CPathData::CPathData(v28, v11, (char *)&v36 + 8);
    }
    else
    {
      v29 = 0LL;
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=(&v35, v29);
    v12 = v35;
    if ( !v35 )
    {
      v34 = 179;
      goto LABEL_48;
    }
    goto LABEL_29;
  }
  v13 = fmodf_0(v9 + a5, 1.0);
  v14 = fmodf_0(v8 + a5, 1.0);
  v15 = v14;
  if ( v13 < 0.0 )
    v13 = v13 + 1.0;
  if ( v14 < 0.0 )
    v15 = v14 + 1.0;
  *((_BYTE *)this + 396) = 0;
  if ( v13 > v15 )
  {
    v30 = v13;
    *((_BYTE *)this + 396) = 1;
    v13 = v15;
    v15 = v30;
  }
  v16 = CPathLengthOperation::CPathLengthOperation((CPathLengthOperation *)v39);
  Length = CPathLengthOperation::GetLength(v16, a2);
  *((float *)this + 6) = Length * v13;
  *((float *)this + 7) = Length * v15;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 397) = 1;
  if ( *(_QWORD *)this != *((_QWORD *)this + 1) )
    *((_QWORD *)this + 1) = *(_QWORD *)this;
  v18 = *((_QWORD *)a2 + 2);
  v19 = *((_QWORD *)a2 + 3);
  v38 = v18;
  while ( v18 != v19 )
  {
    if ( *(_BYTE *)v18 != 1 )
    {
      if ( !*(_BYTE *)v18 )
      {
        *((_QWORD *)this + 6) = *(_QWORD *)v18;
        *((_QWORD *)this + 7) = *(_QWORD *)(v18 + 8);
      }
LABEL_19:
      v20 = (CTrimPathOperation *)*((unsigned int *)this + 8);
      if ( (unsigned int)v20 >= 2 )
      {
        if ( !*((_BYTE *)this + 396) )
          break;
      }
      else
      {
        v21 = *(float *)(v18 + 4) + *((float *)this + 11);
        *((float *)this + 11) = v21;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + (_QWORD)v20 + 6) - v21) & _xmm) <= 0.0000011920929 )
        {
          if ( !*(_BYTE *)v18 )
          {
            v27 = *((_BYTE *)this + 396) == 0;
            *((_BYTE *)this + 397) = 1;
            *((_BYTE *)this + 396) = v27;
            *((_DWORD *)this + 8) = (_DWORD)v20 + 1;
          }
        }
        else if ( CTrimPathOperation::ShouldSplitCurrentSegment(this) )
        {
          CTrimPathOperation::SplitSegment(v20, (const struct Path::Segment *)v18);
LABEL_23:
          CTrimPathOperation::UpdateCurrentEndPoint(this, (const struct Path::Segment *)v18);
          goto LABEL_24;
        }
      }
      if ( *((_BYTE *)this + 396) )
      {
        LOBYTE(v20) = *(_BYTE *)v18;
        if ( v18 > v18 + (unsigned int)Path::Segment::GetSize(v20) )
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(this, *((_QWORD *)this + 1), v18);
      }
      goto LABEL_23;
    }
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_19;
    if ( COERCE_FLOAT(*(_DWORD *)(v18 + 4) & _xmm) >= 0.0000011920929 )
    {
      Path::Segment::Segment((_BYTE *)&v36 + 8, 2);
      v32 = *(_BYTE *)(v18 + 1);
      v33 = *((_DWORD *)this + 14);
      HIDWORD(v36) = *(_DWORD *)(v18 + 4);
      HIDWORD(v37) = *((_DWORD *)this + 15);
      LODWORD(v37) = v33;
      BYTE9(v36) = v32;
      CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)((char *)&v36 + 8));
    }
    v35 = *(CPathData **)v18;
    v31 = *((_BYTE *)this + 397);
    HIDWORD(v35) = 0;
    BYTE2(v35) = v31;
    if ( !CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)&v35) )
      break;
LABEL_24:
    Path::SegmentCollection::const_iterator::operator++(&v38);
    v18 = v38;
  }
  v22 = MIDL_user_allocate(0x48uLL);
  if ( v22 )
  {
    v23 = CPathData::CPathData(v22, v11, this);
    v24 = (struct CPathData *)v23;
    if ( v23 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      v12 = v24;
      goto LABEL_29;
    }
  }
  v34 = 243;
LABEL_48:
  v25 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v34, 0LL);
LABEL_30:
  *a6 = v12;
  return v25;
}
