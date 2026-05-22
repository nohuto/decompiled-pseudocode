/*
 * XREFs of ?OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x18002D2C0
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x18008A3E0 (-OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x18002CD70 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NonPointerProcessor::OnTargetWithFocusChanged(
        NonPointerProcessor *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int64 v4; // r15
  int v5; // ebx
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, _QWORD); // rdi
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(**((_QWORD **)this + 3) + 72LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  if ( v4 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
    v5 = InputContext::Create((struct InputContext **)this + 6);
    if ( v5 < 0 )
    {
      v8 = 145LL;
    }
    else
    {
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 64LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
      v9 = (_DWORD)this + 40;
      v5 = v6(v4, *((_QWORD *)this + 4), *((_QWORD *)this + 6), 0LL);
      if ( v5 >= 0 )
      {
        *((_BYTE *)this + 56) = 1;
        return 0LL;
      }
      v8 = 150LL;
    }
  }
  else
  {
    v5 = -2147418113;
    v8 = 142LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
    (const char *)(unsigned int)v5,
    v9);
  return (unsigned int)v5;
}
