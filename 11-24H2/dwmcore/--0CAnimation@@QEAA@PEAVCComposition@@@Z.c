/*
 * XREFs of ??0CAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18020E0CC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 */

CAnimation *__fastcall CAnimation::CAnimation(CAnimation *this, struct CComposition *a2)
{
  unsigned __int64 FrameTargetTime; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 15) = &CAnimation::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 64) = -1;
  *((_QWORD *)this + 31) = ((unsigned __int64)this + 120) & -(__int64)(this != 0LL);
  FrameTargetTime = CComposition::GetFrameTargetTime(a2);
  *((_QWORD *)this + 17) = FrameTargetTime;
  *((_QWORD *)this + 23) = FrameTargetTime;
  *((_QWORD *)this + 25) = FrameTargetTime;
  return this;
}
