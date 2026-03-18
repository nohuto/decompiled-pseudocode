/*
 * XREFs of ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x1802D3138
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x1802D25BC (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802D3328 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessSetPosition(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION *a3)
{
  unsigned int *v3; // r15
  unsigned int v5; // esi
  unsigned int *v6; // r14
  unsigned int v7; // r12d
  RTL_SRWLOCK *v8; // rbx
  char v10; // al

  v3 = (unsigned int *)((char *)this + 2160);
  v5 = *((_DWORD *)this + 540);
  v6 = (unsigned int *)((char *)this + 2164);
  v7 = *((_DWORD *)this + 541);
  v8 = (RTL_SRWLOCK *)((char *)this + 2320);
  AcquireSRWLockExclusive((PSRWLOCK)this + 290);
  *v3 = *((_DWORD *)a3 + 2);
  *v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 542) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 543) = *((_DWORD *)a3 + 5);
  **((_DWORD **)this + 281) = 0;
  *((_BYTE *)this + 2152) = 1;
  ReleaseSRWLockExclusive(v8);
  if ( __PAIR64__(*v6, v5) != __PAIR64__(v7, *v3) )
  {
    CompositorTracing::DwmHolographicInteropTextureSizeChanged<unsigned int &,unsigned int &,unsigned int &>(
      (unsigned int *)this + 534,
      v3,
      v6);
    CHolographicInteropTexture::ReleaseResources(this);
  }
  *((_DWORD *)this + 560) = 0;
  *((_DWORD *)this + 544) = 1065353216;
  *(_QWORD *)((char *)this + 2180) = 0LL;
  *(_QWORD *)((char *)this + 2188) = 0LL;
  *(_QWORD *)((char *)this + 2196) = 1065353216LL;
  *(_QWORD *)((char *)this + 2204) = 0LL;
  *((_DWORD *)this + 553) = 0;
  *((_QWORD *)this + 277) = 1065353216LL;
  *((_QWORD *)this + 278) = 0LL;
  *((_DWORD *)this + 558) = 0;
  *((_DWORD *)this + 559) = 1065353216;
  v10 = *((_BYTE *)this + 2241) & 0xE9;
  *((_BYTE *)this + 2240) = -86;
  *((_BYTE *)this + 2241) = v10 | 0x29;
  CMILMatrix::Translate(
    (CHolographicInteropTexture *)((char *)this + 2176),
    (float)-*((_DWORD *)this + 542),
    (float)-*((_DWORD *)this + 543));
  CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 0x8000u);
  return 0LL;
}
