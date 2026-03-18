/*
 * XREFs of PiCMCaptureInterfaceListInputData @ 0x1409FE9F0
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x1409FE7EC (PiCMGetDeviceInterfaceList.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408D0150 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureInterfaceListInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r12d
  char PreviousMode; // r13
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r15
  void *v10; // rdx
  _DWORD *v11; // r14
  unsigned __int64 v13; // r8
  unsigned int v14; // r8d

  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < a1 )
      UserModeCallersCopy = 0;
    if ( a2 >= 0x24 && *(_DWORD *)a1 == 36 )
    {
      *(_DWORD *)a4 = 40;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 24) = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a4 + 36) = *(_DWORD *)(a1 + 32);
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
    if ( a2 < 0x28 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_37;
  v9 = (_QWORD *)(a4 + 24);
  v10 = *(void **)(a4 + 24);
  *(_QWORD *)(a4 + 24) = 0LL;
  if ( v10 )
  {
    v11 = (_DWORD *)(a4 + 32);
    v14 = *(_DWORD *)(a4 + 32);
    if ( v14 >= 2 )
    {
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v10, v14, 2LL, PreviousMode, 1);
      if ( UserModeCallersCopy < 0 )
      {
        *v9 = 0LL;
        *v11 = 0;
      }
      else
      {
        v5 = 1;
        *(_WORD *)(*v9 + 2 * ((unsigned __int64)(unsigned int)*v11 >> 1) - 2) = 0;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v11 = (_DWORD *)(a4 + 32);
  }
  if ( !v10 )
  {
    if ( !*v11 )
      goto LABEL_19;
    goto LABEL_36;
  }
  if ( *v11 >= 2u )
  {
LABEL_19:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_37;
  }
LABEL_36:
  UserModeCallersCopy = -1073741811;
LABEL_37:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 24));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
