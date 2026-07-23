/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1409A9420
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     PsOpenThread @ 0x14083B940 (PsOpenThread.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1409A96B0 (AlpcpProbeAndCaptureMessageHeader.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderThread(
        PHANDLE ThreadHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  PVOID v14; // rdi
  ULONG_PTR v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  void *v21; // [rsp+40h] [rbp-68h] BYREF
  __int128 v22; // [rsp+48h] [rbp-60h] BYREF
  __int128 v23; // [rsp+58h] [rbp-50h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-40h]
  OBJECT_ATTRIBUTES v25; // [rsp+70h] [rbp-38h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  ClientViewSize = 0LL;
  memset(&v25, 0, 44);
  v21 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v10 >= 0 )
  {
    if ( PreviousMode )
    {
      v12 = 0x7FFFFFFF0000LL;
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
        v13 = (__int64)ThreadHandle;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      AlpcpProbeAndCaptureMessageHeader(PortMessage, &v22);
      if ( (unsigned __int64)ObjectAttributes < 0x7FFFFFFF0000LL )
        v12 = (__int64)ObjectAttributes;
      RtlCopyVolatileMemory(&v25, (const void *)v12, 0x30uLL);
    }
    else
    {
      v22 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      v23 = *(__int128 *)((char *)&PortMessage->8 + 8);
      ClientViewSize = PortMessage->ClientViewSize;
      v25 = *ObjectAttributes;
    }
    v14 = Object;
    v10 = AlpcpLookupMessage((__int64)Object, DWORD2(v23), ClientViewSize, v11, &BugCheckParameter2);
    if ( v10 < 0 )
    {
      ObfDereferenceObject(v14);
    }
    else
    {
      v15 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        ObfDereferenceObject(v14);
        v10 = -1073740029;
      }
      else
      {
        v16 = *(_QWORD **)(BugCheckParameter2 + 32);
        if ( !v16 )
          goto LABEL_18;
        v17 = v16[161] - *((_QWORD *)&v22 + 1);
        if ( !v17 )
          v17 = v16[162] - v23;
        if ( v17 )
        {
LABEL_18:
          AlpcpUnlockMessage(BugCheckParameter2);
          ObfDereferenceObject(v14);
          v10 = -1073741790;
        }
        else
        {
          PsReferenceSiloContext(*(void **)(BugCheckParameter2 + 32));
          AlpcpUnlockMessage(v15);
          v10 = PsOpenThread(
                  (unsigned __int64)&v21,
                  DesiredAccess,
                  (__int64)&v25,
                  (__int128 *)((char *)&v22 + 8),
                  0,
                  PreviousMode);
          ObfDereferenceObject(v16);
          ObfDereferenceObject(v14);
          if ( v10 >= 0 )
            *ThreadHandle = v21;
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return v10;
}
