/*
 * XREFs of ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800D0A34
 * Callers:
 *     ?OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z @ 0x1800533AC (-OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x1800522A0 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::OnWindowSizeChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        HWND *a3,
        struct tagSIZE a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r8
  int v12; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0;
  v8 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, a3, &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x24u, 0LL);
  }
  else
  {
    v10 = (unsigned int)v12;
    *(struct tagSIZE *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v12) + 112LL) = a4;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v10) + 40LL) |= 2u;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v9;
}
