/*
 * XREFs of ?OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800536D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18005373C (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180053D38 (-RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::OnAnimationComplete(
        unsigned __int64 this,
        int a2)
{
  CAnimationEngine *v3; // rax
  const char *v4; // r9
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == *(_DWORD *)(this + 24) )
  {
    v3 = CDesktopManager::AcquireAnimationEngine();
    CAnimationEngine::UnregisterForAnimationCompleteNotification(
      v3,
      (struct IAnimationListener *)(this & -(__int64)(this != 32)));
    try
    {
      *(_DWORD *)(this + 24) = -1;
      winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::RemoveFromTree((winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)(this - 32));
      v5 = *(_QWORD *)(this + 8);
      *(_QWORD *)(this + 8) = 0LL;
      if ( v5 )
        CBaseObject::Release((CBaseObject *)(v5 + 8));
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xB0,
                             (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
                             v4);
    }
  }
  return 0LL;
}
