/*
 * XREFs of ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180206734
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x1802067B4 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::CCombinedGeometry(
        CCombinedGeometry *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  CCombinedGeometry *v3; // r11
  _QWORD *v4; // r10

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
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
  *((_DWORD *)this + 31) = 1065353216;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CCombinedGeometry *)((char *)this + 136), a3[6]);
  *(_QWORD *)v3 = &CCombinedGeometry::`vftable'{for `CGeometry'};
  *v4 = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  return v3;
}
