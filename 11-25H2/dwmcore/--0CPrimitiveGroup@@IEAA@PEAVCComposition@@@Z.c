/*
 * XREFs of ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x180113698
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::CPrimitiveGroup(CPrimitiveGroup *this, struct CComposition *a2)
{
  CPrimitiveGroup *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 17) = (char *)this + 168;
  *((_QWORD *)this + 18) = (char *)this + 168;
  *((_DWORD *)this + 38) = 4;
  *(_QWORD *)((char *)this + 156) = 4LL;
  *((_QWORD *)this + 25) = (char *)this + 232;
  *((_QWORD *)this + 26) = (char *)this + 232;
  *((_DWORD *)this + 54) = 4;
  *(_QWORD *)((char *)this + 220) = 4LL;
  *((_QWORD *)this + 33) = (char *)this + 296;
  *((_QWORD *)this + 34) = (char *)this + 296;
  *((_DWORD *)this + 70) = 4;
  *(_QWORD *)((char *)this + 284) = 4LL;
  *((_QWORD *)this + 41) = (char *)this + 360;
  *((_QWORD *)this + 42) = (char *)this + 360;
  result = this;
  *((_DWORD *)this + 86) = 4;
  *(_QWORD *)((char *)this + 348) = 4LL;
  *(_QWORD *)((char *)this + 524) = 0LL;
  *(_QWORD *)((char *)this + 532) = 0LL;
  return result;
}
