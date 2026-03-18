/*
 * XREFs of ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18017CF3C
 * Callers:
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18017CD1C (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18017E7A0 (-SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x18017E53C (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18017E740 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x18017E91C (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTrimPathOperation::TrimToEndAt(CTrimPathOperation *this, const struct Path::Segment *a2, float a3)
{
  CTrimPathOperation *v4; // rbx
  struct Path::Segment *v5; // rdi
  __int64 v6; // rcx
  unsigned int Size; // eax
  __int64 v8; // rcx
  bool v9; // al
  __int16 v10; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+32h] [rbp-26h]
  int v12; // [rsp+34h] [rbp-24h]

  v4 = this;
  if ( COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.0000011920929 )
  {
    v5 = CTrimPathOperation::InterpolateSegment(this, a2, 0.0, a3, 0LL);
    LOBYTE(v6) = *(_BYTE *)v5;
    *((float *)v5 + 1) = a3 * *((float *)a2 + 1);
    if ( v5 > (struct Path::Segment *)((char *)v5 + (unsigned int)Path::Segment::GetSize(v6)) )
      goto LABEL_6;
    std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(v4, *((_QWORD *)v4 + 1), v5);
  }
  LOBYTE(this) = 1;
  Size = Path::Segment::GetSize(this);
  memset_0(&v10, 0, Size);
  v12 = 0;
  LOBYTE(v8) = 1;
  v10 = 1;
  v11 = 0;
  if ( &v10 > (__int16 *)((char *)&v10 + (unsigned int)Path::Segment::GetSize(v8)) )
LABEL_6:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(v4, *((_QWORD *)v4 + 1), &v10);
  v9 = *((_BYTE *)v4 + 396) == 0;
  ++*((_DWORD *)v4 + 8);
  *((_BYTE *)v4 + 396) = v9;
  *((_BYTE *)v4 + 397) = 0;
}
