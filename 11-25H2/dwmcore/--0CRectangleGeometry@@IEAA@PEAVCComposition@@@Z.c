/*
 * XREFs of ??0CRectangleGeometry@@IEAA@PEAVCComposition@@@Z @ 0x180112C80
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CRectangleGeometry *__fastcall CRectangleGeometry::CRectangleGeometry(
        CRectangleGeometry *this,
        struct CComposition *a2)
{
  CRectangleGeometry *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  *((_DWORD *)this + 10) |= 1u;
  *(_QWORD *)this = &CRectangleGeometry::`vftable';
  result = this;
  *((_DWORD *)this + 31) = 1065353216;
  *((_DWORD *)this + 46) = 0;
  return result;
}
