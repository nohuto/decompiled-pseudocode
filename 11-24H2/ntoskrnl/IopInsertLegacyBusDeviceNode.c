/*
 * XREFs of IopInsertLegacyBusDeviceNode @ 0x140981EE8
 * Callers:
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

void __fastcall IopInsertLegacyBusDeviceNode(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  _QWORD *v8; // rcx
  _QWORD *i; // rdx

  if ( a2 < 18 && a2 > -1 && a2 != 15 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    v7 = 1;
    if ( a2 != 2 )
      v7 = a2;
    v8 = (_QWORD *)((char *)&IopLegacyBusInformationTable + 16 * v7);
    for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i - 43) == a3 )
        goto LABEL_12;
      if ( *((_DWORD *)i - 43) > a3 )
        break;
    }
    *(_QWORD *)(a1 + 632) = i[1];
    *(_QWORD *)(a1 + 624) = i;
    *(_QWORD *)i[1] = a1 + 624;
    i[1] = a1 + 624;
LABEL_12:
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
}
