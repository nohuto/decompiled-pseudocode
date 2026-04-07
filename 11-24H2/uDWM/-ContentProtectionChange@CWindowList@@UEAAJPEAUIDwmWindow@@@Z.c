/*
 * XREFs of ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EEB10
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E67C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008F394 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ContentProtectionChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rsi
  char v6; // bl
  char v7; // dl
  char v8; // al
  CTopLevelWindow *v9; // rcx
  int v10; // eax
  CWindowData *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v12 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = v12;
  if ( v12 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 184LL))(a2);
    v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 192LL))(a2);
    v8 = *((_BYTE *)v5 + 739);
    if ( ((v8 & 0x20) != 0) != v6 || ((v8 & 0x40) != 0) != v7 )
    {
      *((_BYTE *)v5 + 739) = v8 ^ (v8 ^ (32 * v6)) & 0x20 ^ (v8 ^ (v8 ^ (32 * v6)) & 0x20 ^ (v7 << 6)) & 0x40;
      v9 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
      if ( v9 )
        CTopLevelWindow::SetVisualProtectContent(v9, v7);
      v10 = CWindowData::NotifyRepresentationChanged(v5);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1831u, 0LL);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v4;
}
