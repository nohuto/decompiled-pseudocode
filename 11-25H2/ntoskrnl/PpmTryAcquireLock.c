/*
 * XREFs of PpmTryAcquireLock @ 0x140202E54
 * Callers:
 *     PoLatencySensitivityHint @ 0x140201F50 (PoLatencySensitivityHint.c)
 * Callees:
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 */

char __fastcall PpmTryAcquireLock(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // bl
  NTSTATUS v5; // eax
  struct _KTHREAD *v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  Timeout.QuadPart = 0LL;
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 22, a3);
  v5 = KeWaitForSingleObject(&word_140F0B508, Executive, 0, 0, &Timeout);
  v6 = KeGetCurrentThread();
  if ( v5 )
  {
    LODWORD(v8) = 22;
    KiClearSystemPriority((ULONG_PTR)v6, (int *)&v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = 1;
    PpmPerfPolicyLock = (__int64)v6;
  }
  return v4;
}
