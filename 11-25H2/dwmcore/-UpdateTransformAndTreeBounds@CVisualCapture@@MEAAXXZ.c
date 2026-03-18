/*
 * XREFs of ?UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ @ 0x1802B27D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x18011F730 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CVisualCapture::UpdateTransformAndTreeBounds(
        CVisualCapture *this,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  struct CMILMatrix *v3; // rdi
  CVisual *v5; // rcx
  _BYTE v6[64]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]

  v3 = (CVisualCapture *)((char *)this + 216);
  if ( *((_BYTE *)this + 2772) )
  {
    *(_DWORD *)v3 = 1065353216;
    *(_QWORD *)((char *)this + 220) = 0LL;
    *(_QWORD *)((char *)this + 228) = 0LL;
    *(_QWORD *)((char *)this + 236) = 1065353216LL;
    *(_QWORD *)((char *)this + 244) = 0LL;
    *((_DWORD *)this + 63) = 0;
    *((_QWORD *)this + 32) = 1065353216LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_DWORD *)this + 68) = 0;
    *((_DWORD *)this + 69) = 1065353216;
    *((_BYTE *)this + 281) &= 0xE9u;
    *((_BYTE *)this + 281) |= 0x29u;
    *((_BYTE *)this + 280) = -86;
  }
  else
  {
    CVisual::GetRootTransform(*((CVisual **)this + 343), v3, 0, 0);
    v5 = (CVisual *)*((_QWORD *)this + 342);
    if ( v5 )
    {
      v7 = 0;
      CVisual::GetRootTransform(v5, (struct CMILMatrix *)v6, 0, 0);
      CMILMatrix::Multiply(v3, (const struct CMILMatrix *)v6);
    }
  }
  COffScreenRenderTarget::CalcTreeBounds(this, a2, a3);
}
