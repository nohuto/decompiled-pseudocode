/*
 * XREFs of MiQueueWorkingSetRequest @ 0x1404F3BCC
 * Callers:
 *     MiTrimNoStealPagesFromWorkingSets @ 0x1404AB968 (MiTrimNoStealPagesFromWorkingSets.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1404F3BAC (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1406799E0 (MiEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14067A0E8 (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

__int64 __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  int v5; // edi
  unsigned __int8 v6; // bp
  int v7; // edi

  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 17600);
  if ( !v3 )
    return 0LL;
  v4 = ExAcquireSpinLockExclusive(&SpinLock);
  v5 = *(_DWORD *)(v3 + 40);
  v6 = v4;
  if ( !v5 )
    KeResetEvent((PRKEVENT)v3);
  if ( (a2 & v5) == a2 )
  {
    v7 = 0;
  }
  else
  {
    *(_DWORD *)(v3 + 40) = a2 | v5;
    v7 = 1;
  }
  MiReleaseSpinLockExclusive(&SpinLock, v6);
  if ( v7 )
    KeSetEvent((PRKEVENT)(v3 + 96), 0, 0);
  KeWaitForSingleObject((PVOID)v3, WrVirtualMemory, 0, 0, 0LL);
  return 1LL;
}
