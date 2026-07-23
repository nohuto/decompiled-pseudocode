/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x14073FA50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcReferenceBlobByHandle @ 0x140896580 (AlpcReferenceBlobByHandle.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14089E840 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089EB0C (AlpcpLockBlobExclusive.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

NTSTATUS __cdecl NtAlpcRevokeSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  PVOID v6; // rsi
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  int v9; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

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
      v6 = Object;
      v7 = AlpcReferenceBlobByHandle(*((_QWORD *)Object + 2) + 40LL, ContextHandle, AlpcSecurityType);
      v8 = v7;
      if ( v7 )
      {
        if ( v6 == *(PVOID *)(v7 + 24) )
        {
          AlpcpLockBlobExclusive(v7);
          v9 = *(_DWORD *)(v8 + 104);
          if ( (v9 & 2) != 0 )
          {
            v5 = -1073741823;
          }
          else
          {
            *(_DWORD *)(v8 + 104) = v9 | 1;
            v5 = 0;
          }
          AlpcpUnlockBlobUncachedExclusive(v8);
        }
        else
        {
          v5 = -1073741790;
        }
        AlpcpDereferenceBlobEx(v8);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  KeLeaveCriticalRegion();
  return v5;
}
