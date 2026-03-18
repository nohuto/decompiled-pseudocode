/*
 * XREFs of CmpInitializeRegistryProcess @ 0x1407C8AB0
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     ExInitializeLookasideListEx @ 0x140460C50 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleInitialize @ 0x14065CEDC (CmSiProcessTupleInitialize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x14065CEFC (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14065D024 (CmSiSetProcessWorkingSetMaximum.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x14069B4C0 (ZwSetInformationProcess.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x1407C88A0 (CmpCreateRegistryProcessToken.c)
 *     CmpCreateRegistryThread @ 0x1407C8A04 (CmpCreateRegistryThread.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  void *v0; // rdi
  int RegistryThread; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  HANDLE Handle[2]; // [rsp+60h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF
  void *v7; // [rsp+98h] [rbp+28h] BYREF
  HANDLE v8; // [rsp+A0h] [rbp+30h] BYREF

  Object = 0LL;
  v0 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  *(_OWORD *)Handle = 0LL;
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
                       &v7);
    if ( RegistryThread < 0
      || (RegistryThread = ObOpenObjectByPointer(Object, 0x200u, 0LL, 1u, (POBJECT_TYPE)SeTokenObjectType, 0, Handle),
          RegistryThread < 0) )
    {
      v0 = v7;
    }
    else
    {
      v0 = v7;
      RegistryThread = ZwSetInformationProcess((__int64)v7, 9LL);
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
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v8 )
    ZwClose(v8);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)RegistryThread;
}
