/*
 * XREFs of ?IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180096C24
 * Callers:
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180068984 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BF784 (-DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x18010F210 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::IsHoveringForDeviceId(ManipulationInjector *this, int a2)
{
  __int64 i; // r8

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    if ( *((_DWORD *)this + i + 178) == a2 && *((_DWORD *)this + 38 * (unsigned int)i + 31) == 131074 )
      return 1;
  }
  return 0;
}
