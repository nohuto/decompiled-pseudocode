/*
 * XREFs of ?SetCustomResourceSet@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18044B930
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914___ @ 0x180447EE4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::SetCustomResourceSet(
        UwpWindowWrapperBase *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 30);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a5d22ecb58441efa00d854dd3686f914___();
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9E9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v7);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9ED,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}
