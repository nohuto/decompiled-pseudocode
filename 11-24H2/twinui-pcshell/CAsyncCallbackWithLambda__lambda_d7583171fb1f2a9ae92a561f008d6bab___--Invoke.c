/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::Invoke @ 0x180513090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$try_query@UIUnknown@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1805114C4 (--$try_query@UIUnknown@@@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_d7583171fb1f2a9ae92a561f008d6bab___::Invoke(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // dl
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_query<IUnknown>(
    (struct IWeakReference **)(a1 + 56),
    &v7);
  if ( v7 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v3 = *(_BYTE *)(a1 + 64);
    if ( *(_BYTE *)(v2 + 552) != v3 )
    {
      *(_BYTE *)(v2 + 552) = v3;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v2 + 360) + 56LL))(
             *(_QWORD *)(v2 + 360),
             16LL,
             v3 != 0 ? 0x10 : 0);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4C0,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v4);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v7);
  return 0LL;
}
