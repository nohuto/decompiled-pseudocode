/*
 * XREFs of ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800610F0
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180089A00 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x18002C7B0 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NonPointerProcessor::OnInputReport(NonPointerProcessor *this, struct InputInfo *a2)
{
  _QWORD *v4; // rsi
  int v5; // ebx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_BYTE *)this + 64) )
  {
    v4 = (_QWORD *)((char *)this + 48);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    if ( !v7 )
    {
      v5 = -2147418113;
      v8 = 112LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
    v5 = InputContext::Create((struct InputContext **)this + 7);
    if ( v5 < 0 )
    {
      v8 = 114LL;
      goto LABEL_9;
    }
    v4 = (_QWORD *)((char *)this + 48);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
    v10 = (_DWORD)this + 48;
    v5 = v9(v7, *((_QWORD *)this + 5), *((_QWORD *)this + 7), 0LL);
    if ( v5 < 0 )
    {
      v8 = 119LL;
      goto LABEL_9;
    }
    *((_BYTE *)this + 64) = 1;
  }
  if ( !*v4 )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(*(_QWORD *)*v4 + 24LL))(*v4, a2);
  if ( v5 >= 0 )
    return 0LL;
  v8 = 126LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
    (const char *)(unsigned int)v5,
    v10);
  return (unsigned int)v5;
}
