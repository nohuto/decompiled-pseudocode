/*
 * XREFs of NtPlugPlayControl @ 0x1408CD400
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1408CD650 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDC30 (PiControlCopyUserModeCallersBuffer.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CED40 (PiControlGetSetDeviceStatus.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  ULONG_PTR v4; // rsi
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

  v4 = PnPControlDataLength;
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
  if ( *((_DWORD *)v8 + 1) != (_DWORD)v4 )
    return -1073741776;
  if ( PsIsCurrentThreadInServerSilo() && !*((_BYTE *)v8 + 16) )
    return -1073741727;
  if ( PreviousMode )
  {
    if ( (_DWORD)v4 )
    {
      Pool2 = (void *)ExAllocatePool2(0x101uLL, v4, 0x20207050u);
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
    DeviceInterfaceEnabled = PiControlGetDeviceInterfaceEnabled((unsigned int)v5, v9, (unsigned int)v4, PreviousMode);
  }
  else if ( v10 == PiControlGetSetDeviceStatus )
  {
    DeviceInterfaceEnabled = PiControlGetSetDeviceStatus((unsigned int)v5, v9, (unsigned int)v4, PreviousMode);
  }
  else
  {
    DeviceInterfaceEnabled = guard_dispatch_icall_no_overrides((unsigned int)v5, v9);
  }
  v12 = DeviceInterfaceEnabled;
  if ( (DeviceInterfaceEnabled & 0xC0000000) != 0xC0000000 || DeviceInterfaceEnabled == -1073741789 )
  {
    if ( PreviousMode )
    {
      if ( (_DWORD)v4 )
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
