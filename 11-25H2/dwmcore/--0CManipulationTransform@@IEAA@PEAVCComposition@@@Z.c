/*
 * XREFs of ??0CManipulationTransform@@IEAA@PEAVCComposition@@@Z @ 0x180217444
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CManipulationTransform *__fastcall CManipulationTransform::CManipulationTransform(
        CManipulationTransform *this,
        struct CComposition *a2)
{
  CManipulationTransform *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 10) |= 1u;
  *(_QWORD *)this = &CManipulationTransform::`vftable';
  *((_DWORD *)this + 46) = 1065353216;
  *((_DWORD *)this + 47) = 1065353216;
  *((_DWORD *)this + 48) = 1065353216;
  *((_BYTE *)this + 156) = 0;
  *((_DWORD *)this + 67) = 1065353216;
  *((_DWORD *)this + 62) = 1065353216;
  *((_DWORD *)this + 57) = 1065353216;
  *((_DWORD *)this + 52) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 260) = 0LL;
  *(_QWORD *)((char *)this + 252) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  return result;
}
