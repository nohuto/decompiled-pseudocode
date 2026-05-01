/*
 * XREFs of ?InsertAfterWindow@CApplicationViewBase@@UEAAJPEAUHWND__@@@Z @ 0x1802C0070
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@XZ @ 0x1802C011C (-GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivileg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::InsertAfterWindow(CApplicationViewBase *this, HWND a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  _QWORD *PrivilegedArrangementOperations; // rax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(CApplicationViewBase *, __int64 *))(*(_QWORD *)this + 504LL))(this, &v9);
  if ( v3 < 0 )
  {
    v4 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  PrivilegedArrangementOperations = (_QWORD *)ApplicationViewManagement::CGlobals::GetPrivilegedArrangementOperations(&v10);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, HWND))(*(_QWORD *)*PrivilegedArrangementOperations + 40LL))(
         *PrivilegedArrangementOperations,
         v9,
         a2);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v3 < 0 )
  {
    v4 = 63LL;
    goto LABEL_3;
  }
  return 0LL;
}
