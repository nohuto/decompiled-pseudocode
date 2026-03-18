/*
 * XREFs of ?UpdateTransformAndTreeBounds@CVirtualMonitorCaptureRenderTarget@@MEAAXXZ @ 0x1802831C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?CalcTransform@COffScreenRenderTarget@@IEAAXXZ @ 0x1801592D4 (-CalcTransform@COffScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::UpdateTransformAndTreeBounds(
        CVirtualMonitorCaptureRenderTarget *this)
{
  CMILMatrix *v2; // rbx
  char v3; // al
  __int64 v4; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v5; // r8

  v2 = (CVirtualMonitorCaptureRenderTarget *)((char *)this + 216);
  if ( *((_QWORD *)this + 14) )
  {
    COffScreenRenderTarget::CalcTransform(this);
  }
  else
  {
    *(_QWORD *)v2 = 1065353216LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_DWORD *)this + 58) = 0;
    *(_QWORD *)((char *)this + 236) = 1065353216LL;
    *(_QWORD *)((char *)this + 244) = 0LL;
    *((_DWORD *)this + 63) = 0;
    *((_QWORD *)this + 32) = 1065353216LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_DWORD *)this + 68) = 0;
    *((_DWORD *)this + 69) = 1065353216;
    v3 = *((_BYTE *)this + 281) & 0xE9;
    *((_BYTE *)this + 280) = -86;
    *((_BYTE *)this + 281) = v3 | 0x29;
  }
  CMILMatrix::Translate(
    v2,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 803)) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 804)) ^ _xmm));
  COffScreenRenderTarget::CalcTreeBounds(this, v4, v5);
}
