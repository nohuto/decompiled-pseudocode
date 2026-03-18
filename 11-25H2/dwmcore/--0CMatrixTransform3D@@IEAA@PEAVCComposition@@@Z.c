/*
 * XREFs of ??0CMatrixTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x180226E68
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CMatrixTransform3D *__fastcall CMatrixTransform3D::CMatrixTransform3D(
        CMatrixTransform3D *this,
        struct CComposition *a2)
{
  CMatrixTransform3D *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 10) |= 1u;
  *(_QWORD *)this = &CMatrixTransform3D::`vftable';
  *((_DWORD *)this + 40) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_DWORD *)this + 50) = 1065353216;
  *((_DWORD *)this + 55) = 1065353216;
  result = this;
  *((_BYTE *)this + 156) = 0;
  return result;
}
