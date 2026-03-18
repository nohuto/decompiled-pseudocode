/*
 * XREFs of ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1802DC28C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802D7DE0 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1802DC728 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessCreate(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE *a3)
{
  char v4; // al
  RTL_SRWLOCK *v5; // rcx
  struct CVisual *v6; // rdx
  struct CResourceTable *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *((_DWORD *)this + 534) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 535) = *((_DWORD *)a3 + 4);
  *((_BYTE *)this + 2152) = 1;
  *(_QWORD *)((char *)this + 2236) = 1065353216LL;
  *((_QWORD *)this + 272) = 1065353216LL;
  *((_QWORD *)this + 273) = 0LL;
  *((_DWORD *)this + 548) = 0;
  *(_QWORD *)((char *)this + 2196) = 1065353216LL;
  *(_QWORD *)((char *)this + 2204) = 0LL;
  *((_DWORD *)this + 553) = 0;
  *((_QWORD *)this + 277) = 1065353216LL;
  *((_QWORD *)this + 278) = 0LL;
  *((_DWORD *)this + 558) = 0;
  v4 = *((_BYTE *)this + 2241) & 0xE9;
  *((_BYTE *)this + 2240) = -86;
  *((_BYTE *)this + 2241) = v4 | 0x29;
  v5 = *(RTL_SRWLOCK **)(*((_QWORD *)this + 3) + 664LL);
  *((_QWORD *)this + 11) = v5;
  if ( v5 )
  {
    CHolographicManager::AddInteropTexture(v5, this);
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 0x8000u);
  }
  v6 = (struct CVisual *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    v8 = (struct CResourceTable *)*((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = 0LL;
    CHolographicInteropTexture::SetRootVisual(this, v6);
    ReleaseInterface<IDXGIFactory7>((__int64 *)&v8);
  }
  return 0LL;
}
