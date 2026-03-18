/*
 * XREFs of NtAlpcDeleteSectionView @ 0x140A25B50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x14089310C (AlpcpDeleteView.c)
 *     AlpcpEnumerateResourcesPort @ 0x1409E6B60 (AlpcpEnumerateResourcesPort.c)
 */

__int64 __fastcall NtAlpcDeleteSectionView(void *a1, int a2, ULONG_PTR a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  signed __int64 *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // r8
  int v10; // edi
  ULONG_PTR v11; // rdi
  char v12; // bl
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = (signed __int64 *)((char *)Object + 352);
      BugCheckParameter2[1] = 0LL;
      BugCheckParameter2[0] = a3;
      do
      {
        v8 = KeAbPreAcquire((__int64)v6, 0LL);
        if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v6, 0, v8, (__int64)v6);
        if ( v8 )
          *((_BYTE *)v8 + 10) = 1;
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
        AlpcpDereferenceBlobEx(v11, 1, v13, v14);
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
  return (unsigned int)v5;
}
