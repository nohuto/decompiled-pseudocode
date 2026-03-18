/*
 * XREFs of ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0066298
 * Callers:
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C000D8A0 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00651C8 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0066108 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C012ECD8 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0062ED0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     EtwTraceFocusChange @ 0x1C00B48A0 (EtwTraceFocusChange.c)
 *     EtwTraceFocusedProcessChange @ 0x1C00B4BD0 (EtwTraceFocusedProcessChange.c)
 *     PpiFromProcessId @ 0x1C012D490 (PpiFromProcessId.c)
 *     MarkQueuesForKeyStateUpdate @ 0x1C01E8680 (MarkQueuesForKeyStateUpdate.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01F2D30 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F3884 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C0234AD0 (CitModerncoreProcessForegroundChange.c)
 */

void __fastcall CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker(
        CActivationObjectManager::ForegroundChangeTracker *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  const struct CONTAINER_ID *v9; // rdx
  int v10; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 8) != *((_DWORD *)this + 2) || *((_DWORD *)this + 9) != *((_DWORD *)this + 3) )
  {
    EtwTraceFocusChange(*((unsigned int *)this + 7), *((unsigned int *)this + 1));
    if ( *((_DWORD *)this + 6) != *(_DWORD *)this )
    {
      EtwTraceFocusedProcessChange();
      CitModerncoreProcessForegroundChange(*((unsigned int *)this + 6), *(unsigned int *)this);
      v2 = *(_DWORD *)this;
      if ( isRootPartition() )
      {
        v7 = SGDGetUserSessionState(v4, v3, v5, v6);
        if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v7 + 12672) + 1296LL)) )
        {
          v8 = PpiFromProcessId(v2);
          if ( v8 )
            v10 = *(_DWORD *)(v8 + 1104);
          else
            v10 = 0;
          v11 = v10;
          if ( v10 )
            IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates((IVRootDeliver::Keyboard::Detail *)&v11, v9);
        }
      }
    }
    CCursorClip::ClearClip((CCursorClip *)WPP_MAIN_CB.Reserved);
    MarkQueuesForKeyStateUpdate(0LL, 0LL, 0LL);
  }
}
