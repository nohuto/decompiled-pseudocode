/*
 * XREFs of KeSetExpectedConcurrencyCountProcess @ 0x1405BC648
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14026B2B4 (KiAcquireProcessLockExclusive.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KiReleaseProcessLockExclusive @ 0x1403AE69C (KiReleaseProcessLockExclusive.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x1403AE6F4 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     ?KiInitializeProcessConcurrencyCount@@YAXPEAT_KI_PROCESS_CONCURRENCY_COUNT@@K@Z @ 0x1404751F0 (-KiInitializeProcessConcurrencyCount@@YAXPEAT_KI_PROCESS_CONCURRENCY_COUNT@@K@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KeSetExpectedConcurrencyCountProcess(struct _KPROCESS *a1, unsigned int a2)
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
  IdealProcessorAssignmentBlock = a1->IdealProcessorAssignmentBlock;
  KiAcquireProcessLockExclusive((__int64)a1, v7);
  KiSetProcessConcurrencyCount(a1, v8, &v6);
  LOBYTE(v4) = v7[0];
  IdealProcessorAssignmentBlock->AssignmentFlags.AllFlags |= 1u;
  result = KiReleaseProcessLockExclusive((__int64)a1, v4);
  if ( v6 )
  {
    memset(v9, 0, sizeof(v9));
    KiStackAttachProcess(a1, 0, (__int64)v9);
    v6 = 0;
    MmAdjustWorkingSetSizeEx(0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0, 0, 0, &v6);
    return KiUnstackDetachProcess((__int64)v9, 0LL);
  }
  return result;
}
