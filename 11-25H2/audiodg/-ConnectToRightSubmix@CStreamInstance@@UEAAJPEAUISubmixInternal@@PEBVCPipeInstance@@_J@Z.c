/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400404C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x1400582F8 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::ConnectToRightSubmix(
        CStreamInstance *this,
        struct ISubmixInternal *a2,
        const struct CPipeInstance *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v6 = *(_QWORD *)a2;
  v17 = 0LL;
  (*(void (__fastcall **)(struct ISubmixInternal *, __int64 *))(v6 + 112))(a2, &v17);
  if ( v17 )
  {
    v7 = (*(__int64 (__fastcall **)(CStreamInstance *))(*(_QWORD *)this + 96LL))(this);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v7);
      v15 = v17;
      if ( v17 )
      {
        (*(void (__fastcall **)(CStreamInstance *, __int64))(*(_QWORD *)this + 104LL))(this, v17);
        v15 = v17;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      return v8;
    }
  }
  if ( !a3 )
  {
    v9 = *((_QWORD *)this + 10);
    v10 = *(_QWORD *)a2;
    if ( (unsigned int)(*((_DWORD *)this + 28) - 2) <= 1 )
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v10 + 32))(a2, v9);
    else
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v10 + 24))(a2, v9);
    v8 = v11;
    if ( v11 >= 0 )
      goto LABEL_7;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v11);
    if ( v17 )
      (*(void (__fastcall **)(CStreamInstance *))(*(_QWORD *)this + 104LL))(this);
    goto LABEL_26;
  }
  v13 = CPipeInstance::ConnectToRightPipe(*((CPipeInstance **)this + 10), a3);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v13);
    if ( v17 )
      (*(void (__fastcall **)(CStreamInstance *))(*(_QWORD *)this + 104LL))(this);
    goto LABEL_26;
  }
  v14 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *((_QWORD *)this + 10));
  v8 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v14);
    if ( v17 )
      (*(void (__fastcall **)(CStreamInstance *))(*(_QWORD *)this + 104LL))(this);
LABEL_26:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
    return v8;
  }
LABEL_7:
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return 0LL;
}
