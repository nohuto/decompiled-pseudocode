/*
 * XREFs of ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18005788C
 * Callers:
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800597E8 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x180056964 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180058758 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UWPGameBar@@@details@wil@@QEAAX_NW4Report.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802B1588 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$swprintf_s@$0CAA@@@YAHAEAY0CAA@GPEBGZZ @ 0x180314D34 (--$swprintf_s@$0CAA@@@YAHAEAY0CAA@GPEBGZZ.c)
 *     ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180317518 (-LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V-$ComP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall BroadcastDVRComponent::LaunchGameOverlayWithStartupTipsFlag(
        BroadcastDVRComponent *this,
        HWND a2,
        struct BroadcastDVRActiveAppInfo *a3)
{
  HWND v4; // r14
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, HSTRING *); // rdi
  int v14; // eax
  PCWSTR v15; // rax
  const wchar_t *v16; // r8
  int v17; // eax
  const WCHAR *v18; // rax
  const WCHAR *StringRawBuffer; // rax
  __int64 v20; // rcx
  UINT32 v22; // [rsp+30h] [rbp-D0h] BYREF
  DWORD dwProcessId; // [rsp+34h] [rbp-CCh] BYREF
  HSTRING v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  UINT32 length; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-98h] BYREF
  HSTRING v31; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER v32; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 v33[512]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D8h] [rbp+3D8h]

  v4 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UWPGameBar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_UWPGameBar>::GetImpl'::`2'::impl,
    a2);
  v26 = 0LL;
  memset_0(v33, 0, sizeof(v33));
  Windows::Internal::StringReference::_ConstructorHelper(
    (Windows::Internal::StringReference *)&v31,
    c_wzGameBarStartupTipsUri);
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v5 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         string,
         &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD66,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v5);
LABEL_27:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    return v6;
  }
  if ( !a3 )
  {
LABEL_24:
    v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
    if ( v26 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[1])(v26);
    string = 0LL;
    v22 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(v31, &v22);
    WindowsCreateStringReference(StringRawBuffer, v22, &hstringHeader, &string);
    BroadcastDVRComponent::LaunchGameOverlayWithUri(v20, &string, &v28);
    v6 = 0;
    goto LABEL_27;
  }
  v25 = 0LL;
  dwProcessId = 0;
  GetWindowThreadProcessId(v4, &dwProcessId);
  v24 = 0LL;
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
  v8 = **v26;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  v9 = v8(v7, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, &v25);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v12 = v25;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v25 + 56LL);
    WindowsDeleteString(v24);
    v24 = 0LL;
    v14 = v13(v12, *((_QWORD *)a3 + 6), &v24);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD71,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v14);
      Windows::Internal::String::~String(&v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      goto LABEL_27;
    }
    length = 0;
    v15 = WindowsGetStringRawBuffer(v24, &length);
    if ( length )
    {
      v16 = L"AumId";
      if ( !*((_BYTE *)a3 + 19) )
        v16 = L"TitleId";
      v17 = swprintf_s<512>(
              v33,
              L"ms-gamingoverlay://startuptips?%ls=%ls&ProcessId=%lu&WindowId=%llu",
              v16,
              v15,
              dwProcessId,
              v4);
    }
    else
    {
      v17 = swprintf_s<512>(v33, L"ms-gamingoverlay://startuptips?pid=%lu&WindowId=%llu", dwProcessId, v4);
    }
    if ( v17 > 0 )
    {
      Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)&string, v33);
      v22 = 0;
      v18 = WindowsGetStringRawBuffer(string, &v22);
      v31 = 0LL;
      WindowsCreateStringReference(v18, v22, &v32, &v31);
    }
    Windows::Internal::String::~String(&v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD70,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)(unsigned int)v9);
  if ( v24 )
    WindowsDeleteString(v24);
  v10 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v26;
  if ( v26 )
  {
    v26 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v11)[2])(v11);
  }
  return v6;
}
