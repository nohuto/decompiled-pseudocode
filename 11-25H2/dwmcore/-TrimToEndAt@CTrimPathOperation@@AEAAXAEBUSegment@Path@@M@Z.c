/*
 * XREFs of ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18005B568
 * Callers:
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18005CDD0 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18020644C (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x18005CB6C (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18005CD70 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x18005CF4C (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTrimPathOperation::TrimToEndAt(CTrimPathOperation *this, const struct Path::Segment *a2, float a3)
{
  CTrimPathOperation *v4; // rbx
  struct Path::Segment *v5; // rdi
  __int64 v6; // rcx
  __int64 Size; // r9
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  bool v11; // al
  __int16 v12; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+32h] [rbp-26h]
  int v14; // [rsp+34h] [rbp-24h]

  v4 = this;
  if ( COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.0000011920929 )
  {
    v5 = CTrimPathOperation::InterpolateSegment(this, a2, 0.0, a3, 0LL);
    LOBYTE(v6) = *(_BYTE *)v5;
    *((float *)v5 + 1) = a3 * *((float *)a2 + 1);
    Size = (unsigned int)Path::Segment::GetSize(v6);
    if ( v5 > (struct Path::Segment *)((char *)v5 + Size) )
      goto LABEL_6;
    std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(v4, *((_QWORD *)v4 + 1), v5, Size);
  }
  LOBYTE(this) = 1;
  v8 = Path::Segment::GetSize(this);
  memset_0(&v12, 0, v8);
  v14 = 0;
  LOBYTE(v9) = 1;
  v12 = 1;
  v13 = 0;
  v10 = (unsigned int)Path::Segment::GetSize(v9);
  if ( &v12 > (__int16 *)((char *)&v12 + v10) )
LABEL_6:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(v4, *((_QWORD *)v4 + 1), &v12, v10);
  v11 = *((_BYTE *)v4 + 396) == 0;
  ++*((_DWORD *)v4 + 8);
  *((_BYTE *)v4 + 396) = v11;
  *((_BYTE *)v4 + 397) = 0;
}
