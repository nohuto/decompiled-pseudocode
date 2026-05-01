/*
 * XREFs of ?RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z @ 0x1804D614C
 * Callers:
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x1804D5E74 (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?Shutdown@DragInputHandler@@UEAAJXZ @ 0x1804D62E0 (-Shutdown@DragInputHandler@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragInputHandler::RuntimeClassInitialize(HWND *this, struct IExternalDragHost *a2)
{
  const char *v4; // r9
  HWND v5; // rcx
  WNDCLASSEXW v7; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  HWND v9; // [rsp+C0h] [rbp+8h] BYREF

  v7.cbSize = 80;
  memset_0(&v7.style, 0, 0x4CuLL);
  v7.lpfnWndProc = (WNDPROC)CWRLImpWndProc<DragInputHandler>::s_WndProcBase;
  v7.hInstance = &_ImageBase;
  v7.lpszClassName = L"MTVDragInputHandler";
  v7.cbWndExtra = 8;
  RegisterClassExW(&v7);
  CreateWindowExW(0x8200000u, L"MTVDragInputHandler", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
  v5 = this[3];
  if ( !v5 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x47,
             (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\draginputhandler.cpp",
             v4);
  if ( SetForegroundWindow(v5) )
  {
    SetCapture(this[3]);
    if ( this[5] != (HWND)a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IExternalDragHost *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = this[5];
      this[5] = (HWND)a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
    }
    return 0LL;
  }
  else
  {
    DragInputHandler::Shutdown((DragInputHandler *)this);
    return 2147500037LL;
  }
}
