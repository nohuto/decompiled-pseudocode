/*
 * XREFs of ??0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z @ 0x1802D1660
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802CE61C (-AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

CHolographicExclusiveMode *__fastcall CHolographicExclusiveMode::CHolographicExclusiveMode(
        CHolographicExclusiveMode *this,
        struct CComposition *a2,
        __int64 a3)
{
  CHolographicManager *v4; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CHolographicExclusiveMode::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CHolographicExclusiveMode::`vftable'{for `IHolographicExclusiveModeManagerProxy'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  *((_DWORD *)this + 27) = 1065353216;
  v4 = (CHolographicManager *)*((_QWORD *)a2 + 83);
  *((_QWORD *)this + 10) = v4;
  CHolographicManager::AddExclusiveModeProxy(v4, this, a3);
  return this;
}
