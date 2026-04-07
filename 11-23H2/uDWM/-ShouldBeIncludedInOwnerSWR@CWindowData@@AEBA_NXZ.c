/*
 * XREFs of ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18004EDF0
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180047970 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18004ED94 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18004FAD8 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

char __fastcall CWindowData::ShouldBeIncludedInOwnerSWR(CWindowData *this)
{
  char v2; // bl
  HWND v4; // rcx
  WCHAR *v5; // rax
  int v6; // r10d
  int v7; // r8d
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  if ( (*((char *)this + 120) >= 0 || (*((_DWORD *)this + 170) & 0xFFF) == 0x11)
    && CWindowData::PropertiesAllowAutoParenting(this) )
  {
    v4 = (HWND)*((_QWORD *)this + 5);
    ClassName[0] = 0;
    v2 = 1;
    if ( GetClassNameW(v4, ClassName, 260) )
    {
      v5 = ClassName;
      do
      {
        v6 = *(WCHAR *)((char *)v5 + (char *)L"ImmersiveAppTitleBar" - (char *)ClassName);
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
