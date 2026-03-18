/*
 * XREFs of PiCMCaptureRegistryInputData @ 0x140963DF8
 * Callers:
 *     PiCMOpenClassKey @ 0x140963498 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14096372C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x1409638F0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140963AF8 (PiCMOpenObjectKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408D0240 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCaptureRegistryInputData(_DWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // r13
  int v6; // ebx
  unsigned __int64 v7; // r8
  const void *v8; // r15
  _DWORD *v9; // r14
  unsigned int v10; // r12d
  char *Pool2; // rax
  unsigned __int64 v13; // r8
  int v14; // [rsp+34h] [rbp-44h]

  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  if ( !a1 || !a2 )
  {
    v6 = -1073741811;
    goto LABEL_21;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int64)a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)a1 )
      v6 = 0;
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
      v6 = -1073741811;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)a1 + a2;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)a1 )
      v6 = 0;
    if ( a2 < 0x30 )
    {
      v6 = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)a1 + 1);
      *(_OWORD *)(a4 + 32) = *((_OWORD *)a1 + 2);
      if ( *(_DWORD *)a4 != 48 )
        v6 = -1073741811;
    }
  }
  if ( v6 >= 0 )
  {
    v8 = *(const void **)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v8 )
    {
      v9 = (_DWORD *)(a4 + 24);
      v10 = *(_DWORD *)(a4 + 24);
      if ( v10 >= 2 )
      {
        if ( PreviousMode )
        {
          Pool2 = (char *)ExAllocatePool2(0x101uLL);
          *(_QWORD *)(a4 + 16) = Pool2;
          if ( Pool2 )
          {
            v6 = PiControlCopyUserModeCallersBuffer(Pool2, v8, v10, 2, PreviousMode, 1);
            if ( v6 < 0 )
            {
              ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
              *(_QWORD *)(a4 + 16) = 0LL;
            }
          }
          else
          {
            v6 = -1073741670;
          }
        }
        else
        {
          *(_QWORD *)(a4 + 16) = v8;
          v6 = 0;
        }
        if ( v6 < 0 )
        {
          *(_QWORD *)(a4 + 16) = 0LL;
          *v9 = 0;
        }
        else
        {
          v14 = 1;
          *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)(unsigned int)*v9 >> 1) - 2) = 0;
        }
LABEL_21:
        if ( v6 >= 0 )
          return (unsigned int)v6;
        goto LABEL_39;
      }
    }
    else
    {
      v9 = (_DWORD *)(a4 + 24);
    }
    if ( v8 )
    {
      if ( *v9 >= 2u )
        goto LABEL_21;
    }
    else if ( !*v9 )
    {
      goto LABEL_21;
    }
    v6 = -1073741811;
  }
LABEL_39:
  if ( v14 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  return (unsigned int)v6;
}
