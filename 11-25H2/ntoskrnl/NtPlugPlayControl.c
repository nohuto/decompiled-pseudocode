/*
 * XREFs of NtPlugPlayControl @ 0x1408CD560
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD7B0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDD90 (PiControlCopyUserModeCallersBuffer.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  __int64 v5; // rbp
  unsigned __int8 PreviousMode; // di
  __int64 *v8; // rbx
  PVOID v9; // r14
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  NTSTATUS DeviceInterfaceEnabled; // eax
  NTSTATUS v12; // ebx
  int v13; // eax
  void *Pool2; // rax
  NTSTATUS v15; // r12d

  v5 = (unsigned int)PnPControlClass;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return -1073741727;
  if ( (unsigned int)v5 >= 0x18 )
    return -1073741585;
  v8 = &PlugPlayHandlerTable[3 * v5];
  if ( *(_DWORD *)v8 != (_DWORD)v5 )
    return -1073741595;
  if ( !v8 )
    return -1073741585;
  if ( !v8[1] )
    return -1073741822;
  if ( *((_DWORD *)v8 + 1) != PnPControlDataLength )
    return -1073741776;
  if ( PsIsCurrentThreadInServerSilo() && !*((_BYTE *)v8 + 16) )
    return -1073741727;
  if ( PreviousMode )
  {
    if ( PnPControlDataLength )
    {
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      v9 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      v15 = PiControlCopyUserModeCallersBuffer(Pool2, PreviousMode, 1);
      if ( v15 < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        return v15;
      }
    }
    else
    {
      v9 = 0LL;
    }
  }
  else
  {
    v9 = PnPControlData;
  }
  v10 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v8[1];
  if ( v10 == PiControlGetDeviceInterfaceEnabled )
  {
    DeviceInterfaceEnabled = PiControlGetDeviceInterfaceEnabled(
                               (unsigned int)v5,
                               v9,
                               PnPControlDataLength,
                               PreviousMode);
  }
  else if ( v10 == PiControlGetSetDeviceStatus )
  {
    DeviceInterfaceEnabled = PiControlGetSetDeviceStatus((unsigned int)v5, v9, PnPControlDataLength, PreviousMode);
  }
  else
  {
    DeviceInterfaceEnabled = guard_dispatch_icall_no_overrides((unsigned int)v5);
  }
  v12 = DeviceInterfaceEnabled;
  if ( (DeviceInterfaceEnabled & 0xC0000000) != 0xC0000000 || DeviceInterfaceEnabled == -1073741789 )
  {
    if ( PreviousMode )
    {
      if ( PnPControlDataLength )
      {
        if ( PnPControlData )
        {
          v13 = PiControlCopyUserModeCallersBuffer(PnPControlData, PreviousMode, 0);
          if ( v13 < 0 )
            v12 = v13;
        }
      }
    }
  }
  if ( v12 == -1073741738 )
    v12 = -1073741810;
  if ( PreviousMode )
  {
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  return v12;
}
