/*
 * XREFs of _lambda_1e074cd5997424a950e43daab6bcbaaf_::operator() @ 0x180397154
 * Callers:
 *     ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x18039E830 (-RefreshMonitorMappings@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall lambda_1e074cd5997424a950e43daab6bcbaaf_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  HWND v5; // rax
  HMONITOR v6; // rdi
  __int64 v7; // rsi
  int (__fastcall *v8)(__int64, HMONITOR, GUID *, GUID *, __int64 *); // rbx
  _DWORD v10[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF
  HWND hwnd; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  v11 = 0LL;
  if ( ((*(__int64 (__fastcall **)(__int64 *))(*a2 + 280))(a2) & 1) != 0 )
  {
    hwnd = 0LL;
    v4 = *a2;
    v13 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 496))(a2, &v13) >= 0 )
      (*(void (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 24LL))(v13, &hwnd);
    v5 = hwnd;
    if ( !hwnd )
    {
      v5 = (HWND)(*(__int64 (__fastcall **)(__int64 *))(*a2 + 384))(a2);
      hwnd = v5;
    }
    v6 = MonitorFromWindow(v5, 2u);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(int (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, __int64 *))(*(_QWORD *)v7 + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    if ( v8(v7, v6, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v11) >= 0 )
    {
      v10[0] = *(_DWORD *)a1;
      v10[1] = 0;
      (*(void (__fastcall **)(__int64 *, __int64, _DWORD *, _QWORD))(*a2 + 456))(a2, v11, v10, 0LL);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return 1;
}
