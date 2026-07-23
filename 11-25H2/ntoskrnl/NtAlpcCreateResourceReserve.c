/*
 * XREFs of NtAlpcCreateResourceReserve @ 0x1408AE790
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 */

NTSTATUS __cdecl NtAlpcCreateResourceReserve(
        HANDLE PortHandle,
        ULONG Flags,
        SIZE_T MessageSize,
        PALPC_HANDLE ResourceId)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  int v9; // ebx
  SIZE_T v10; // rdx
  PVOID v11; // rdi
  __int64 v13; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v9 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ResourceId < 0x7FFFFFFF0000LL )
        v13 = (__int64)ResourceId;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v10 = MessageSize;
      v11 = Object;
      v9 = AlpcpCreateReserve(Object, v10, &v15);
      if ( v9 >= 0 )
        *(_DWORD *)ResourceId = v15 | 0x80000000;
      ObfDereferenceObject(v11);
    }
  }
  KeLeaveCriticalRegion();
  return v9;
}
