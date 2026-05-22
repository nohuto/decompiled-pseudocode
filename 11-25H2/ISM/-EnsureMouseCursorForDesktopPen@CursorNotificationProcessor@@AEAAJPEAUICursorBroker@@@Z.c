/*
 * XREFs of ?EnsureMouseCursorForDesktopPen@CursorNotificationProcessor@@AEAAJPEAUICursorBroker@@@Z @ 0x1800F1BB4
 * Callers:
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180087AE4 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CursorNotificationProcessor::EnsureMouseCursorForDesktopPen(
        CursorNotificationProcessor *this,
        struct ICursorBroker *a2)
{
  __int64 *v2; // rdi
  int (__fastcall *v4)(struct ICursorBroker *, _QWORD, __int64, __int64, __int64 *); // rbx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 (__fastcall *v7)(struct ICursorBroker *, _DWORD *, __int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  _DWORD v11[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return 0LL;
  v4 = *(int (__fastcall **)(struct ICursorBroker *, _QWORD, __int64, __int64, __int64 *))(*(_QWORD *)a2 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  LOBYTE(v5) = 1;
  if ( v4(a2, 0LL, 1LL, v5, v2) >= 0 )
    return 0LL;
  v6 = *(_QWORD *)a2;
  v11[2] = 0;
  v11[0] = 0;
  v11[1] = 2;
  v7 = *(__int64 (__fastcall **)(struct ICursorBroker *, _DWORD *, __int64, __int64 *))(v6 + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  v8 = v7(a2, v11, 1LL, v2);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x178,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotificat"
             "ionprocessor.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
