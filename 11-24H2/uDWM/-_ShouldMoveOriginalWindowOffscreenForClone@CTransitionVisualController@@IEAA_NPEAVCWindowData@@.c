/*
 * XREFs of ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x18008AFF4
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18004232C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

char __fastcall CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
        CTransitionVisualController *this,
        HWND *a2)
{
  char v2; // bl
  HWND *v3; // rdi
  __int64 i; // rcx
  WCHAR *v5; // rdx
  int v6; // r8d
  int v7; // eax
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 1;
  if ( *((_DWORD *)a2 + 32) == 2 || *((_DWORD *)a2 + 32) == 3 )
  {
    v3 = a2 + 5;
  }
  else
  {
    v3 = a2 + 5;
    if ( (unsigned int)GetPropW(a2[5], L"NoAnimationOffscreenMovement") != 1 )
      goto LABEL_7;
  }
  v2 = 0;
LABEL_7:
  memset_0(ClassName, 0, 0x208uLL);
  if ( v2 && GetClassNameW(*v3, ClassName, 260) )
  {
    for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
    {
      v5 = ClassName;
      do
      {
        v6 = *(WCHAR *)((char *)v5 + (char *)off_180102A58[i] - (char *)ClassName);
        v7 = *v5 - v6;
        if ( v7 )
          break;
        ++v5;
      }
      while ( v6 );
      if ( !v7 )
        return 0;
    }
  }
  return v2;
}
