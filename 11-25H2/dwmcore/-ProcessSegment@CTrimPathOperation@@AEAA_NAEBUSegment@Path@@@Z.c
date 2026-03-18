/*
 * XREFs of ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18005B8B4
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18005C390 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x18005CB48 (-ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x18005CB6C (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18005CD70 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18005CDD0 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18005CE3C (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CTrimPathOperation::ProcessSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  char v4; // dl
  CTrimPathOperation *v5; // rcx
  float v6; // xmm0_4
  bool v8; // zf
  __int64 Size; // r9

  v4 = 0;
  if ( !*(_BYTE *)a2 )
  {
    *((_QWORD *)this + 6) = *(_QWORD *)a2;
    *((_QWORD *)this + 7) = *((_QWORD *)a2 + 1);
  }
  v5 = (CTrimPathOperation *)*((unsigned int *)this + 8);
  if ( (unsigned int)v5 < 2 )
  {
    v6 = *((float *)a2 + 1) + *((float *)this + 11);
    *((float *)this + 11) = v6;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + (_QWORD)v5 + 6) - v6) & _xmm) <= 0.0000011920929 )
    {
      if ( !*(_BYTE *)a2 )
      {
        v8 = *((_BYTE *)this + 396) == 0;
        *((_BYTE *)this + 397) = 1;
        *((_BYTE *)this + 396) = v8;
        *((_DWORD *)this + 8) = (_DWORD)v5 + 1;
      }
    }
    else if ( CTrimPathOperation::ShouldSplitCurrentSegment(this) )
    {
      CTrimPathOperation::SplitSegment(v5, a2);
LABEL_7:
      CTrimPathOperation::UpdateCurrentEndPoint(this, a2);
      return 1;
    }
    if ( *((_BYTE *)this + 396) == v4 )
      goto LABEL_7;
LABEL_13:
    LOBYTE(v5) = *(_BYTE *)a2;
    Size = (unsigned int)Path::Segment::GetSize(v5);
    if ( a2 > (const struct Path::Segment *)((char *)a2 + Size) )
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(this, *((_QWORD *)this + 1), a2, Size);
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 396) )
    goto LABEL_13;
  return 0;
}
