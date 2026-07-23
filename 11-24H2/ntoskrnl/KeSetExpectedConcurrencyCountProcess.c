/*
 * XREFs of KeSetExpectedConcurrencyCountProcess @ 0x1405BDC84
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x14033997C (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     KiReleaseProcessLockExclusive @ 0x1403A2318 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1403A2370 (KiAcquireProcessLockExclusive.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     ?KiInitializeProcessConcurrencyCount@@YAXPEAT_KI_PROCESS_CONCURRENCY_COUNT@@K@Z @ 0x14046E9EC (-KiInitializeProcessConcurrencyCount@@YAXPEAT_KI_PROCESS_CONCURRENCY_COUNT@@K@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KeSetExpectedConcurrencyCountProcess(struct _KPROCESS *a1, unsigned int a2)
{
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rbx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 v9[3]; // [rsp+31h] [rbp-3Fh] BYREF
  union _KI_PROCESS_CONCURRENCY_COUNT v10; // [rsp+34h] [rbp-3Ch] BYREF
  _OWORD v11[3]; // [rsp+38h] [rbp-38h] BYREF

  v10.AllFields = 0;
  v9[0] = 0;
  v8 = 0;
  KiInitializeProcessConcurrencyCount(&v10, a2);
  IdealProcessorAssignmentBlock = a1->IdealProcessorAssignmentBlock;
  KiAcquireProcessLockExclusive((__int64)a1, v9);
  KiSetProcessConcurrencyCount(a1, v10, &v8);
  LOBYTE(v4) = v9[0];
  IdealProcessorAssignmentBlock->AssignmentFlags.AllFlags |= 1u;
  result = KiReleaseProcessLockExclusive((__int64)a1, v4);
  if ( v8 )
  {
    memset(v11, 0, sizeof(v11));
    KiStackAttachProcess(a1, 0, (__int64)v11);
    v8 = 0;
    MmAdjustWorkingSetSizeEx(0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 0, 0, 0, &v8);
    return KiUnstackDetachProcess((__int64)v11, 0, v6, v7);
  }
  return result;
}
