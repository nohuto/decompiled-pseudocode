/*
 * XREFs of CmpInitializeSystemHivesLoad @ 0x1407CAC9C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     CmpCreateRegistryThread @ 0x1407D819C (CmpCreateRegistryThread.c)
 */

void CmpInitializeSystemHivesLoad()
{
  __int64 v0; // rdx
  unsigned int i; // ebx
  __int64 v2; // rcx
  int v3; // eax
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  BYTE1(NlsMbOemCodePageTag) = 0;
  KeInitializeEvent(&CmpLoadWorkerEvent, SynchronizationEvent, 0);
  KeInitializeEvent(&CmpLoadWorkerDebugEvent, SynchronizationEvent, 0);
  for ( i = 0; i < 7; ++i )
  {
    v2 = 23LL * i;
    if ( ((__int64)CmpMachineHiveList[v2 + 4] & 1) != 0
      || CmpInitRmLogOnLoad
      || CmpForceSynchronousMachineHiveLoad
      || ((i - 2) & 0xFFFFFFFA) == 0 )
    {
      KeSetEvent((PRKEVENT)&CmpMachineHiveList[v2 + 8], 0, 0);
    }
    v3 = CmpCreateRegistryThread(&Handle, v0, CmpLoadHiveThread, i);
    if ( v3 < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, i, v3);
    ZwClose(Handle);
  }
}
