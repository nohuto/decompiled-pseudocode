/*
 * XREFs of ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18005C390
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18005B678 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 * Callees:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18005B4B0 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x18005B878 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18005B8B4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18005CA74 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x18005CB48 (-ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x18005CB6C (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18005CD70 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18005CDD0 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18005CE3C (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18005CEE8 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18005D8D8 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18005DBAC (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x18012B36C (--0CPathLengthOperation@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801A7000 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1802E88C0 (fmodf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int Size; // eax
  void *v29; // rax
  __int64 v30; // rax
  float v31; // xmm0_4
  char v32; // al
  char v33; // al
  int v34; // xmm1_4
  unsigned int v35; // [rsp+28h] [rbp-E0h]
  struct CPathData *v36; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v40[224]; // [rsp+68h] [rbp-A0h] BYREF

  v8 = fminf(1.0, fmaxf(a4, 0.0));
  v9 = fminf(1.0, fmaxf(a3, 0.0));
  v10 = v8 - v9;
  if ( (float)(v8 - v9) < 0.0 )
    v10 = v10 + 1.0;
  v11 = *((_QWORD *)a2 + 5);
  v36 = 0LL;
  v12 = 0LL;
  if ( !CPathData::IsSimpleGeometry(a2) )
  {
    v25 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304315, 0xA5u, 0LL);
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
    v29 = MIDL_user_allocate(0x48uLL);
    if ( v29 )
    {
      *((_QWORD *)&v37 + 1) = 0LL;
      v38 = 0LL;
      v30 = CPathData::CPathData((__int64)v29, v11, (SIZE_T *)&v37 + 1);
    }
    else
    {
      v30 = 0LL;
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=(&v36, v30);
    v12 = v36;
    if ( !v36 )
    {
      v35 = 179;
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
    v31 = v13;
    *((_BYTE *)this + 396) = 1;
    v13 = v15;
    v15 = v31;
  }
  v16 = CPathLengthOperation::CPathLengthOperation((CPathLengthOperation *)v40);
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
  v39 = v18;
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
        Size = Path::Segment::GetSize(v20);
        if ( v18 > v18 + Size )
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(this, *((_QWORD *)this + 1), v18, Size);
      }
      goto LABEL_23;
    }
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_19;
    if ( COERCE_FLOAT(*(_DWORD *)(v18 + 4) & _xmm) >= 0.0000011920929 )
    {
      Path::Segment::Segment((_BYTE *)&v37 + 8, 2);
      v33 = *(_BYTE *)(v18 + 1);
      v34 = *((_DWORD *)this + 14);
      HIDWORD(v37) = *(_DWORD *)(v18 + 4);
      HIDWORD(v38) = *((_DWORD *)this + 15);
      LODWORD(v38) = v34;
      BYTE9(v37) = v33;
      CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)((char *)&v37 + 8));
    }
    v36 = *(struct CPathData **)v18;
    v32 = *((_BYTE *)this + 397);
    HIDWORD(v36) = 0;
    BYTE2(v36) = v32;
    if ( !CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)&v36) )
      break;
LABEL_24:
    Path::SegmentCollection::const_iterator::operator++(&v39);
    v18 = v39;
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
  v35 = 243;
LABEL_48:
  v25 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v35, 0LL);
LABEL_30:
  *a6 = v12;
  return v25;
}
