/*
 * XREFs of _lambda_5d6a9452ce6327e643e9b58eeabddb51_::operator() @ 0x1802E39B8
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_5d6a9452ce6327e643e9b58eeabddb51___::Invoke @ 0x1802E8C80 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_5d6a9452ce6327e643e9b58eeabddb5.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_5d6a9452ce6327e643e9b58eeabddb51_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v9 = 0LL;
  v4 = (*v3)(a2, &GUID_288fc02d_5a3a_4a73_8ee6_52de772339ac, &v9);
  v5 = v4;
  if ( v4 == -2147467262 )
    goto LABEL_7;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
           v9,
           **(_QWORD **)(a1 + 8),
           *(_QWORD *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 7155LL;
      goto LABEL_6;
    }
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v6 = 7154LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_8:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  return v5;
}
