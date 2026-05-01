/*
 * XREFs of __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806FD224
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a2 + 40) + 64LL;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(*(RTL_SRWLOCK ***)(a2 + 160));
}
