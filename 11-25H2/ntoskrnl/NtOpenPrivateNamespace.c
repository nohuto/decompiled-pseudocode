/*
 * XREFs of NtOpenPrivateNamespace @ 0x140A068D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A06B28 (ObpCaptureBoundaryDescriptor.c)
 *     ObpLookupNamespaceEntry @ 0x140A06EE4 (ObpLookupNamespaceEntry.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  KPROCESSOR_MODE AccessMode; // r15
  __int64 v7; // rcx
  NTSTATUS result; // eax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rsi
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  void *v18; // rsi
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  unsigned __int64 v21; // rtt
  ULONG Attributes; // [rsp+40h] [rbp-38h]
  NTSTATUS P; // [rsp+48h] [rbp-30h]
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  Attributes = 0;
  if ( AccessMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)NamespaceHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( ObjectAttributes )
    {
      if ( ((unsigned __int8)ObjectAttributes & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      Attributes = ObjectAttributes->Attributes;
    }
  }
  else if ( ObjectAttributes )
  {
    Attributes = ObjectAttributes->Attributes;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (unsigned __int64 *)&CurrentServerSiloGlobals[45];
    v12 = KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[45], 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[45], 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    v14 = ObpLookupNamespaceEntry(&CurrentServerSiloGlobals[8], 0LL);
    ExFreePoolWithTag(0LL, 0x534E624Fu);
    if ( v14 && (v18 = *(void **)(v14 + 16)) != 0LL )
    {
      PsReferenceSiloContext(v18);
      _m_prefetchw(v11);
      v19 = *v11;
      v20 = *v11 - 16;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v20 = 0LL;
      if ( (v19 & 2) != 0
        || (v21 = *v11, v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v20, v19)) )
      {
        ExfReleasePushLock(v11);
      }
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      P = ObOpenObjectByPointer(
            v18,
            Attributes & (AccessMode != 0 ? 7666 : 73714),
            0LL,
            DesiredAccess,
            ObpDirectoryObjectType,
            AccessMode,
            &Handle);
      ObfDereferenceObject(v18);
      *NamespaceHandle = Handle;
      return P;
    }
    else
    {
      v15 = *v11;
      v16 = *v11 - 16;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      _m_prefetchw(v11);
      if ( (v15 & 2) != 0
        || (v17 = *v11, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v16, v15)) )
      {
        ExfReleasePushLock(v11);
      }
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      return -1073741766;
    }
  }
  return result;
}
