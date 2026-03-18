/*
 * XREFs of PpmTryAcquireLock @ 0x1403B6E5C
 * Callers:
 *     PoLatencySensitivityHint @ 0x1403B7A90 (PoLatencySensitivityHint.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 */

char __fastcall PpmTryAcquireLock(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // bl
  NTSTATUS v5; // eax
  _KTHREAD *v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  Timeout.QuadPart = 0LL;
  KiSetSystemPriorityThread(KeGetCurrentThread(), 22, a3);
  v5 = KeWaitForSingleObject(&word_140F0B888, Executive, 0, 0, &Timeout);
  v6 = KeGetCurrentThread();
  if ( v5 )
  {
    LODWORD(v8) = 22;
    KiClearSystemPriority(v6, (int *)&v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = 1;
    PpmPerfPolicyLock = (__int64)v6;
  }
  return v4;
}
