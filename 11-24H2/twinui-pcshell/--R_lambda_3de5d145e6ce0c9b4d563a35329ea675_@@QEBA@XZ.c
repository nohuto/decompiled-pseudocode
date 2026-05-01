/*
 * XREFs of ??R_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEBA@XZ @ 0x1805E3F1C
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_3de5d145e6ce0c9b4d563a35329ea675___ @ 0x18028D1C4 (_anonymous_namespace_--RunSynchronousInSTA__lambda_3de5d145e6ce0c9b4d563a35329ea675___.c)
 *     _lambda_f61e10ee7e543796b431f359b570f371_::operator() @ 0x1805E44B0 (_lambda_f61e10ee7e543796b431f359b570f371_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802C41F0 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall _lambda_3de5d145e6ce0c9b4d563a35329ea675_::operator()(__int64 a1)
{
  int v2; // eax
  _DWORD *result; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CPinnedList *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v6);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x395,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v2,
      v4);
  result = (_DWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD))a1)(
                       (char *)v6 + *(int *)(*(_QWORD *)a1 + 8LL),
                       **(unsigned int **)(a1 + 8));
  if ( (_DWORD)result == -2147019873 )
  {
    result = *(_DWORD **)(a1 + 16);
    *result = -2147019873;
  }
  else if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x399,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)result,
      v4);
  }
  if ( v6 )
    return (_DWORD *)winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v6);
  return result;
}
