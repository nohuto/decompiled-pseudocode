/*
 * XREFs of CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___::Invoke @ 0x1804AD110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___::Invoke(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD **))(**(_QWORD **)(a1 + 56) + 24LL))(
         *(_QWORD *)(a1 + 56),
         &GUID_09bd08f6_5805_4a9c_b795_a08c46164aea,
         &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v9;
    v5 = *v9;
    v6 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = 0LL;
    (*(void (__fastcall **)(_QWORD *, __int64))(v5 + 24))(v4, v6);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)v2);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v9);
  return v3;
}
