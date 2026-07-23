/*
 * XREFs of ExRegisterBootDevice @ 0x1406542F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExRegisterBootDevice(__int64 a1, __int64 *a2)
{
  NTSTATUS v4; // ebx
  __int64 Pool2; // rsi
  void *v6; // rcx
  KIRQL v7; // al
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF

  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = 0;
  KeWaitForSingleObject(&ExExternalBootSupportInitializationEvent, Executive, 0, 0, 0LL);
  if ( !ExBootDeviceRemovalHandler )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ExpWaitForBootDevices, 0LL);
    if ( v4 >= 0 )
    {
      Object = 0LL;
      v4 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      ExBootDeviceRemovalHandler = (PKTHREAD)Object;
      ZwClose(ThreadHandle);
      KeSetPriorityThread(ExBootDeviceRemovalHandler, 31);
    }
  }
  KeSetEvent(&ExExternalBootSupportInitializationEvent, 0, 0);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)a1 == 1 && *(_QWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 4) && *(_QWORD *)(a1 + 24) )
    {
      Pool2 = ExAllocatePool2(0x40uLL, 0x40uLL, 0x504E4442u);
      if ( Pool2 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
        v6 = *(void **)(a1 + 16);
        if ( v6 )
          ObfReferenceObjectWithTag(v6, 0x746C6644u);
        *(_DWORD *)Pool2 = 1347306562;
        *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a1;
        *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a1 + 16);
        *(_QWORD *)(Pool2 + 56) = *(_QWORD *)(a1 + 32);
        v7 = KeAcquireSpinLockRaiseToDpc(&ExBootDeviceListSpinLock);
        v8 = (_QWORD *)qword_140EFAA68;
        v9 = (_QWORD *)(Pool2 + 8);
        if ( *(__int64 **)qword_140EFAA68 != &ExBootDeviceList )
          __fastfail(3u);
        *(_QWORD *)(Pool2 + 16) = qword_140EFAA68;
        *v9 = &ExBootDeviceList;
        *v8 = v9;
        qword_140EFAA68 = Pool2 + 8;
        KeReleaseSpinLock(&ExBootDeviceListSpinLock, v7);
        *a2 = Pool2;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
