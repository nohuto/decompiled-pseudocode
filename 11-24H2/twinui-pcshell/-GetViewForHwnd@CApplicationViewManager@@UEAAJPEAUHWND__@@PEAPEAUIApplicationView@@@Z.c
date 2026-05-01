/*
 * XREFs of ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002CFA0
 * Callers:
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18013C850 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     _lambda_4963465e0f00482d68929271c70599ba_::operator() @ 0x18030D0C0 (_lambda_4963465e0f00482d68929271c70599ba_--operator().c)
 *     ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x18030D730 (-GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18030E170 (-WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18030E240 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18030FC40 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CApplicationViewManager::GetViewForHwnd(RTL_SRWLOCK *this, HWND a2, struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rdi
  struct IApplicationView *v7; // r13
  struct IApplicationView **Ptr; // rsi
  struct IApplicationView **v9; // r12
  struct IApplicationView *v10; // rbx
  char v11; // bl
  __int64 v12; // rcx
  __int64 v13; // rcx
  int (__fastcall *v14)(struct IApplicationView *, GUID *, __int64 *); // r14
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct IApplicationView *v18; // rbx
  unsigned int v19; // ebx
  __int64 v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v23[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v25; // [rsp+90h] [rbp+40h] BYREF
  struct IApplicationView **v26; // [rsp+A0h] [rbp+50h]
  __int64 v27; // [rsp+A8h] [rbp+58h] BYREF

  v26 = a3;
  v6 = this + 49;
  v23[1] = this + 49;
  AcquireSRWLockShared(this + 49);
  *a3 = 0LL;
  v7 = 0LL;
  v23[2] = 0LL;
  Ptr = (struct IApplicationView **)this[50].Ptr;
  v9 = &Ptr[(__int64)this[51].Ptr];
  while ( Ptr != v9 )
  {
    v10 = *Ptr;
    v25 = 0;
    v22 = 0LL;
    v27 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v10)(
           v10,
           &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
           &v22) < 0 )
    {
      v14 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v10;
      v15 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( v14(v10, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v27) >= 0 )
      {
        v21 = 0LL;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 24LL))(v27, &v21);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
            (const char *)(unsigned int)v16,
            v21);
        else
          (*(void (__fastcall **)(__int64, HWND, int *))(*(_QWORD *)v21 + 96LL))(v21, a2, &v25);
        v17 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
LABEL_21:
      if ( !v25 )
        goto LABEL_7;
      goto LABEL_31;
    }
    v23[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 24LL))(v22, v23) < 0 )
      goto LABEL_21;
    if ( a2 != (HWND)v23[0] )
    {
      v25 = 0;
LABEL_7:
      v11 = 0;
      goto LABEL_8;
    }
    v25 = 1;
LABEL_31:
    v11 = 1;
LABEL_8:
    v12 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v11 )
    {
      v18 = *Ptr;
      if ( *Ptr )
      {
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v18 + 8LL))(*Ptr);
        v7 = v18;
      }
      break;
    }
    ++Ptr;
  }
  *v26 = v7;
  v19 = -2147319765;
  if ( v7 )
    v19 = 0;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v19;
}
