/*
 * XREFs of ?TransitionsForceDisabledChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18010CF20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::TransitionsForceDisabledChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  struct CWindowData *v8; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v8);
  v5 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v6 = v8;
    if ( v8 )
      *((_BYTE *)v6 + 672) ^= (*((_BYTE *)v6 + 672) ^ (16
                                                     * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2))) & 0x10;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1924u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v5;
}
