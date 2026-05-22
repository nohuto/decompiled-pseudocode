/*
 * XREFs of ?UpdateFocusedProcessId@ControllerProcessor@@AEAAXPEAUIInputTarget@@@Z @ 0x18017CD48
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x18008A3E0 (-OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ControllerProcessor::UpdateFocusedProcessId(
        ControllerProcessor *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  int v3; // ebx
  __int64 (__fastcall **v4)(struct IInputTarget *, GUID *, __int64 *); // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v10 = 0;
  if ( a2 )
  {
    v4 = *a2;
    v11 = 0LL;
    v5 = (*v4)((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v11);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 32LL))(v11, &v10);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xCE4,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v8);
      v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 80LL))(v11, (char *)this + 7808);
      v6 = retaddr;
      if ( v5 >= 0 )
        goto LABEL_9;
      v7 = 3301LL;
    }
    else
    {
      v7 = 3298LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v6,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v11);
    v3 = v10;
  }
  *((_DWORD *)this + 1951) = v3;
}
