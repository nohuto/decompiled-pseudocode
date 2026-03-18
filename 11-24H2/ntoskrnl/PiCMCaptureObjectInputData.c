/*
 * XREFs of PiCMCaptureObjectInputData @ 0x1408BEB90
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406F82B8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406F83C0 (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x1406F8578 (PiCMDeleteDevice.c)
 *     PiCMGetDeviceStatus @ 0x1408BD37C (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1408BE080 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BE750 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A65294 (PiCMGetObjectPropertyKeys.c)
 *     PiCMGetDeviceDepth @ 0x140A7FAEC (PiCMGetDeviceDepth.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140ABCF28 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140AC00A8 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140AC0780 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140AC08B0 (PiCMDeleteObject.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408D0240 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r9d
  char PreviousMode; // r13
  int v7; // edi
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  _DWORD *v10; // r15
  void *Pool2; // rax
  unsigned __int64 v13; // r8

  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = 0;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = a1 + a2;
      if ( v13 > 0x7FFFFFFF0000LL || v13 < a1 )
        v7 = 0;
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
          v7 = -1073741811;
        }
      }
      else
      {
        v7 = -1073741811;
      }
    }
    else
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = a1 + a2;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
        v7 = 0;
      if ( a2 < 0x28
        || (*(_OWORD *)a4 = *(_OWORD *)a1,
            *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16),
            *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 32),
            *(_DWORD *)a4 != 40) )
      {
        v7 = -1073741811;
      }
    }
    if ( v7 < 0 )
      goto LABEL_31;
    v9 = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v9 )
    {
      v10 = (_DWORD *)(a4 + 24);
      if ( *(_DWORD *)(a4 + 24) >= 2u )
      {
        if ( PreviousMode )
        {
          Pool2 = (void *)ExAllocatePool2(0x101uLL);
          *(_QWORD *)(a4 + 16) = Pool2;
          if ( Pool2 )
          {
            v7 = PiControlCopyUserModeCallersBuffer(Pool2, PreviousMode, 1);
            if ( v7 < 0 )
            {
              ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
              *(_QWORD *)(a4 + 16) = 0LL;
            }
            v5 = 0;
          }
          else
          {
            v7 = -1073741670;
            v5 = 0;
          }
        }
        else
        {
          *(_QWORD *)(a4 + 16) = v9;
          v7 = 0;
        }
        if ( v7 < 0 )
        {
          *(_QWORD *)(a4 + 16) = 0LL;
          *v10 = 0;
        }
        else
        {
          v5 = 1;
          *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)(unsigned int)*v10 >> 1) - 2) = 0;
        }
LABEL_19:
        if ( v7 >= 0 )
          return (unsigned int)v7;
        goto LABEL_31;
      }
    }
    else
    {
      v10 = (_DWORD *)(a4 + 24);
    }
    if ( v9 )
    {
      if ( *v10 >= 2u )
        goto LABEL_19;
    }
    else if ( !*v10 )
    {
      goto LABEL_19;
    }
  }
  v7 = -1073741811;
LABEL_31:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)v7;
}
