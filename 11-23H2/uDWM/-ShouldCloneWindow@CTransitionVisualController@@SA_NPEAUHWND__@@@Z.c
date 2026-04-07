/*
 * XREFs of ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180012434
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180003BA4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800121D8 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800C76E8 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800E99F8 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___ @ 0x1800E9DBC (CTransitionVisualController--ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___.c)
 *     _lambda_7924ac7615675ed6f4f46acaa8a90be9_::operator() @ 0x1800EA00C (_lambda_7924ac7615675ed6f4f46acaa8a90be9_--operator().c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x1800125DC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 */

char __fastcall CTransitionVisualController::ShouldCloneWindow(HWND hWnd)
{
  char v2; // bl
  CDesktopManager *v3; // rbp
  unsigned int i; // edi
  int v5; // ecx
  wchar_t **j; // rdx
  WCHAR *v7; // rax
  int v8; // r10d
  int v9; // r8d
  WCHAR *v11; // rax
  int v12; // edx
  int v13; // ecx
  struct tagRECT Rect; // [rsp+20h] [rbp-248h] BYREF
  WCHAR ClassName[264]; // [rsp+30h] [rbp-238h] BYREF

  Rect = 0LL;
  v2 = 1;
  if ( GetWindowRect(hWnd, &Rect) && IsRectEmpty(&Rect) )
    return 0;
  memset_0(ClassName, 0, 0x208uLL);
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    v3 = CDesktopManager::s_pDesktopManagerInstance;
    for ( i = 0; i < 6; ++i )
    {
      if ( CAnimationScheduler::IsWindowCurrentlyAnimating(
             *((CAnimationScheduler **)v3 + 23),
             0LL,
             *((_DWORD *)&off_180115F10 + 4 * i + 2),
             0) )
      {
        v11 = ClassName;
        do
        {
          v12 = *(WCHAR *)((char *)v11 + (char *)(&off_180115F10)[2 * i] - (char *)ClassName);
          v13 = *v11 - v12;
          if ( v13 )
            break;
          ++v11;
        }
        while ( v12 );
        if ( !v13 )
          return v2;
      }
    }
    v5 = 0;
    for ( j = off_180115F70; ; ++j )
    {
      v7 = ClassName;
      do
      {
        v8 = *(WCHAR *)((char *)v7 + (char *)*j - (char *)ClassName);
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
        break;
      if ( (unsigned int)++v5 >= 0xC )
        return v2;
    }
    return 0;
  }
  return v2;
}
