/*
 * XREFs of ??0CTrimPathOperation@@QEAA@XZ @ 0x18012B430
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18005B678 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18005CD70 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x180129504 (--0-$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

CTrimPathOperation *__fastcall CTrimPathOperation::CTrimPathOperation(CTrimPathOperation *this)
{
  unsigned int Size; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  CDirtyRegionAnnotation *v5; // rbx
  __int64 v6; // rdi

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  Size = Path::Segment::GetSize(0);
  memset_0((char *)this + 48, 0, Size);
  *((_BYTE *)this + 48) = 0;
  v3 = Path::Segment::GetSize(2);
  memset_0((char *)this + 64, 0, v3);
  *((_BYTE *)this + 64) = 2;
  v4 = Path::Segment::GetSize(5);
  memset_0((char *)this + 80, 0, v4);
  *((_BYTE *)this + 80) = 5;
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>(
    (CTrimPathOperation *)((char *)this + 112),
    0.25);
  v5 = (CTrimPathOperation *)((char *)this + 204);
  v6 = 16LL;
  do
  {
    --v6;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v5);
    v5 = (CDirtyRegionAnnotation *)((char *)v5 + 8);
  }
  while ( v6 );
  return this;
}
