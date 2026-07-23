/*
 * XREFs of PiCMCapturePropertyInputData @ 0x1408C2BE0
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 *     PiCMSetObjectProperty @ 0x1409EFF1C (PiCMSetObjectProperty.c)
 * Callees:
 *     Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405A5E28 (Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDB40 (PiControlMakeUserModeCallersCopy.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCapturePropertyInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // al
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  __int64 v10; // r13
  int v11; // ecx
  int v12; // esi
  void *v13; // rcx
  void *v14; // rcx
  _DWORD *v16; // r15
  unsigned int v17; // r8d
  __int64 v18; // rax
  _DWORD *v19; // r15
  int v20; // r8d
  int v21; // [rsp+3Ch] [rbp-3Ch]
  char v23; // [rsp+80h] [rbp+8h]

  v21 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = a1 + a2;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
        UserModeCallersCopy = 0;
      if ( a2 >= 0x38 )
      {
        if ( *(_DWORD *)a1 == 56 )
        {
          *(_DWORD *)a4 = 72;
          *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
          *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
          *(_QWORD *)(a4 + 16) = *(unsigned int *)(a1 + 12);
          *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 16);
          *(_OWORD *)(a4 + 28) = *(_OWORD *)(a1 + 20);
          *(_DWORD *)(a4 + 44) = *(_DWORD *)(a1 + 36);
          *(_DWORD *)(a4 + 48) = *(_DWORD *)(a1 + 40);
          *(_QWORD *)(a4 + 56) = *(unsigned int *)(a1 + 44);
          *(_DWORD *)(a4 + 64) = *(_DWORD *)(a1 + 48);
          *(_DWORD *)(a4 + 68) = *(_DWORD *)(a1 + 52);
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
      v9 = a1 + a2;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < a1 )
        UserModeCallersCopy = 0;
      if ( a2 >= 0x48 )
      {
        *(_OWORD *)a4 = *(_OWORD *)a1;
        *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(a4 + 48) = *(_OWORD *)(a1 + 48);
        *(_QWORD *)(a4 + 64) = *(_QWORD *)(a1 + 64);
        if ( *(_DWORD *)a4 != 72 )
          UserModeCallersCopy = -1073741811;
      }
      else
      {
        UserModeCallersCopy = -1073741811;
      }
    }
    if ( UserModeCallersCopy < 0 )
      goto LABEL_32;
    v10 = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( (unsigned int)Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline() )
    {
      v11 = *(_DWORD *)(a4 + 24);
      if ( v10 )
      {
        PreviousMode = v23;
        if ( (unsigned int)(v11 - 2) > 0xFFFD )
        {
          UserModeCallersCopy = -1073741811;
          goto LABEL_32;
        }
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 16, v10, v11, 2, v23, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *(_QWORD *)(a4 + 16) = 0LL;
          *(_DWORD *)(a4 + 24) = 0;
        }
        else
        {
          v21 = 1;
          *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
        }
      }
      else if ( v11 )
      {
        goto LABEL_30;
      }
LABEL_54:
      v18 = *(_QWORD *)(a4 + 56);
      *(_QWORD *)(a4 + 56) = 0LL;
      if ( v18 )
      {
        v19 = (_DWORD *)(a4 + 64);
        v20 = *(_DWORD *)(a4 + 64);
        if ( v20 )
        {
          UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 56, v18, v20, 1, v23, 1);
          PreviousMode = v23;
          if ( UserModeCallersCopy >= 0 )
          {
            v12 = 1;
            goto LABEL_33;
          }
          *(_QWORD *)(a4 + 56) = 0LL;
          *v19 = 0;
LABEL_32:
          v12 = 0;
          goto LABEL_33;
        }
      }
      else
      {
        v19 = (_DWORD *)(a4 + 64);
      }
      if ( v18 )
      {
        if ( *v19 )
          goto LABEL_31;
      }
      else if ( !*v19 )
      {
        goto LABEL_31;
      }
LABEL_30:
      UserModeCallersCopy = -1073741811;
LABEL_31:
      PreviousMode = v23;
      goto LABEL_32;
    }
    if ( v10 )
    {
      v16 = (_DWORD *)(a4 + 24);
      v17 = *(_DWORD *)(a4 + 24);
      if ( v17 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 16, v10, v17, 2, v23, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *(_QWORD *)(a4 + 16) = 0LL;
          *v16 = 0;
        }
        else
        {
          v21 = 1;
          *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)(unsigned int)*v16 >> 1) - 2) = 0;
        }
        goto LABEL_54;
      }
    }
    else
    {
      v16 = (_DWORD *)(a4 + 24);
    }
    if ( v10 )
    {
      if ( *v16 < 2u )
        goto LABEL_30;
    }
    else if ( *v16 )
    {
      goto LABEL_30;
    }
    goto LABEL_54;
  }
  UserModeCallersCopy = -1073741811;
  v12 = 0;
LABEL_33:
  if ( UserModeCallersCopy < 0 )
  {
    if ( v21 )
    {
      v13 = *(void **)(a4 + 16);
      if ( PreviousMode )
      {
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
      }
    }
    if ( v12 )
    {
      v14 = *(void **)(a4 + 56);
      if ( v23 )
      {
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
      }
    }
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    *(_OWORD *)(a4 + 48) = 0LL;
    *(_QWORD *)(a4 + 64) = 0LL;
  }
  return (unsigned int)UserModeCallersCopy;
}
