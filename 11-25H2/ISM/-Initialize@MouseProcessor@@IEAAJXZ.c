/*
 * XREFs of ?Initialize@MouseProcessor@@IEAAJXZ @ 0x180191FC8
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180191CC0 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18008ECDC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::Initialize(MouseProcessor *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, char *); // rbx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, char *); // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 (__fastcall *)(MouseProcessor *), MouseProcessor *, char *); // rsi
  HKEY v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6));
  v3 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
  v4 = v3(v2, (char *)this + 112);
  if ( v4 < 0 )
  {
    v5 = 117LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *((_QWORD *)this + 14);
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v7 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  v4 = v8(v7, *((_QWORD *)this + 7), 1LL, (char *)this + 120);
  if ( v4 < 0 )
  {
    v5 = 118LL;
    goto LABEL_3;
  }
  if ( IsEdition(253345LL) )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    v9 = CoreUICreate(&v15);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 123LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mouse\\lib\\mouseprocessor.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      return (unsigned int)v4;
    }
    v11 = v15;
    v12 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(MouseProcessor *), MouseProcessor *, char *))(*(_QWORD *)v15 + 144LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 213);
    v9 = v12(v11, lambda_bee3b73c73505971acff5e8346377b68_::_lambda_invoker_cdecl_, this, (char *)this + 1704);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 132LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
    RegistryWatcher::Create(
      v13,
      L"SYSTEM\\MOUSE",
      (HKEY)this,
      (void (*)(void *, HKEY))lambda_f2fdab03bc5b02d353eab8edcf2c7195_::_lambda_invoker_cdecl_,
      (struct RegistryWatcher **)this + 16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  return 0LL;
}
