/*
 * XREFs of ACPIAssociateWakeInterrupt @ 0x140033F48
 * Callers:
 *     ACPIWakeEmulationEnable @ 0x1400344E0 (ACPIWakeEmulationEnable.c)
 * Callees:
 *     ACPIDereferenceWakeInterrupt @ 0x140034294 (ACPIDereferenceWakeInterrupt.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x140034330 (ACPIDelayedFreeWakeInterrupt.c)
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1400344A0 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 *     memset @ 0x140070F40 (memset.c)
 *     ACPIConnectWakeInterrupt @ 0x140096FB8 (ACPIConnectWakeInterrupt.c)
 */

__int64 __fastcall ACPIAssociateWakeInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r13
  KIRQL v4; // al
  KIRQL v5; // si
  unsigned int v7; // r15d
  PVOID v8; // r12
  PVOID *i; // rbx
  int v10; // eax
  int v11; // edi
  PVOID *v12; // rcx
  int v13; // eax
  KIRQL v14; // bp
  PVOID *v15; // rax
  PVOID *v16; // rax
  PVOID **v17; // rax
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  PVOID v19; // [rsp+38h] [rbp-30h]
  PVOID *v20; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  LODWORD(v19) = 0;
  v18 = 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v5 = v4;
  if ( *(_DWORD *)(v1 + 108) )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v4);
    return 3221225760LL;
  }
  v7 = *(_DWORD *)(a1 + 24);
  v8 = *(PVOID *)(a1 + 32);
  for ( i = (PVOID *)AcpiPowerWaitWakeInterruptList; ; i = (PVOID *)*i )
  {
    if ( i == &AcpiPowerWaitWakeInterruptList )
    {
      v15 = (PVOID *)ExAllocateFromNPagedLookasideList(&WakeInterruptLookAsideList);
      i = v15;
      if ( !v15 )
      {
        v11 = -1073741670;
        KeReleaseSpinLock(&AcpiPowerLock, v5);
        return (unsigned int)v11;
      }
      memset(v15, 0, 0x60uLL);
      i[1] = i;
      *i = i;
      i[3] = i + 2;
      i[2] = i + 2;
      *((_DWORD *)i + 8) = v7;
      *((_DWORD *)i + 9) = *(_DWORD *)(a1 + 28);
      i[5] = v8;
      *((_DWORD *)i + 14) = 0;
      KeInitializeEvent((PRKEVENT)(i + 8), SynchronizationEvent, 0);
      *((_DWORD *)i + 22) = 2;
      v16 = (PVOID *)i[3];
      if ( *v16 == i + 2 )
      {
        *(_QWORD *)a1 = i + 2;
        *(_QWORD *)(a1 + 8) = v16;
        *v16 = (PVOID)a1;
        i[3] = (PVOID)a1;
        v17 = (PVOID **)qword_140089B58;
        if ( *(PVOID **)qword_140089B58 == &AcpiPowerWaitWakeInterruptList )
        {
          *i = &AcpiPowerWaitWakeInterruptList;
          i[1] = v17;
          *v17 = i;
          qword_140089B58 = (__int64)i;
          v20 = i;
          goto LABEL_24;
        }
      }
LABEL_30:
      __fastfail(3u);
    }
    if ( *((_DWORD *)i + 8) == v7 && i[5] == v8 )
      break;
  }
  v10 = *(_DWORD *)(a1 + 28);
  v20 = i;
  if ( *((_DWORD *)i + 9) != v10 )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v5);
    return (unsigned int)-1073741637;
  }
  *((_DWORD *)i + 22) += 2;
  v12 = (PVOID *)i[3];
  if ( *v12 != i + 2 )
    goto LABEL_30;
  *(_QWORD *)a1 = i + 2;
  *(_QWORD *)(a1 + 8) = v12;
  *v12 = (PVOID)a1;
  i[3] = (PVOID)a1;
  if ( *((int *)i + 14) < 2 )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v5);
    KeWaitForSingleObject(i + 8, Executive, 0, 0, 0LL);
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    goto LABEL_13;
  }
  if ( !(unsigned __int8)OSPowerTryAcquireWakeInterruptChangeStateLock(i) )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v5);
    v11 = -1073741823;
    goto LABEL_28;
  }
LABEL_13:
  v13 = *((_DWORD *)i + 14);
  v14 = v5;
  if ( v13 == 3 )
  {
    KeSetEvent((PRKEVENT)(i + 8), 0, 0);
    KeReleaseSpinLock(&AcpiPowerLock, v5);
    v11 = 0;
    goto LABEL_28;
  }
  *((_DWORD *)i + 14) = 0;
  if ( v13 == 4 )
  {
    LODWORD(v18) = 1;
    v19 = i[6];
    IoReportInterruptActive(&v18);
    v11 = 0;
    goto LABEL_25;
  }
LABEL_24:
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  v11 = ACPIConnectWakeInterrupt(v3, i);
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( v11 < 0 )
    *((_DWORD *)i + 14) = 5;
  else
LABEL_25:
    *((_DWORD *)i + 14) = 3;
  KeSetEvent((PRKEVENT)(i + 8), 0, 0);
  KeReleaseSpinLock(&AcpiPowerLock, v14);
LABEL_28:
  ACPIDereferenceWakeInterrupt(&v20);
  ACPIDelayedFreeWakeInterrupt(v7, v8);
  return (unsigned int)v11;
}
