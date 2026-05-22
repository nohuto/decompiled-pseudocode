/*
 * XREFs of ?MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801C8600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024DC0 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18004E6D8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18004E71C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursor::MITSetMPCCursorPosition(DWMCursor *this, int a2, int a3)
{
  RTL_SRWLOCK *Instance; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  RTL_SRWLOCK *v13; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  int v19[2]; // [rsp+38h] [rbp-38h] BYREF
  int v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+44h] [rbp-2Ch] BYREF
  int v22; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v23[6]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  if ( MPC3DStateHelper::GetPostProcessor(Instance) )
  {
    v20 = 0;
    v21 = 0;
    v22 = 0;
    *(_QWORD *)v19 = 0LL;
    v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 448LL);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
    v9 = v8(v7, 0LL, 0LL, 0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v9,
        (int)v19);
    v18 = 0LL;
    if ( *(_QWORD *)v19
      && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v19,
                &v18) >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 32LL))(v18, &v20);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x141,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v10,
          (int)v19);
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 40LL))(v18, &v21);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x142,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v11,
          (int)v19);
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v22);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x143,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v12,
          (int)v19);
    }
    v23[0] = v20;
    v23[1] = v21;
    v23[2] = v22;
    v23[3] = a2;
    v23[4] = a3;
    v13 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v13);
    v15 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _DWORD *))(*(_QWORD *)PostProcessor + 56LL))(
            PostProcessor,
            v23);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
      return v16;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
  }
  return 0LL;
}
