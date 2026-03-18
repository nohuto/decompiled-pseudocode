/*
 * XREFs of ??0CGeometry2DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180212ECC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x180213064 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CGeometry2DGroup *__fastcall CGeometry2DGroup::CGeometry2DGroup(
        CGeometry2DGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  __int64 v3; // r11

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CGeometry2DGroup *)((char *)this + 112), a3[6]);
  *(_DWORD *)(v3 + 144) = 0;
  *(_DWORD *)(v3 + 148) = 0;
  *(_DWORD *)(v3 + 152) = 0;
  *(_DWORD *)(v3 + 156) = 0;
  *(_QWORD *)v3 = &CGeometry2DGroup::`vftable'{for `CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>'};
  *(_QWORD *)(v3 + 112) = &CGeometry2DGroup::`vftable'{for `CCyclicResourceListEntry'};
  return (CGeometry2DGroup *)v3;
}
