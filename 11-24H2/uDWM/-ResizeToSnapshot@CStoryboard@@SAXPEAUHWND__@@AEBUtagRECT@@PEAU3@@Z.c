/*
 * XREFs of ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x180098E60
 * Callers:
 *     ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180053990 (-_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D6600 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180005404 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 */

void __fastcall CStoryboard::ResizeToSnapshot(HWND a1, const struct tagRECT *a2, struct tagRECT *a3)
{
  CDesktopManager *v3; // rax
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // r8d
  struct CTransitionWindowSnapshot *v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = 0;
  *a3 = *a2;
  v9 = 0LL;
  if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(*((CTransitionVisualController **)v3 + 24), a1, &v9) >= 0 )
  {
    v6 = *((_QWORD *)v9 + 35);
    v7 = 0;
    if ( (int)(*((_QWORD *)v9 + 36) - v6) >= 0 )
      v7 = *((_QWORD *)v9 + 36) - v6;
    v8 = HIDWORD(*((_QWORD *)v9 + 36)) - HIDWORD(v6);
    a3->right = a3->left + v7;
    if ( v8 >= 0 )
      v5 = v8;
    a3->bottom = a3->top + v5;
  }
}
