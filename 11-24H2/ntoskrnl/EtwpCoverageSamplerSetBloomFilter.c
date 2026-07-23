/*
 * XREFs of EtwpCoverageSamplerSetBloomFilter @ 0x1407B2FC0
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1407B34B4 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSessionSpace @ 0x1408EB520 (MmMapViewInSessionSpace.c)
 */

__int64 __fastcall EtwpCoverageSamplerSetBloomFilter(ULONG_PTR BugCheckParameter2, __int64 a2, KPROCESSOR_MODE a3)
{
  PVOID v3; // rbp
  NTSTATUS v6; // ebx
  void *v7; // r10
  unsigned int v8; // ecx
  NTSTATUS v9; // eax
  __int64 v10; // rax
  int v11; // r15d
  struct _KTHREAD *CurrentThread; // rax
  char *v13; // rax
  char *v14; // r14
  void *v15; // rcx
  PVOID MappedBase; // [rsp+60h] [rbp+8h] BYREF
  PVOID Section; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp+20h] BYREF

  MappedBase = 0LL;
  v3 = 0LL;
  if ( *(_DWORD *)(a2 + 12) != *(_DWORD *)(BugCheckParameter2 + 28) )
    return (unsigned int)-1073741811;
  v7 = *(void **)a2;
  v8 = *(_DWORD *)(a2 + 8);
  if ( !*(_QWORD *)a2 )
  {
    if ( !v8 && !*(_DWORD *)(a2 + 16) )
    {
      v11 = 0;
      goto LABEL_15;
    }
    goto LABEL_22;
  }
  if ( !v8 || ((v8 - 1) & v8) != 0 || v8 > 0x8000000 || (unsigned int)(*(_DWORD *)(a2 + 16) - 1) > 9 )
    return (unsigned int)-1073741811;
  Section = 0LL;
  v9 = ObReferenceObjectByHandle(v7, 4u, MmSectionObjectType, a3, &Section, 0LL);
  v3 = Section;
  v6 = v9;
  if ( v9 >= 0 )
  {
    ViewSize = *(unsigned int *)(a2 + 8);
    v6 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v6 < 0 )
      goto LABEL_23;
    v10 = *(unsigned int *)(a2 + 8);
    if ( ViewSize == v10 )
    {
      v11 = 8 * v10 - 1;
LABEL_15:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v13 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v13, BugCheckParameter2);
      if ( v14 )
        v14[10] = 1;
      v15 = *(void **)(BugCheckParameter2 + 1704);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      *(_QWORD *)(BugCheckParameter2 + 1704) = MappedBase;
      *(_DWORD *)(BugCheckParameter2 + 1712) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(BugCheckParameter2 + 1716) = v11;
      *(_DWORD *)(BugCheckParameter2 + 1720) = *(_DWORD *)(a2 + 16);
      MappedBase = v15;
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegion();
      v6 = 0;
      goto LABEL_23;
    }
LABEL_22:
    v6 = -1073741811;
LABEL_23:
    if ( MappedBase )
      MiRemoveFromSystemSpace((ULONG_PTR)MappedBase, 1);
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v6;
}
