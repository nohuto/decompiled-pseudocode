/*
 * XREFs of NtAlpcDisconnectPort @ 0x14098B290
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 */

NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    v3 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v3 = AlpcpDisconnectPort(Object);
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return v3;
}
