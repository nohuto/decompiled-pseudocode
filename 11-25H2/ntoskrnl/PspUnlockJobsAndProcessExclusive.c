/*
 * XREFs of PspUnlockJobsAndProcessExclusive @ 0x1408D8590
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PspUnlockJobChain @ 0x1408D864C (PspUnlockJobChain.c)
 */

void __fastcall PspUnlockJobsAndProcessExclusive(int *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rcx
  bool v8; // zf

  v3 = *a1;
  while ( v3 )
  {
    v7 = *(_QWORD *)&a1[4 * --v3 + 2];
    if ( LOBYTE(a1[4 * v3 + 4]) )
      PspUnlockJobChain(v7, 0LL, 0LL);
    else
      ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 456));
    KeAbPostRelease(a2 + 456);
  }
  v8 = (*(_WORD *)(a3 + 486))++ == 0xFFFF;
  if ( v8 && *(_QWORD *)(a3 + 152) != a3 + 152 )
    KiCheckForKernelApcDelivery();
}
