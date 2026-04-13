/*
 * XREFs of _Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize_::_1_::catch$15 @ 0x1800B9C08
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003A090 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 216) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 184),
                            (void *)0x57,
                            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
                            a4);
  return 0LL;
}
