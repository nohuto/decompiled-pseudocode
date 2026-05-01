/*
 * XREFs of ?put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z @ 0x180444F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x1804413CC (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::put_VisibilityRevoked(WindowWrapperBase *this, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 32);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    v5 = *((_DWORD *)this + 39);
    if ( (v5 & 0x18) == 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7FF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL,
        v9);
    if ( a2 )
      v6 = v5 & 0xFFFFFFDF;
    else
      v6 = v5 | 0x20;
    *((_DWORD *)this + 39) = v6;
    WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)((char *)this - 24));
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x803,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
