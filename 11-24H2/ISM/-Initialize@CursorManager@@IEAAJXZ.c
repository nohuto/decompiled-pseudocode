/*
 * XREFs of ?Initialize@CursorManager@@IEAAJXZ @ 0x18015F458
 * Callers:
 *     ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x18015F370 (-Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICurso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18000F8A0 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18007F48C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D4318 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVCursorManager@@@Z @ 0x18015F064 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorManager::Initialize(CursorManager *this)
{
  _QWORD *v2; // rsi
  int Descriptor; // eax
  __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, const wchar_t *, __int64 *); // rbx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  int v19; // [rsp+80h] [rbp+38h] BYREF
  __int64 v20; // [rsp+88h] [rbp+40h] BYREF
  __int64 v21; // [rsp+90h] [rbp+48h] BYREF
  CursorManager *v22; // [rsp+98h] [rbp+50h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v2 = (_QWORD *)((char *)this + 32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Descriptor = CoreUICreate(v2);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 66LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)Descriptor);
    InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    return v6;
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor(
                 (__int64)&v16,
                 v4,
                 (__int64)L"System\\Input\\CursorManagerPort",
                 v5,
                 v15);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 70LL;
    goto LABEL_13;
  }
  v8 = *v2;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64 *))(*(_QWORD *)*v2 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  Descriptor = v9(v8, v16, L"System\\Input\\CursorManagerPort", &v21);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 75LL;
    goto LABEL_13;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, void *, int), CursorManager *, __int64))(*(_QWORD *)*v2 + 104LL))(
                 *v2,
                 CursorManager::OnCoreMessageStatic,
                 this,
                 v21);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 81LL;
    goto LABEL_13;
  }
  v10 = *v2;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  Descriptor = v11(v10, &v20);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 83LL;
    goto LABEL_13;
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v20 + 40LL))(
                 v20,
                 L"System\\Input\\CursorManagerEndpoint",
                 *((_QWORD *)this + 8),
                 1LL);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v7 = 88LL;
    goto LABEL_13;
  }
  v22 = this;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v13 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const * const &,CursorManager *>(
          (MessageProxyReconnectAdapter **)this + 6,
          &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
          (const unsigned __int16 **)&off_1801F3F18,
          &v22);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x62,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)v13,
      (_DWORD)this + 64);
  v19 = 1;
  v14 = RtlPublishWnfStateData(WNF_ISM_CURSOR_MANAGER_READY, 0LL, &v19, 4LL);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x66,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)(unsigned int)v14);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  return 0LL;
}
