/*
 * XREFs of ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4EDGEUI_TRAYSTUCKPLACE@@AEAU2@@Z @ 0x180393854
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180393DB8 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CJumpViewExperienceManager::CalcWindowPosition(
        int *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        _DWORD *a6)
{
  int v6; // r10d
  int v7; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r10d
  int v12; // eax
  int v13; // eax

  v6 = a2;
  LODWORD(a2) = a1[3];
  v7 = a2;
  if ( SHIDWORD(a2) < (int)a2 )
    v7 = HIDWORD(a2);
  if ( v7 <= a1[1] )
  {
    LODWORD(a2) = a1[1];
  }
  else if ( SHIDWORD(a2) < (int)a2 )
  {
    LODWORD(a2) = HIDWORD(a2);
  }
  a6[3] = a2;
  v9 = a2 - a4;
  if ( v9 <= a1[1] )
    v9 = a1[1];
  v10 = a1[2];
  a6[1] = v9;
  v11 = v6 - a3 / 2;
  v12 = v11;
  if ( v11 <= *a1 )
    v12 = *a1;
  if ( v12 >= v10 )
  {
    v11 = v10;
  }
  else if ( v11 <= *a1 )
  {
    v11 = *a1;
  }
  v13 = v11 + a3;
  *a6 = v11;
  if ( v11 + a3 >= v10 )
    v13 = v10;
  a6[2] = v13;
  return 0LL;
}
