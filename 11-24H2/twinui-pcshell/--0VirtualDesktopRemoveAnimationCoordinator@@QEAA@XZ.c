/*
 * XREFs of ??0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ @ 0x1804E3190
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRemoveAnimationCoordinator@@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804E30C8 (--$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AE.c)
 * Callees:
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804D8A90 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Mi.c)
 */

VirtualDesktopRemoveAnimationCoordinator *__fastcall VirtualDesktopRemoveAnimationCoordinator::VirtualDesktopRemoveAnimationCoordinator(
        VirtualDesktopRemoveAnimationCoordinator *this)
{
  VirtualDesktopRemoveAnimationCoordinator *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>((__int64)this);
  *(_QWORD *)this = &VirtualDesktopRemoveAnimationCoordinator::`vftable';
  memset_0((char *)this + 248, 0, 0x90uLL);
  *(_OWORD *)((char *)this + 392) = 0LL;
  *(_OWORD *)((char *)this + 408) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  memset_0((char *)this + 440, 0, 0xB0uLL);
  memset_0((char *)this + 624, 0, 0x78uLL);
  *((_DWORD *)this + 154) = 0;
  result = this;
  *((_DWORD *)this + 155) = 0;
  *((_DWORD *)this + 186) = 0;
  return result;
}
