/*
 * XREFs of PiCMCaptureRegistryPropertyInputData @ 0x1408C5760
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 *     PiCMSetRegistryProperty @ 0x14099B0D8 (PiCMSetRegistryProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408D0150 (PiControlMakeUserModeCallersCopy.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408D0240 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCaptureRegistryPropertyInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v6; // r10d
  int v7; // r14d
  char PreviousMode; // r9
  int UserModeCallersCopy; // edi
  unsigned __int64 v10; // r8
  __int64 v11; // r14
  _DWORD *v12; // r15
  __int64 v13; // rax
  _DWORD *v14; // r15
  unsigned __int64 v16; // r8
  void *Pool2; // rax
  int v18; // r8d
  int v19; // [rsp+38h] [rbp-40h]
  char v20; // [rsp+80h] [rbp+8h]

  v6 = 0;
  v19 = 0;
  v7 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_24;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = a1 + a2;
    if ( v16 > 0x7FFFFFFF0000LL || v16 < a1 )
      UserModeCallersCopy = 0;
    if ( a2 < 0x28 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else if ( *(_DWORD *)a1 == 40 )
    {
      *(_DWORD *)a4 = 56;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 16) = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a4 + 40) = *(unsigned int *)(a1 + 28);
      *(_DWORD *)(a4 + 48) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a4 + 52) = *(_DWORD *)(a1 + 36);
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
    v10 = a1 + a2;
    if ( v10 > 0x7FFFFFFF0000LL || v10 < a1 )
      UserModeCallersCopy = 0;
    if ( a2 < 0x38
      || (*(_OWORD *)a4 = *(_OWORD *)a1,
          *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16),
          *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32),
          *(_QWORD *)(a4 + 48) = *(_QWORD *)(a1 + 48),
          *(_DWORD *)a4 != 56) )
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v11 = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v11 )
    {
      v12 = (_DWORD *)(a4 + 24);
      if ( *(_DWORD *)(a4 + 24) >= 2u )
      {
        if ( PreviousMode )
        {
          Pool2 = (void *)ExAllocatePool2(0x101uLL);
          *(_QWORD *)(a4 + 16) = Pool2;
          if ( Pool2 )
          {
            UserModeCallersCopy = PiControlCopyUserModeCallersBuffer(Pool2, v20, 1);
            if ( UserModeCallersCopy < 0 )
            {
              ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
              *(_QWORD *)(a4 + 16) = 0LL;
            }
            v6 = 0;
            PreviousMode = v20;
          }
          else
          {
            UserModeCallersCopy = -1073741670;
            v6 = 0;
            PreviousMode = v20;
          }
        }
        else
        {
          *(_QWORD *)(a4 + 16) = v11;
          UserModeCallersCopy = 0;
        }
        if ( UserModeCallersCopy < 0 )
        {
          *(_QWORD *)(a4 + 16) = 0LL;
          *v12 = 0;
        }
        else
        {
          v6 = 1;
          v19 = 1;
          *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)(unsigned int)*v12 >> 1) - 2) = 0;
        }
LABEL_19:
        v13 = *(_QWORD *)(a4 + 40);
        *(_QWORD *)(a4 + 40) = 0LL;
        if ( !v13 )
        {
          v14 = (_DWORD *)(a4 + 48);
          goto LABEL_21;
        }
        v14 = (_DWORD *)(a4 + 48);
        v18 = *(_DWORD *)(a4 + 48);
        if ( !v18 )
        {
LABEL_21:
          if ( v13 )
          {
            if ( *v14 )
              goto LABEL_23;
          }
          else if ( !*v14 )
          {
LABEL_23:
            v7 = 0;
            goto LABEL_24;
          }
LABEL_43:
          UserModeCallersCopy = -1073741811;
          goto LABEL_23;
        }
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 40, v13, v18, 1, PreviousMode, 1);
        v6 = v19;
        if ( UserModeCallersCopy < 0 )
        {
          *(_QWORD *)(a4 + 40) = 0LL;
          *v14 = 0;
          goto LABEL_23;
        }
        v7 = 1;
LABEL_24:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_56;
      }
    }
    else
    {
      v12 = (_DWORD *)(a4 + 24);
    }
    if ( v11 )
    {
      if ( *v12 < 2u )
        goto LABEL_43;
    }
    else if ( *v12 )
    {
      goto LABEL_43;
    }
    goto LABEL_19;
  }
LABEL_56:
  if ( v6 )
    PiControlFreeUserModeCallersBuffer(v20, *(void **)(a4 + 16));
  if ( v7 )
    PiControlFreeUserModeCallersBuffer(v20, *(void **)(a4 + 40));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
