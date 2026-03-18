/*
 * XREFs of ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x180228204
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     <none>
 */

CProjectedShadow *__fastcall CProjectedShadow::CProjectedShadow(CProjectedShadow *this, struct CComposition *a2)
{
  CProjectedShadow *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CProjectedShadow::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 1065353216;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 32) = (char *)this + 280;
  *((_QWORD *)this + 33) = (char *)this + 280;
  *((_QWORD *)this + 34) = (char *)this + 312;
  result = this;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  return result;
}
