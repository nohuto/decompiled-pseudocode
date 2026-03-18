/*
 * XREFs of MmCreateShadowMapping @ 0x1407E68BC
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1405ACAD0 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowKernelSectionByAddress @ 0x1405BF9C0 (KiShadowKernelSectionByAddress.c)
 *     KiShadowProcessorAllocation @ 0x140B4AAAC (KiShadowProcessorAllocation.c)
 * Callees:
 *     MiGetPageTablePages @ 0x14022A2B8 (MiGetPageTablePages.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiInitializeColorBase @ 0x14038F9B8 (MiInitializeColorBase.c)
 *     MiCleanupPageTablePages @ 0x14038FA38 (MiCleanupPageTablePages.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiInitializeLargePfnList @ 0x1404301D0 (MiInitializeLargePfnList.c)
 *     MiPageTablesNeeded @ 0x14066E188 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiMakeShadowPageTableRange @ 0x1407E67A4 (MiMakeShadowPageTableRange.c)
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
  __int64 *v15; // rax
  signed __int8 v16; // cf
  __int64 *v17; // rsi
  bool v18; // zf
  __int128 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  _QWORD v21[9]; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  ULONG *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+C8h] [rbp-38h]
  int v27; // [rsp+D0h] [rbp-30h]
  _BYTE v28[40]; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v29[3]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v30[8]; // [rsp+140h] [rbp+40h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  memset(v29, 0, sizeof(v29));
  memset_0(v21, 0, 0xB8uLL);
  v4 = a2 + PteAddress - 1;
  MiInitializeLargePfnList(v21);
  v26 = 11;
  v25 = &MiSystemPartition;
  v27 = 1;
  MiInitializeColorBase(PteAddress, 0, (__int64)v28);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v21, v5, 0, (__int64)&v19) < 0 )
    return 0LL;
  while ( 1 )
  {
    v8 = MiUnlinkPageChainHead((__int64)&v19);
    if ( !v8 )
      break;
    v7 = (__int64 **)v23;
    if ( (char *)*v23 != &v22 )
      __fastfail(3u);
    v8[1] = (__int64)v23;
    *v8 = (__int64)&v22;
    *v7 = v8;
    ++v24;
    v23 = v8;
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
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v29);
  --CurrentThread->SpecialApcDisable;
  v15 = KeAbPreAcquire((__int64)&qword_140E2EB30, 0LL);
  v16 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2EB30, 0LL);
  v17 = v15;
  if ( v16 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2EB30, v15, (__int64)&qword_140E2EB30);
  if ( v17 )
    *((_BYTE *)v17 + 10) = 1;
  MiMakeShadowPageTableRange(PteAddress, v4, (__int64)v30, 3, (__int64)v21);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2EB30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2EB30);
  KeAbPostRelease((ULONG_PTR)&qword_140E2EB30);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Process != v13 )
    KiUnstackDetachProcess((__int64)v29, 0LL);
  MiCleanupPageTablePages((__int64)v21);
  return 1LL;
}
