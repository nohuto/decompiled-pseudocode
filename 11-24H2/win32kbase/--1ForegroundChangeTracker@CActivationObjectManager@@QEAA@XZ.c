/*
 * XREFs of ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1400473D0
 * Callers:
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x14004721C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1400E09E4 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E0C08 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1401A7028 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     EtwTraceFocusedProcessChange @ 0x1400ED400 (EtwTraceFocusedProcessChange.c)
 *     EtwTraceFocusChange @ 0x1400F2890 (EtwTraceFocusChange.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x14011E540 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A726C (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     MarkQueuesForKeyStateUpdate @ 0x140212FF0 (MarkQueuesForKeyStateUpdate.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x14021B0C4 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 *     CitModerncoreProcessForegroundChange @ 0x14023CE08 (CitModerncoreProcessForegroundChange.c)
 */

void __fastcall CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker(
        CActivationObjectManager::ForegroundChangeTracker *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 UserSessionState; // rax

  if ( *((_DWORD *)this + 8) != *((_DWORD *)this + 2) || *((_DWORD *)this + 9) != *((_DWORD *)this + 3) )
  {
    EtwTraceFocusChange(*((unsigned int *)this + 7), *((unsigned int *)this + 1));
    v2 = *((unsigned int *)this + 6);
    if ( (_DWORD)v2 != *(_DWORD *)this )
    {
      EtwTraceFocusedProcessChange();
      if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
        CitModerncoreProcessForegroundChange(*((unsigned int *)this + 6), *(unsigned int *)this);
      IVRootDeliver::Keyboard::VirtualizeFullKeyboardStates((IVRootDeliver::Keyboard *)*(unsigned int *)this, v3);
    }
    UserSessionState = W32GetUserSessionState(v2);
    CCursorClip::ClearClip(*(CCursorClip **)(UserSessionState + 36296));
    MarkQueuesForKeyStateUpdate(0LL, 0LL, 0LL);
  }
}
