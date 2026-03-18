/*
 * XREFs of MmDeleteShadowMapping @ 0x1407E6B0C
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1405ACAD0 (KeAllocateProcessorProfileStructures.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405BFA34 (KiUnshadowKernelSectionByAddress.c)
 *     KiShadowProcessorAllocation @ 0x140B4AAAC (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x140B4AD34 (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14040FC0C (MiReadWriteAnyLevelShadowPte.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

_QWORD *__fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rbp
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  struct _LIST_ENTRY **v9; // rax
  PEPROCESS v10; // rdi
  __int64 *v11; // rax
  signed __int8 v12; // cf
  __int64 *v13; // rbx
  _QWORD *result; // rax
  _OWORD v16[3]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v17[208]; // [rsp+60h] [rbp-118h] BYREF

  memset(v16, 0, sizeof(v16));
  memset_0(v17, 0, 0xC8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  v9 = MiVaToFlushVm(a1);
  MiInitializeTbFlushList((__int64)v17, (__int64)v9, 20, 8, 1);
  MiInsertTbFlushEntry((__int64)v17, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v16);
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire((__int64)&qword_140E2EB30, 0LL);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2EB30, 0LL);
  v13 = v11;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2EB30, v11, (__int64)&qword_140E2EB30);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0LL, 1, CLFS_LSN_NULL_EXT);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v17);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2EB30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2EB30);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140E2EB30);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery();
  }
  if ( Process != v10 )
    return (_QWORD *)KiUnstackDetachProcess((__int64)v16, 0LL);
  return result;
}
