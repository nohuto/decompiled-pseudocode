/*
 * XREFs of _lambda_5112c4c8994b8afbe0e7f1a794b38521_::operator() @ 0x1801DDCC4
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_5112c4c8994b8afbe0e7f1a794b38521__&_::Run @ 0x1801DFC10 (wil--details--functor_wrapper_void__lambda_5112c4c8994b8afbe0e7f1a794b38521__-_--Run.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator2@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x180422CA0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator2@UShellViewCoordinator@She.c)
 */

char __fastcall lambda_5112c4c8994b8afbe0e7f1a794b38521_::operator()(_BYTE **a1)
{
  int v2; // edi
  void (__fastcall ****v3)(_QWORD, __int64 *, __int64 *); // rcx
  char result; // al
  const unsigned __int16 *StringRawBuffer; // rax
  __int64 v6; // rbx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(*a1 + 696);
  v8 = 0LL;
  result = winrt::Windows::Foundation::operator==(v3, &v8);
  if ( !result )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)*a1 + 94), 0LL);
    v6 = (__int64)*a1;
    winrt::param::hstring::hstring((winrt::param::hstring *)v7, StringRawBuffer);
    LOBYTE(v2) = *a1[1] == 0;
    LODWORD(v8) = v2;
    return winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator2<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibility(
             v6 + 696,
             &v8,
             v7);
  }
  return result;
}
