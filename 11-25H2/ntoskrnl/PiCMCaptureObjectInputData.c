/*
 * XREFs of PiCMCaptureObjectInputData @ 0x140934730
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406ECB2C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406ECC34 (PiCMCreateObject.c)
 *     PiCMGetObjectList @ 0x140933C1C (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409342F0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiCMGetDeviceStatus @ 0x1409A8E24 (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A62ED8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMGetDeviceDepth @ 0x140A7C4B4 (PiCMGetDeviceDepth.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140AB8E44 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABBD2C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABC48C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABC5BC (PiCMDeleteObject.c)
 *     PiCMDeleteDevice @ 0x140AC08A4 (PiCMDeleteDevice.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDD90 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r9d
  char PreviousMode; // r13
  int v7; // edi
  unsigned __int64 v8; // r8
  const void *v9; // rsi
  _DWORD *v10; // r15
  unsigned int v11; // r12d
  char *Pool2; // rax
  unsigned __int64 v14; // r8

  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = 0;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = a1 + a2;
      if ( v14 > 0x7FFFFFFF0000LL || v14 < a1 )
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
    v9 = *(const void **)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v9 )
    {
      v10 = (_DWORD *)(a4 + 24);
      v11 = *(_DWORD *)(a4 + 24);
      if ( v11 >= 2 )
      {
        if ( PreviousMode )
        {
          Pool2 = (char *)ExAllocatePool2(0x101uLL);
          *(_QWORD *)(a4 + 16) = Pool2;
          if ( Pool2 )
          {
            v7 = PiControlCopyUserModeCallersBuffer(Pool2, v9, v11, 2, PreviousMode, 1);
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
