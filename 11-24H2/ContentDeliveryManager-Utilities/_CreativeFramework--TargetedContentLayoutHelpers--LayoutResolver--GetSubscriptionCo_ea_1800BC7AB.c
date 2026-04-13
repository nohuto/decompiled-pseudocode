/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer_::_1_::catch$6 @ 0x1800BC7AB
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180069140 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer_::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  const char *StringRawBuffer; // rax

  StringRawBuffer = (const char *)WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 96), 0LL);
  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 72),
    (unsigned __int16 *)0x135,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
    "Content ID: %ls",
    StringRawBuffer);
  return 0LL;
}
