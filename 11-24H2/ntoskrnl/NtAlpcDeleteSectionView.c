/*
 * XREFs of NtAlpcDeleteSectionView @ 0x140A19B40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcpDeleteView @ 0x14089CE2C (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpEnumerateResourcesPort @ 0x1409E1B20 (AlpcpEnumerateResourcesPort.c)
 */

NTSTATUS __cdecl NtAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  struct _KTHREAD *CurrentThread; // rax
  signed int v5; // ebx
  signed __int64 *v6; // rbx
  __int64 v7; // rdx
  char *v8; // rdi
  __int64 v9; // r8
  int v10; // edi
  ULONG_PTR v11; // rdi
  char v12; // bl
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = (signed __int64 *)((char *)Object + 352);
      BugCheckParameter2[1] = 0LL;
      BugCheckParameter2[0] = (ULONG_PTR)ViewBase;
      do
      {
        v8 = (char *)KeAbPreAcquire((__int64)v6, 0LL);
        if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v6, 0, v8, (__int64)v6);
        if ( v8 )
          v8[10] = 1;
        v10 = AlpcpEnumerateResourcesPort((__int64)Object, v7, v9, (__int64)BugCheckParameter2);
        if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v6);
        KeAbPostRelease((ULONG_PTR)v6);
      }
      while ( v10 == -1073741267 );
      v11 = BugCheckParameter2[1];
      if ( BugCheckParameter2[1] )
      {
        v12 = AlpcpDeleteView(BugCheckParameter2[1]);
        AlpcpDereferenceBlobEx(v11, 1);
        v5 = v12 == 0 ? 0xC0000056 : 0;
      }
      else
      {
        v5 = -1073741503;
      }
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return v5;
}
