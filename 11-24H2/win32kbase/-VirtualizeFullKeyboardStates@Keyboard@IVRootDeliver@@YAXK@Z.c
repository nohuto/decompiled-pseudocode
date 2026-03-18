/*
 * XREFs of ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x14021B0C4
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1400473D0 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     VirtualizeFullKeyboardStates @ 0x1402138C0 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     ProcessInfoFromPID @ 0x140120264 (ProcessInfoFromPID.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A726C (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x14021A530 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021B14C (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVRootDeliver::Keyboard::VirtualizeFullKeyboardStates(IVRootDeliver::Keyboard *this)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  const struct CONTAINER_ID *v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = (int)this;
  if ( isRootPartition((__int64)this) )
  {
    UserSessionState = W32GetUserSessionState(v2);
    if ( CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 12928) + 1272LL)) )
    {
      if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline()
        || (v5 = ProcessInfoFromPID(v1)) == 0 )
      {
        v6 = 0;
      }
      else
      {
        v6 = *(_DWORD *)(v5 + 1080);
      }
      v7 = v6;
      if ( v6 )
        IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates((IVRootDeliver::Keyboard::Detail *)&v7, v4);
    }
  }
}
