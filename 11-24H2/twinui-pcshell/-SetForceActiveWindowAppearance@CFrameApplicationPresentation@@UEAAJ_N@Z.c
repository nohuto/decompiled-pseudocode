/*
 * XREFs of ?SetForceActiveWindowAppearance@CFrameApplicationPresentation@@UEAAJ_N@Z @ 0x18030AC30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___ @ 0x180309214 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetForceActiveWindowAppearance(
        CFrameApplicationPresentation *this,
        char a2)
{
  _BYTE *v2; // rax
  char v4; // r8
  char v5; // dl
  int v6; // eax
  unsigned int v7; // ebx
  int v9[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this + 575;
  v4 = 1;
  v5 = *((_BYTE *)this + 574) || *v2;
  *((_BYTE *)this + 574) = a2;
  if ( !a2 && !*v2 )
    v4 = 0;
  if ( v4 == v5 )
    return 0LL;
  *(_QWORD *)v9 = this;
  LOBYTE(v9[2]) = v4;
  v6 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_be09023083cb68ae0d6884a72774a2ad___(this, (__int128 *)v9);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x757,
    (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
