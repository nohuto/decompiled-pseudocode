/*
 * XREFs of ??0CTrimPathOperation@@QEAA@XZ @ 0x18001BC80
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18017D04C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 * Callees:
 *     ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x180019D54 (--0-$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18017E740 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

CTrimPathOperation *__fastcall CTrimPathOperation::CTrimPathOperation(CTrimPathOperation *this)
{
  unsigned int Size; // eax
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // eax
  CDirtyRegionAnnotation *v7; // rbx
  __int64 v8; // rdi

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  Size = Path::Segment::GetSize(0LL);
  memset_0((char *)this + 48, 0, Size);
  LOBYTE(v3) = 2;
  *((_BYTE *)this + 48) = 0;
  v4 = Path::Segment::GetSize(v3);
  memset_0((char *)this + 64, 0, v4);
  LOBYTE(v5) = 5;
  *((_BYTE *)this + 64) = 2;
  v6 = Path::Segment::GetSize(v5);
  memset_0((char *)this + 80, 0, v6);
  *((_BYTE *)this + 80) = 5;
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>(
    (CTrimPathOperation *)((char *)this + 112),
    0.25);
  v7 = (CTrimPathOperation *)((char *)this + 204);
  v8 = 16LL;
  do
  {
    --v8;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v7);
    v7 = (CDirtyRegionAnnotation *)((char *)v7 + 8);
  }
  while ( v8 );
  return this;
}
