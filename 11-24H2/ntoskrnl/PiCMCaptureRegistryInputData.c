/*
 * XREFs of PiCMCaptureRegistryInputData @ 0x14094B8B8
 * Callers:
 *     PiCMOpenClassKey @ 0x14094AF58 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14094B1EC (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14094B3B0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14094B5B8 (PiCMOpenObjectKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405A5E28 (Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDB40 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureRegistryInputData(_DWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // r12
  int UserModeCallersCopy; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  _QWORD *v9; // r15
  void *v10; // r13
  unsigned int v11; // ecx
  _DWORD *v12; // r12
  unsigned int v13; // r8d
  int v15; // [rsp+38h] [rbp-40h]
  char v17; // [rsp+80h] [rbp+8h]

  v15 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_41;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)a1 + a2;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)a1 )
      UserModeCallersCopy = 0;
    if ( a2 >= 0x24 && *a1 == 36 )
    {
      *(_DWORD *)a4 = 48;
      *(_DWORD *)(a4 + 4) = a1[1];
      *(_DWORD *)(a4 + 8) = a1[2];
      *(_QWORD *)(a4 + 16) = (unsigned int)a1[3];
      *(_DWORD *)(a4 + 24) = a1[4];
      *(_DWORD *)(a4 + 28) = a1[5];
      *(_DWORD *)(a4 + 32) = a1[6];
      *(_DWORD *)(a4 + 36) = a1[7];
      *(_DWORD *)(a4 + 40) = a1[8];
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)a1 )
      UserModeCallersCopy = 0;
    if ( a2 >= 0x30 )
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)a1 + 1);
      *(_OWORD *)(a4 + 32) = *((_OWORD *)a1 + 2);
      if ( *(_DWORD *)a4 != 48 )
        UserModeCallersCopy = -1073741811;
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v9 = (_QWORD *)(a4 + 16);
    v10 = *(void **)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( (unsigned int)Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline() )
    {
      v11 = *(_DWORD *)(a4 + 24);
      if ( v10 )
      {
        if ( v11 - 2 <= 0xFFFD )
        {
          UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 16), v10, v11, 2LL, PreviousMode, 1);
          if ( UserModeCallersCopy < 0 )
          {
            *v9 = 0LL;
            *(_DWORD *)(a4 + 24) = 0;
          }
          else
          {
            v15 = 1;
            *(_WORD *)(*v9 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
          }
          goto LABEL_41;
        }
      }
      else if ( !v11 )
      {
        goto LABEL_41;
      }
    }
    else
    {
      if ( v10 )
      {
        v12 = (_DWORD *)(a4 + 24);
        v13 = *(_DWORD *)(a4 + 24);
        if ( v13 >= 2 )
        {
          UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 16), v10, v13, 2LL, v17, 1);
          if ( UserModeCallersCopy < 0 )
          {
            *v9 = 0LL;
            *v12 = 0;
          }
          else
          {
            v15 = 1;
            *(_WORD *)(*v9 + 2 * ((unsigned __int64)(unsigned int)*v12 >> 1) - 2) = 0;
          }
LABEL_41:
          if ( UserModeCallersCopy >= 0 )
            return (unsigned int)UserModeCallersCopy;
          goto LABEL_42;
        }
      }
      else
      {
        v12 = (_DWORD *)(a4 + 24);
      }
      if ( v10 )
      {
        if ( *v12 >= 2u )
          goto LABEL_41;
      }
      else if ( !*v12 )
      {
        goto LABEL_41;
      }
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_42:
  if ( v15 )
    PiControlFreeUserModeCallersBuffer(v17, *(void **)(a4 + 16));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
