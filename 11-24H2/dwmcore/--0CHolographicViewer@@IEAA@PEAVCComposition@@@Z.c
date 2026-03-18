/*
 * XREFs of ??0CHolographicViewer@@IEAA@PEAVCComposition@@@Z @ 0x1802D3634
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHolographicViewer *__fastcall CHolographicViewer::CHolographicViewer(
        CHolographicViewer *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CHolographicViewer::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CHolographicViewer::`vftable'{for `IHolographicViewer'};
  *((_QWORD *)this + 10) = &CHolographicViewer::`vftable'{for `IHolographicViewerBufferSource'};
  *((_DWORD *)this + 22) = 0;
  *(_OWORD *)((char *)this + 92) = 0LL;
  *(_OWORD *)((char *)this + 108) = 0LL;
  *(_OWORD *)((char *)this + 124) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 22) = _InterlockedIncrement(&dword_1803F9768);
  *((_QWORD *)this + 22) = *((_QWORD *)a2 + 83);
  InitializeSRWLock((PSRWLOCK)this + 24);
  return this;
}
