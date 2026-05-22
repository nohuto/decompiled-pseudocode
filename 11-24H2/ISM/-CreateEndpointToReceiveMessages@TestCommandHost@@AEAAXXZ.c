/*
 * XREFs of ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180092D70
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x18003A76C (--0TestCommandHost@@AEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18000F8A0 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1B84 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TestCommandHost::CreateEndpointToReceiveMessages(
        TestCommandHost *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int Descriptor; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, HLOCAL, const wchar_t *, char *); // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-20h]
  int v16; // [rsp+20h] [rbp-20h]
  int v17; // [rsp+20h] [rbp-20h]
  HLOCAL hMem; // [rsp+30h] [rbp-10h] BYREF
  char v19; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v21; // [rsp+68h] [rbp+28h] BYREF

  hMem = 0LL;
  v19 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&hMem, a2, (__int64)c_wszMessagePortNames, a4, v15);
  if ( Descriptor < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)Descriptor,
      v16);
  v6 = *(_QWORD *)this;
  v7 = *(__int64 (__fastcall **)(__int64, HLOCAL, const wchar_t *, char *))(**(_QWORD **)this + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  v8 = v7(v6, hMem, L"System\\Input\\TestCommandsPort", (char *)this + 16);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v8,
      v16);
  v17 = (_DWORD)this + 24;
  v9 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), TestCommandHost *, _QWORD))(**(_QWORD **)this + 104LL))(
         *(_QWORD *)this,
         TestCommandHost::OnCoreMessageStatic,
         this,
         *((_QWORD *)this + 2));
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x73,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v9,
      v17);
  v21 = 0LL;
  v10 = *(_QWORD *)this;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(**(_QWORD **)this + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  v12 = v11(v10, &v21);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v12,
      v17);
  v13 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v21 + 40LL))(
          v21,
          L"System\\Input\\TestCommandsEndpoint",
          *((_QWORD *)this + 3),
          1LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v13,
      v17);
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( hMem )
  {
    if ( v19 )
      FreeTransientObjectSecurityDescriptor(hMem);
    else
      LocalFree(hMem);
  }
}
