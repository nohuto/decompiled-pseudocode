/*
 * XREFs of NtAlpcDeleteResourceReserve @ 0x140895430
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcReferenceBlobByHandle @ 0x140896580 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteBlob @ 0x14089CCE0 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

NTSTATUS __cdecl NtAlpcDeleteResourceReserve(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ResourceId)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edi
  int v5; // ebx
  PVOID v6; // rsi
  __int64 v7; // rdx
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)ResourceId;
  --CurrentThread->KernelApcDisable;
  if ( Flags || (int)ResourceId >= 0 )
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
      v7 = v4;
      LODWORD(v7) = v4 & 0x7FFFFFFF;
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
  return v5;
}
