/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x140741B20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x1408938D0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x1408963A0 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089666C (AlpcpLockBlobExclusive.c)
 */

__int64 __fastcall NtAlpcRevokeSecurityContext(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  PVOID v6; // rsi
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  int v9; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

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
      v6 = Object;
      v7 = AlpcReferenceBlobByHandle(*((_QWORD *)Object + 2) + 40LL, a3, AlpcSecurityType);
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
  return (unsigned int)v5;
}
