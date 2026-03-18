/*
 * XREFs of NtOpenPrivateNamespace @ 0x140A09B40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A09D98 (ObpCaptureBoundaryDescriptor.c)
 *     ObpLookupNamespaceEntry @ 0x140A0A154 (ObpLookupNamespaceEntry.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtOpenPrivateNamespace(HANDLE *a1, ACCESS_MASK a2, __int64 a3, void *a4)
{
  KPROCESSOR_MODE AccessMode; // r15
  __int64 v7; // rcx
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rsi
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  void *v18; // rsi
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  unsigned __int64 v21; // rtt
  int v22; // [rsp+40h] [rbp-38h]
  unsigned int P; // [rsp+48h] [rbp-30h]
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v22 = 0;
  if ( AccessMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( a3 )
    {
      if ( (a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = *(_DWORD *)(a3 + 24);
    }
  }
  else if ( a3 )
  {
    v22 = *(_DWORD *)(a3 + 24);
  }
  result = ObpCaptureBoundaryDescriptor(a4);
  if ( (int)result >= 0 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (unsigned __int64 *)&CurrentServerSiloGlobals[45];
    v12 = KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[45], 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[45], 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, (__int64)v12, (__int64)v11);
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
            v22 & (AccessMode != 0 ? 7666 : 73714),
            0LL,
            a2,
            ObpDirectoryObjectType,
            AccessMode,
            &Handle);
      ObfDereferenceObject(v18);
      *a1 = Handle;
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
      return 3221225530LL;
    }
  }
  return result;
}
