/*
 * XREFs of ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BFD68
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BFB70 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ??$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800BEA9C (--$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180110818 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x180110CE8 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelZoomTo2D(
        MPCGestureHandler *this,
        const RECT *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  int v6; // r11d
  __int64 v7; // r10
  int v8; // r11d
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  if ( a2[16].bottom )
  {
    v6 = *((_DWORD *)this + 42);
    if ( (v6 & 0xFFFFFF7F) == 0 || *((_DWORD *)this + 32) == 1 && v6 == 64 )
    {
      if ( PtInRect(a2 + 55, a4) )
      {
        ManipulationInjector::StartZoom((MPCGestureHandler *)((char *)this + 80), &v11, 1, a3);
        *((_BYTE *)this + 972) = (*((_DWORD *)this + 42) & 0xFFFFFF7F) != 0;
        v9 = *((_DWORD *)this + 228);
        ISMTracing::MPCGestureHandler_StartZoom<long &,long &,unsigned long const &,unsigned long>(
          (int *)&v11,
          &v11.y,
          &v10,
          &v9);
      }
    }
    else if ( ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3)
           && ((v8 - 16) & 0xFFFFFFEF) == 0 )
    {
      *((_DWORD *)this + 242) = *(_DWORD *)(v7 + 868);
    }
  }
}
