/*
 * XREFs of ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D2294
 * Callers:
 *     ??$make_unique@VSpeechRuntimeListener@@AEAPEAVMPCRawInputProvider@@AEAK$0A@@std@@YA?AV?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@0@AEAPEAVMPCRawInputProvider@@AEAK@Z @ 0x1800D045C (--$make_unique@VSpeechRuntimeListener@@AEAPEAVMPCRawInputProvider@@AEAK$0A@@std@@YA-AV-$unique_p.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18000F8A0 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18007F48C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800D2494 (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpeechRuntimeListener::InitializeCoreMessaging(SpeechRuntimeListener *this)
{
  ISMTracing *v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r9
  int Descriptor; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, const wchar_t *, char *); // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, char *); // rbx
  int v13; // eax
  int v14; // eax
  ISMTracing *v15; // rcx
  int v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-18h] BYREF
  char v21; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::LogSpeechRuntimeListenerFunct_(v2, L"InitializingCoreMessaging");
  }
  v20 = 0LL;
  v21 = 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
  v3 = CoreUICreate(this);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v3,
      v17);
  Descriptor = InputSecurityDescriptor::QueryDescriptor(
                 (__int64)&v20,
                 v4,
                 (__int64)L"System\\SpeechRuntimeListenerPort",
                 v5,
                 v17);
  if ( Descriptor < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)Descriptor,
      v18);
  v7 = *(_QWORD *)this;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(**(_QWORD **)this + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  v9 = v8(v7, v20, L"System\\SpeechRuntimeListenerPort", (char *)this + 16);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x52,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v9,
      v18);
  v19 = (_DWORD)this + 24;
  v10 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), SpeechRuntimeListener *, _QWORD))(**(_QWORD **)this + 104LL))(
          *(_QWORD *)this,
          SpeechRuntimeListener::OnMessageCallbackStatic,
          this,
          *((_QWORD *)this + 2));
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v10,
      v19);
  v11 = *(_QWORD *)this;
  v12 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)this + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
  v13 = v12(v11, (char *)this + 8);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v13,
      v19);
  v14 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64))(**((_QWORD **)this + 1) + 40LL))(
          *((_QWORD *)this + 1),
          L"System\\SpeechRuntimeListener",
          *((_QWORD *)this + 3),
          1LL);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v14,
      v19);
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::LogSpeechRuntimeListenerFunct_(v15, L"InitializedCoreMessaging");
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v20);
  return 0LL;
}
