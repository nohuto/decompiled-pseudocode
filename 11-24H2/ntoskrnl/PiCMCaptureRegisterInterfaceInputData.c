/*
 * XREFs of PiCMCaptureRegisterInterfaceInputData @ 0x140A6E830
 * Callers:
 *     PiCMRegisterDeviceInterface @ 0x140A6E630 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408D0150 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureRegisterInterfaceInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // al
  int UserModeCallersCopy; // edi
  _QWORD *v7; // r12
  void *v8; // rax
  _DWORD *v9; // r15
  _QWORD *v10; // r12
  void *v11; // rax
  _DWORD *v12; // r15
  unsigned int v13; // r8d
  int v14; // r14d
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned int v18; // r8d
  int v19; // [rsp+3Ch] [rbp-3Ch]
  char v21; // [rsp+80h] [rbp+8h]

  v19 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    v14 = 0;
    goto LABEL_14;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = a1 + a2;
    if ( v16 > 0x7FFFFFFF0000LL || v16 < a1 )
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
    v17 = a1 + a2;
    if ( v17 > 0x7FFFFFFF0000LL || v17 < a1 )
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
  if ( UserModeCallersCopy >= 0 )
  {
    v7 = (_QWORD *)(a4 + 24);
    v8 = *(void **)(a4 + 24);
    *(_QWORD *)(a4 + 24) = 0LL;
    if ( v8 )
    {
      v9 = (_DWORD *)(a4 + 32);
      v18 = *(_DWORD *)(a4 + 32);
      if ( v18 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v8, v18, 2LL, v21, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v7 = 0LL;
          *v9 = 0;
        }
        else
        {
          v19 = 1;
          *(_WORD *)(*v7 + 2 * ((unsigned __int64)(unsigned int)*v9 >> 1) - 2) = 0;
        }
        goto LABEL_10;
      }
    }
    else
    {
      v9 = (_DWORD *)(a4 + 32);
    }
    if ( v8 )
    {
      if ( *v9 < 2u )
        goto LABEL_50;
    }
    else if ( *v9 )
    {
      goto LABEL_50;
    }
LABEL_10:
    v10 = (_QWORD *)(a4 + 40);
    v11 = *(void **)(a4 + 40);
    *(_QWORD *)(a4 + 40) = 0LL;
    if ( v11 )
    {
      v12 = (_DWORD *)(a4 + 48);
      v13 = *(_DWORD *)(a4 + 48);
      if ( v13 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 40), v11, v13, 2LL, v21, 1);
        if ( UserModeCallersCopy >= 0 )
        {
          v14 = 1;
          *(_WORD *)(*v10 + 2 * ((unsigned __int64)(unsigned int)*v12 >> 1) - 2) = 0;
          PreviousMode = v21;
          goto LABEL_14;
        }
        *v10 = 0LL;
        *v12 = 0;
        goto LABEL_52;
      }
    }
    else
    {
      v12 = (_DWORD *)(a4 + 48);
    }
    if ( v11 )
    {
      if ( *v12 >= 2u )
        goto LABEL_52;
    }
    else if ( !*v12 )
    {
      goto LABEL_52;
    }
LABEL_50:
    UserModeCallersCopy = -1073741811;
LABEL_52:
    PreviousMode = v21;
  }
  v14 = 0;
LABEL_14:
  if ( UserModeCallersCopy < 0 )
  {
    if ( v19 )
      PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 24));
    if ( v14 )
      PiControlFreeUserModeCallersBuffer(v21, *(void **)(a4 + 40));
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 48) = 0LL;
  }
  return (unsigned int)UserModeCallersCopy;
}
