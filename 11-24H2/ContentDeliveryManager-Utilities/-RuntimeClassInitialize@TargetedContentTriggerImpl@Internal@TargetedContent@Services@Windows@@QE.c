/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x180076F3C
 * Callers:
 *     ??$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAW4TargetedContentKnownTrigger@2345@AEAPEAUHSTRING__@@AEAPEAU7@AEAPEAU7@AEAPEAU7@AEAPEAU7@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@AEAW4TargetedContentKnownTrigger@4567@AEAPEAUHSTRING__@@2222@Z @ 0x180076C30 (--$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@V123.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18003AAFC (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalObjectVector@VTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@2Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@1234@@Z @ 0x1800768F8 (--$CreateExternalObjectVector@VTargetedContentTriggerStateTransition@Internal@TargetedContent@Se.c)
 */

__int64 Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        ...)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // r8d
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v15; // [rsp+40h] [rbp+18h] BYREF
  va_list va; // [rsp+40h] [rbp+18h]
  HSTRING v17; // [rsp+48h] [rbp+20h] BYREF
  va_list va1; // [rsp+48h] [rbp+20h]
  HSTRING v19; // [rsp+50h] [rbp+28h] BYREF
  va_list va2; // [rsp+50h] [rbp+28h]
  HSTRING v21; // [rsp+58h] [rbp+30h] BYREF
  va_list va3; // [rsp+58h] [rbp+30h]
  va_list va4; // [rsp+60h] [rbp+38h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, HSTRING);
  va_copy(va2, va1);
  v17 = va_arg(va2, HSTRING);
  va_copy(va3, va2);
  v19 = va_arg(va3, HSTRING);
  va_copy(va4, va3);
  v21 = va_arg(va4, HSTRING);
  try
  {
    if ( !a2 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)0x8000FFFFLL,
        v13);
    *(_DWORD *)(a1 + 72) = a2;
    v3 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 128), (HSTRING *)va);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v3,
        v13);
    v4 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 136), (HSTRING *)va1);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v4,
        v13);
    v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 104), (HSTRING *)va2);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v5,
        v13);
    v6 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 80), (HSTRING *)va3);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v6,
        v13);
    v7 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 120), (HSTRING *)va4);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x23,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v7,
        v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 192));
    v10 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition,Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>>(
            v8,
            (__int64 *)(a1 + 192),
            v9);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v10,
        v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x28,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                           v11);
  }
  return result;
}
