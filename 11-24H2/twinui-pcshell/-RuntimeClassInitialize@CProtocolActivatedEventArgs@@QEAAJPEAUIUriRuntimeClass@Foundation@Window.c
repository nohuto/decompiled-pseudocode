/*
 * XREFs of ?RuntimeClassInitialize@CProtocolActivatedEventArgs@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x1806787A8
 * Callers:
 *     ??$MakeAndInitialize@VCProtocolActivatedEventArgs@@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIUriRuntimeClass@Foundation@5@@Details@WRL@Microsoft@@YAJPEAPEAUIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@$$QEAPEAUIUriRuntimeClass@Foundation@6@@Z @ 0x18032A1D0 (--$MakeAndInitialize@VCProtocolActivatedEventArgs@@UIProtocolActivatedEventArgs@Activation@Appli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x1801B79E4 (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProtocolActivatedEventArgs::RuntimeClassInitialize(
        CProtocolActivatedEventArgs *this,
        struct Windows::Foundation::IUriRuntimeClass *a2)
{
  __int64 *v4; // rsi
  int AgileReference; // ebx
  __int64 v6; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v4 = (__int64 *)((char *)this + 328);
  if ( *((_QWORD *)this + 41) )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2);
  AgileReference = Windows::Internal::String::Initialize((HSTRING *)this + 42, &pvData, 0);
  if ( AgileReference < 0 )
  {
    v6 = 39LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\shell\\lib\\activationeventsshell\\protocolactivated.cpp",
      (const char *)(unsigned int)AgileReference);
    return (unsigned int)AgileReference;
  }
  v12 = v4;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v12);
  v9 = v8;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
    AgileReference = RoGetAgileReference(0LL, &GUID_9e365e57_48b2_4160_956f_c7385120bbfc, a2, v9);
    if ( AgileReference < 0 )
    {
      v6 = 40LL;
      goto LABEL_5;
    }
  }
  else
  {
    v13 = 0LL;
    v12 = (__int64 *)*v8;
    *v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  v10 = *((_QWORD *)this + 43);
  *((_QWORD *)this + 43) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  GetProcessReference((char *)this + 344);
  return 0LL;
}
