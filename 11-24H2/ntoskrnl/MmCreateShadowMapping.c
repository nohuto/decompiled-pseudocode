/*
 * XREFs of MmCreateShadowMapping @ 0x1407F6EC0
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1405AD3D0 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowKernelSectionByAddress @ 0x1405C1070 (KiShadowKernelSectionByAddress.c)
 *     KiShadowProcessorAllocation @ 0x140B5CA8C (KiShadowProcessorAllocation.c)
 * Callees:
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiInitializeColorBase @ 0x14026DA0C (MiInitializeColorBase.c)
 *     MiCleanupPageTablePages @ 0x14026DA8C (MiCleanupPageTablePages.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiInitializeLargePfnList @ 0x14041CC70 (MiInitializeLargePfnList.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiPageTablesNeeded @ 0x14067AC14 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiMakeShadowPageTableRange @ 0x1407F6DA8 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 **v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rbx
  PEPROCESS v13; // rdi
  struct _KPROCESS *Process; // r12
  char *v15; // rax
  signed __int8 v16; // cf
  char *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // zf
  __int128 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h]
  _QWORD v23[9]; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  ULONG *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+C8h] [rbp-38h]
  int v29; // [rsp+D0h] [rbp-30h]
  _BYTE v30[40]; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v31[3]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v32[8]; // [rsp+140h] [rbp+40h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  memset(v31, 0, sizeof(v31));
  memset_0(v23, 0, 0xB8uLL);
  v4 = a2 + PteAddress - 1;
  MiInitializeLargePfnList(v23);
  v28 = 11;
  v27 = &MiSystemPartition;
  v29 = 1;
  MiInitializeColorBase(PteAddress, 0, (__int64)v30);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v23, v5, 0, (__int64)&v21) < 0 )
    return 0LL;
  while ( 1 )
  {
    v8 = MiUnlinkPageChainHead((__int64)&v21);
    if ( !v8 )
      break;
    v7 = (__int64 **)v25;
    if ( (char *)*v25 != &v24 )
      __fastfail(3u);
    v8[1] = (__int64)v25;
    *v8 = (__int64)&v24;
    *v7 = v8;
    ++v26;
    v25 = v8;
  }
  do
  {
    PteAddress = MiGetPteAddress(PteAddress);
    v9 = MiGetPteAddress(v4);
    *v10 = v9;
    v4 = v9;
    *(v10 - 1) = PteAddress;
  }
  while ( v11 != 1 );
  CurrentThread = KeGetCurrentThread();
  v13 = PsInitialSystemProcess;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v31);
  --CurrentThread->SpecialApcDisable;
  v15 = (char *)KeAbPreAcquire((__int64)&qword_140E2EEB0, 0LL);
  v16 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2EEB0, 0LL);
  v17 = v15;
  if ( v16 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2EEB0, v15, (__int64)&qword_140E2EEB0);
  if ( v17 )
    v17[10] = 1;
  MiMakeShadowPageTableRange(PteAddress, v4, (__int64)v32, 3, (__int64)v23);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2EEB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2EEB0);
  KeAbPostRelease((ULONG_PTR)&qword_140E2EEB0);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Process != v13 )
    KiUnstackDetachProcess((__int64)v31, 0, v18, v19);
  MiCleanupPageTablePages((__int64)v23);
  return 1LL;
}
