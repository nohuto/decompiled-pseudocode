/*
 * XREFs of ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x1800DBE28
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF690 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1590 (-_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@.c)
 * Callees:
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18001DB30 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18001DB64 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 */

void __fastcall CStoryboard::ResizeToSnapshot(HWND a1, const struct tagRECT *a2, struct tagRECT *a3)
{
  CDesktopManager *v3; // rax
  int SnapshotIndex; // eax
  CTransitionVisualController *v6; // rcx
  int StoredSnapshotNoRefByIndex; // eax
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // xmm0_8
  struct CTransitionWindowSnapshot *v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  *a3 = *a2;
  SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(*((CTransitionVisualController **)v3 + 24), a1);
  StoredSnapshotNoRefByIndex = CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v6, SnapshotIndex, &v12);
  v8 = 0;
  if ( StoredSnapshotNoRefByIndex >= 0 )
  {
    v9 = 0;
    v10 = *((_QWORD *)v12 + 41);
    v11 = _mm_srli_si128(*(__m128i *)((char *)v12 + 328), 8).m128i_u64[0];
    if ( (int)v11 - (int)v10 >= 0 )
      v9 = v11 - v10;
    a3->right = a3->left + v9;
    if ( HIDWORD(v11) - HIDWORD(v10) >= 0 )
      v8 = HIDWORD(v11) - HIDWORD(v10);
    a3->bottom = a3->top + v8;
  }
}
