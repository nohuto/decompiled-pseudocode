/*
 * XREFs of MmDeleteShadowMapping @ 0x1407F7110
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1405AD3D0 (KeAllocateProcessorProfileStructures.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405C10E4 (KiUnshadowKernelSectionByAddress.c)
 *     KiShadowProcessorAllocation @ 0x140B5CA8C (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x140B5CD14 (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402EE8E8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  char *v11; // rax
  signed __int8 v12; // cf
  char *v13; // rbx
  _QWORD *result; // rax
  __int64 v15; // r8
  __int64 v16; // r9
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
  v11 = (char *)KeAbPreAcquire((__int64)&qword_140E2EEB0, 0LL);
  v12 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2EEB0, 0LL);
  v13 = v11;
  if ( v12 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2EEB0, v11, (__int64)&qword_140E2EEB0);
  if ( v13 )
    v13[10] = 1;
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0LL, 1, CLFS_LSN_NULL_EXT);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v19);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2EEB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2EEB0);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140E2EEB0);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery();
  }
  if ( Process != v10 )
    return (_QWORD *)KiUnstackDetachProcess((__int64)v18, 0, v15, v16);
  return result;
}
