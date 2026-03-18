/*
 * XREFs of ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x1802D2608
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COcclusionContext@@QEAA@XZ @ 0x1800F8168 (--0COcclusionContext@@QEAA@XZ.c)
 *     ??0?$CMergedRectBase@$03@@QEAA@_N@Z @ 0x1801C67A4 (--0-$CMergedRectBase@$03@@QEAA@_N@Z.c)
 */

CHolographicInteropTexture *__fastcall CHolographicInteropTexture::CHolographicInteropTexture(
        CHolographicInteropTexture *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  COcclusionContext::COcclusionContext((CHolographicInteropTexture *)((char *)this + 112));
  CMergedRectBase<4>::CMergedRectBase<4>((__int64)this + 1952, 1);
  *((_DWORD *)this + 537) = 0;
  *((_DWORD *)this + 560) = 0;
  *((_QWORD *)this + 281) = (char *)this + 2256;
  *((_DWORD *)this + 564) = 0;
  InitializeSRWLock((PSRWLOCK)this + 290);
  return this;
}
