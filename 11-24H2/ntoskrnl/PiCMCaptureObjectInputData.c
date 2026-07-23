/*
 * XREFs of PiCMCaptureObjectInputData @ 0x1408BC4E0
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406F62B8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406F63C0 (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x1406F6578 (PiCMDeleteDevice.c)
 *     PiCMGetDeviceStatus @ 0x1408BACCC (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1408BB9D0 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BC0A0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A5DA64 (PiCMGetObjectPropertyKeys.c)
 *     PiCMGetDeviceDepth @ 0x140A7A54C (PiCMGetDeviceDepth.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140AB7F94 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABB188 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABB8E4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABBA14 (PiCMDeleteObject.c)
 * Callees:
 *     Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405A5E28 (Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDB40 (PiControlMakeUserModeCallersCopy.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // r9
  int UserModeCallersCopy; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  __int64 v9; // r13
  int v10; // ecx
  _DWORD *v11; // r15
  unsigned int v12; // r8d
  void *v13; // rcx
  int v15; // [rsp+38h] [rbp-40h]
  char v17; // [rsp+80h] [rbp+8h]

  v15 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = a1 + a2;
      if ( v7 > 0x7FFFFFFF0000LL || v7 < a1 )
        UserModeCallersCopy = 0;
      if ( a2 >= 0x1C )
      {
        if ( *(_DWORD *)a1 == 28 )
        {
          *(_DWORD *)a4 = 40;
          *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
          *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
          *(_QWORD *)(a4 + 16) = *(unsigned int *)(a1 + 12);
          *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 24);
        }
        else
        {
          UserModeCallersCopy = -1073741811;
        }
      }
      else
      {
        UserModeCallersCopy = -1073741811;
      }
    }
    else
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = a1 + a2;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
        UserModeCallersCopy = 0;
      if ( a2 >= 0x28 )
      {
        *(_OWORD *)a4 = *(_OWORD *)a1;
        *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
        *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 32);
        if ( *(_DWORD *)a4 != 40 )
          UserModeCallersCopy = -1073741811;
      }
      else
      {
        UserModeCallersCopy = -1073741811;
      }
    }
    if ( UserModeCallersCopy < 0 )
    {
LABEL_28:
      PreviousMode = v17;
      goto LABEL_44;
    }
    v9 = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( (unsigned int)Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline() )
    {
      v10 = *(_DWORD *)(a4 + 24);
      if ( v9 )
      {
        if ( (unsigned int)(v10 - 2) <= 0xFFFD )
        {
          UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 16, v9, v10, 2, v17, 1);
          if ( UserModeCallersCopy < 0 )
          {
            *(_QWORD *)(a4 + 16) = 0LL;
            *(_DWORD *)(a4 + 24) = 0;
          }
          else
          {
            v15 = 1;
            *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
          }
          goto LABEL_27;
        }
      }
      else if ( !v10 )
      {
        goto LABEL_27;
      }
      goto LABEL_31;
    }
    if ( v9 )
    {
      v11 = (_DWORD *)(a4 + 24);
      v12 = *(_DWORD *)(a4 + 24);
      if ( v12 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 16, v9, v12, 2, v17, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *(_QWORD *)(a4 + 16) = 0LL;
          *v11 = 0;
        }
        else
        {
          v15 = 1;
          *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)(unsigned int)*v11 >> 1) - 2) = 0;
        }
LABEL_27:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_28;
      }
    }
    else
    {
      v11 = (_DWORD *)(a4 + 24);
    }
    if ( !v9 )
    {
      if ( !*v11 )
        goto LABEL_27;
LABEL_31:
      UserModeCallersCopy = -1073741811;
      PreviousMode = v17;
      goto LABEL_44;
    }
    if ( *v11 >= 2u )
      goto LABEL_27;
    UserModeCallersCopy = -1073741811;
    PreviousMode = v17;
  }
  else
  {
    UserModeCallersCopy = -1073741811;
  }
LABEL_44:
  if ( v15 )
  {
    v13 = *(void **)(a4 + 16);
    if ( PreviousMode )
    {
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
    }
  }
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
