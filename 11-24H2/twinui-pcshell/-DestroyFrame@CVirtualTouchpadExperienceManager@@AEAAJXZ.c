/*
 * XREFs of ?DestroyFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801E7F18
 * Callers:
 *     ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x18039DC10 (-Close@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18039F420 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::DestroyFrame(CVirtualTouchpadExperienceManager *this)
{
  __int64 *v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)this + 93) )
  {
    v9 = RevokeScaleChangeNotificationsForWindow(*((_QWORD *)this + 44));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x359,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    *((_DWORD *)this + 93) = 0;
  }
  if ( *((_DWORD *)this + 92) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 48LL))(*((_QWORD *)this + 42));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35F,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    *((_DWORD *)this + 92) = 0;
  }
  v2 = (__int64 *)((char *)this + 344);
  v3 = 0LL;
  *(_QWORD *)v12 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( v12 != (int *)((char *)this + 344) )
  {
    v3 = *v2;
    v4 = v3;
    *(_QWORD *)v12 = *v2;
    *v2 = 0LL;
    v5 = v3;
    v6 = v3;
    v7 = v3;
  }
  if ( v4 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 42) + 32LL))(*((_QWORD *)this + 42), v3);
    v6 = v5;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x367,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
      v6 = v7;
    }
  }
  *((_DWORD *)this + 194) = 4;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
