/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_e1ef2631b6ca5c99fa8fa486bcff5e4b___ @ 0x180078ED8
 * Callers:
 *     _lambda_bff338be9bc6c4db3b3ba6d2630bc2fb_::operator() @ 0x18007B434 (_lambda_bff338be9bc6c4db3b3ba6d2630bc2fb_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W1PEBD@Z @ 0x180079C48 (--$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelem.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18008082C (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180081808 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x180081858 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_e1ef2631b6ca5c99fa8fa486bcff5e4b___(
        __int64 a1,
        unsigned int **a2)
{
  __int64 (*v4)(void); // rbx
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rbx
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, HSTRING *); // rbx
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rbx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rbx
  const char *v19; // r9
  __int64 result; // rax
  int v21; // [rsp+20h] [rbp-98h]
  HSTRING v22; // [rsp+40h] [rbp-78h] BYREF
  HSTRING v23; // [rsp+48h] [rbp-70h] BYREF
  HSTRING v24; // [rsp+50h] [rbp-68h] BYREF
  HSTRING string; // [rsp+58h] [rbp-60h]
  HSTRING v26; // [rsp+60h] [rbp-58h] BYREF
  __int64 v27; // [rsp+68h] [rbp-50h] BYREF
  __int64 v28; // [rsp+70h] [rbp-48h] BYREF
  PCWSTR StringRawBuffer; // [rsp+78h] [rbp-40h] BYREF
  PCWSTR v30; // [rsp+80h] [rbp-38h] BYREF
  __int64 v31; // [rsp+88h] [rbp-30h] BYREF
  PCWSTR v32; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v34; // [rsp+C0h] [rbp+8h] BYREF
  HSTRING v35; // [rsp+D0h] [rbp+18h] BYREF
  HSTRING v36; // [rsp+D8h] [rbp+20h] BYREF

  string = 0LL;
  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v5,
        v21);
    v24 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL);
    WindowsDeleteString(0LL);
    v24 = 0LL;
    v7 = v6(a1, &v24);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v7,
        v21);
    v23 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL);
    WindowsDeleteString(0LL);
    v23 = 0LL;
    v9 = v8(a1, &v23);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v9,
        v21);
    v22 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL);
    WindowsDeleteString(0LL);
    v22 = 0LL;
    v11 = v10(a1, &v22);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v11,
        v21);
    v36 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL);
    WindowsDeleteString(0LL);
    v36 = 0LL;
    v13 = v12(a1, &v36);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v13,
        v21);
    v35 = 0LL;
    v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL);
    WindowsDeleteString(0LL);
    v35 = 0LL;
    v15 = v14(a1, &v35);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v15,
        v21);
    v34 = 0;
    v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v34);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v16,
        v21);
    v17 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v34);
    Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v26, a1);
    WindowsGetStringRawBuffer(string, 0LL);
    WindowsGetStringRawBuffer(v35, 0LL);
    WindowsGetStringRawBuffer(v36, 0LL);
    WindowsGetStringRawBuffer(v22, 0LL);
    StringRawBuffer = WindowsGetStringRawBuffer(v23, 0LL);
    v30 = WindowsGetStringRawBuffer(v24, 0LL);
    v32 = WindowsGetStringRawBuffer(v26, 0LL);
    v31 = v17;
    v18 = *(_QWORD *)a2[2] + 8LL;
    v27 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(*a2[1]);
    v28 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(**a2);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerStateTransition<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const *,wchar_t const *>(
      (unsigned int)&v32,
      (unsigned int)&v31,
      (unsigned int)&v30,
      (unsigned int)&StringRawBuffer,
      (__int64)&v28,
      (__int64)&v27,
      v18);
    WindowsDeleteString(v26);
    v26 = 0LL;
    WindowsDeleteString(v35);
    v35 = 0LL;
    WindowsDeleteString(v36);
    v36 = 0LL;
    WindowsDeleteString(v22);
    v22 = 0LL;
    WindowsDeleteString(v23);
    v23 = 0LL;
    WindowsDeleteString(v24);
    v24 = 0LL;
    WindowsDeleteString(string);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                           v19);
  }
  return result;
}
