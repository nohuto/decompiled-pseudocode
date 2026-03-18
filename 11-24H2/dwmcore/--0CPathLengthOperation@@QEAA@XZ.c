/*
 * XREFs of ??0CPathLengthOperation@@QEAA@XZ @ 0x18001BBBC
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18017DD60 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 */

CPathLengthOperation *__fastcall CPathLengthOperation::CPathLengthOperation(CPathLengthOperation *this)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  CDirtyRegionAnnotation *v4; // rdi
  CDirtyRegionAnnotation *v5; // rdi
  CDirtyRegionAnnotation *v6; // rdi
  __int64 v7; // rsi

  v1 = 4LL;
  v2 = 4LL;
  v4 = this;
  do
  {
    --v2;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v4);
    v4 = (CDirtyRegionAnnotation *)((char *)v4 + 8);
  }
  while ( v2 );
  v5 = (CPathLengthOperation *)((char *)this + 48);
  do
  {
    --v1;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v5);
    v5 = (CDirtyRegionAnnotation *)((char *)v5 + 8);
  }
  while ( v1 );
  *((_DWORD *)this + 11) = 919713559;
  v6 = (CPathLengthOperation *)((char *)this + 92);
  *((_DWORD *)this + 8) = 1069547520;
  v7 = 16LL;
  *((_DWORD *)this + 10) = 1052770304;
  do
  {
    --v7;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v6);
    v6 = (CDirtyRegionAnnotation *)((char *)v6 + 8);
  }
  while ( v7 );
  return this;
}
