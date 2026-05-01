/*
 * XREFs of _lambda_1e074cd5997424a950e43daab6bcbaaf_::operator() @ 0x18023159C
 * Callers:
 *     ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x180077F40 (-RefreshMonitorMappings@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_1e074cd5997424a950e43daab6bcbaaf_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  HWND v5; // rax
  HMONITOR v6; // rdi
  __int64 v7; // rsi
  int (__fastcall *v8)(__int64, HMONITOR, GUID *, GUID *, __int64 *); // rbx
  __int64 v9; // rcx
  _DWORD v11[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF
  HWND hwnd; // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0LL;
  if ( ((*(__int64 (__fastcall **)(__int64 *))(*a2 + 280))(a2) & 1) != 0 )
  {
    hwnd = 0LL;
    v4 = *a2;
    v14 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 496))(a2, &v14) >= 0 )
      (*(void (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 24LL))(v14, &hwnd);
    v5 = hwnd;
    if ( !hwnd )
    {
      v5 = (HWND)(*(__int64 (__fastcall **)(__int64 *))(*a2 + 384))(a2);
      hwnd = v5;
    }
    v6 = MonitorFromWindow(v5, 2u);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(int (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, __int64 *))(*(_QWORD *)v7 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    if ( v8(v7, v6, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v12) >= 0 )
    {
      v11[0] = *(_DWORD *)a1;
      v11[1] = 0;
      (*(void (__fastcall **)(__int64 *, __int64, _DWORD *, _QWORD))(*a2 + 456))(a2, v12, v11, 0LL);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 1;
}
