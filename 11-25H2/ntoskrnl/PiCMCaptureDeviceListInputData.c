/*
 * XREFs of PiCMCaptureDeviceListInputData @ 0x14095EFEC
 * Callers:
 *     PiCMGetDeviceIdList @ 0x14095ED28 (PiCMGetDeviceIdList.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDCA0 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureDeviceListInputData(_DWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r12d
  char PreviousMode; // r13
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r15
  void *v10; // rdx
  _DWORD *v11; // r14
  unsigned int v12; // r8d
  unsigned __int64 v14; // r8

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
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (unsigned __int64)a1 + a2;
    if ( v14 > 0x7FFFFFFF0000LL || v14 < (unsigned __int64)a1 )
      UserModeCallersCopy = 0;
    if ( a2 >= 0x14 && *a1 == 20 )
    {
      *(_DWORD *)a4 = 24;
      *(_DWORD *)(a4 + 4) = a1[1];
      *(_QWORD *)(a4 + 8) = (unsigned int)a1[2];
      *(_DWORD *)(a4 + 16) = a1[3];
      *(_DWORD *)(a4 + 20) = a1[4];
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
    if ( a2 < 0x18 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_QWORD *)(a4 + 16) = *((_QWORD *)a1 + 2);
      if ( *(_DWORD *)a4 != 24 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v9 = (_QWORD *)(a4 + 8);
    v10 = *(void **)(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    if ( v10 )
    {
      v11 = (_DWORD *)(a4 + 16);
      v12 = *(_DWORD *)(a4 + 16);
      if ( v12 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 8), v10, v12, 2LL, PreviousMode, 1);
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
LABEL_19:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_36;
      }
    }
    else
    {
      v11 = (_DWORD *)(a4 + 16);
    }
    if ( v10 )
    {
      if ( *v11 >= 2u )
        goto LABEL_19;
    }
    else if ( !*v11 )
    {
      goto LABEL_19;
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_36:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 8));
  *(_OWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
