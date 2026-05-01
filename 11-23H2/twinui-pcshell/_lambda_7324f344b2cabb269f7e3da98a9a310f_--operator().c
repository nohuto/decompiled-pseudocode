/*
 * XREFs of _lambda_7324f344b2cabb269f7e3da98a9a310f_::operator() @ 0x1801F7D44
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7324f344b2cabb269f7e3da98a9a310f___::Run @ 0x1801F9830 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_7324f344b2cabb269f7e3da98a9a310f___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18038CA80 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7324f344b2cabb269f7e3da98a9a310f_::operator()(_DWORD **a1)
{
  _QWORD **v2; // rdx
  __int64 v3; // r8
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)*a1 + 35) + 208LL))(*((_QWORD *)*a1 + 35), &v12);
  v2 = (_QWORD **)*a1;
  v3 = *((_QWORD *)*a1 + 14);
  if ( !v3 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x98D,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)0x8007139FLL,
      v10);
  v4 = *a1[1];
  if ( *((_DWORD *)v2 + 65) != v4 )
  {
    *((_DWORD *)v2 + 65) = v4;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          v9 = wil::verify_hresult<long>(2147549183LL);
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x9A2,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)v9,
            v10);
        }
        v6 = 2LL;
      }
      else
      {
        v6 = 1LL;
      }
    }
    else
    {
      v6 = 0LL;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 152LL))(v3, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9A5,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v10);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
  return 0LL;
}
