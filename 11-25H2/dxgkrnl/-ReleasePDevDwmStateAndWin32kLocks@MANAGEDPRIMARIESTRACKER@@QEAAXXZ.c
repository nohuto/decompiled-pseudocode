/*
 * XREFs of ?ReleasePDevDwmStateAndWin32kLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039A544
 * Callers:
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x14039A4CC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D070 (-ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::ReleasePDevDwmStateAndWin32kLocks(MANAGEDPRIMARIESTRACKER *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rbx

  MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks(this);
  if ( (*((_DWORD *)this + 104) & 1) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 1) + 88LL) + 184LL))();
    *((_DWORD *)this + 104) &= ~1u;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)SessionData + 2409) = 0LL;
    ExReleasePushLockExclusiveEx((char *)SessionData + 19264, 0LL);
    KeLeaveCriticalRegion();
  }
}
