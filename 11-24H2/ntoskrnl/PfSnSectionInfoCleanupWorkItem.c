/*
 * XREFs of PfSnSectionInfoCleanupWorkItem @ 0x140953390
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PsSetCurrentThreadPrefetching @ 0x140953FC0 (PsSetCurrentThreadPrefetching.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1409545D4 (PfSnCleanupPrefetchSectionInfo.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnSectionInfoCleanupWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  void *v8; // rcx
  __int64 v9; // rax
  unsigned __int32 v10; // eax

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD **)(v1 + 8);
  v3 = v2[8];
  v4 = v2[9];
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 1 )
  {
    v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    if ( v10 >= *(_DWORD *)(v1 + 32) )
      break;
    v7 = v10;
    v8 = *(void **)(v3 + 8LL * v10);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    v9 = *(unsigned int *)(v4 + 4 * v7);
    if ( (int)v9 >= 0 )
    {
      LOBYTE(v5) = 1;
      PfSnCleanupPrefetchSectionInfo(v2[7] + 56 * v9, v2, v5);
    }
  }
  KeLeaveCriticalRegion();
  PsSetCurrentThreadPrefetching(0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
