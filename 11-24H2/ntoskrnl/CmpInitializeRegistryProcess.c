/*
 * XREFs of CmpInitializeRegistryProcess @ 0x1407D87A0
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     ExInitializeLookasideListEx @ 0x140454AF0 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleInitialize @ 0x140669B84 (CmSiProcessTupleInitialize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x140669BA4 (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140669CCC (CmSiSetProcessWorkingSetMaximum.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1406A7730 (ZwSetInformationProcess.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x1407D858C (CmpCreateRegistryProcessToken.c)
 *     CmpCreateRegistryThread @ 0x1407D86F0 (CmpCreateRegistryThread.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  int RegistryThread; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  HANDLE ProcessInformation[2]; // [rsp+60h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF
  HANDLE ProcessHandle; // [rsp+98h] [rbp+28h] BYREF
  HANDLE v8; // [rsp+A0h] [rbp+30h] BYREF

  Object = 0LL;
  v0 = 0LL;
  ProcessHandle = 0LL;
  v8 = 0LL;
  *(_OWORD *)ProcessInformation = 0LL;
  CmSiProcessTupleInitialize();
  RegistryThread = CmpCreateRegistryProcessToken(&Object);
  if ( RegistryThread >= 0 )
  {
    RegistryThread = PsCreateMinimalProcess(
                       (__int64)PsInitialSystemProcess,
                       (__int64)&CmRegistryProcessName,
                       0LL,
                       BYTE2(PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1]),
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       0LL,
                       0LL,
                       &ProcessHandle);
    if ( RegistryThread < 0
      || (RegistryThread = ObOpenObjectByPointer(
                             Object,
                             0x200u,
                             0LL,
                             1u,
                             (POBJECT_TYPE)SeTokenObjectType,
                             0,
                             ProcessInformation),
          RegistryThread < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      RegistryThread = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( RegistryThread >= 0 )
      {
        RegistryThread = CmSiProcessTupleStartFromHandle(v2, v0);
        if ( RegistryThread >= 0 )
        {
          v0 = 0LL;
          CmSiSetProcessWorkingSetMaximum();
          KeInitializeEvent(&CmpDummyThreadEvent, SynchronizationEvent, 0);
          RegistryThread = CmpCreateRegistryThread((__int64)&v8, v3, (__int64)CmpDummyThreadRoutine, 0LL);
          if ( RegistryThread >= 0 )
          {
            RegistryThread = ExInitializeLookasideListEx(
                               &CmpBounceBufferLookaside,
                               (PALLOCATE_FUNCTION_EX)CmpAllocatePoolLookaside,
                               (PFREE_FUNCTION_EX)CmSiFreeMemory,
                               PagedPool,
                               0,
                               0x1000uLL,
                               0x42424D43u,
                               0);
            if ( RegistryThread >= 0 )
              RegistryThread = 0;
          }
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( ProcessInformation[0] )
    ZwClose(ProcessInformation[0]);
  if ( v8 )
    ZwClose(v8);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)RegistryThread;
}
