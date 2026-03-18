/*
 * XREFs of ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18017E6F0
 * Callers:
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18017CD1C (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18017E740 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTrimPathOperation::AppendSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  CTrimPathOperation *v2; // rdi
  size_t Size; // r9

  v2 = this;
  LOBYTE(this) = *(_BYTE *)a2;
  Size = (unsigned int)Path::Segment::GetSize(this);
  if ( a2 > (const struct Path::Segment *)((char *)a2 + Size) )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>((__int64)v2, *((_BYTE **)v2 + 1), a2, Size);
}
