/*
 * XREFs of RegisterCoreMsgProviderPreferences @ 0x1401404F0
 * Callers:
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x14014037C (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CActivationObjectManager@@SAJXZ @ 0x140140414 (-Initialize@CActivationObjectManager@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x14015691C (-Initialize@CCursorClip@@SAJXZ.c)
 *     InitializeContext @ 0x140212970 (InitializeContext.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x14014055C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 */

__int64 __fastcall RegisterCoreMsgProviderPreferences(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v8; // ebp
  __int64 UserSessionState; // rax

  v8 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  return InputExtensibilityCallout::RegisterCoreMsgProvider(*(_QWORD *)(UserSessionState + 16408), v8, a2, a3, a4, a5);
}
