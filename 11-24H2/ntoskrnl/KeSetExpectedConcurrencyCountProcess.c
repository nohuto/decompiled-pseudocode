/*
 * XREFs of KeSetExpectedConcurrencyCountProcess @ 0x1405C06B0
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14021061C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KiReleaseProcessLockExclusive @ 0x1403B3B08 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1403B3B60 (KiAcquireProcessLockExclusive.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     ?KiInitializeProcessConcurrencyCount@@YAXPEAT_KI_PROCESS_CONCURRENCY_COUNT@@K@Z @ 0x14047271C (-KiInitializeProcessConcurrencyCount@@YAXPEAT_KI_PROCESS_CONCURRENCY_COUNT@@K@Z.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall KeSetExpectedConcurrencyCountProcess(struct _KPROCESS *BugCheckParameter1, unsigned int a2)
{
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rbx
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int8 v6; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 v7[3]; // [rsp+31h] [rbp-3Fh] BYREF
  union _KI_PROCESS_CONCURRENCY_COUNT v8; // [rsp+34h] [rbp-3Ch] BYREF
  _OWORD v9[3]; // [rsp+38h] [rbp-38h] BYREF

  v8.AllFields = 0;
  v7[0] = 0;
  v6 = 0;
  KiInitializeProcessConcurrencyCount(&v8, a2);
  IdealProcessorAssignmentBlock = BugCheckParameter1->IdealProcessorAssignmentBlock;
  KiAcquireProcessLockExclusive((__int64)BugCheckParameter1, v7);
  KiSetProcessConcurrencyCount(BugCheckParameter1, v8, &v6);
  LOBYTE(v4) = v7[0];
  IdealProcessorAssignmentBlock->AssignmentFlags.AllFlags |= 1u;
  result = KiReleaseProcessLockExclusive((__int64)BugCheckParameter1, v4);
  if ( v6 )
  {
    memset(v9, 0, sizeof(v9));
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v9);
    v6 = 0;
    MmAdjustWorkingSetSizeEx(0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0, 0, 0, &v6);
    return KiUnstackDetachProcess((__int64)v9, 0);
  }
  return result;
}
