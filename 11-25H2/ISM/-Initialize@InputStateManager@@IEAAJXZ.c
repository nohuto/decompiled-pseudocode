/*
 * XREFs of ?Initialize@InputStateManager@@IEAAJXZ @ 0x180051CD8
 * Callers:
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180051BE0 (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000B6AC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18000F140 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18008ECDC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?Initialize@TestCommandHost@@SAXXZ @ 0x18009BFD0 (-Initialize@TestCommandHost@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputStateManager::Initialize(InputStateManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  int Descriptor; // eax
  wil::details **v6; // r15
  int v7; // eax
  const char *v8; // r9
  wil::details *v9; // rdi
  __int64 (__fastcall *v10)(wil::details *, HLOCAL, char *); // rbx
  int v11; // eax
  unsigned __int64 v12; // r8
  wil::details *v13; // rsi
  __int64 (__fastcall *v14)(wil::details *, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD); // rdi
  unsigned __int64 v15; // r8
  int v16; // eax
  wil::details *v17; // rdi
  __int64 (__fastcall *v18)(wil::details *, __int64 *); // rbx
  int v19; // eax
  int v20; // eax
  HKEY v21; // rcx
  DWORD TickCount; // eax
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-20h]
  int v26; // [rsp+20h] [rbp-20h]
  int v27; // [rsp+20h] [rbp-20h]
  HLOCAL hMem; // [rsp+30h] [rbp-10h] BYREF
  char v29; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v31; // [rsp+78h] [rbp+38h] BYREF

  hMem = 0LL;
  v29 = 0;
  v31 = 0LL;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&hMem, a2, (__int64)c_wszMessagePortNames, a4, v25);
  if ( Descriptor < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)Descriptor,
      v26);
  v6 = (wil::details **)((char *)this + 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v7 = CoreUICreate((char *)this + 48);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v7,
      v26);
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v8);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    v9 = *v6;
    v10 = *(__int64 (__fastcall **)(wil::details *, HLOCAL, char *))(*(_QWORD *)*v6 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
    v11 = v10(v9, hMem, (char *)this + 56);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x94,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v11,
        v26);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)this + 8,
      *v6,
      v12);
    v13 = *v6;
    v14 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD))(*(_QWORD *)*v6 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)this + 8,
      *((wil::details **)this + 8),
      v15);
    v27 = (_DWORD)this + 72;
    v16 = v14(v13, InputStateManager::OnDeviceCommandStatic, this, *((_QWORD *)this + 7));
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v16,
        v27);
    v17 = *v6;
    v18 = *(__int64 (__fastcall **)(wil::details *, __int64 *))(*(_QWORD *)*v6 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
    v19 = v18(v17, &v31);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v19,
        v27);
    v20 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v31 + 40LL))(
            v31,
            L"System\\Input\\DeviceCommandEndpoint",
            *((_QWORD *)this + 9),
            1LL);
    if ( v20 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v20,
        v27);
    TestCommandHost::Initialize();
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  if ( RegistryWatcher::Create(
         v21,
         L"System\\Input",
         this,
         (void (*)(void *, HKEY))InputStateManager::OnInputRegistryKeyChangeStatic,
         (struct RegistryWatcher **)this + 23) < 0 )
  {
    *((_DWORD *)this + 48) = 6;
    *((_DWORD *)this + 49) = -1;
  }
  TickCount = GetTickCount();
  NtMITUpdateInputGlobals(TickCount, 0LL, 0LL, 0xFFFFFFFFLL);
  v23 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( hMem )
  {
    if ( v29 )
      FreeTransientObjectSecurityDescriptor(hMem);
    else
      LocalFree(hMem);
  }
  return 0LL;
}
