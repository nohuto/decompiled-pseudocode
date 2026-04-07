/*
 * XREFs of ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180083AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x1800076E0 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ActivationChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rbx
  int v6; // eax
  CWindowData *v8; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+68h] [rbp+20h]

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v8 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *((_BYTE *)v5 + 736) ^= (*((_BYTE *)v5 + 736) ^ (2
                                                   * (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2))) & 2;
    v6 = CWindowData::OnWindowStyleUpdated(v5);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1772u, 0LL);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
