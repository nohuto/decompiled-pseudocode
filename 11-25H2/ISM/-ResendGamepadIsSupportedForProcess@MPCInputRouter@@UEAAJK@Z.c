/*
 * XREFs of ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x1800FCB50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$As@UIDWMSupportedInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDWMSupportedInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003E770 (--$As@UIDWMSupportedInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x18006A7D0 (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputRouter::ResendGamepadIsSupportedForProcess(MPCInputRouter *this, int a2)
{
  char *v2; // rsi
  struct IInputTarget *InputHostTargetForProcessId; // rbx
  struct IInputTarget *v4; // rdi
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInputTarget *v9; // [rsp+30h] [rbp+8h] BYREF
  struct IInputTarget *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = (char *)this - 632;
  InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(
                                  (MPCInputRouter *)((char *)this - 632),
                                  a2);
  v10 = InputHostTargetForProcessId;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v10);
  v4 = 0LL;
  v9 = 0LL;
  if ( InputHostTargetForProcessId )
  {
    v5 = Microsoft::WRL::ComPtr<IInputTarget>::As<IDWMSupportedInputTarget>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v10,
           (__int64 *)&v9);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x963,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v5,
        v7);
    v4 = v9;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  v10 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v4 + 8LL))(v4);
    (*(void (__fastcall **)(char *, struct IInputTarget *))(*(_QWORD *)v2 + 88LL))(v2, v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  return 0LL;
}
