/*
 * XREFs of ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x180019D54
 * Callers:
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x18001BC80 (--0CTrimPathOperation@@QEAA@XZ.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 */

CBezierFlattener<float,CMilPoint2F> *__fastcall CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>(
        CBezierFlattener<float,CMilPoint2F> *this,
        float a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  CBezierFlattener<float,CMilPoint2F> *v5; // rbx
  CDirtyRegionAnnotation *v6; // rbx
  CBezierFlattener<float,CMilPoint2F> *result; // rax
  float v8; // xmm6_4

  v2 = 4LL;
  v3 = 4LL;
  v5 = this;
  do
  {
    --v3;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v5);
    v5 = (CBezierFlattener<float,CMilPoint2F> *)((char *)v5 + 8);
  }
  while ( v3 );
  v6 = (CBezierFlattener<float,CMilPoint2F> *)((char *)this + 48);
  do
  {
    --v2;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v6);
    v6 = (CDirtyRegionAnnotation *)((char *)v6 + 8);
  }
  while ( v2 );
  result = this;
  v8 = fmaxf(a2, 0.0) * 6.0;
  *((float *)this + 11) = (float)(a2 * a2) * 0.000099999997;
  *((float *)this + 8) = v8;
  *((float *)this + 10) = v8 * 0.25;
  return result;
}
