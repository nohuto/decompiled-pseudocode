/*
 * XREFs of ?UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18024D454
 * Callers:
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18024D6C0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlLauncher::UninitializeCortanaExperienceManager(XamlLauncher *this)
{
  _QWORD *v1; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _QWORD *v6; // rsi
  int v7; // eax
  __int64 *v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 176);
  if ( *((_QWORD *)this + 32) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 240LL))(*v1);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5D8,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v3);
    *((_QWORD *)this + 32) = 0LL;
  }
  if ( *((_QWORD *)this + 33) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 256LL))(*v1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5DE,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v4);
    *((_QWORD *)this + 33) = 0LL;
  }
  if ( *((_QWORD *)this + 34) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 288LL))(*v1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E4,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v5);
    *((_QWORD *)this + 34) = 0LL;
  }
  v6 = (_QWORD *)((char *)this + 176);
  if ( *((_QWORD *)this + 35) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 304LL))(*v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5EA,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v7);
    *((_QWORD *)this + 35) = 0LL;
  }
  v8 = (__int64 *)((char *)this + 176);
  if ( *((_QWORD *)this + 36) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 192LL))(*v6);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F0,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v9);
    *((_QWORD *)this + 36) = 0LL;
  }
  if ( *((_QWORD *)this + 37) )
  {
    v8 = (__int64 *)((char *)this + 176);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 224LL))(*((_QWORD *)this + 22));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F6,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v10);
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( *((_QWORD *)this + 39) )
  {
    v8 = (__int64 *)((char *)this + 176);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 448LL))(*((_QWORD *)this + 22));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5FC,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v11);
    *((_QWORD *)this + 39) = 0LL;
  }
  if ( *((_QWORD *)this + 38) )
  {
    v8 = (__int64 *)((char *)this + 176);
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 432LL))(*((_QWORD *)this + 22));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x601,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v12);
    *((_QWORD *)this + 38) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
}
