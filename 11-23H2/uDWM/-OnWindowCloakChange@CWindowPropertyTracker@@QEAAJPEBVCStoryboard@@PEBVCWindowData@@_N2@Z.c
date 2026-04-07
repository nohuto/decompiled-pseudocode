/*
 * XREFs of ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180008294
 * Callers:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18004F10C (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 * Callees:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180008358 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018FB4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowPropertyTracker::OnWindowCloakChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        CTopLevelWindow **a3,
        char a4,
        bool a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  CTopLevelWindow *v12; // rcx
  int v14; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+38h] [rbp-10h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, (const struct CWindowData *)a3, &v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xFu, 0LL);
  }
  else
  {
    v11 = (unsigned int)v14;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v14) + 100LL) = a4;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)this + 8 * v11) + 156LL) = a5;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v11) + 40LL) |= 1u;
    v12 = a3[55];
    if ( v12 )
      CTopLevelWindow::UpdateAccent(v12, a4 != 1);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v10;
}
