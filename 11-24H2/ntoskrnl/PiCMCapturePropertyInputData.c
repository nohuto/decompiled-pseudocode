/*
 * XREFs of PiCMCapturePropertyInputData @ 0x1408C5220
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 *     PiCMSetObjectProperty @ 0x1409F75AC (PiCMSetObjectProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408D0150 (PiControlMakeUserModeCallersCopy.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408D0240 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCapturePropertyInputData(unsigned __int64 a1, unsigned int a2, int a3, char *a4)
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
  void *Pool2; // rcx
  unsigned __int64 v17; // r8
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
    v17 = a1 + a2;
    if ( v17 > 0x7FFFFFFF0000LL || v17 < a1 )
      UserModeCallersCopy = 0;
    if ( a2 >= 0x38 )
    {
      if ( *(_DWORD *)a1 == 56 )
      {
        *(_DWORD *)a4 = 72;
        *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
        *((_DWORD *)a4 + 2) = *(_DWORD *)(a1 + 8);
        *((_QWORD *)a4 + 2) = *(unsigned int *)(a1 + 12);
        *((_DWORD *)a4 + 6) = *(_DWORD *)(a1 + 16);
        *(_OWORD *)(a4 + 28) = *(_OWORD *)(a1 + 20);
        *((_DWORD *)a4 + 11) = *(_DWORD *)(a1 + 36);
        *((_DWORD *)a4 + 12) = *(_DWORD *)(a1 + 40);
        *((_QWORD *)a4 + 7) = *(unsigned int *)(a1 + 44);
        *((_DWORD *)a4 + 16) = *(_DWORD *)(a1 + 48);
        *((_DWORD *)a4 + 17) = *(_DWORD *)(a1 + 52);
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
    v10 = a1 + a2;
    if ( v10 > 0x7FFFFFFF0000LL || v10 < a1 )
      UserModeCallersCopy = 0;
    if ( a2 < 0x48
      || (*(_OWORD *)a4 = *(_OWORD *)a1,
          *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 16),
          *((_OWORD *)a4 + 2) = *(_OWORD *)(a1 + 32),
          *((_OWORD *)a4 + 3) = *(_OWORD *)(a1 + 48),
          *((_QWORD *)a4 + 8) = *(_QWORD *)(a1 + 64),
          *(_DWORD *)a4 != 72) )
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v11 = *((_QWORD *)a4 + 2);
    *((_QWORD *)a4 + 2) = 0LL;
    if ( v11 )
    {
      v12 = a4 + 24;
      if ( *((_DWORD *)a4 + 6) >= 2u )
      {
        if ( PreviousMode )
        {
          Pool2 = (void *)ExAllocatePool2(0x101uLL);
          *((_QWORD *)a4 + 2) = Pool2;
          if ( Pool2 )
          {
            UserModeCallersCopy = PiControlCopyUserModeCallersBuffer(Pool2, v20, 1);
            if ( UserModeCallersCopy < 0 )
            {
              ExFreePoolWithTag(*((PVOID *)a4 + 2), 0);
              *((_QWORD *)a4 + 2) = 0LL;
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
          *((_QWORD *)a4 + 2) = v11;
          UserModeCallersCopy = 0;
        }
        if ( UserModeCallersCopy < 0 )
        {
          *((_QWORD *)a4 + 2) = 0LL;
          *v12 = 0;
        }
        else
        {
          v6 = 1;
          v19 = 1;
          *(_WORD *)(*((_QWORD *)a4 + 2) + 2 * ((unsigned __int64)(unsigned int)*v12 >> 1) - 2) = 0;
        }
LABEL_19:
        v13 = *((_QWORD *)a4 + 7);
        *((_QWORD *)a4 + 7) = 0LL;
        if ( !v13 )
        {
          v14 = a4 + 64;
          goto LABEL_21;
        }
        v14 = a4 + 64;
        v18 = *((_DWORD *)a4 + 16);
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
LABEL_44:
          UserModeCallersCopy = -1073741811;
          goto LABEL_23;
        }
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 56, v13, v18, 1, PreviousMode, 1);
        v6 = v19;
        if ( UserModeCallersCopy < 0 )
        {
          *((_QWORD *)a4 + 7) = 0LL;
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
      v12 = a4 + 24;
    }
    if ( v11 )
    {
      if ( *v12 < 2u )
        goto LABEL_44;
    }
    else if ( *v12 )
    {
      goto LABEL_44;
    }
    goto LABEL_19;
  }
LABEL_56:
  if ( v6 )
    PiControlFreeUserModeCallersBuffer(v20, *((void **)a4 + 2));
  if ( v7 )
    PiControlFreeUserModeCallersBuffer(v20, *((void **)a4 + 7));
  memset_0(a4, 0, 0x48uLL);
  return (unsigned int)UserModeCallersCopy;
}
