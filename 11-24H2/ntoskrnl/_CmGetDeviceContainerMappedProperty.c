/*
 * XREFs of _CmGetDeviceContainerMappedProperty @ 0x1408B3AF8
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x1408B3940 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     _CmGetContainerBooleanProperty @ 0x14081A704 (_CmGetContainerBooleanProperty.c)
 *     _CmIsLocalMachineContainer @ 0x140A70D84 (_CmIsLocalMachineContainer.c)
 */

__int64 __fastcall CmGetDeviceContainerMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v10; // r10d
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // cf
  __int64 v16; // rcx
  __int64 v17; // rcx
  const DEVPROPKEY *v18; // r9

  v10 = -1073741802;
  *a9 = 0;
  if ( a4 )
    return v10;
  v12 = *(_DWORD *)(a5 + 16);
  switch ( v12 )
  {
    case 'F':
      v14 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1 )
        v14 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data4;
      if ( !v14 )
      {
        *a6 = 17;
        *a9 = 1;
        if ( a8 )
        {
          v15 = (unsigned __int8)CmIsLocalMachineContainer(a1) != 0;
          v10 = 0;
          *a7 = -v15;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
      }
      return v10;
    case 'S':
      v16 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1 )
        v16 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_HasProblem.fmtid.Data4;
      if ( v16 )
        return v10;
      v18 = &DEVPKEY_Device_HasProblem;
      return (unsigned int)CmGetContainerBooleanProperty(a1, a2, a3, (__int64)v18, a6, a7, a8, a9);
    case '7':
      v17 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1 )
        v17 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsConnected.fmtid.Data4;
      if ( v17 )
        return v10;
      v18 = (const DEVPROPKEY *)&DEVPKEY_Device_IsConnected;
      return (unsigned int)CmGetContainerBooleanProperty(a1, a2, a3, (__int64)v18, a6, a7, a8, a9);
    case 'l':
      v13 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1 )
        v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data4;
      if ( !v13 )
      {
        v18 = &DEVPKEY_Device_IsRebootRequired;
        return (unsigned int)CmGetContainerBooleanProperty(a1, a2, a3, (__int64)v18, a6, a7, a8, a9);
      }
      break;
  }
  return v10;
}
