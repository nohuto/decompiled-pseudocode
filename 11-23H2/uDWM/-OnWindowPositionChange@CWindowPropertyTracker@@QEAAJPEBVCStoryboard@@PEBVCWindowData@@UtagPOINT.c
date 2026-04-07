/*
 * XREFs of ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x1800D5FC4
 * Callers:
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18001C40C (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 * Callees:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180008358 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowPropertyTracker::OnWindowPositionChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        HWND *a3,
        struct tagPOINT a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v12; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, a3, &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (unsigned int)v12;
    *(struct tagPOINT *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v12) + 104LL) = a4;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v10) + 40LL) |= 4u;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x35u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v9;
}
