/*
 * XREFs of ?InitializePrivilegedOperations@UwpWindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800BEF30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802BDEF8 (-reset@-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::InitializePrivilegedOperations(
        UwpWindowEventDispatcher *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  HRESULT (__stdcall *v7)(IUnknown *, const IID *const, void **); // rdi
  char *v8; // rbx
  __int64 v9; // rcx
  GUID *v10; // rdx
  __int64 v12; // rax
  HRESULT (__stdcall *v13)(IUnknown *, const IID *const, void **); // rdi
  char *v14; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  char *v16; // rbx
  __int64 v17; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( !v4 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v16 = (char *)this + 96;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 12);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
      a3,
      &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
      v16);
    return 0LL;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
  if ( !v5 )
  {
    v7 = a3->lpVtbl->QueryInterface;
    v8 = (char *)this + 104;
    v17 = *((_QWORD *)this + 13);
    *(_QWORD *)v8 = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v10 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
    goto LABEL_13;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data4;
  if ( !v6 )
  {
    v7 = a3->lpVtbl->QueryInterface;
    v8 = (char *)this + 112;
    v9 = *((_QWORD *)this + 14);
    *(_QWORD *)v8 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
LABEL_13:
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))v7)(a3, v10, v8);
    return 0LL;
  }
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
  if ( !v12 )
  {
    v13 = a3->lpVtbl->QueryInterface;
    v14 = (char *)this + 120;
    wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((char *)this + 120);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))v13)(a3, &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6, v14);
  }
  return 0LL;
}
