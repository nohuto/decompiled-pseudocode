/*
 * XREFs of ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001C3FC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001C5C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E67C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z @ 0x18008A580 (-GetWindowTabOwner@@YAPEAUHWND__@@QEAU1@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceIconicRepresentationChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  CWindowData *v5; // rbx
  char v6; // si
  __int64 v7; // r8
  int v8; // eax
  CWindowData *v10; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v10 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = v10;
  if ( v10 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 208LL))(a2);
    if ( (*((_BYTE *)v5 + 737) & 1) != v6 )
    {
      *((_BYTE *)v5 + 737) ^= (v6 ^ *((_BYTE *)v5 + 737)) & 1;
      *((_QWORD *)v5 + 115) = GetWindowTabOwner(*((HWND *)v5 + 5));
      if ( v6 && CWindowData::IsImmersiveWindow(v5) )
        CWindowData::ClearSnapshot(v5, 0, v7, 1);
      v8 = CWindowData::NotifyRepresentationChanged(v5);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1889u, 0LL);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v4;
}
