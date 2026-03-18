/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x1408AD540
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcReferenceBlobByHandle @ 0x1408AF5B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteBlob @ 0x1408AF738 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall NtAlpcDeleteResourceReserve(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  PVOID v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  ULONG_PTR v9; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 || a3 >= 0 )
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
      v7 = (unsigned int)a3;
      LODWORD(v7) = a3 & 0x7FFFFFFF;
      v8 = AlpcReferenceBlobByHandle(*((_QWORD *)Object + 2) + 40LL, v7, AlpcReserveType);
      v9 = v8;
      if ( v8 )
      {
        if ( (unsigned __int8)AlpcpDeleteBlob(v8) )
          AlpcpDereferenceBlobEx(v9);
        else
          v5 = -1073741738;
        AlpcpDereferenceBlobEx(v9);
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
