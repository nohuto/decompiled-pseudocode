/*
 * XREFs of ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD5A4
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BD990 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180096D34 (-IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1801120BC (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180112728 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelHoverTo2D(
        MPCGestureHandler *this,
        struct LegacyInputInfo *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v4; // rdi
  POINT v7; // r10
  __int64 v8; // r11
  struct tagPOINT v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = a4;
  v4 = (MPCGestureHandler *)((char *)this + 80);
  if ( !ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3)
    && !*(_BYTE *)(v8 + 900) )
  {
    if ( PtInRect((const RECT *)(v8 + 880), v7) )
    {
      ManipulationInjector::InjectHover(v4, &v9, a3);
      *((_BYTE *)this + 972) = ManipulationInjector::IsHoveringForDeviceId(v4, a3);
    }
  }
}
