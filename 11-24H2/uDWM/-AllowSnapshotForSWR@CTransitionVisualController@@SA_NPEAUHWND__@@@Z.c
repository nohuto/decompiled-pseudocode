/*
 * XREFs of ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18008C190
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180009360 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

char __fastcall CTransitionVisualController::AllowSnapshotForSWR(HWND hWnd)
{
  char v2; // di
  __int64 i; // rcx
  WCHAR *v4; // rdx
  int v5; // r8d
  int v6; // eax
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 1;
  memset_0(ClassName, 0, 0x208uLL);
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    for ( i = 0LL; !(_DWORD)i; i = 1LL )
    {
      v4 = ClassName;
      do
      {
        v5 = *(WCHAR *)((char *)v4 + (char *)off_180102B30[i] - (char *)ClassName);
        v6 = *v4 - v5;
        if ( v6 )
          break;
        ++v4;
      }
      while ( v5 );
      if ( !v6 )
        return 0;
    }
  }
  return v2;
}
