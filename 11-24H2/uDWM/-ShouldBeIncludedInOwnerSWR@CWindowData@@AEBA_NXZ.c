/*
 * XREFs of ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001E7D8
 * Callers:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001E780 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18001E8BC (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

char __fastcall CWindowData::ShouldBeIncludedInOwnerSWR(CWindowData *this)
{
  char v2; // bl
  HWND v4; // rcx
  int i; // ecx
  WCHAR *v6; // rdx
  int v7; // r8d
  int v8; // eax
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  if ( (*((char *)this + 120) >= 0 || (*((_DWORD *)this + 186) & 0xFFF) == 0x11)
    && CWindowData::PropertiesAllowAutoParenting(this) )
  {
    v4 = (HWND)*((_QWORD *)this + 5);
    ClassName[0] = 0;
    v2 = 1;
    if ( GetClassNameW(v4, ClassName, 260) )
    {
      for ( i = 0; !i; i = 1 )
      {
        v6 = ClassName;
        do
        {
          v7 = *(WCHAR *)((char *)v6 + (char *)L"ImmersiveAppTitleBar" - (char *)ClassName);
          v8 = *v6 - v7;
          if ( v8 )
            break;
          ++v6;
        }
        while ( v7 );
        if ( !v8 )
          return 0;
      }
    }
  }
  return v2;
}
