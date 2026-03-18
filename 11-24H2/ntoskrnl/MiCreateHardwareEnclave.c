/*
 * XREFs of MiCreateHardwareEnclave @ 0x1407F719C
 * Callers:
 *     MiCreateEnclave @ 0x1407F7080 (MiCreateEnclave.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiReserveEnclavePages @ 0x140393C14 (MiReserveEnclavePages.c)
 *     MiAllocateEnclavePages @ 0x140394D84 (MiAllocateEnclavePages.c)
 *     MiGetVmPartition @ 0x140417CA0 (MiGetVmPartition.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiPageChainCount @ 0x1404642D0 (MiPageChainCount.c)
 *     MiInitializeEnclavePfn @ 0x1404740A8 (MiInitializeEnclavePfn.c)
 *     KeGetIdealNodeNumberThread @ 0x14048652C (KeGetIdealNodeNumberThread.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406808E8 (MiPrepareEnclaveMetadataPage.c)
 *     KeCreateEnclave @ 0x14073BF94 (KeCreateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140B6E178 (MiDeleteEnclavePages.c)
 */

__int64 __fastcall MiCreateHardwareEnclave(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // r13
  __int64 v8; // r15
  _KPROCESS *Process; // r14
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 VmPartition; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // zf
  int v22; // ebx
  unsigned __int16 IdealNodeNumberThread; // ax
  __int64 *v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rbx
  ULONG_PTR v27; // rbx
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  __int16 v31; // ax
  int v32; // [rsp+20h] [rbp-78h]
  __int128 v33; // [rsp+40h] [rbp-58h] BYREF
  __int64 v34; // [rsp+50h] [rbp-48h]
  int v35; // [rsp+A0h] [rbp+8h] BYREF
  int v36; // [rsp+A4h] [rbp+Ch]
  unsigned __int64 ValidPte; // [rsp+A8h] [rbp+10h]
  __int64 v38; // [rsp+B8h] [rbp+20h]

  v38 = a4;
  v36 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v35 = 0;
  v7 = *(unsigned __int8 *)(a2 + 32);
  v8 = *(unsigned __int8 *)(a2 + 33);
  Process = CurrentThread->ApcState.Process;
  v34 = 0LL;
  v11 = (*(unsigned int *)(a2 + 24) | (unsigned __int64)(v7 << 32)) << 12;
  v12 = ((*(unsigned int *)(a2 + 28) | (unsigned __int64)(v8 << 32)) << 12) | 0xFFF;
  v33 = 0LL;
  VmPartition = MiGetVmPartition((__int64)&Process[2].ReadyListHead.Blink);
  if ( !ExAcquireRundownProtection(&stru_140E374F8) )
    return 3221225738LL;
  *(_QWORD *)(a2 + 120) = Process;
  --CurrentThread->SpecialApcDisable;
  v15 = KeAbPreAcquire((__int64)&qword_140E374F0, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E374F0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140E374F0, (__int64)v15, (__int64)&qword_140E374F0);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  v17 = (_QWORD *)qword_140E374E8;
  v18 = (_QWORD *)(a2 + 128);
  if ( *(__int64 **)qword_140E374E8 != &qword_140E374E0 )
    __fastfail(3u);
  *v18 = &qword_140E374E0;
  *(_QWORD *)(a2 + 136) = v17;
  *v17 = v18;
  qword_140E374E8 = a2 + 128;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E374F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E374F0);
  KeAbPostRelease((ULONG_PTR)&qword_140E374F0);
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v20, v19);
  v22 = MiPrepareEnclaveMetadataPage();
  if ( v22 >= 0 )
  {
    if ( !a3 || (v22 = MiReserveEnclavePages(a2, VmPartition, (unsigned int)(a3 >> 12) + ((a3 & 0xFFF) != 0)), v22 >= 0) )
    {
      IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
      MiAllocateEnclavePages(VmPartition, IdealNodeNumberThread, 0, 1LL, (__int64)&v33);
      if ( MiPageChainCount((__int64)&v33) )
      {
        v24 = MiUnlinkPageChainHead((__int64)&v33);
        v25 = *(_QWORD *)(a2 + 80);
        v26 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v24 + 0x44000000000LL) >> 4);
        MiInitializeEnclavePfn(v26, v25, 4, 0);
        ValidPte = MiMakeValidPte(v25, v26, -1610612732);
        v27 = ValidPte;
        v28 = 0;
        if ( MiPteInShadowRange(v25) )
        {
          v29 = MiSanitizeShadowPxe();
          v27 = ValidPte;
          v28 = v29;
        }
        if ( _bittest64(&MiFlags, 0x24u) && (v27 & 0x20) == 0 && v25 >= MiGetPteAddress(0xFFFF800000000000uLL) )
          MiCheckLinearProtectedPteAccessedBit(v25, v27, 128);
        *(_QWORD *)v25 = v27;
        if ( v28 )
          MiWritePteShadow();
        v30 = (*(_DWORD *)(a2 + 72) & 1) << 8;
        if ( !Process[1].ReadyTime || (v31 = WORD2(Process[3].PerProcessorCycleTimes), v31 != 332) && v31 != 452 )
          LOWORD(v30) = v30 | 1;
        v22 = KeCreateEnclave((__int64)(v25 << 25) >> 16, v11, v12 - v11 + 1, v38, v32, v30, &v35, a5);
        if ( v22 >= 0 )
        {
          if ( (v35 & 2) != 0 )
            *(_DWORD *)(a2 + 64) |= 4u;
          v22 = 0;
          goto LABEL_20;
        }
      }
      else
      {
        v22 = -1073741801;
      }
    }
  }
  *(_DWORD *)(a2 + 64) |= 8u;
  MiDeleteEnclavePages(Process, a2);
LABEL_20:
  ExReleaseRundownProtection_0(&stru_140E374F8);
  return (unsigned int)v22;
}
