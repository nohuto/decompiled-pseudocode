/*
 * XREFs of ?SetTransparent@AccessibilityExperienceManager@@UEAAJH@Z @ 0x1804900B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000A4C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___ @ 0x18048D52C (CreationThreadDispatcher--RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048FB74 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA_NXZ @ 0x180491378 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::SetTransparent(AccessibilityExperienceManager *this, int a2)
{
  int v4; // esi
  __int64 v5; // rcx
  bool v6; // bl
  bool v7; // r14
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  char IsEnabled; // al
  __int64 *v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // eax
  LONG WindowLongW; // r8d
  unsigned int v19; // eax
  LONG v20; // r8d
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  const char *v23; // [rsp+58h] [rbp-18h] BYREF
  int v24[4]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  HWND hWnd; // [rsp+A0h] [rbp+30h] BYREF
  bool v27; // [rsp+B0h] [rbp+40h]
  int v28; // [rsp+B8h] [rbp+48h]

  v4 = -2147467259;
  v22 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl) )
  {
    v6 = *((_QWORD *)this + 29) != 0LL;
    v7 = *((_QWORD *)this + 33) != 0LL;
    v8 = GazeUITraceLogging::Provider(v5);
    if ( *(_DWORD *)v8 > 5u )
    {
      v28 = a2;
      LOBYTE(hWnd) = v7;
      v27 = v6;
      v23 = "AccessibilityExperienceManager::SetTransparent - Triggered";
      *(_QWORD *)v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (__int64)&unk_180805106,
        v9,
        v10,
        (__int64)v24,
        &v23);
    }
  }
  if ( !*((_QWORD *)this + 29) )
    goto LABEL_17;
  hWnd = 0LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl);
  v12 = (__int64 *)*((_QWORD *)this + 29);
  v13 = *v12;
  if ( !IsEnabled )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 32))(v12, &v22);
    if ( v17 < 0
      || (v17 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v22 + 24LL))(v22, &hWnd), v4 = v17, v17 < 0) )
    {
      v15 = v17;
      goto LABEL_18;
    }
LABEL_14:
    WindowLongW = GetWindowLongW(hWnd, -20);
    v19 = WindowLongW & 0xFFF7FFDF;
    v20 = WindowLongW | 0x80020;
    if ( !a2 )
      v20 = v19;
    SetWindowLongW(hWnd, -20, v20);
    *(_QWORD *)v24 = (char *)this - 144;
    v24[2] = a2;
    CreationThreadDispatcher::RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___(*((_QWORD *)this + 18), v24);
LABEL_17:
    v15 = v4;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 32))(v12, &v22);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v22 + 24LL))(v22, &hWnd);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 471LL;
      goto LABEL_10;
    }
    goto LABEL_14;
  }
  v16 = 470LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  return v15;
}
