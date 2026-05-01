/*
 * XREFs of _lambda_39c05a2d08f91a104f18850ee37f7c9d_::operator() @ 0x1800674D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39c05a2d08f91a104f18850ee37f7c9d___::Run @ 0x1800674B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_39c05a2d08f91a104f18850ee37f7c9d___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_39c05a2d08f91a104f18850ee37f7c9d_::operator()(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(__int64 **)(*a1 + 296LL);
  v3 = *v2;
  *(_OWORD *)v6 = *(_OWORD *)a1[1];
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *))(v3 + 48))(v2, v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
  *(_OWORD *)(*a1 + 732LL) = *(_OWORD *)a1[1];
  return 0LL;
}
