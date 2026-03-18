/*
 * XREFs of MmDeleteShadowMapping @ 0x1407F699C
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1405B0460 (KeAllocateProcessorProfileStructures.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405C3B14 (KiUnshadowKernelSectionByAddress.c)
 *     KiShadowProcessorAllocation @ 0x140B5AA1C (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x140B5ACA4 (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402666A8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

_QWORD *__fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rbp
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  void *v9; // rax
  PEPROCESS v10; // rdi
  _QWORD *v11; // rax
  signed __int8 v12; // cf
  _QWORD *v13; // rbx
  _QWORD *result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _OWORD v18[3]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v19[208]; // [rsp+60h] [rbp-118h] BYREF

  memset(v18, 0, sizeof(v18));
  memset_0(v19, 0, 0xC8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  v9 = MiVaToFlushVm(a1);
  MiInitializeTbFlushList((__int64)v19, (__int64)v9, 20, 8, 1);
  MiInsertTbFlushEntry((__int64)v19, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v18);
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire((__int64)&qword_140E2ED70, 0LL);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2ED70, 0LL);
  v13 = v11;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2ED70, (__int64)v11, (__int64)&qword_140E2ED70);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0LL, 1, CLFS_LSN_NULL_EXT);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v19);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2ED70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2ED70);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140E2ED70);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery(v16, v15);
  }
  if ( Process != v10 )
    return (_QWORD *)KiUnstackDetachProcess((__int64)v18, 0);
  return result;
}
