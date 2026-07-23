/*
 * XREFs of PiCMCaptureRegisterInterfaceInputData @ 0x140A79294
 * Callers:
 *     PiCMRegisterDeviceInterface @ 0x140A79094 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405A5E28 (Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDB40 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureRegisterInterfaceInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // al
  int UserModeCallersCopy; // edi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  _QWORD *v10; // r13
  void *v11; // r15
  unsigned int v12; // ecx
  int v13; // r14d
  _DWORD *v15; // r12
  unsigned int v16; // r8d
  _QWORD *v17; // r12
  void *v18; // r13
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  _DWORD *v21; // r13
  unsigned int v22; // r8d
  int v23; // [rsp+3Ch] [rbp-3Ch]
  void *v24; // [rsp+40h] [rbp-38h]
  char v26; // [rsp+80h] [rbp+8h]

  v23 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
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
      if ( a2 >= 0x2C && *(_DWORD *)a1 == 44 )
      {
        *(_DWORD *)a4 = 56;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
        *(_OWORD *)(a4 + 8) = *(_OWORD *)(a1 + 8);
        *(_QWORD *)(a4 + 24) = *(unsigned int *)(a1 + 24);
        *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 28);
        *(_QWORD *)(a4 + 40) = *(unsigned int *)(a1 + 32);
        *(_DWORD *)(a4 + 48) = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a4 + 52) = *(_DWORD *)(a1 + 40);
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
      if ( a2 >= 0x38 )
      {
        *(_OWORD *)a4 = *(_OWORD *)a1;
        *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
        *(_QWORD *)(a4 + 48) = *(_QWORD *)(a1 + 48);
        if ( *(_DWORD *)a4 != 56 )
          UserModeCallersCopy = -1073741811;
      }
      else
      {
        UserModeCallersCopy = -1073741811;
      }
    }
    if ( UserModeCallersCopy < 0 )
      goto LABEL_30;
    v10 = (_QWORD *)(a4 + 24);
    v11 = *(void **)(a4 + 24);
    *(_QWORD *)(a4 + 24) = 0LL;
    if ( (unsigned int)Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline() )
    {
      v12 = *(_DWORD *)(a4 + 32);
      if ( v11 )
      {
        PreviousMode = v26;
        if ( v12 - 2 > 0x18E )
          goto LABEL_55;
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v11, v12, 2LL, v26, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v10 = 0LL;
          *(_DWORD *)(a4 + 32) = 0;
        }
        else
        {
          v23 = 1;
          *(_WORD *)(*v10 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 32) >> 1) - 2) = 0;
        }
      }
      else if ( v12 )
      {
        goto LABEL_28;
      }
LABEL_48:
      v17 = (_QWORD *)(a4 + 40);
      v18 = *(void **)(a4 + 40);
      v24 = v18;
      *(_QWORD *)(a4 + 40) = 0LL;
      if ( (unsigned int)Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline() )
      {
        v19 = *(_DWORD *)(a4 + 48);
        if ( v18 )
        {
          PreviousMode = v26;
          if ( v19 - 2 <= 0xFFFD )
          {
            UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 40), v18, v19, 2LL, v26, 1);
            if ( UserModeCallersCopy >= 0 )
            {
              v20 = *(unsigned int *)(a4 + 48);
LABEL_60:
              v13 = 1;
              *(_WORD *)(*v17 + 2 * (v20 >> 1) - 2) = 0;
              PreviousMode = v26;
              goto LABEL_31;
            }
            *v17 = 0LL;
            *(_DWORD *)(a4 + 48) = 0;
            goto LABEL_29;
          }
        }
        else
        {
          PreviousMode = v26;
          if ( !v19 )
            goto LABEL_30;
        }
LABEL_55:
        UserModeCallersCopy = -1073741811;
        goto LABEL_30;
      }
      if ( v18 )
      {
        v21 = (_DWORD *)(a4 + 48);
        v22 = *(_DWORD *)(a4 + 48);
        if ( v22 >= 2 )
        {
          UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 40), v24, v22, 2LL, v26, 1);
          if ( UserModeCallersCopy >= 0 )
          {
            v20 = (unsigned int)*v21;
            goto LABEL_60;
          }
          *v17 = 0LL;
          *v21 = 0;
          goto LABEL_29;
        }
      }
      else
      {
        v21 = (_DWORD *)(a4 + 48);
      }
      if ( v24 )
      {
        if ( *v21 >= 2u )
          goto LABEL_29;
      }
      else if ( !*v21 )
      {
        goto LABEL_29;
      }
LABEL_28:
      UserModeCallersCopy = -1073741811;
LABEL_29:
      PreviousMode = v26;
LABEL_30:
      v13 = 0;
      goto LABEL_31;
    }
    if ( v11 )
    {
      v15 = (_DWORD *)(a4 + 32);
      v16 = *(_DWORD *)(a4 + 32);
      if ( v16 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v11, v16, 2LL, v26, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v10 = 0LL;
          *v15 = 0;
        }
        else
        {
          v23 = 1;
          *(_WORD *)(*v10 + 2 * ((unsigned __int64)(unsigned int)*v15 >> 1) - 2) = 0;
        }
        goto LABEL_48;
      }
    }
    else
    {
      v15 = (_DWORD *)(a4 + 32);
    }
    if ( v11 )
    {
      if ( *v15 < 2u )
        goto LABEL_28;
    }
    else if ( *v15 )
    {
      goto LABEL_28;
    }
    goto LABEL_48;
  }
  UserModeCallersCopy = -1073741811;
  v13 = 0;
LABEL_31:
  if ( UserModeCallersCopy < 0 )
  {
    if ( v23 )
      PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 24));
    if ( v13 )
      PiControlFreeUserModeCallersBuffer(v26, *(void **)(a4 + 40));
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 48) = 0LL;
  }
  return (unsigned int)UserModeCallersCopy;
}
