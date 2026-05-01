/*
 * XREFs of ?SetWindowPropagatableProperties@WindowWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804435C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1968860eb9e1fd4d28dfd691bb63a717___ @ 0x18043B3E4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_1968860eb9e1fd4d28dfd691bb63a717.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetWindowPropagatableProperties(
        WindowWrapperBase *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 200LL))(v3);
    if ( *((_QWORD *)this + 14) )
    {
      *(_QWORD *)v9 = (char *)this - 16;
      *(_QWORD *)&v9[2] = &v12;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1968860eb9e1fd4d28dfd691bb63a717___(
             v5,
             CurrentThreadId,
             (__int128 *)v9);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x596,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v6,
          v9[0]);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x59B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
